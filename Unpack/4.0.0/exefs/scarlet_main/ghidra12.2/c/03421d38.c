/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03421d38; name: FUN_03421d38
 */


void FUN_03421d38(long param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long *plVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  
  plVar21 = (long *)(param_1 + 0x80);
  lVar12 = *plVar21;
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar18 = param_3;
  uVar16 = param_2;
  if (param_3 <= param_2) {
    uVar18 = param_2;
    uVar16 = param_3;
  }
  if (uVar5 == 0) {
    uVar9 = *(uint *)(param_1 + 0x8c);
    if (lVar12 != 0) {
      uVar22 = 0;
      goto LAB_03421dfc;
    }
    if (uVar9 == 0) {
      uVar22 = FUN_034234a4(plVar21,1);
      if ((uVar22 & 1) == 0) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x8c);
    }
    if (uVar9 == 0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x88);
    lVar12 = *(long *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x88) = uVar5 + 1;
    puVar17 = (ulong *)(lVar12 + (ulong)uVar5 * 0x48);
    if (lVar12 != 0) {
      *puVar17 = 0xffffffffffffffff;
      puVar17[1] = 0xffffffffffffffff;
      lVar12 = lVar12 + (ulong)uVar5 * 0x48;
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined4 *)(lVar12 + 0x30) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined ***)(lVar12 + 0x18) = &PTR_LAB_047bf588;
      goto LAB_03421f78;
    }
  }
  else {
    uVar9 = 0;
    uVar15 = uVar5;
    do {
      iVar1 = uVar9 + (uVar15 >> 1);
      puVar17 = (ulong *)(lVar12 + (long)iVar1 * 0x48);
      uVar22 = *puVar17;
      uVar8 = puVar17[1];
      if (uVar22 == uVar16 && uVar8 == uVar18) {
        puVar17 = (ulong *)(lVar12 + (long)iVar1 * 0x48);
        goto LAB_03421f8c;
      }
      bVar7 = uVar8 < uVar18;
      if (uVar22 != uVar16) {
        bVar7 = uVar22 < uVar16;
      }
      if (bVar7 != 0) {
        uVar9 = iVar1 + 1;
      }
      uVar15 = uVar15 - bVar7 >> 1;
    } while (uVar15 != 0);
    uVar22 = (ulong)uVar9;
    uVar9 = *(uint *)(param_1 + 0x8c);
LAB_03421dfc:
    if (uVar9 <= uVar5) {
      iVar1 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar1 = 1;
      }
      uVar8 = FUN_034234a4(plVar21,iVar1);
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x8c);
    }
    if (uVar9 <= uVar5) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x88);
    lVar10 = *(long *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x88) = uVar5 + 1;
    puVar23 = (undefined8 *)(lVar10 + (ulong)uVar5 * 0x48);
    lVar12 = 0;
    if (lVar10 != 0) {
      *puVar23 = 0xffffffffffffffff;
      puVar23[1] = 0xffffffffffffffff;
      lVar10 = lVar10 + (ulong)uVar5 * 0x48;
      *(undefined4 *)(lVar10 + 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined ***)(lVar10 + 0x18) = &PTR_LAB_047bf588;
      lVar12 = *plVar21;
    }
    if ((undefined8 *)(lVar12 + uVar22 * 0x48) < puVar23) {
      do {
        puVar19 = puVar23 + -9;
        *puVar23 = *puVar19;
        puVar23[1] = puVar23[-8];
        *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar23 + -7);
        *(undefined4 *)((long)puVar23 + 0x14) = *(undefined4 *)((long)puVar23 + -0x34);
        if (puVar23[7] != 0) {
          *(undefined4 *)(puVar23 + 8) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          puVar23[7] = 0;
          *(undefined4 *)((long)puVar23 + 0x44) = 0;
        }
        puVar23[7] = puVar23[-2];
        *(undefined4 *)(puVar23 + 8) = *(undefined4 *)(puVar23 + -1);
        *(undefined4 *)((long)puVar23 + 0x44) = *(undefined4 *)((long)puVar23 + -4);
        puVar23[-2] = 0;
        puVar23[-1] = 0;
        lVar12 = *plVar21;
        puVar23 = puVar19;
      } while ((undefined8 *)(lVar12 + uVar22 * 0x48) < puVar19);
    }
    plVar20 = (long *)(lVar12 + uVar22 * 0x48 + 0x38);
    if (*plVar20 != 0) {
      lVar12 = lVar12 + uVar22 * 0x48;
      *(undefined4 *)(lVar12 + 0x40) = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
      *plVar20 = 0;
      *(undefined4 *)(lVar12 + 0x44) = 0;
      lVar12 = *plVar21;
    }
    lVar10 = 0;
    if (lVar12 != 0) {
      puVar23 = (undefined8 *)(lVar12 + uVar22 * 0x48);
      *puVar23 = 0xffffffffffffffff;
      puVar23[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar23 + 6) = 0;
      puVar23[7] = 0;
      puVar23[8] = 0;
      puVar23[4] = 0;
      puVar23[5] = 0;
      puVar23[2] = 0;
      puVar23[3] = &PTR_LAB_047bf588;
      lVar10 = *plVar21;
    }
    puVar17 = (ulong *)(lVar10 + uVar22 * 0x48);
  }
  if (puVar17 == (ulong *)0x0) {
    return;
  }
