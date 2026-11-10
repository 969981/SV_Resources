/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109f43c; name: FUN_0109f43c
 */


uint * FUN_0109f43c(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((*(int *)(param_3 + 4) == 0) && (piVar4 = *(int **)(param_1 + 0x18), piVar4 != (int *)0x0))
     && (*piVar4 != 0)) {
    uVar3 = (uint)*(byte *)(param_3 + 0x18);
    if (*(byte *)(param_3 + 0x18) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 8);
    }
    iVar6 = 0;
    iVar5 = *piVar4 + -1;
    do {
      iVar2 = iVar5 - iVar6;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar6 + (iVar2 >> 1);
      uVar1 = piVar4[(long)iVar2 * 5 + 1];
      if (param_2 < uVar1) {
LAB_0109f550:
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          if (uVar3 < (uint)piVar4[(long)iVar2 * 5 + 5]) goto LAB_0109f550;
          if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
            return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
          }
        }
        iVar6 = iVar2 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x20);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      uVar3 = (uint)*(byte *)(param_3 + 0x18);
      if (*(byte *)(param_3 + 0x18) != 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 8);
      }
      iVar6 = 0;
      iVar5 = *piVar4 + -1;
      do {
        iVar2 = iVar5 - iVar6;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar6 + (iVar2 >> 1);
        uVar1 = piVar4[(long)iVar2 * 5 + 1];
        if (param_2 < uVar1) {
LAB_0109f4c8:
          iVar5 = iVar2 + -1;
        }
        else {
          if (param_2 <= uVar1) {
            if (uVar3 < (uint)piVar4[(long)iVar2 * 5 + 5]) goto LAB_0109f4c8;
            if (uVar3 <= (uint)piVar4[(long)iVar2 * 5 + 5]) {
              return (uint *)(piVar4 + (long)iVar2 * 5 + 1);
            }
          }
          iVar6 = iVar2 + 1;
        }
      } while (iVar6 <= iVar5);
    }
  }
  return (uint *)0x0;
}


