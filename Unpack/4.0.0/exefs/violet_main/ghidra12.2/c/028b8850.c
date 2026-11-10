/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8850; name: FUN_028b8850
 */


ulong FUN_028b8850(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  double *pdVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 local_30 [3];
  ulong local_18;
  
  uVar3 = 0;
  switch(*(int *)((long)param_1 + 0xc)) {
  case 2:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        return (ulong)(byte)*puVar4;
      }
      return (ulong)(ushort)*puVar4;
    }
    if (bVar1 < 8) {
      return (ulong)(uint)*puVar4;
    }
    goto LAB_028b8ac4;
  case 3:
    bVar1 = *(byte *)(param_1 + 1);
    pdVar5 = (double *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        iVar2 = (int)*(char *)pdVar5;
      }
      else {
        iVar2 = (int)*(short *)pdVar5;
      }
LAB_028b8a74:
      dVar8 = (double)iVar2;
    }
    else if (bVar1 < 8) {
      fVar7 = *(float *)pdVar5;
LAB_028b8a50:
      dVar8 = (double)fVar7;
    }
    else {
      dVar8 = *pdVar5;
    }
    goto LAB_028b8a78;
  case 4:
  case 9:
    break;
  case 5:
    FUN_01571ef8(local_30);
    uVar3 = FUN_028b9910(&local_18,local_30[0],10,1);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    return local_18;
  case 6:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(byte)*puVar4;
      }
      else {
        uVar3 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(uint)*puVar4;
    }
    else {
      uVar3 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar6 = -uVar3;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        return (long)*(char *)((long)puVar4 + lVar6);
      }
      return (long)*(short *)((long)puVar4 + lVar6);
    }
    if (bVar1 < 8) {
      return (long)*(int *)((long)puVar4 + lVar6);
    }
    goto LAB_028b8ab4;
  case 7:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(byte)*puVar4;
      }
      else {
        uVar3 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(uint)*puVar4;
    }
    else {
      uVar3 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar6 = -uVar3;
    if (bVar1 < 4) {
joined_r0x028b8a08:
      if (bVar1 < 2) {
        return (ulong)*(byte *)((long)puVar4 + lVar6);
      }
      return (ulong)*(ushort *)((long)puVar4 + lVar6);
    }
    goto joined_r0x028b8ab0;
  case 8:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(byte)*puVar4;
      }
      else {
        uVar3 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(uint)*puVar4;
    }
    else {
      uVar3 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar6 = -uVar3;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        iVar2 = (int)*(char *)((long)puVar4 + lVar6);
      }
      else {
        iVar2 = (int)*(short *)((long)puVar4 + lVar6);
      }
      goto LAB_028b8a74;
    }
    if (bVar1 < 8) {
      fVar7 = *(float *)((long)puVar4 + lVar6);
      goto LAB_028b8a50;
    }
    dVar8 = *(double *)((long)puVar4 + lVar6);
LAB_028b8a78:
    uVar3 = (ulong)dVar8;
    break;
  case 10:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(byte)*puVar4;
      }
      else {
        uVar3 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(uint)*puVar4;
    }
    else {
      uVar3 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    puVar4 = (ulong *)((long)puVar4 - uVar3);
    lVar6 = -(ulong)bVar1;
    if ((ulong)bVar1 < 4) goto joined_r0x028b8a08;
joined_r0x028b8ab0:
    if (bVar1 < 8) {
      return (ulong)*(uint *)((long)puVar4 + lVar6);
    }
LAB_028b8ab4:
    return *(ulong *)((long)puVar4 + lVar6);
  default:
    if (*(int *)((long)param_1 + 0xc) != 0x1a) {
      return 0;
    }
  case 1:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(char)*puVar4;
      }
      else {
        uVar3 = (ulong)(short)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(int)(uint)*puVar4;
    }
    else {
LAB_028b8ac4:
      uVar3 = *puVar4;
    }
  }
  return uVar3;
}