LAB_03421f78:
  *puVar17 = uVar16;
  puVar17[1] = uVar18;
LAB_03421f8c:
  *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)((long)puVar17 + 0x24) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_4 + 0x10);
  *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(param_4 + 0x14);
  if (puVar17[7] != 0) {
    *(undefined4 *)(puVar17 + 8) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    puVar17[7] = 0;
    *(undefined4 *)((long)puVar17 + 0x44) = 0;
  }
  puVar17[7] = *(ulong *)(param_4 + 0x20);
  *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)((long)puVar17 + 0x44) = *(undefined4 *)(param_4 + 0x2c);
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  if (*(char *)((long)puVar17 + 0x31) == '\0') {
    if ((*(char *)((long)puVar17 + 0x32) == '\0') && ((uint)puVar17[8] != 0)) {
      lVar12 = (ulong)(uint)puVar17[8] * 0x94;
      uVar16 = lVar12 - 0x94;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      uVar18 = puVar17[7];
      if ((SUB164(auVar6 * ZEXT816(0xdd67c8a60dd67c8b),8) >> 7 & 1) == 0) {
        fVar24 = (float)NEON_fminnm(*(float *)(uVar18 + 0x80),0x7f7fffff);
        uVar22 = uVar18;
        if (3.4028235e+38 <= *(float *)(uVar18 + 0x80)) {
          uVar22 = 0;
        }
        uVar8 = uVar18 + 0x94;
      }
      else {
        uVar22 = 0;
        fVar24 = 3.4028235e+38;
        uVar8 = uVar18;
      }
      if (0x93 < uVar16) {
        do {
          fVar25 = (float)NEON_fminnm(*(float *)(uVar8 + 0x80),fVar24);
          pfVar11 = (float *)(uVar8 + 0x114);
          uVar16 = uVar8;
          if (fVar24 <= *(float *)(uVar8 + 0x80)) {
            uVar16 = uVar22;
          }
          fVar24 = (float)NEON_fminnm(*pfVar11,fVar25);
          uVar22 = uVar8 + 0x94;
          uVar8 = uVar8 + 0x128;
          if (fVar25 <= *pfVar11) {
            uVar22 = uVar16;
          }
        } while (uVar18 + lVar12 != uVar8);
      }
      if (uVar22 != 0) {
        *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(uVar22 + 0x7c);
        *(undefined4 *)((long)puVar17 + 0x14) = *(undefined4 *)(uVar22 + 0x80);
        return;
      }
    }
    puVar17[2] = 0x7f7fffff3f800000;
  }
  else {
    *(undefined4 *)(puVar17 + 2) = 0;
    plVar21 = *(long **)(param_1 + 0x50);
    lVar12 = (ulong)*(uint *)(param_1 + 0x58) * 8 + -8;
    if (((uint)lVar12 >> 3 & 1) == 0) {
      plVar20 = plVar21 + 1;
      pfVar14 = (float *)*plVar21;
      pfVar2 = pfVar14;
      if (*(ulong *)(pfVar14 + 0x1a) != param_3) {
        pfVar2 = (float *)0x0;
      }
      pfVar11 = (float *)0x0;
      if (*(ulong *)(pfVar14 + 0x1a) != param_2) {
        pfVar14 = (float *)0x0;
        pfVar11 = pfVar2;
      }
    }
    else {
      pfVar14 = (float *)0x0;
      plVar20 = plVar21;
      pfVar11 = (float *)0x0;
    }
    if (lVar12 != 0) {
      do {
        plVar13 = plVar20 + 2;
        pfVar3 = (float *)*plVar20;
        pfVar4 = (float *)plVar20[1];
        uVar18 = *(ulong *)(pfVar3 + 0x1a);
        pfVar2 = pfVar3;
        if (uVar18 != param_3) {
          pfVar2 = pfVar11;
        }
        if (uVar18 != param_2) {
          pfVar3 = pfVar14;
        }
        if (uVar18 != param_2) {
          pfVar11 = pfVar2;
        }
        pfVar2 = pfVar4;
        if (*(ulong *)(pfVar4 + 0x1a) != param_3) {
          pfVar2 = pfVar11;
        }
        pfVar14 = pfVar4;
        if (*(ulong *)(pfVar4 + 0x1a) != param_2) {
          pfVar14 = pfVar3;
          pfVar11 = pfVar2;
        }
        plVar20 = plVar13;
      } while (plVar13 != plVar21 + *(uint *)(param_1 + 0x58));
    }
    *(float *)((long)puVar17 + 0x14) =
         SQRT((*pfVar14 - *pfVar11) * (*pfVar14 - *pfVar11) +
              (pfVar14[1] - pfVar11[1]) * (pfVar14[1] - pfVar11[1]) +
              (pfVar14[2] - pfVar11[2]) * (pfVar14[2] - pfVar11[2]));
  }
  return;
}


