/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fd508; name: FUN_030fd508
 */


void FUN_030fd508(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x20) * 0x60 + 8) == '\0') {
    bVar3 = false;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x20) * 0x60;
    iVar13 = -(uint)((float)*param_3 <= (float)*(undefined8 *)(lVar5 + 0x20));
    iVar14 = -(uint)((float)((ulong)*param_3 >> 0x20) <=
                    (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20));
    iVar15 = -(uint)((float)param_3[1] <= (float)*(undefined8 *)(lVar5 + 0x28));
    iVar10 = -(uint)((float)*(undefined8 *)(lVar5 + 0x10) <= (float)param_3[2]);
    iVar11 = -(uint)((float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) <=
                    (float)((ulong)param_3[2] >> 0x20));
    iVar12 = -(uint)((float)*(undefined8 *)(lVar5 + 0x18) <= (float)param_3[3]);
    bVar3 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                     (byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar10 >> 0x18) &
                     (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                     CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                              (byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar10 >> 0x10) &
                              (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                              CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar11 >> 8) &
                                       (byte)((uint)iVar13 >> 8) & (byte)((uint)iVar10 >> 8) &
                                       (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar12 >> 8),
                                       (byte)iVar14 & (byte)iVar11 & (byte)iVar13 & (byte)iVar10 &
                                       (byte)iVar15 & (byte)iVar12))) != 0;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    bVar4 = false;
  }
  else {
    iVar10 = -(uint)((float)*(undefined8 *)(param_1 + 0x30) <= (float)param_3[2]);
    iVar11 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) <=
                    (float)((ulong)param_3[2] >> 0x20));
    iVar12 = -(uint)((float)*(undefined8 *)(param_1 + 0x38) <= (float)param_3[3]);
    iVar13 = -(uint)((float)*param_3 <= (float)*(undefined8 *)(param_1 + 0x40));
    iVar14 = -(uint)((float)((ulong)*param_3 >> 0x20) <=
                    (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20));
    iVar15 = -(uint)((float)param_3[1] <= (float)*(undefined8 *)(param_1 + 0x48));
    bVar4 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                     (byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar10 >> 0x18) &
                     (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                     CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                              (byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar10 >> 0x10) &
                              (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                              CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar11 >> 8) &
                                       (byte)((uint)iVar13 >> 8) & (byte)((uint)iVar10 >> 8) &
                                       (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar12 >> 8),
                                       (byte)iVar14 & (byte)iVar11 & (byte)iVar13 & (byte)iVar10 &
                                       (byte)iVar15 & (byte)iVar12))) != 0;
  }
  lVar9 = *(long *)(param_1 + 0x58);
  iVar10 = *(int *)(lVar9 + 0x38);
  lVar5 = (long)iVar10;
  if ((int)(*(uint *)(lVar9 + 0x3c) & 0x7fffffff) <= iVar10) {
    FUN_03078498(lVar9 + 0x30,PTR_PTR_047d1a50,lVar5 + 1);
    iVar10 = *(int *)(lVar9 + 0x38);
  }
  *(uint *)(*(long *)(lVar9 + 0x30) + (long)iVar10 * 4) = param_2;
  *(int *)(lVar9 + 0x38) = (int)(lVar5 + 1);
  if ((bool)(!bVar3 | bVar4)) {
    if (!bVar3 && bVar4) {
      plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa8) +
                       ((long)((ulong)param_2 << 0x20) >> 0x1c));
      plVar8 = plVar1 + 1;
      iVar10 = (int)*plVar8;
      lVar5 = (long)iVar10;
      if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= iVar10) {
        FUN_0133bb88(plVar1,PTR_PTR_047d1a50,lVar5 + 1);
        iVar10 = (int)*plVar8;
      }
      *(undefined4 *)(*plVar1 + (long)iVar10 * 4) = *(undefined4 *)(param_1 + 0x20);
      *(int *)plVar8 = (int)(lVar5 + 1);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa8) +
                     ((long)((ulong)param_2 << 0x20) >> 0x1c));
    uVar2 = *(uint *)(plVar1 + 1);
    if ((int)uVar2 < 1) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar7 = 0;
      uVar6 = 0xffffffff;
      do {
        if (*(int *)(*plVar1 + uVar7 * 4) == *(int *)(param_1 + 0x20)) {
          uVar6 = (uint)uVar7;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    uVar2 = uVar2 - 1;
    *(uint *)(plVar1 + 1) = uVar2;
    if (uVar2 != uVar6) {
      *(undefined4 *)(*plVar1 + (long)(int)uVar6 * 4) =
           *(undefined4 *)(*plVar1 + (long)(int)uVar2 * 4);
    }
  }
  return;
}


