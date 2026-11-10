/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0f58; name: FUN_017f0f58
 */


undefined4 FUN_017f0f58(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x9e) == 0x7e) {
    uVar2 = 0xfffffff4;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar2 = 0xfffffff6;
    if (iVar1 != 0xc) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      uVar2 = 0xfffffff6;
      if (iVar1 != 0xc) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return uVar2;
}


