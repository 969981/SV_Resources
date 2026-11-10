/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c2b8c; name: FUN_030c2b8c
 */


void FUN_030c2b8c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
                 ulong param_6,long *param_7,long *param_8,undefined4 param_9,int param_10,
                 long *param_11,long param_12)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  int *piVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  undefined8 uVar61;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  ulong uVar67;
  int *local_a0;
  undefined4 local_8c;
  long *local_88;
  long *local_80 [4];
  
  param_2[2] = 1;
  *param_2 = (long)(PTR_DAT_047e50f8 + 0x10);
  param_2[1] = 0xffffffff;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_5 + 8);
  param_2[5] = param_3;
  uVar8 = *(uint *)(param_5 + 8);
  param_2[8] = 0;
  param_2[9] = -0x8000000000000000;
  lVar29 = tpidr_el0;
  lVar14 = *(long *)(lVar29 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar14;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  if (*(long *)(lVar14 + 8) == 0) {
    param_2[10] = lVar14;
  }
  else {
    lVar14 = 0;
    param_2[10] = 0;
  }
  local_88 = (long *)((long)(int)uVar8 * 0x80);
  param_2[0xc] = (long)local_88;
  if (lVar14 == 0) {
    lVar12 = (**(code **)PTR_DAT_047d1a08)(1,&local_88,0x40);
  }
  else {
    local_80[0] = local_88;
    if (local_88 <= *(long **)(lVar14 + 0x28)) {
      lVar12 = *(long *)(lVar14 + 0x38);
      if ((ulong)((long)local_88 + lVar12) <= *(ulong *)(lVar14 + 0x40)) {
        *(long *)(lVar14 + 0x38) = (long)local_88 + lVar12;
        goto LAB_030c2c9c;
      }
    }
    lVar12 = FUN_031cf3b4(lVar14,local_80);
  }
LAB_030c2c9c:
  param_2[8] = lVar12;
  param_2[0xb] = lVar12;
  *(uint *)((long)param_2 + 0x4c) = uVar8 | 0x80000000;
  param_2[0xd] = param_5;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = -0x8000000000000000;
  lVar14 = param_11[1];
  plVar21 = param_2 + 0x12;
  *plVar21 = *param_11;
  param_2[0x13] = lVar14;
  param_2[0x15] = param_7[1];
  param_2[0x14] = *param_7;
  param_2[0x17] = param_8[1];
  lVar14 = *param_8;
  *(undefined4 *)(param_2 + 0x20) = param_9;
  *(uint *)((long)param_2 + 0x104) = (uint)param_6;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x16] = lVar14;
  param_2[0x18] = param_12;
  param_2[0x1a] = 0x2ffffffff;
  param_2[3] = CONCAT44((int)param_1,(int)param_1);
  iVar26 = *(int *)PTR_DAT_047e4f38;
  lVar14 = *(long *)(lVar29 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar14;
  }
  if (*(long *)(lVar14 + (long)iVar26 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar14 = *(long *)(lVar29 + 0x1000b8);
  }
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar14;
  }
  plVar30 = *(long **)(lVar14 + 0x3e0);
  if (plVar30 != (long *)0x0) {
    lVar14 = *plVar30;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("cacheMeshData",0xd,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar5 = (undefined8 *)plVar30[2];
    uVar15 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar30[3]) && (plVar30[2] = uVar15, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TtcacheMeshData";
      uVar13 = nn::os::GetSystemTick();
      puVar5[1] = uVar13;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar30[6] != 0)) {
      puVar5 = (undefined8 *)plVar30[2];
      uVar15 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar30[3]) && (plVar30[2] = uVar15, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar30[6] + 8);
      }
    }
  }
  uVar8 = *(uint *)(param_2[0xd] + 8);
  iVar26 = (int)param_2[9];
  if (iVar26 < (int)uVar8) {
    lVar14 = param_2[8];
    lVar12 = (long)(int)uVar8 << 7;
    *(uint *)(param_2 + 9) = uVar8;
    do {
      lVar12 = lVar12 + -0x80;
      lVar16 = lVar14 + (long)iVar26 * 0x80;
      *(undefined8 *)(lVar16 + 8) = 0xffffffffffffffff;
      lVar14 = lVar14 + 0x80;
      *(undefined4 *)(lVar16 + 0x10) = 4;
      *(undefined8 *)(lVar16 + 0x1c) = 0xffffffffffffffff;
      *(undefined4 *)(lVar16 + 0x24) = 4;
    } while ((long)iVar26 * 0x80 != lVar12);
  }
  else if ((int)uVar8 < iVar26) {
    *(uint *)(param_2 + 9) = uVar8;
  }
  local_88 = plVar30;
  if (param_10 == 0) {
    lVar12 = param_2[0x13];
    lVar14 = *plVar21;
  }
  else {
    lVar12 = *(long *)(*(long *)(param_3 + 0x38) + (param_6 >> 0x16 & 0x3ff) * 0x100);
    FUN_030963b0(*(undefined8 *)(lVar12 + 0x20),(uint)param_6 & 0x3fffff,local_80);
    fVar39 = (float)((ulong)local_80[0] >> 0x20);
    fVar38 = SUB84(local_80[0],0);
    fVar40 = SUB84(local_80[1],0);
    lVar14 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x80) >> 0x20) * fVar40 +
                      (float)((ulong)*(undefined8 *)(lVar12 + 0x60) >> 0x20) * fVar38 +
                      (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20) * fVar39,
                      (float)*(undefined8 *)(lVar12 + 0x80) * fVar40 +
                      (float)*(undefined8 *)(lVar12 + 0x60) * fVar38 +
                      (float)*(undefined8 *)(lVar12 + 0x70) * fVar39);
    lVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x88) >> 0x20) * fVar40 +
                      (float)((ulong)*(undefined8 *)(lVar12 + 0x68) >> 0x20) * fVar38 +
                      (float)((ulong)*(undefined8 *)(lVar12 + 0x78) >> 0x20) * fVar39,
                      (float)*(undefined8 *)(lVar12 + 0x88) * fVar40 +
                      (float)*(undefined8 *)(lVar12 + 0x68) * fVar38 +
                      (float)*(undefined8 *)(lVar12 + 0x78) * fVar39);
  }
  param_2[7] = lVar12;
  param_2[6] = lVar14;
  if (0 < (int)uVar8) {
    lVar12 = 0;
    lVar14 = 0;
    do {
      lVar19 = *(long *)(param_3 + 0x38);
      uVar6 = *(uint *)(*(long *)param_2[0xd] + lVar12);
      lVar22 = *(long *)(lVar19 + ((ulong)(uVar6 >> 0xe) & 0x3ff00));
      lVar16 = *(long *)(lVar22 + 0x20);
      uVar15 = (ulong)uVar6 & 0x3fffff;
      iVar9 = *(int *)(lVar16 + 0x60);
      iVar25 = (int)uVar15;
      iVar26 = iVar25 - *(int *)(lVar16 + 0x30);
      if (iVar25 < *(int *)(lVar16 + 0x30)) {
        if (*(int *)(lVar16 + 0x78) == 0) {
          iVar26 = iVar25;
LAB_030c2f90:
          piVar27 = (int *)(*(long *)(lVar16 + 0x130) + (long)(iVar26 * iVar9) * 4);
          lVar17 = *(long *)(lVar16 + 0xc0);
          goto LAB_030c2fa8;
        }
        iVar26 = *(int *)(*(long *)(lVar16 + 0x70) + uVar15 * 4);
        if (iVar26 != -1) goto LAB_030c2f90;
        piVar27 = (int *)(*(long *)(lVar16 + 0x58) + (long)(iVar9 * iVar25) * 4);
        piVar32 = (int *)(*(long *)(lVar16 + 0x28) + uVar15 * 0x14);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar16 + 0x150) + (long)(iVar9 * iVar26) * 4);
        lVar17 = *(long *)(lVar16 + 0xe0);
LAB_030c2fa8:
        piVar32 = (int *)(lVar17 + (long)iVar26 * 0x14);
      }
      local_a0 = piVar27 + iVar9;
      iVar25 = *(int *)(lVar16 + 0x40);
      iVar26 = *piVar32;
      iVar9 = piVar32[1];
      lVar17 = 0x38;
      if (iVar25 <= iVar26) {
        lVar17 = 0xf0;
      }
      iVar3 = 0;
      if (iVar25 <= iVar26) {
        iVar3 = iVar25;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar16 + lVar17) + (long)(iVar26 - iVar3) * 0x10);
      uVar13 = *puVar5;
      lVar17 = 0x38;
      if (iVar25 <= iVar9) {
        lVar17 = 0xf0;
      }
      iVar26 = 0;
      if (iVar25 <= iVar9) {
        iVar26 = iVar25;
      }
      puVar10 = (undefined8 *)(*(long *)(lVar16 + lVar17) + (long)(iVar9 - iVar26) * 0x10);
      uVar41 = *puVar10;
      fVar38 = (float)uVar13;
      fVar47 = (float)*(undefined8 *)(lVar22 + 0x60);
      fVar49 = (float)((ulong)*(undefined8 *)(lVar22 + 0x60) >> 0x20);
      fVar34 = (float)*(undefined8 *)(lVar22 + 0x68);
      uVar28 = piVar32[3];
      fVar39 = (float)((ulong)uVar13 >> 0x20);
      fVar53 = (float)*(undefined8 *)(lVar22 + 0x70);
      fVar55 = (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20);
      fVar36 = (float)*(undefined8 *)(lVar22 + 0x78);
      fVar42 = (float)uVar41;
      fVar43 = (float)((ulong)uVar41 >> 0x20);
      fVar40 = (float)puVar5[1];
      fVar59 = (float)*(undefined8 *)(lVar22 + 0x80);
      fVar62 = (float)((ulong)*(undefined8 *)(lVar22 + 0x80) >> 0x20);
      fVar37 = (float)*(undefined8 *)(lVar22 + 0x88);
      fVar45 = (float)puVar10[1];
      if ((*(byte *)(piVar32 + 4) >> 6 & 1) == 0) {
        bVar11 = uVar28 == 0xffffffff;
        uVar28 = uVar28 & 0x3fffff | *(int *)(lVar16 + 0x17c) << 0x16;
        if (bVar11) {
          uVar28 = 0xffffffff;
        }
        uVar31 = 0xffffffff;
        if (piVar32[2] != 0xffffffff) {
          uVar31 = piVar32[2] & 0x3fffffU | *(int *)(lVar16 + 0x17c) << 0x16;
        }
      }
      else {
        uVar31 = piVar32[2];
      }
      fVar33 = (float)*(undefined8 *)(lVar22 + 0x90);
      fVar35 = (float)((ulong)*(undefined8 *)(lVar22 + 0x90) >> 0x20);
      fVar66 = (float)*(undefined8 *)(lVar22 + 0x98);
      fVar65 = fVar66 + fVar37 * fVar40 + fVar34 * fVar38 + fVar36 * fVar39;
      fVar66 = fVar66 + fVar37 * fVar45 + fVar34 * fVar42 + fVar36 * fVar43;
      if ((*(byte *)(piVar32 + 4) >> 4 & 1) == 0) {
        uVar2 = (uint)param_6 & 0x3fffff;
        uVar23 = uVar2 - *(int *)(lVar16 + 0x20);
        iVar26 = *(int *)(lVar16 + 0x50);
        if ((int)uVar2 < *(int *)(lVar16 + 0x20)) {
          if (*(int *)(lVar16 + 0x98) == 0) {
            uVar23 = uVar2;
LAB_030c30e4:
            lVar19 = *(long *)(lVar16 + 0x120) + (long)(int)(uVar23 * iVar26) * 4;
            lVar16 = *(long *)(lVar16 + 0xb0);
            goto LAB_030c30f4;
          }
          uVar23 = *(uint *)(*(long *)(lVar16 + 0x90) + (ulong)uVar2 * 4);
          if (uVar23 != 0xffffffff) goto LAB_030c30e4;
          lVar19 = *(long *)(lVar16 + 0x48) + (long)(int)(iVar26 * uVar2) * 4;
          lVar16 = *(long *)(lVar16 + 0x18) + (ulong)uVar2 * 0x10;
          lVar22 = lVar19 + (long)iVar26 * 4;
        }
        else {
          lVar19 = *(long *)(lVar16 + 0x140) + (long)(int)(iVar26 * uVar23) * 4;
          lVar16 = *(long *)(lVar16 + 0xd0);
LAB_030c30f4:
          lVar22 = lVar19 + (long)iVar26 * 4;
          lVar16 = lVar16 + (long)(int)uVar23 * 0x10;
        }
        iVar26 = *(int *)PTR_DAT_047e4f38;
        lVar17 = *(long *)(lVar29 + 0x1000b8);
        if (lVar17 == 0) {
          lVar17 = FUN_00e5d3b4();
          *(long *)(lVar29 + 0x1000b8) = lVar17;
        }
        if (*(long *)(lVar17 + (long)iVar26 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        FUN_03062384(param_1,param_4,param_6 & 0xffffffff,lVar16,lVar19,lVar22,(ulong)uVar6,piVar32)
        ;
        uVar15 = CONCAT44(local_80[0]._0_4_,fVar65);
        uVar67 = CONCAT44(local_8c,fVar66);
        lVar19 = *(long *)(param_3 + 0x38);
      }
      else {
        uVar15 = (ulong)(uint)fVar65;
        uVar67 = (ulong)(uint)fVar66;
      }
      uVar2 = uVar31 & 0x3fffff;
      lVar16 = *(long *)(lVar19 + (ulong)(uVar31 >> 0x16) * 0x100);
      lVar19 = *(long *)(lVar16 + 0x20);
      iVar26 = *(int *)(lVar19 + 0x60);
      uVar23 = uVar2 - *(int *)(lVar19 + 0x30);
      if ((int)uVar2 < *(int *)(lVar19 + 0x30)) {
        if (*(int *)(lVar19 + 0x78) == 0) {
          uVar23 = uVar2;
LAB_030c3210:
          piVar18 = (int *)(*(long *)(lVar19 + 0x130) + (long)(int)(uVar23 * iVar26) * 4);
          lVar22 = *(long *)(lVar19 + 0xc0);
          goto LAB_030c3220;
        }
        uVar23 = *(uint *)(*(long *)(lVar19 + 0x70) + (ulong)uVar2 * 4);
        if (uVar23 != 0xffffffff) goto LAB_030c3210;
        piVar18 = (int *)(*(long *)(lVar19 + 0x58) + (long)(int)(iVar26 * uVar2) * 4);
        piVar24 = (int *)(*(long *)(lVar19 + 0x28) + (ulong)uVar2 * 0x14);
      }
      else {
        piVar18 = (int *)(*(long *)(lVar19 + 0x150) + (long)(int)(iVar26 * uVar23) * 4);
        lVar22 = *(long *)(lVar19 + 0xe0);
LAB_030c3220:
        piVar24 = (int *)(lVar22 + (long)(int)uVar23 * 0x14);
      }
      iVar25 = *(int *)(lVar19 + 0x40);
      iVar26 = *piVar24;
      iVar9 = piVar24[1];
      uVar41 = *(undefined8 *)(lVar16 + 0x98);
      uVar13 = *(undefined8 *)(lVar16 + 0x90);
      lVar22 = 0x38;
      if (iVar25 <= iVar26) {
        lVar22 = 0xf0;
      }
      iVar3 = 0;
      if (iVar25 <= iVar26) {
        iVar3 = iVar25;
      }
      lVar17 = 0x38;
      if (iVar25 <= iVar9) {
        lVar17 = 0xf0;
      }
      iVar4 = 0;
      if (iVar25 <= iVar9) {
        iVar4 = iVar25;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar19 + lVar22) + (long)(iVar26 - iVar3) * 0x10);
      uVar20 = *puVar5;
      fVar65 = (float)uVar20;
      fVar48 = (float)*(undefined8 *)(lVar16 + 0x60);
      fVar50 = (float)((ulong)*(undefined8 *)(lVar16 + 0x60) >> 0x20);
      fVar51 = (float)*(undefined8 *)(lVar16 + 0x68);
      fVar52 = (float)((ulong)*(undefined8 *)(lVar16 + 0x68) >> 0x20);
      fVar44 = (float)((ulong)uVar20 >> 0x20);
      fVar54 = (float)*(undefined8 *)(lVar16 + 0x70);
      fVar56 = (float)((ulong)*(undefined8 *)(lVar16 + 0x70) >> 0x20);
      fVar57 = (float)*(undefined8 *)(lVar16 + 0x78);
      fVar58 = (float)((ulong)*(undefined8 *)(lVar16 + 0x78) >> 0x20);
      piVar1 = (int *)(param_2[8] + lVar14);
      fVar46 = (float)puVar5[1];
      fVar34 = (float)*(undefined8 *)(lVar16 + 0x80);
      fVar36 = (float)((ulong)*(undefined8 *)(lVar16 + 0x80) >> 0x20);
      fVar37 = (float)*(undefined8 *)(lVar16 + 0x88);
      fVar66 = (float)((ulong)*(undefined8 *)(lVar16 + 0x88) >> 0x20);
      puVar5 = (undefined8 *)(*(long *)(lVar19 + lVar17) + (long)(iVar9 - iVar4) * 0x10);
      uVar64 = puVar5[1];
      uVar61 = *puVar5;
      *piVar1 = *piVar32;
      piVar1[1] = piVar32[1];
      uVar20 = *(undefined8 *)(piVar32 + 2);
      *(short *)(piVar1 + 4) = (short)piVar32[4];
      *(undefined8 *)(piVar1 + 2) = uVar20;
      fVar60 = (float)uVar61;
      fVar63 = (float)((ulong)uVar61 >> 0x20);
      *(undefined2 *)((long)piVar1 + 0x12) = *(undefined2 *)((long)piVar32 + 0x12);
      *(ulong *)(piVar1 + 0xe) = uVar15;
      *(ulong *)(piVar1 + 0xc) =
           CONCAT44(fVar35 + fVar62 * fVar40 + fVar49 * fVar38 + fVar55 * fVar39,
                    fVar33 + fVar59 * fVar40 + fVar47 * fVar38 + fVar53 * fVar39);
      *(ulong *)(piVar1 + 0x12) = uVar67;
      *(ulong *)(piVar1 + 0x10) =
           CONCAT44(fVar35 + fVar62 * fVar45 + fVar49 * fVar42 + fVar55 * fVar43,
                    fVar33 + fVar59 * fVar45 + fVar47 * fVar42 + fVar53 * fVar43);
      fVar43 = (float)uVar64;
      piVar1[5] = *piVar24;
      piVar1[6] = piVar24[1];
      uVar20 = *(undefined8 *)(piVar24 + 2);
      fVar38 = (float)uVar13;
      fVar39 = (float)((ulong)uVar13 >> 0x20);
      fVar40 = (float)uVar41;
      fVar42 = (float)((ulong)uVar41 >> 0x20);
      *(short *)(piVar1 + 9) = (short)piVar24[4];
      *(undefined8 *)(piVar1 + 7) = uVar20;
      uVar7 = *(undefined2 *)((long)piVar24 + 0x12);
      piVar1[2] = uVar31;
      piVar1[3] = uVar28;
      *(ulong *)(piVar1 + 0x16) =
           CONCAT44(fVar42 + fVar66 * fVar46 + fVar52 * fVar65 + fVar58 * fVar44,
                    fVar40 + fVar37 * fVar46 + fVar51 * fVar65 + fVar57 * fVar44);
      *(ulong *)(piVar1 + 0x14) =
           CONCAT44(fVar39 + fVar36 * fVar46 + fVar50 * fVar65 + fVar56 * fVar44,
                    fVar38 + fVar34 * fVar46 + fVar48 * fVar65 + fVar54 * fVar44);
      *(ulong *)(piVar1 + 0x1a) =
           CONCAT44(fVar42 + fVar66 * fVar43 + fVar52 * fVar60 + fVar58 * fVar63,
                    fVar40 + fVar37 * fVar43 + fVar51 * fVar60 + fVar57 * fVar63);
      *(ulong *)(piVar1 + 0x18) =
           CONCAT44(fVar39 + fVar36 * fVar43 + fVar50 * fVar60 + fVar56 * fVar63,
                    fVar38 + fVar34 * fVar43 + fVar48 * fVar60 + fVar54 * fVar63);
      *(undefined2 *)((long)piVar1 + 0x26) = uVar7;
      piVar1[7] = uVar6;
      piVar1[8] = (uint)param_6;
      if ((piVar27 == local_a0) || ((*(byte *)(piVar32 + 4) >> 4 & 1) == 0)) {
        iVar26 = 0;
        piVar1[10] = 0;
      }
      else {
        piVar1[10] = *piVar27;
        iVar26 = *piVar18;
      }
      piVar1[0xb] = iVar26;
      if (param_10 == 0) {
        lVar19 = param_2[0x13];
        lVar16 = *plVar21;
      }
      else {
        lVar19 = *(long *)(*(long *)(param_3 + 0x38) + (ulong)(uVar28 >> 0x16) * 0x100);
        FUN_030963b0(*(undefined8 *)(lVar19 + 0x20),uVar28 & 0x3fffff,local_80);
        fVar39 = (float)((ulong)local_80[0] >> 0x20);
        fVar38 = SUB84(local_80[0],0);
        fVar40 = SUB84(local_80[1],0);
        lVar16 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x80) >> 0x20) * fVar40 +
                          (float)((ulong)*(undefined8 *)(lVar19 + 0x60) >> 0x20) * fVar38 +
                          (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20) * fVar39,
                          (float)*(undefined8 *)(lVar19 + 0x80) * fVar40 +
                          (float)*(undefined8 *)(lVar19 + 0x60) * fVar38 +
                          (float)*(undefined8 *)(lVar19 + 0x70) * fVar39);
        lVar19 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x88) >> 0x20) * fVar40 +
                          (float)((ulong)*(undefined8 *)(lVar19 + 0x68) >> 0x20) * fVar38 +
                          (float)((ulong)*(undefined8 *)(lVar19 + 0x78) >> 0x20) * fVar39,
                          (float)*(undefined8 *)(lVar19 + 0x88) * fVar40 +
                          (float)*(undefined8 *)(lVar19 + 0x68) * fVar38 +
                          (float)*(undefined8 *)(lVar19 + 0x78) * fVar39);
      }
      lVar14 = lVar14 + 0x80;
      lVar12 = lVar12 + 4;
      param_6 = (ulong)uVar28;
      *(long *)(piVar1 + 0x1e) = lVar19;
      *(long *)(piVar1 + 0x1c) = lVar16;
    } while ((ulong)uVar8 << 7 != lVar14);
  }
  if (plVar30 != (long *)0x0) {
    lVar29 = *plVar30;
    if (((*(byte *)(lVar29 + 0x38) & 1) != 0) && (plVar30[6] != 0)) {
      puVar5 = (undefined8 *)plVar30[2];
      uVar15 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar30[3]) && (plVar30[2] = uVar15, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar30[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar30[2];
    uVar15 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar30[3]) && (plVar30[2] = uVar15, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar13 = nn::os::GetSystemTick();
      puVar5[1] = uVar13;
    }
    if (*(code **)(lVar29 + 0x20) != (code *)0x0) {
      (**(code **)(lVar29 + 0x20))(*(undefined8 *)(lVar29 + 0x28));
    }
  }
  return;
}


