/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2748; name: FUN_017f2748
 */


undefined4 FUN_017f2748(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  uVar3 = 0xfffffff6;
  if (cVar1 != '\0') {
    if ((*(short *)(param_1 + 0x9e) == 0x68) || (*(short *)(param_1 + 0xb6) != 6)) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if ((iVar2 == 0) &&
         (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar2 == 0
         )) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x498))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
        uVar3 = 0xfffffff6;
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xfffffff6;
    }
  }
  return uVar3;
}


