/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03457d14; name: FUN_03457d14
 */


undefined8 FUN_03457d14(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    if (puVar5 == (undefined8 *)0x0) {
LAB_03457d64:
      for (plVar3 = *(long **)(param_1 + 0x50); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3[2] == param_2) {
          if (*(short *)(*(long *)(param_2 + 8) + 0x34) == 0x503) {
            iVar2 = *(int *)(param_2 + 0x34) + *(int *)(*(long *)(param_2 + 8) + 0xe8);
          }
          else {
            iVar2 = *(int *)(param_2 + 0x34) + 1;
          }
          *(int *)(param_2 + 0x34) = iVar2;
          return 1;
        }
      }
    }
    else {
      if (puVar5[2] == param_2) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar6 = puVar5;
          puVar5 = (undefined8 *)*puVar6;
          if (puVar5 == (undefined8 *)0x0) goto LAB_03457d64;
        } while (puVar5[2] != param_2);
      }
      lVar4 = *(long *)(param_2 + 8);
      if (*(short *)(lVar4 + 0x34) == 0x503) {
        iVar2 = *(int *)(lVar4 + 0xe8);
        *(undefined4 *)(lVar4 + 0xe8) = 0;
        iVar2 = iVar2 + -1;
      }
      else {
        iVar2 = 0;
      }
      FUN_0345541c(param_1,*(undefined4 *)(lVar4 + 0x30),param_2,iVar2);
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if (*(undefined8 **)(param_1 + 0x28) != puVar5) {
        puVar1 = puVar6;
      }
      *puVar1 = *puVar5;
      if (*(undefined8 **)(param_1 + 0x30) == puVar5) {
        *(undefined8 **)(param_1 + 0x30) = puVar6;
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
  }
  return 1;
}


