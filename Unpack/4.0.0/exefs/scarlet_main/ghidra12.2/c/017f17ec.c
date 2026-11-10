/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f17ec; name: FUN_017f17ec
 */


undefined4 FUN_017f17ec(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar3 = 0xfffffff6;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4a8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4a0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
       (uVar2 & 1) == 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4b0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      uVar3 = 0;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xfffffff6;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


