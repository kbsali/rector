<?php

declare(strict_types=1);

namespace Rector\Generic\Tests\Rector\Argument\ArgumentDefaultValueReplacerRector;

use Iterator;
use Rector\Core\Testing\PHPUnit\AbstractRectorTestCase;
use Rector\Set\ValueObject\SetList;
use Symplify\SmartFileSystem\SmartFileInfo;

/**
 * @see https://github.com/symfony/symfony/commit/912fc4de8fd6de1e5397be4a94d39091423e5188
 */
final class Symfony28Test extends AbstractRectorTestCase
{
    /**
     * @dataProvider provideData()
     */
    public function test(SmartFileInfo $fileInfo): void
    {
        $this->doTestFileInfo($fileInfo);
    }

    public function provideData(): Iterator
    {
        return $this->yieldFilesFromDirectory(__DIR__ . '/FixtureSymfony28');
    }

    protected function provideSet(): string
    {
        return SetList::SYMFONY_28;
    }
}
