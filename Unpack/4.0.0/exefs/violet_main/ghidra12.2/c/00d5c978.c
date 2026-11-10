/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5c978; name: FUN_00d5c978
 */


void FUN_00d5c978(long *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  uint uVar10;
  ushort *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 local_18;
  
  piVar5 = (int *)param_2[1];
  if (((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar7 == 0)) goto LAB_00d5cc18;
  puVar4 = (uint *)((long)piVar5 + uVar7);
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  local_18 = *(undefined8 *)(param_3 + 8);
  puVar4 = bsearch(&local_18,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
  if ((puVar4 == (uint *)0x0) || (piVar5 = (int *)*param_2, piVar5 == (int *)0x0))
  goto LAB_00d5cc18;
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar11 < 7) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)0x0;
    if ((ulong)puVar11[3] != 0) {
      puVar4 = (uint *)((long)piVar1 + (ulong)puVar11[3]);
      piVar6 = (int *)((long)puVar4 + (ulong)*puVar4);
    }
  }
  if (((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
      (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar7 == 0)) ||
     (*(char *)((long)piVar6 + uVar7) != '\x0e')) goto LAB_00d5cc18;
  piVar6 = (int *)((long)((long)piVar1 + (ulong)puVar11[3]) +
                  (ulong)*(uint *)((long)piVar1 + (ulong)puVar11[3]));
  puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar8;
  if ((uVar2 < 7) || ((ulong)puVar8[3] == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(char *)((long)piVar6 + (ulong)puVar8[3]);
  }
  if (*(long *)(PTR_DAT_047d5608 + (uVar7 & 0xffffffff) * 8) != 4) goto LAB_00d5cc18;
  if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar11[5]);
  }
  if (uVar10 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
    uVar7 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar10);
    puVar4 = (uint *)0x0;
    if (uVar7 != 0) {
      puVar4 = (uint *)((long)piVar5 + uVar7);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
  }
  else {
    puVar4 = (uint *)0x0;
  }
  if (*puVar4 <= param_4) goto LAB_00d5cc18;
  if (uVar2 < 7) {
    piVar5 = (int *)param_2[2];
    uVar10 = 0;
    bVar3 = false;
  }
  else {
    if ((ulong)puVar8[3] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*(char *)((long)piVar6 + (ulong)puVar8[3]);
    }
    if (uVar2 < 9) {
      bVar3 = false;
LAB_00d5cb00:
      uVar7 = 0xffffffff;
    }
    else {
      if ((ulong)puVar8[4] == 0) {
        bVar3 = true;
        goto LAB_00d5cb00;
      }
      uVar7 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar8[4]);
      bVar3 = true;
    }
    piVar5 = (int *)param_2[2];
    if (uVar10 == 0xf) {
      lVar12 = (long)*piVar5;
      puVar13 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - lVar12)));
      puVar13 = (uint *)((long)puVar13 + uVar7 * 4 + (ulong)*puVar13 + 4);
      piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (((*puVar11 < 9) || ((ulong)puVar11[4] == 0)) ||
         (*(char *)((long)piVar1 + (ulong)puVar11[4]) == '\0')) {
        lVar9 = *(long *)(PTR_DAT_047d5608 + 0x78);
      }
      else if (*puVar11 < 0xd) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if ((ulong)puVar11[6] != 0) {
          lVar9 = (long)*(int *)((long)piVar1 + (ulong)puVar11[6]);
        }
      }
      lVar9 = lVar9 * (ulong)param_4;
      goto LAB_00d5cb84;
    }
  }
  if (piVar5 == (int *)0x0) {
LAB_00d5cc18:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  lVar9 = *(long *)(PTR_DAT_047d5608 + (ulong)uVar10 * 8) * (ulong)param_4;
  lVar12 = (long)*piVar5;
LAB_00d5cb84:
  if (*(ushort *)((long)piVar5 - lVar12) < 5) {
    lVar12 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar5 - lVar12))[2];
    lVar12 = 0;
    if (uVar7 != 0) {
      puVar13 = (uint *)((long)piVar5 + uVar7);
      lVar12 = (long)puVar13 + (ulong)*puVar13;
    }
  }
  if ((bVar3) && ((ulong)puVar8[4] != 0)) {
    uVar7 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar8[4]);
  }
  else {
    uVar7 = 0xffffffff;
  }
  puVar13 = (uint *)(lVar12 + uVar7 * 4 + 4);
  uVar10 = *puVar13;
  param_1[2] = (long)piVar5;
  *param_1 = (long)puVar4 + lVar9 + 4;
  param_1[1] = (long)puVar13 + (ulong)uVar10;
  return;
}


