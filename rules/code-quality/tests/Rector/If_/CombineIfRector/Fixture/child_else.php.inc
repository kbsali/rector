<?php

namespace Rector\CodeQuality\Tests\Rector\If_\CombineIfRector\ChildElse;

class SomeClass
{
    public function run()
    {
        if ($cond1) {
            if ($cond2) {
                return 'foo';
            } else {
                return 'bar';
            }
        }
    }
}
