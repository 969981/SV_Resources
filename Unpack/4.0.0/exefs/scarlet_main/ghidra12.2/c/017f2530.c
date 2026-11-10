/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f2530; name: FUN_017f2530
 */


undefined8 FUN_017f2530(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x200))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar2 == 0) {
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    plVar4 = *(long **)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
  }
  else {
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x200))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x200))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    plVar4 = *(long **)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
  }
  uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4,uVar1);
  if ((uVar3 & 1) == 0) {
    return 0xfffffff6;
  }
  return 0;
}


