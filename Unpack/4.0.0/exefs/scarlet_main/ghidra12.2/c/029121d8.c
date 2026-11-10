/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029121d8; name: FUN_029121d8
 */


int FUN_029121d8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (((iVar1 == 0) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x50 < iVar1)
      ) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           iVar1 == 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = -(uVar2 & 1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


