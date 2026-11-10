/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01255138; name: FUN_01255138
 */


void FUN_01255138(undefined8 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  lVar2 = FUN_01243584();
  FUN_0129aff0(*(undefined8 *)(lVar2 + 0x18),0xc2,uVar1,*param_2,*(undefined1 *)(param_2 + 0xe));
  return;
}


