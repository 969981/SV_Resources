/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b943c; name: FUN_028b943c
 */


double FUN_028b943c(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  double *pdVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  char *local_38 [3];
  char *local_8;
  
  dVar9 = 0.0;
  switch(*(int *)((long)param_1 + 0xc)) {
  case 1:
    bVar1 = *(byte *)(param_1 + 1);
    plVar3 = (long *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        lVar7 = (long)(char)*plVar3;
      }
      else {
        lVar7 = (long)(short)*plVar3;
      }
    }
    else if (bVar1 < 8) {
      lVar7 = (long)(int)*plVar3;
    }
    else {
      lVar7 = *plVar3;
    }
    goto LAB_028b9698;
  case 3:
    bVar1 = *(byte *)(param_1 + 1);
    pdVar6 = (double *)*param_1;
    if (3 < bVar1) {
      if (7 < bVar1) {
        return *pdVar6;
      }
      fVar8 = *(float *)pdVar6;
LAB_028b9658:
      return (double)fVar8;
    }
    if (bVar1 < 2) {
      iVar2 = (int)*(char *)pdVar6;
    }
    else {
      iVar2 = (int)*(short *)pdVar6;
    }
    goto LAB_028b967c;
  case 4:
  case 9:
    goto switchD_028b9474_caseD_4;
  case 5:
    FUN_01571ef8(local_38,0);
    local_8 = local_38[0];
    dVar9 = strtod(local_38[0],&local_8);
    if ((local_8 == local_38[0]) || (*local_8 != '\0')) {
      return 0.0;
    }
    return dVar9;
  case 6:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar5 = (ulong)(byte)*puVar4;
      }
      else {
        uVar5 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar5 = (ulong)(uint)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar7 = -uVar5;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        lVar7 = (long)*(char *)((long)puVar4 + lVar7);
      }
      else {
        lVar7 = (long)*(short *)((long)puVar4 + lVar7);
      }
    }
    else if (bVar1 < 8) {
      lVar7 = (long)*(int *)((long)puVar4 + lVar7);
    }
    else {
      lVar7 = *(long *)((long)puVar4 + lVar7);
    }
LAB_028b9698:
    return (double)lVar7;
  case 7:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar5 = (ulong)(byte)*puVar4;
      }
      else {
        uVar5 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar5 = (ulong)(uint)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar7 = -uVar5;
    if (bVar1 < 4) {
      if (1 < bVar1) goto LAB_028b9614;
LAB_028b94f8:
      uVar5 = (ulong)*(byte *)((long)puVar4 + lVar7);
    }
    else {
      if (bVar1 < 8) goto LAB_028b9718;
LAB_028b96d8:
      uVar5 = *(ulong *)((long)puVar4 + lVar7);
    }
    break;
  case 8:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar5 = (ulong)(byte)*puVar4;
      }
      else {
        uVar5 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar5 = (ulong)(uint)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    lVar7 = -uVar5;
    if (3 < bVar1) {
      if (7 < bVar1) {
        return *(double *)((long)puVar4 + lVar7);
      }
      fVar8 = *(float *)((long)puVar4 + lVar7);
      goto LAB_028b9658;
    }
    if (bVar1 < 2) {
      iVar2 = (int)*(char *)((long)puVar4 + lVar7);
    }
    else {
      iVar2 = (int)*(short *)((long)puVar4 + lVar7);
    }
LAB_028b967c:
    return (double)iVar2;
  case 10:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar5 = (ulong)(byte)*puVar4;
      }
      else {
        uVar5 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar5 = (ulong)(uint)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    bVar1 = *(byte *)((long)param_1 + 9);
    puVar4 = (ulong *)((long)puVar4 - uVar5);
    lVar7 = -(ulong)bVar1;
    if ((ulong)bVar1 < 4) {
      if (bVar1 < 2) goto LAB_028b94f8;
LAB_028b9614:
      uVar5 = (ulong)*(ushort *)((long)puVar4 + lVar7);
    }
    else {
      if (7 < bVar1) goto LAB_028b96d8;
LAB_028b9718:
      uVar5 = (ulong)*(uint *)((long)puVar4 + lVar7);
    }
    break;
  default:
    if (*(int *)((long)param_1 + 0xc) != 0x1a) {
      return 0.0;
    }
  case 2:
    bVar1 = *(byte *)(param_1 + 1);
    puVar4 = (ulong *)*param_1;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar5 = (ulong)(byte)*puVar4;
      }
      else {
        uVar5 = (ulong)(ushort)*puVar4;
      }
    }
    else if (bVar1 < 8) {
      uVar5 = (ulong)(uint)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
  }
  dVar9 = (double)uVar5;
switchD_028b9474_caseD_4:
  return dVar9;
}


