/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fc3a30; name: FUN_02fc3a30
 */


void FUN_02fc3a30(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  byte bVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  uint *puVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 (*pauVar18) [12];
  undefined8 *puVar19;
  uint *puVar20;
  uint *puVar21;
  ushort uVar22;
  short sVar23;
  int iVar24;
  long unaff_x20;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 *local_80;
  undefined8 local_78;
  long lStack_70;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x290) + 0x738);
  if (iVar2 != 0) {
    unaff_x20 = nn::os::GetSystemTick();
  }
  uVar26 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(*param_2 + 0x90),
                                      (uint)*(ushort *)(*param_2 + 0x90)),4);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x50);
  uVar7 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(*param_3 + 0x90),(uint)*(ushort *)(*param_3 + 0x90)
                                    ),4);
  uStack_c8 = CONCAT44((float)((ulong)uVar10 >> 0x20) *
                       ((float)((ulong)uVar26 >> 0x20) + (float)((ulong)uVar7 >> 0x20)),
                       (float)uVar10 * ((float)uVar26 + (float)uVar7));
  fVar28 = *(float *)(param_2[5] + 0x20);
  fVar29 = *(float *)(param_3[5] + 0x20);
  local_e0 = CONCAT44(fVar28,fVar28);
  uStack_d8 = CONCAT44(fVar29,fVar29);
  local_d0 = CONCAT44(fVar28 + fVar29,fVar28 + fVar29);
  pauVar18 = (undefined1 (*) [12])param_3[6];
  uVar32 = (undefined4)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
  fVar30 = (float)*(undefined8 *)*pauVar18;
  fVar31 = (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20);
  pauVar4 = (undefined1 (*) [12])(pauVar18[1] + 4);
  uVar42 = (undefined4)((ulong)*(undefined8 *)pauVar18[2] >> 0x20);
  fVar34 = (float)*(undefined8 *)*pauVar4;
  fVar36 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(pauVar18[2] + 8);
  uVar45 = (undefined4)((ulong)*(undefined8 *)(pauVar18[3] + 4) >> 0x20);
  fVar43 = (float)*(undefined8 *)*pauVar1;
  fVar44 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar48._12_4_ = uVar42;
  auVar48._0_12_ = *pauVar4;
  auVar6._12_4_ = uVar42;
  auVar6._0_12_ = *pauVar4;
  auVar48 = NEON_ext(auVar48,auVar6,8,1);
  auVar46._12_4_ = uVar32;
  auVar46._0_12_ = *pauVar18;
  auVar5._12_4_ = uVar32;
  auVar5._0_12_ = *pauVar18;
  auVar46 = NEON_ext(auVar46,auVar5,8,1);
  fVar28 = auVar46._0_4_;
  fVar29 = auVar48._0_4_;
  auVar8._12_4_ = uVar45;
  auVar8._0_12_ = *pauVar1;
  auVar9._12_4_ = uVar45;
  auVar9._0_12_ = *pauVar1;
  auVar46 = NEON_ext(auVar8,auVar9,8,1);
  puVar19 = (undefined8 *)param_2[6];
  fVar39 = (float)puVar19[5];
  fVar35 = (float)puVar19[4];
  fVar41 = (float)((ulong)puVar19[4] >> 0x20);
  fVar33 = auVar46._4_4_;
  fVar47 = auVar46._0_4_;
  fVar40 = (float)puVar19[3];
  fVar38 = (float)puVar19[2];
  fVar37 = (float)((ulong)puVar19[2] >> 0x20);
  uStack_a8 = CONCAT44(fVar33 * fVar40 + fVar44 * fVar38 + fVar33 * fVar37,
                       fVar47 * fVar40 + fVar43 * fVar38 + fVar44 * fVar37);
  local_b0 = CONCAT44(fVar29 * fVar40 + fVar34 * fVar38 + fVar36 * fVar37,
                      fVar28 * fVar40 + fVar30 * fVar38 + fVar31 * fVar37);
  uStack_98 = CONCAT44(fVar33 * fVar39 + fVar44 * fVar35 + fVar33 * fVar41,
                       fVar47 * fVar39 + fVar43 * fVar35 + fVar44 * fVar41);
  uStack_a0 = CONCAT44(fVar29 * fVar39 + fVar34 * fVar35 + fVar36 * fVar41,
                       fVar28 * fVar39 + fVar30 * fVar35 + fVar31 * fVar41);
  fVar41 = (float)puVar19[1];
  fVar35 = (float)*puVar19;
  fVar38 = (float)((ulong)*puVar19 >> 0x20);
  uStack_b8 = CONCAT44(fVar33 * fVar41 + fVar44 * fVar35 + fVar33 * fVar38,
                       fVar47 * fVar41 + fVar43 * fVar35 + fVar44 * fVar38);
  local_c0 = CONCAT44(fVar29 * fVar41 + fVar34 * fVar35 + fVar36 * fVar38,
                      fVar28 * fVar41 + fVar30 * fVar35 + fVar31 * fVar38);
  auVar46 = *(undefined1 (*) [16])(puVar19 + 8);
  fVar35 = (*(float *)(puVar19 + 6) - (float)*(undefined8 *)pauVar18[4]) +
           (auVar46._0_4_ - (float)*(undefined8 *)(pauVar18[5] + 4));
  fVar38 = (*(float *)((long)puVar19 + 0x34) - (float)((ulong)*(undefined8 *)pauVar18[4] >> 0x20)) +
           (auVar46._4_4_ - (float)((ulong)*(undefined8 *)(pauVar18[5] + 4) >> 0x20));
  fVar41 = (*(float *)(puVar19 + 7) - (float)*(undefined8 *)(pauVar18[4] + 8)) +
           (auVar46._8_4_ - (float)*(undefined8 *)pauVar18[6]);
  uStack_88 = CONCAT44(fVar33 * fVar41 + fVar44 * fVar35 + fVar33 * fVar38,
                       fVar47 * fVar41 + fVar43 * fVar35 + fVar44 * fVar38);
  local_90 = CONCAT44(fVar29 * fVar41 + fVar34 * fVar35 + fVar36 * fVar38,
                      fVar28 * fVar41 + fVar30 * fVar35 + fVar31 * fVar38);
  lStack_70 = *(long *)(param_1 + 0x290) + 0x58;
  local_78 = 0;
  plVar27 = (long *)(param_1 + 0xe0);
  lVar25 = *(long *)(param_1 + 0x298);
  local_80 = param_4;
  if (*plVar27 == 0) goto LAB_02fc3c94;
  if (*(char *)(param_1 + 0xfb) == '\0') {
    FUN_02f24e3c(param_1 + 0x80,lVar25,param_1);
    goto LAB_02fc3c94;
  }
  puVar19 = (undefined8 *)(param_1 + 0xd0);
  uVar26 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(*plVar27 + 8) = 0x7777;
  plVar14 = *(long **)(param_1 + 200);
  iVar24 = *(int *)((long)plVar14 + 0x1c);
  iVar13 = iVar24 + *(int *)(*plVar14 + 8) + *(int *)(param_1 + 0xdc);
  if (iVar13 != 0) {
    puVar20 = (uint *)*puVar19;
    if (puVar20 == (uint *)plVar14[2]) {
      uVar22 = *(ushort *)(param_1 + 0xda);
LAB_02fc3c3c:
      sVar23 = (short)iVar24;
    }
    else {
      uVar22 = *(ushort *)(param_1 + 0xda);
      puVar21 = puVar20;
      puVar11 = (uint *)plVar14[2];
      if ((uint)uVar22 == (*puVar20 & 0xffff)) {
        puVar21 = *(uint **)(puVar20 + 2);
        *(undefined4 *)(param_1 + 0xd8) = 0;
        uVar22 = 0;
        puVar11 = (uint *)plVar14[2];
      }
      puVar20 = puVar11;
      if (puVar21 == puVar20) {
        iVar24 = *(int *)((long)plVar14 + 0x1c);
        goto LAB_02fc3c3c;
      }
      sVar23 = (short)*puVar21;
      puVar20 = puVar21;
    }
    *(ushort *)(param_1 + 0xda) = sVar23 - uVar22;
    *puVar19 = puVar20;
  }
  *(int *)(param_1 + 0xdc) = iVar13;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(param_1 + 200),uVar26,puVar19);
  plVar14 = *(long **)(param_1 + 200);
  lVar15 = plVar14[3];
  iVar13 = *(int *)((long)plVar14 + 0x1c);
  iVar24 = *(int *)(*plVar14 + 8);
  *(long *)(param_1 + 0xd0) = plVar14[2];
  *(short *)(param_1 + 0xd8) = (short)lVar15;
  *(short *)(param_1 + 0xda) = (short)iVar13;
  *(int *)(param_1 + 0xdc) = -(iVar13 + iVar24);
  *plVar27 = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_02fc3c94:
  plVar14 = *(long **)(param_1 + 0xb8);
  bVar12 = true;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(long **)(param_1 + 200) = plVar14;
  if ((*(byte *)(param_1 + 0x88) >> 1 & 1) == 0) {
    bVar12 = (*(byte *)((long)param_4 + 10) & 0x90) != 0;
  }
  *(bool *)(param_1 + 0xf8) = bVar12;
  bVar3 = *(byte *)((long)param_4 + 10);
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(byte *)(param_1 + 0xf9) = bVar3 >> 4 & 1;
  lVar15 = plVar14[3];
  iVar13 = *(int *)((long)plVar14 + 0x1c);
  iVar24 = *(int *)(*plVar14 + 8);
  *(long *)(param_1 + 0xd0) = plVar14[2];
  *(short *)(param_1 + 0xd8) = (short)lVar15;
  *(short *)(param_1 + 0xda) = (short)iVar13;
  *(int *)(param_1 + 0xdc) = -(iVar13 + iVar24);
  if ((int)plVar14[3] < 0xe91) {
    lVar15 = plVar14[2] + (long)(int)plVar14[3] + 0x20;
  }
  else {
    lVar15 = FUN_031c36f4();
    plVar14 = *(long **)(param_1 + 200);
  }
  *(long *)(param_1 + 0xe0) = lVar15;
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 0x10;
  *(int *)((long)plVar14 + 0x1c) = *(int *)((long)plVar14 + 0x1c) + 1;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 4) = param_4[1];
  **(undefined4 **)(param_1 + 0xe0) = *param_4;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0xc) = *(undefined2 *)((long)param_4 + 10);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  uVar17 = *(uint *)(param_1 + 0x80);
  if (uVar17 != param_4[1]) {
    if (*(char *)(param_1 + 0x84) == '\0') {
      uVar17 = param_4[1];
    }
    else {
      plVar14 = *(long **)(*(long *)(lVar25 + 8) + 0x658);
      (**(code **)(*plVar14 + 0x60))
                (plVar14,0,*(long *)(lVar25 + 0x500) + ((ulong)uVar17 & 0xffffff) * 0x20);
      *(undefined1 *)(param_1 + 0x84) = 0;
      uVar17 = param_4[1];
    }
  }
  *(uint *)(param_1 + 0x80) = uVar17;
  *(undefined4 *)(param_1 + 0xf4) = 2;
  puVar19 = *(undefined8 **)(param_1 + 0xe0);
  if (*(char *)((long)puVar19 + 0xe) != '\0') {
    iVar13 = *(int *)(*(long *)(param_1 + 200) + 0x18);
    if (iVar13 < 0xf91) {
      puVar16 = (undefined8 *)(*(long *)(*(long *)(param_1 + 200) + 0x10) + (long)iVar13 + 0x20);
    }
    else {
      puVar16 = (undefined8 *)FUN_031c36f4();
      puVar19 = (undefined8 *)*plVar27;
    }
    uVar26 = puVar19[1];
    *puVar16 = *puVar19;
    puVar16[1] = uVar26;
    *(undefined8 **)(param_1 + 0xe0) = puVar16;
    *(undefined4 *)(puVar16 + 1) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
    lVar25 = *(long *)(param_1 + 200);
    *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 0x10;
    *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
  }
  iVar13 = *(int *)(*(long *)(param_1 + 200) + 0x18);
  if (iVar13 < 0xea1) {
    lVar25 = *(long *)(*(long *)(param_1 + 200) + 0x10) + (long)iVar13 + 0x20;
  }
  else {
    lVar25 = FUN_031c36f4();
  }
  iVar13 = FUN_02fc3f4c(&DAT_0486b4c0,*(undefined8 *)(param_1 + 0x298),param_1,&local_e0,param_2,
                        param_3,local_80,lVar25,&local_e8);
  if (iVar2 != 0) {
    lVar25 = nn::os::GetSystemTick();
    *(long *)(local_e8 + 8) = (lVar25 - unaff_x20) + *(long *)(local_e8 + 8);
    *(int *)(local_e8 + 0x10) = *(int *)(local_e8 + 0x10) + 1;
  }
  if (iVar13 != 0) {
    lVar25 = *(long *)(param_1 + 200);
    if (*(long *)(param_1 + 0xe8) == 0) {
      *(long *)(param_1 + 0xe8) = *(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 0x18) + 0x20;
    }
    lVar15 = *(long *)(lVar25 + 0x10) + (long)*(int *)(lVar25 + 0x18);
    *(uint *)(param_1 + 0xf0) =
         *(uint *)(*(long *)(lVar15 + 200) + 0x14) | *(uint *)(param_1 + 0xf0) |
         *(uint *)(*(long *)(lVar15 + 0xd0) + 0x14);
    *(int *)(lVar25 + 0x18) = *(int *)(lVar25 + 0x18) + 0x100;
    *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
    *(int *)(*(long *)(param_1 + 0xe0) + 8) = *(int *)(*(long *)(param_1 + 0xe0) + 8) + 1;
    *(undefined1 *)(param_1 + 0xfb) = 0;
  }
  return;
}


