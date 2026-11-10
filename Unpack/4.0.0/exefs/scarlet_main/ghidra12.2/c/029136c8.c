/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029136c8; name: FUN_029136c8
 */


undefined4 FUN_029136c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_02916000();
  if (iVar1 == 1) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if (((uVar2 & 1) == 0) ||
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55),
       (uVar2 & 1) == 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      uVar3 = 2;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


