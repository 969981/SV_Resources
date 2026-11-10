/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e6668; name: FUN_034e6668
 */


undefined8 FUN_034e6668(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  
  *param_1 = param_2[1];
  bVar4 = *(byte *)(param_1 + 8) & 0xfe | *(byte *)((long)param_2 + 0x24);
  *(byte *)(param_1 + 8) = bVar4;
  cVar3 = *(char *)((long)param_2 + 0x26);
  *(byte *)(param_1 + 8) = bVar4 & 0xfd | cVar3 << 1;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar17 = *(float *)(param_2 + 2);
  fVar16 = *(float *)((long)param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x24) != '\0') {
    fVar6 = 0.0;
    if (-37.0 <= fVar17 * 0.05) {
      uVar9 = (uint)(fVar17 * 1393317.6 + 1.0653532e+09);
      fVar17 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar6 = (fVar17 * (fVar17 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar9 & 0xff800000);
    }
    fVar17 = fVar6;
    if (-37.0 <= fVar16 * 0.05) {
      uVar9 = (uint)(fVar16 * 1393317.6 + 1.0653532e+09);
      fVar16 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar16 = (fVar16 * (fVar16 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    else {
      fVar16 = 0.0;
    }
  }
  *(float *)(param_1 + 1) = fVar17;
  *(float *)((long)param_1 + 0xc) = fVar16;
  iVar10 = *(int *)((long)param_2 + 0x1c);
  if ((((fVar16 <= fVar17) && (*(char *)((long)param_2 + 0x25) != '\0')) && (iVar10 != 3)) &&
     (iVar10 != 5)) {
    iVar10 = 8 - iVar10;
  }
  *(int *)(param_1 + 7) = iVar10;
  *(undefined4 *)(param_1 + 3) = param_3;
  iVar10 = *(int *)PTR_DAT_047e6fc0;
  iVar5 = 0;
  if (iVar10 != 0) {
    iVar5 = ((int)param_2[3] + iVar10 + -1) / iVar10;
  }
  *(int *)((long)param_1 + 0x1c) = iVar5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 9) = (int)param_2[4];
  if ((cVar3 != '\0') && ((int)param_2[3] != 0)) {
    fVar16 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_047e6d08 / ((float)(int)param_2[3] * 9.6));
    *(float *)((long)param_1 + 0x44) = fVar16;
  }
  plVar8 = (long *)param_1[5];
  uVar9 = *(uint *)(param_1 + 6);
  lVar14 = *param_2;
  plVar2 = plVar8 + uVar9;
  plVar12 = plVar8;
  if ((uVar9 != 0) && (*plVar8 != lVar14)) {
    lVar11 = (ulong)uVar9 * 8;
    plVar13 = plVar8;
    do {
      lVar11 = lVar11 + -8;
      if (lVar11 == 0) {
        plVar12 = plVar2;
        if (plVar2 == (long *)0x0) goto LAB_034e68dc;
        goto LAB_034e68d4;
      }
      plVar12 = plVar13 + 1;
      plVar1 = plVar13 + 1;
      plVar13 = plVar12;
    } while (*plVar1 != lVar14);
  }
  if (plVar12 == (long *)0x0) {
LAB_034e68dc:
    uVar15 = *(uint *)((long)param_1 + 0x34);
    if (uVar9 < uVar15) {
LAB_034e6920:
      if (uVar9 < uVar15) {
        uVar9 = *(uint *)(param_1 + 6);
        *(uint *)(param_1 + 6) = uVar9 + 1;
        if (plVar8 != (long *)0x0) {
          plVar8[uVar9] = lVar14;
          goto LAB_034e693c;
        }
      }
    }
    else {
      iVar10 = uVar15 + (uVar15 >> 1);
      if (uVar15 == 0) {
        iVar10 = 1;
      }
      uVar15 = iVar10 + uVar15;
      plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar8,(ulong)uVar15 << 3);
      if (plVar8 != (long *)0x0) {
        param_1[5] = (long)plVar8;
        *(uint *)((long)param_1 + 0x34) = uVar15;
        goto LAB_034e6920;
      }
    }
    uVar7 = 2;
  }
  else {
LAB_034e68d4:
    if (plVar2 == plVar12) goto LAB_034e68dc;
LAB_034e693c:
    uVar7 = 1;
  }
  return uVar7;
}


