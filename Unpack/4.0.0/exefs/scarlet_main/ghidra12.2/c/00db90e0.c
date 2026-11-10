/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db90e0; name: FUN_00db90e0
 */


long FUN_00db90e0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 == 0) {
    piVar3 = *(int **)(param_1 + 0x40);
    if (piVar3 == (int *)0x0) {
      if ((*(long *)(param_1 + 0x50) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1e8) & 1) != 0)) {
        piVar3 = (int *)FUN_029be138(*(undefined8 *)(param_1 + 0x50));
        goto LAB_00db9138;
      }
      if ((((*(long *)(param_1 + 8) != 0) && ((*(byte *)(*(long *)(param_1 + 8) + 0x1e8) & 1) != 0))
          && (*(long *)(param_1 + 8) != 0)) &&
         ((*(byte *)(*(long *)(param_1 + 8) + 0x1e8) & 1) != 0)) {
        plVar1 = *(long **)(param_1 + 8);
        goto LAB_00db9124;
      }
      goto LAB_00db9194;
    }
LAB_00db913c:
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 == 0))
    goto LAB_00db9194;
LAB_00db9158:
    lVar4 = (long)((long)piVar3 + uVar5) + (ulong)*(uint *)((long)piVar3 + uVar5);
  }
  else {
    if (((*(long *)(lVar4 + 8) != 0) && ((*(byte *)(*(long *)(lVar4 + 8) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(lVar4 + 8) != 0 && ((*(byte *)(*(long *)(lVar4 + 8) + 0x1e8) & 1) != 0)))) {
      plVar1 = *(long **)(lVar4 + 8);
LAB_00db9124:
      puVar2 = (uint *)(**(code **)(*plVar1 + 0x70))();
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
LAB_00db9138:
      if (piVar3 != (int *)0x0) goto LAB_00db913c;
    }
LAB_00db9194:
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      if (lVar4 == 0) {
        if ((*(long *)(param_1 + 0x50) != 0) &&
           ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1e8) & 1) != 0)) {
          piVar3 = (int *)FUN_029d60c8(*(undefined8 *)(param_1 + 0x50));
          goto LAB_00db91c8;
        }
      }
      else if (((*(long *)(lVar4 + 0x48) != 0) &&
               ((*(byte *)(*(long *)(lVar4 + 0x48) + 0x1e8) & 1) != 0)) &&
              (lVar4 = *(long *)(*(long *)(lVar4 + 0x48) + 0x220), lVar4 != 0)) goto LAB_00db91c4;
    }
    else {
LAB_00db91c4:
      piVar3 = *(int **)(lVar4 + 0x70);
LAB_00db91c8:
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0))
      goto LAB_00db9158;
    }
    lVar4 = 0;
  }
  return lVar4;
}


