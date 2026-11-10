/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226d7b4; name: FUN_0226d7b4
 */


void FUN_0226d7b4(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint local_2c;
  NpadControllerColor aNStack_28 [8];
  NpadControllerColor aNStack_8 [8];
  
  if ((*(long **)(param_1 + 0x4c0) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0xb8))(), (uVar2 & 1) == 0)) {
    local_2c = 0x20;
  }
  else {
    local_2c = (**(code **)(**(long **)(param_1 + 0x4c0) + 0xf0))();
  }
  iVar1 = nn::hid::GetNpadControllerColor(aNStack_8,aNStack_28,&local_2c);
  if (iVar1 == 0) {
    FUN_0226d758(aNStack_8);
  }
  return;
}


