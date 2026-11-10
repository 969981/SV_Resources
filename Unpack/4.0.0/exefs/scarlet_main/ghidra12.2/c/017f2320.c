/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2320; name: FUN_017f2320
 */


undefined4 FUN_017f2320(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0xa0) == '\a') || (*(char *)(param_1 + 0xa1) == '\a')) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),10);
    uVar3 = 0xfffffff6;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  else if (*(short *)(param_1 + 0x9e) == 0x7e) {
    uVar3 = 0xfffffff4;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar3 = 0xfffffff6;
    if (iVar1 != 0xc) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      uVar3 = 0xfffffff6;
      if (iVar1 != 0xc) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


