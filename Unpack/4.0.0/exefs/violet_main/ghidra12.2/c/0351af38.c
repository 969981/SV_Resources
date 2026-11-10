/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351af38; name: FUN_0351af38
 */


int FUN_0351af38(long *param_1,long *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  double *pdVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  
  lVar13 = *param_2;
  *param_2 = lVar13 + 4;
  bVar7 = *(byte *)(lVar13 + 4);
  *param_2 = lVar13 + 5;
  *(byte *)((long)param_1 + 0x124) =
       bVar7 & 8 | bVar7 >> 1 & 1 | bVar7 >> 1 & 2 | *(byte *)((long)param_1 + 0x124) & 0xf4;
  iVar11 = FUN_034ae500();
  if (iVar11 != 1) {
    return iVar11;
  }
  pdVar14 = (double *)((uint *)*param_2 + 1);
  uVar19 = *(uint *)*param_2;
  uVar20 = (ulong)uVar19;
  *param_2 = (long)pdVar14;
  if (uVar19 != 0) {
    if (uVar19 == 1) {
      param_1[0x20] = (long)(param_1 + 0x1f);
    }
    else {
      lVar13 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar20 << 3,1);
      param_1[0x20] = lVar13;
      if (lVar13 == 0) {
        return 0x34;
      }
    }
    *(uint *)((long)param_1 + 0x10c) = uVar19;
    do {
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      iVar11 = (**(code **)(*param_1 + 0x58))(param_1,uVar6);
      if (iVar11 != 0xf && iVar11 != 1) {
        return iVar11;
      }
      uVar19 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar19;
    } while (uVar19 != 0);
    if (iVar11 != 1) {
      return iVar11;
    }
    pdVar14 = (double *)*param_2;
  }
  dVar24 = *pdVar14;
  *param_2 = (long)(pdVar14 + 1);
  dVar25 = pdVar14[1];
  *param_2 = (long)(pdVar14 + 2);
  fVar26 = *(float *)(pdVar14 + 2);
  *param_2 = (long)((long)pdVar14 + 0x14);
  bVar7 = *(byte *)((long)pdVar14 + 0x14);
  *param_2 = (long)pdVar14 + 0x15;
  bVar8 = *(byte *)((long)pdVar14 + 0x15);
  *param_2 = (long)pdVar14 + 0x16;
  cVar9 = *(char *)((long)pdVar14 + 0x16);
  puVar15 = (uint *)((long)pdVar14 + 0x17);
  *param_2 = (long)puVar15;
  if (cVar9 != '\0') {
    *(float *)(param_1 + 0x22) = fVar26;
    *(byte *)((long)param_1 + 0x124) = *(byte *)((long)param_1 + 0x124) | 4;
    dVar27 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    iVar11 = (int)((dVar27 * 240.0) / ((double)bVar8 * (double)fVar26));
    *(int *)((long)param_1 + 0x114) = iVar11;
    *(uint *)(param_1 + 0x23) = iVar11 * (uint)bVar7;
    *(int *)((long)param_1 + 0x11c) = (int)(dVar27 * 0.001 * dVar24);
    *(int *)(param_1 + 0x24) = (int)(dVar27 * 0.001 * dVar25);
    puVar15 = (uint *)*param_2;
  }
  uVar19 = *puVar15;
  *param_2 = (long)(puVar15 + 1);
  puVar10 = PTR_DAT_047e2fd0;
  if (uVar19 != 0) {
    lVar13 = (ulong)uVar19 * 0x18;
    puVar12 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,lVar13);
    if (puVar12 == (undefined8 *)0x0) {
      return 2;
    }
    lVar16 = 0;
    do {
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2 = (undefined4 *)((long)puVar12 + lVar16);
      lVar16 = lVar16 + 0x18;
      *puVar2 = uVar6;
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2[1] = uVar6;
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2[2] = uVar6;
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2[3] = uVar6;
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2[4] = uVar6;
      uVar6 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar2[5] = uVar6;
    } while (lVar13 != lVar16);
    if (param_1[0x25] == 0) {
      plVar22 = (long *)(**(code **)(puVar10 + 0x10))(2,0x10);
      if (plVar22 == (long *)0x0) {
        param_1[0x25] = 0;
LAB_0351b308:
        iVar11 = 2;
        goto LAB_0351b30c;
      }
      *plVar22 = 0;
      plVar22[1] = 0;
      iVar11 = 2;
      param_1[0x25] = (long)plVar22;
      lVar13 = (**(code **)(puVar10 + 0x10))(2,lVar13);
      *plVar22 = lVar13;
      if (lVar13 == 0) goto LAB_0351b30c;
      *(uint *)((long)plVar22 + 0xc) = uVar19;
    }
    else {
      *(undefined4 *)(param_1[0x25] + 8) = 0;
    }
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    iVar11 = 2;
    puVar21 = puVar12;
    do {
      plVar22 = (long *)param_1[0x25];
      uVar3 = *(uint *)(plVar22 + 1);
      uVar23 = *(uint *)((long)plVar22 + 0xc);
      if (uVar23 <= uVar3) {
        iVar1 = uVar23 + (uVar23 >> 1);
        if (uVar23 == 0) {
          iVar1 = 1;
        }
        uVar23 = iVar1 + uVar23;
        lVar13 = (**(code **)(puVar10 + 0x20))(2,*plVar22,(ulong)uVar23 * 0x18);
        if (lVar13 == 0) goto LAB_0351b30c;
        *plVar22 = lVar13;
        *(uint *)((long)plVar22 + 0xc) = uVar23;
      }
      if (uVar23 <= uVar3) goto LAB_0351b308;
      uVar23 = *(uint *)(plVar22 + 1);
      *(uint *)(plVar22 + 1) = uVar23 + 1;
      if (*plVar22 == 0) goto LAB_0351b308;
      puVar17 = (undefined8 *)(*plVar22 + (ulong)uVar23 * 0x18);
      uVar4 = *puVar21;
      puVar5 = puVar21 + 1;
      uVar18 = puVar21[2];
      puVar21 = puVar21 + 3;
      uVar19 = uVar19 - 1;
      puVar17[1] = *puVar5;
      puVar17[2] = uVar18;
      *puVar17 = uVar4;
    } while (uVar19 != 0);
    iVar11 = 1;
LAB_0351b30c:
    (**(code **)(puVar10 + 0x30))(0,puVar12);
    return iVar11;
  }
  plVar22 = (long *)param_1[0x25];
  if (plVar22 == (long *)0x0) {
    return 1;
  }
  if (*plVar22 != 0) {
    *(undefined4 *)(plVar22 + 1) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
    *plVar22 = 0;
    *(undefined4 *)((long)plVar22 + 0xc) = 0;
    plVar22 = (long *)param_1[0x25];
    if (plVar22 == (long *)0x0) goto LAB_0351b2a4;
  }
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,plVar22);
LAB_0351b2a4:
  param_1[0x25] = 0;
  return 1;
}


