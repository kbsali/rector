<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\ParamTypeDeclarationRector\Fixture\Dunglas;

# Typed arrays get simply converted to array
/**
 * @param int[] $ints
 * @param string[] $strings
 * @param Foo[] $someClasses
 */
function array_no_types($ints, $strings, $someClasses) {
}

?>
-----
<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\ParamTypeDeclarationRector\Fixture\Dunglas;

# Typed arrays get simply converted to array
/**
 * @param int[] $ints
 * @param string[] $strings
 * @param Foo[] $someClasses
 */
function array_no_types(array $ints, array $strings, array $someClasses) {
}

?>
