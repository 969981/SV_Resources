/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ffb24; name: FUN_028ffb24
 */


undefined8 FUN_028ffb24(int *param_1,long *param_2)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  
  uVar3 = FUN_019367c0(param_2,param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  puVar4 = (ushort *)((long)param_1 - (long)*param_1);
  uVar2 = *puVar4;
  if (4 < uVar2) {
    if ((ulong)puVar4[2] != 0) {
      if ((ulong)param_2[1] < 5) {
        return 0;
      }
      if (param_2[1] - 4U < (long)param_1 + ((ulong)puVar4[2] - *param_2)) {
        return 0;
      }
    }
    if (6 < uVar2) {
      if ((ulong)puVar4[3] != 0) {
        if ((ulong)param_2[1] < 5) {
          return 0;
        }
        if (param_2[1] - 4U < (long)param_1 + ((ulong)puVar4[3] - *param_2)) {
          return 0;
        }
      }
      if ((8 < uVar2) && ((ulong)puVar4[4] != 0)) {
        if ((ulong)param_2[1] < 5) {
          return 0;
        }
        if (param_2[1] - 4U < (long)param_1 + ((ulong)puVar4[4] - *param_2)) {
          return 0;
        }
      }
    }
  }
  uVar3 = FUN_019c3824(param_1,param_2,10);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar5 = (long)*param_1;
  if (*(ushort *)((long)param_1 - lVar5) < 0xb) {
LAB_028ffd44:
    lVar5 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_1 - lVar5))[5];
    if (uVar3 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar3);
      uVar3 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar5 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar5) < 0xb) goto LAB_028ffd44;
    }
    uVar3 = (ulong)*(ushort *)((long)param_1 + (10 - lVar5));
    if (uVar3 == 0) goto LAB_028ffd44;
    puVar1 = (uint *)((long)param_1 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar3 = FUN_01a34eb8(param_2,lVar5);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_019c3824(param_1,param_2,0xc);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar5 = (long)*param_1;
  if (0xc < *(ushort *)((long)param_1 - lVar5)) {
    uVar3 = (ulong)((ushort *)((long)param_1 - lVar5))[6];
    if (uVar3 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar3);
      uVar3 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar5 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar5) < 0xd) goto LAB_028ffd4c;
    }
    uVar3 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar5));
    if (uVar3 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar3);
      lVar5 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_028ffd24;
    }
  }
LAB_028ffd4c:
  lVar5 = 0;
LAB_028ffd24:
  uVar3 = FUN_01936670(param_2,lVar5);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  return 1;
}


