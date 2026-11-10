/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f34ee0; name: FUN_02f34ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f34ee0(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4,
                 uint param_5)

{
  undefined *puVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [14];
  undefined8 uVar9;
  undefined *puVar10;
  byte bVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  byte *pbVar24;
  long lVar25;
  long *plVar26;
  MutexType *pMVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  double dVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar61;
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 local_270;
  undefined8 local_268;
  ulong local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined2 local_24f;
  undefined1 local_24d;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  float fStack_1f8;
  float fStack_1f4;
  undefined1 *local_180;
  undefined8 local_178;
  undefined1 local_170 [224];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_68;
  uint local_64;
  
  *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x80;
  uVar14 = *(uint *)param_2[5];
  uVar3 = *(uint *)param_2[8];
  uVar29 = (ulong)uVar3;
  local_90 = *(undefined8 *)param_2[6];
  uStack_88 = *(undefined8 *)(param_2[6] + 8);
  local_80 = *(undefined8 *)param_2[7];
  local_180 = local_170;
  local_178 = -0x7ffffff800000000;
  local_68 = uVar14;
  local_64 = param_5;
  if ((0 < *(int *)(*(long *)(param_1 + 0x498) + 0x28)) &&
     (uVar20 = *(uint *)(param_2[8] + 4), uVar20 != uVar14)) {
    do {
      lVar25 = *(long *)(param_1 + 0x38);
      uVar28 = (ulong)(uVar20 & 0xffffff);
      if ((*(byte *)(lVar25 + uVar28 * 0xc0 + 0x88) & 1) != 0) {
        lVar19 = lVar25 + uVar28 * 0xc0;
        lVar16 = (long)(int)local_178;
        local_210 = *(undefined8 **)(lVar19 + 0x60);
        uStack_208 = *(ulong *)(lVar19 + 0x68);
        local_200 = *(undefined8 *)(lVar19 + 0x70);
        if ((int)(local_178._4_4_ & 0x7fffffff) <= (int)local_178) {
          FUN_02f47fc8(&local_180,lVar16 + 1);
        }
        puVar17 = (undefined8 *)(local_180 + (long)(int)local_178 * 0x1c);
        *(uint *)(puVar17 + 3) = uVar20;
        puVar17[1] = uStack_208;
        puVar17[2] = local_200;
        *puVar17 = local_210;
        local_178 = CONCAT44(local_178._4_4_,(int)(lVar16 + 1));
        uVar14 = local_68;
      }
      uVar20 = *(uint *)(lVar25 + uVar28 * 0xc0 + 0x84);
    } while (uVar20 != uVar14);
  }
  if (uVar3 == 0) {
    uVar61 = NEON_fmov(0x3f800000,4);
    auVar52 = *param_2;
    auVar58 = param_2[1];
    pauVar2 = param_2 + 2;
    fVar30 = (float)*(undefined8 *)(param_2[2] + 8);
    uVar39 = (undefined4)((ulong)*(undefined8 *)(param_2[2] + 8) >> 0x20);
    fVar67 = (float)*(undefined8 *)*pauVar2;
    fVar68 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar65 = NEON_ext(auVar58,auVar58,8,1);
    fVar41 = auVar58._4_4_;
    fVar48 = auVar58._0_4_;
    auVar64 = NEON_ext(auVar52,auVar52,8,1);
    auVar35._12_4_ = uVar39;
    auVar35._0_12_ = *(undefined1 (*) [12])*pauVar2;
    auVar45._12_4_ = uVar39;
    auVar45._0_12_ = *(undefined1 (*) [12])*pauVar2;
    auVar35 = NEON_ext(auVar35,auVar45,8,1);
    fVar31 = auVar52._0_4_;
    fVar46 = -(float)*(undefined8 *)param_2[3];
    fVar47 = -(float)((ulong)*(undefined8 *)param_2[3] >> 0x20);
    fVar66 = -(float)*(undefined8 *)(param_2[3] + 8);
    fVar40 = auVar52._4_4_;
    fVar71 = fVar30 + (float)uVar61;
    fVar49 = (float)uVar61 - fVar30;
    fVar72 = fVar68 - auVar58._8_4_;
    fVar73 = auVar52._8_4_ - fVar67;
    fVar70 = auVar52._8_4_ + fVar67;
    fVar69 = auVar58._8_4_ + fVar68;
    uVar61 = CONCAT44(fVar73,fVar72);
    if (fVar31 < -fVar41) {
      uVar61 = CONCAT44(fVar69,fVar70);
    }
    uVar34 = CONCAT44(fVar31 + fVar41 + fVar71,fVar48 - fVar40);
    if (fVar31 < -fVar41) {
      uVar34 = CONCAT44(fVar48 - fVar40,fVar71 - (fVar31 + fVar41));
    }
    uVar7 = CONCAT44(fVar49 - (fVar31 - fVar41),fVar40 + fVar48);
    uVar9 = CONCAT44(fVar73,fVar69);
    if (fVar41 < fVar31) {
      uVar7 = CONCAT44(fVar40 + fVar48,(fVar31 - fVar41) + fVar49);
      uVar9 = CONCAT44(fVar72,fVar70);
    }
    if (fVar30 < 0.0) {
      uVar61 = uVar7;
      uVar34 = uVar9;
    }
    fVar70 = (float)uVar61;
    fVar71 = (float)((ulong)uVar61 >> 0x20);
    fVar72 = (float)uVar34;
    fVar73 = (float)((ulong)uVar34 >> 0x20);
    fVar49 = fVar70 * fVar70 + fVar71 * fVar71;
    fVar69 = fVar72 * fVar72 + fVar73 * fVar73;
    fVar30 = fVar49 + fVar69;
    if (fVar30 == 0.0) {
      auVar52 = ZEXT816(0);
    }
    else {
      fVar30 = SQRT(fVar30);
      fVar49 = SQRT(fVar49 + fVar69);
      auVar52._0_4_ = fVar70 / fVar30;
      auVar52._4_4_ = fVar71 / fVar49;
      auVar52._8_4_ = fVar72 / fVar30;
      auVar52._12_4_ = fVar73 / fVar49;
    }
    *(float *)(*param_2 + 0xc) = auVar64._0_4_ * fVar66 + fVar31 * fVar46 + fVar40 * fVar47;
    *(long *)(param_2[10] + 8) = auVar52._8_8_;
    *(long *)param_2[10] = auVar52._0_8_;
    *(float *)(param_2[1] + 0xc) = auVar65._0_4_ * fVar66 + fVar48 * fVar46 + fVar41 * fVar47;
    *(float *)(param_2[2] + 0xc) = auVar35._0_4_ * fVar66 + fVar67 * fVar46 + fVar68 * fVar47;
    (**(code **)(*(long *)PTR_DAT_047d19f0 +
                 (ulong)*(byte *)(*(long *)(param_2[7] + 8) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_2[7] + 8),param_2,&local_210);
    uVar14 = local_68;
    fVar31 = (float)*(undefined8 *)(param_1 + 0x588) * 0.5;
    fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x588) >> 0x20) * 0.5;
    local_200._0_4_ = (float)local_200 + fVar31;
    local_200._4_4_ = local_200._4_4_ + fVar40;
    fStack_1f8 = fStack_1f8 + fVar31;
    fStack_1f4 = fStack_1f4 + fVar40;
    auVar64._0_8_ = CONCAT44(local_210._4_4_ - fVar40,(float)local_210 - fVar31);
    auVar64._8_4_ = (float)uStack_208 - fVar31;
    auVar64._12_4_ = uStack_208._4_4_ - fVar40;
    auVar65._8_8_ = _UNK_03cabeb8;
    auVar65._0_8_ = _DAT_03cabeb0;
    auVar35 = a64_TBL(ZEXT816(0),auVar64,auVar65);
    *(undefined8 *)param_2[7] = auVar64._0_8_;
    bVar55 = param_2[8][8];
    *(float *)(param_2[6] + 8) = fStack_1f8;
    *(int *)(param_2[6] + 0xc) = auVar35._12_4_;
    *(float *)param_2[6] = (float)local_200;
    *(float *)(param_2[6] + 4) = local_200._4_4_;
    auVar58._0_8_ =
         CONCAT44((int)(fVar40 * (float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20)),
                  (int)(fVar31 * (float)*(undefined8 *)(param_1 + 0x578)));
    auVar58._8_8_ = auVar58._0_8_;
    uVar61 = NEON_sqxtun(auVar58._0_8_,auVar58,4);
    *(short *)param_2[9] = (short)uVar61;
    *(short *)(param_2[9] + 2) = (short)uVar61;
    if ((bVar55 & 1) == 0) goto LAB_02f35d9c;
    puVar17 = (undefined8 *)(param_1 + 0x138);
    piVar23 = *(int **)(param_1 + 0x138);
    piVar12 = piVar23 + 1;
    do {
      iVar13 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar1 = PTR_DAT_047d1a08;
    } while (cVar4 != '\0');
    while (0xff < iVar13) {
      local_210 = (undefined8 *)&DAT_00000410;
      piVar12 = (int *)(**(code **)puVar1)(0,&local_210,0);
      if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
        (**(code **)(puVar1 + 0x10))(piVar12,"Block");
      }
      lVar25 = 0;
      do {
        lVar16 = lVar25 + 0x20;
        *(undefined8 *)((long)piVar12 + lVar25 + 0x10) = 0xffffff00ffffff;
        *(undefined8 *)((long)piVar12 + lVar25 + 0x18) = 0xffffff00ffffff;
        *(undefined8 *)((long)piVar12 + lVar25 + 0x20) = 0xffffff00ffffff;
        *(undefined8 *)((long)piVar12 + lVar25 + 0x28) = 0xffffff00ffffff;
        lVar25 = lVar16;
      } while (lVar16 != 0x400);
      if (piVar23 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *piVar23 + 1;
      }
      *piVar12 = iVar13;
      piVar12[1] = 0;
      piVar12[2] = 0;
      piVar12[3] = 0;
      do {
        if ((int *)*puVar17 != piVar23) {
          ClearExclusiveLocal();
          (**(code **)(puVar1 + 8))(0,piVar12,0);
          goto LAB_02f35548;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
        if (bVar5) {
          *puVar17 = piVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (piVar23 != (int *)0x0) {
        *(int **)(piVar23 + 2) = piVar12;
      }
LAB_02f35548:
      piVar23 = (int *)*puVar17;
      piVar12 = piVar23 + 1;
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    piVar23[(long)iVar13 + 4] = uVar14;
    *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x10;
    if (((byte)param_2[8][8] >> 2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))(*(long **)(param_1 + 0x4c0),&local_68,1,4);
    }
    lVar25 = *(long *)(param_1 + 0x698);
    if ((local_64 == 0) && (lVar25 != 0)) {
      *(ushort *)(param_2[5] + 8) = *(ushort *)(param_2[5] + 8) | 0x800;
      lVar25 = *(long *)(param_1 + 0x698);
    }
    if (lVar25 == 0) goto LAB_02f35d9c;
    uVar39 = (undefined4)((ulong)uStack_88 >> 0x20);
    uStack_228 = CONCAT44(uVar39,uVar39);
    local_270 = 0;
    local_268 = 0;
    local_210 = &local_200;
    uStack_208 = -0x7fffffe000000000;
    local_260 = CONCAT62(local_260._2_6_,0xffff);
    local_250 = 1;
    local_260 = local_260 & 0xffffffff;
    local_258 = 0;
    local_230 = local_80;
    uStack_218 = uStack_88;
    uStack_220 = local_90;
    local_24d = 0;
    local_24f = 0x208;
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
              (*(long **)(param_1 + 0x4c0),&local_270,&local_210);
    puVar1 = PTR_PTR_047d1a50;
    if (0 < (int)(float)uStack_208) {
      if (local_64 == 0) {
        lVar25 = 0;
        do {
          lVar16 = *(long *)(param_1 + 0x38);
          uVar29 = (ulong)*(uint *)((long)local_210 + lVar25 * 4) & 0xffffff;
          if ((*(byte *)(lVar16 + uVar29 * 0xc0 + 0x54) & 9) == 0) {
            if ((((param_2[8][8] & 1) == 0) || ((*(byte *)(lVar16 + uVar29 * 0xc0 + 0x88) & 1) == 0)
                ) || (lVar19 = *(long *)(*(long *)(param_1 + 0x8a8) + 0x48),
                     *(char *)(lVar19 + (ulong)*(ushort *)(param_2[8] + 10) * 0x50 + 0x18) != '\0'))
            {
              plVar26 = *(long **)(param_1 + 0x698);
            }
            else {
              plVar26 = *(long **)(param_1 + 0x698);
              if (*(char *)(lVar19 + (ulong)*(ushort *)(lVar16 + uVar29 * 0xc0 + 0x8a) * 0x50 + 0x18
                           ) == '\0') {
                FUN_02f579fc(plVar26,local_68);
                goto LAB_02f35c80;
              }
            }
            iVar13 = *(int *)(plVar26[0x71] +
                              (long)*(int *)(*(long *)(*plVar26 + 0x38) + uVar29 * 0xc0 + 0x80) *
                              0x20 + 0x10);
            if ((iVar13 != -1) &&
               (lVar16 = *(long *)(plVar26[0x73] + (long)iVar13 * 8),
               *(char *)(lVar16 + 0x25) == '\0')) {
              iVar15 = (int)plVar26[0x67];
              lVar19 = (long)iVar15;
              if ((int)(*(uint *)((long)plVar26 + 0x33c) & 0x7fffffff) <= iVar15) {
                FUN_0133bb88(plVar26 + 0x66,PTR_PTR_047d1a50,lVar19 + 1);
                iVar15 = (int)plVar26[0x67];
              }
              *(int *)(plVar26[0x66] + (long)iVar15 * 4) = iVar13;
              *(int *)(plVar26 + 0x67) = (int)(lVar19 + 1);
              *(undefined1 *)(lVar16 + 0x25) = 1;
            }
          }
LAB_02f35c80:
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)(float)uStack_208);
      }
      else {
        lVar25 = 0;
        iVar13 = (int)(float)uStack_208;
        do {
          uVar29 = (ulong)*(uint *)((long)local_210 + lVar25 * 4) & 0xffffff;
          if ((*(byte *)(*(long *)(param_1 + 0x38) + uVar29 * 0xc0 + 0x54) & 9) == 0) {
            plVar26 = *(long **)(param_1 + 0x698);
            iVar15 = *(int *)(plVar26[0x71] +
                              (long)*(int *)(*(long *)(*plVar26 + 0x38) + uVar29 * 0xc0 + 0x80) *
                              0x20 + 0x10);
            if ((iVar15 != -1) &&
               (lVar16 = *(long *)(plVar26[0x73] + (long)iVar15 * 8),
               *(char *)(lVar16 + 0x25) == '\0')) {
              iVar13 = (int)plVar26[0x67];
              lVar19 = (long)iVar13;
              if ((int)(*(uint *)((long)plVar26 + 0x33c) & 0x7fffffff) <= iVar13) {
                FUN_0133bb88(plVar26 + 0x66,puVar1,lVar19 + 1);
                iVar13 = (int)plVar26[0x67];
              }
              *(int *)(plVar26[0x66] + (long)iVar13 * 4) = iVar15;
              *(int *)(plVar26 + 0x67) = (int)(lVar19 + 1);
              *(undefined1 *)(lVar16 + 0x25) = 1;
              iVar13 = (int)(float)uStack_208;
            }
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < iVar13);
      }
    }
    lVar25 = uStack_208;
    uVar14 = (uint)uStack_208._4_4_;
    uStack_208 = (ulong)(uint)uStack_208._4_4_ << 0x20;
    if ((lVar25 < 0) || (local_210 == (undefined8 *)0x0)) goto LAB_02f35d9c;
    pcVar18 = *(code **)(*(long *)PTR_PTR_047d1a50 + 0x20);
    plVar26 = (long *)PTR_PTR_047d1a50;
  }
  else {
    lVar25 = *(long *)(param_1 + 0x150);
    fVar31 = 0.0;
    if (param_4 == 0) {
      lVar16 = lVar25 + uVar29 * 0x80;
      fVar31 = *(float *)(*param_2 + 0xc);
      fVar40 = *(float *)(param_2[1] + 0xc);
      fVar49 = *(float *)(param_2[2] + 0xc);
      dVar60 = (double)*(float *)(param_2[3] + 8) + (double)*(float *)(param_2[4] + 8) +
               (double)(*(float *)(param_2[2] + 8) * fVar49 +
                       *(float *)(*param_2 + 8) * fVar31 + *(float *)(param_2[1] + 8) * fVar40);
      dVar56 = (double)*(float *)param_2[3] + (double)*(float *)param_2[4] +
               (double)(*(float *)param_2[2] * fVar49 +
                       *(float *)*param_2 * fVar31 + *(float *)param_2[1] * fVar40);
      dVar50 = (double)*(float *)(param_2[3] + 4) + (double)*(float *)(param_2[4] + 4) +
               (double)(*(float *)(param_2[2] + 4) * fVar49 +
                       *(float *)(*param_2 + 4) * fVar31 + *(float *)(param_2[1] + 4) * fVar40);
      dVar32 = dVar56 - *(double *)(lVar16 + 0x10);
      dVar33 = dVar60 - *(double *)(lVar16 + 0x20);
      dVar42 = dVar50 - *(double *)(lVar16 + 0x18);
      dVar32 = dVar32 * dVar32 + dVar42 * dVar42 + dVar33 * dVar33;
      dVar33 = SQRT(dVar32);
      if (NAN(dVar33)) {
        dVar33 = sqrt(dVar32);
      }
      fVar31 = (float)dVar33;
      *(double *)(lVar16 + 0x20) = dVar60;
      *(double *)(lVar16 + 0x10) = dVar56;
      *(double *)(lVar16 + 0x18) = dVar50;
    }
    fVar40 = 0.0;
    fVar49 = 0.0;
    if (param_3 != (undefined1 (*) [16])0x0) {
      auVar44._8_8_ = _UNK_03caab28;
      auVar44._0_8_ = _DAT_03caab20;
      auVar51._8_8_ = _UNK_03caa778;
      auVar51._0_8_ = _DAT_03caa770;
      auVar45 = a64_TBL(ZEXT816(0),*param_3,auVar44);
      auVar35 = a64_TBL(ZEXT816(0),*param_3,auVar51);
      auVar57._8_8_ = _UNK_03caa6a8;
      auVar57._0_8_ = _DAT_03caa6a0;
      auVar62._8_8_ = _UNK_03caab38;
      auVar62._0_8_ = _DAT_03caab30;
      auVar58 = a64_TBL(ZEXT816(0),param_2[10],auVar57);
      auVar52 = a64_TBL(ZEXT816(0),param_2[10],auVar62);
      auVar63._0_4_ = auVar35._0_4_ * auVar52._0_4_ - auVar45._0_4_ * auVar58._0_4_;
      auVar63._4_4_ = auVar35._4_4_ * auVar52._4_4_ - auVar45._4_4_ * auVar58._4_4_;
      auVar63._8_4_ = auVar35._8_4_ * auVar52._8_4_ - auVar45._8_4_ * auVar58._8_4_;
      auVar63._12_4_ = auVar35._12_4_ * auVar52._12_4_ - auVar45._12_4_ * auVar58._12_4_;
      pauVar2 = (undefined1 (*) [16])(lVar25 + uVar29 * 0x80);
      auVar6._8_4_ = (int)_UNK_03cab148;
      auVar6._0_8_ = _DAT_03cab140;
      auVar6._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
      auVar64 = a64_TBL(ZEXT816(0),auVar63,auVar6);
      fVar48 = auVar64._12_4_ - (auVar35._12_4_ * auVar58._12_4_ + auVar45._12_4_ * auVar52._12_4_);
      auVar36._0_4_ =
           -(auVar64._0_4_ - (auVar35._0_4_ * auVar58._0_4_ + auVar45._0_4_ * auVar52._0_4_));
      auVar36._4_4_ =
           -(auVar64._4_4_ - (auVar35._4_4_ * auVar58._4_4_ + auVar45._4_4_ * auVar52._4_4_));
      auVar36._8_4_ =
           -(auVar64._8_4_ - (auVar35._8_4_ * auVar58._8_4_ + auVar45._8_4_ * auVar52._8_4_));
      auVar36._12_4_ = -fVar48;
      auVar45 = NEON_ext(auVar36,auVar36,4,1);
      auVar35 = *pauVar2;
      auVar52 = NEON_ext(auVar35,auVar35,8,1);
      uVar61 = NEON_ext(auVar35._0_8_,auVar52._0_8_,4,1);
      fVar40 = auVar35._0_4_;
      fVar41 = auVar35._4_4_;
      fVar47 = auVar35._8_4_;
      fVar66 = auVar35._12_4_;
      auVar59._0_4_ = fVar40 * auVar45._0_4_ - (float)uVar61 * auVar36._0_4_;
      auVar59._4_4_ = fVar41 * auVar45._4_4_ - (float)((ulong)uVar61 >> 0x20) * auVar36._4_4_;
      auVar59._8_4_ = fVar47 * auVar36._0_4_ - fVar40 * auVar36._8_4_;
      auVar59._12_4_ = fVar66 * auVar36._4_4_ - fVar41 * fVar48;
      auVar35 = NEON_ext(auVar59,auVar59,4,1);
      auVar53._0_4_ = fVar40 * auVar36._0_4_;
      auVar53._4_4_ = fVar41 * auVar36._4_4_;
      auVar53._8_4_ = fVar47 * auVar36._8_4_;
      auVar53._12_4_ = fVar66 * fVar48;
      fVar49 = auVar36._0_4_ * fVar66 + (auVar35._0_4_ - fVar40 * fVar48);
      fVar46 = auVar36._4_4_ * fVar66 + (auVar35._4_4_ - fVar41 * fVar48);
      fVar47 = auVar36._8_4_ * fVar66 + (auVar59._0_4_ - fVar47 * fVar48);
      auVar35 = NEON_ext(auVar53,auVar53,8,1);
      fVar40 = auVar35._0_4_ + auVar35._4_4_;
      fVar49 = fVar49 + fVar49;
      fVar46 = fVar46 + fVar46;
      fVar47 = fVar47 + fVar47;
      bVar55 = (byte)(-(uint)(auVar53._0_4_ + auVar53._4_4_ + fVar40 < 0.0) >> 0x18);
      uVar28 = CONCAT17((char)(-(uint)(auVar53._0_4_ + auVar53._4_4_ + fVar40 < 0.0) >> 0x18),
                        (uint7)(bVar55 & 0x80) << 0x18) & 0x80ffffffffffffff;
      fVar41 = (float)CONCAT13((byte)(uVar28 >> 0x18) ^ (byte)((uint)fVar49 >> 0x18),SUB43(fVar49,0)
                              );
      auVar43._0_8_ =
           CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)((uint)fVar46 >> 0x18),
                    CONCAT16((char)((uint)fVar46 >> 0x10),
                             CONCAT15((char)((uint)fVar46 >> 8),CONCAT14(SUB41(fVar46,0),fVar41))));
      auVar43[8] = SUB41(fVar47,0);
      auVar43[9] = (undefined1)((uint)fVar47 >> 8);
      auVar43[10] = (undefined1)((uint)fVar47 >> 0x10);
      auVar43[0xb] = bVar55 & 0x80 ^ (byte)((uint)fVar47 >> 0x18);
      auVar54._0_4_ = auVar36._0_4_ * auVar36._0_4_;
      auVar54._4_4_ = auVar36._4_4_ * auVar36._4_4_;
      auVar54._8_4_ = auVar36._8_4_ * auVar36._8_4_;
      auVar54._12_4_ = fVar48 * fVar48;
      auVar35 = NEON_ext(auVar54,auVar54,8,1);
      fVar49 = auVar35._0_4_ + auVar35._4_4_;
      fVar40 = auVar54._0_4_ + auVar54._4_4_ + fVar49;
      if (fVar40 == 0.0) {
        fVar49 = 0.0;
        fVar46 = 0.0;
        fVar40 = 0.0;
        fVar48 = 0.0;
      }
      else {
        fVar40 = SQRT(fVar40);
        fVar47 = SQRT(auVar54._0_4_ + auVar54._4_4_ + fVar49);
        fVar49 = auVar36._0_4_ / fVar40;
        fVar46 = auVar36._4_4_ / fVar47;
        fVar40 = auVar36._8_4_ / fVar40;
        fVar48 = fVar48 / fVar47;
      }
      *(float *)(*pauVar2 + 8) = fVar40;
      *(float *)(*pauVar2 + 0xc) = fVar48;
      *(float *)*pauVar2 = fVar49;
      *(float *)(*pauVar2 + 4) = fVar46;
      fVar49 = (float)((ulong)auVar43._0_8_ >> 0x20);
      fVar49 = fVar49 * fVar49;
      fVar48 = auVar43._8_4_ * auVar43._8_4_;
      fVar40 = SQRT(fVar48 + fVar41 * fVar41 + fVar49);
      fVar49 = SQRT(fVar48 + fVar41 * fVar41 + fVar49);
    }
    lVar25 = lVar25 + uVar29 * 0x80;
    local_210 = (undefined8 *)
                CONCAT44((float)*(double *)(lVar25 + 0x18),(float)*(double *)(lVar25 + 0x10));
    uStack_208 = (ulong)(uint)(float)*(double *)(lVar25 + 0x20);
    bVar11 = (**(code **)(**(long **)(param_1 + 0x4b0) + 0x20))
                       (*(long **)(param_1 + 0x4b0),&local_210);
    pbVar24 = (byte *)(lVar25 + 0x5e);
    bVar55 = *pbVar24;
    if (bVar55 != bVar11) {
      puVar22 = (uint *)(lVar25 + 0x4c);
      if ((*puVar22 == 0) || (*puVar22 == 0x7fffffff)) {
        *pbVar24 = bVar11;
      }
      else {
        pMVar27 = *(MutexType **)(param_1 + 0x480);
        nn::os::LockMutex(pMVar27);
        uVar14 = *puVar22;
        piVar12 = (int *)(param_1 + (ulong)bVar55 * 0x18 + 0x188);
        if (uVar14 < (uint)((long)*piVar12 + -1)) {
          lVar16 = param_1 + (ulong)bVar55 * 0x18;
          iVar13 = *(int *)(*(long *)(lVar16 + 0x180) + ((long)*piVar12 + -1) * 4);
          *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar13 * 0x80 + 0x4c) = uVar14;
          *(int *)(*(long *)(lVar16 + 0x180) + (long)(int)uVar14 * 4) = iVar13;
        }
        *pbVar24 = 0xff;
        *puVar22 = 0x7fffffff;
        *piVar12 = *piVar12 + -1;
        nn::os::UnlockMutex(pMVar27);
        *pbVar24 = bVar11;
        pMVar27 = *(MutexType **)(param_1 + 0x480);
        lVar19 = param_1 + (ulong)bVar11 * 0x18;
        nn::os::LockMutex(pMVar27);
        *puVar22 = *(uint *)(lVar19 + 0x188);
        iVar13 = *(int *)(lVar19 + 0x188);
        lVar16 = (long)iVar13;
        if ((int)(*(uint *)(lVar19 + 0x18c) & 0x7fffffff) <= iVar13) {
          FUN_02f1dbfc((long *)(lVar19 + 0x180),PTR_PTR_047d1a50,lVar16 + 1);
          iVar13 = *(int *)(lVar19 + 0x188);
        }
        *(uint *)(*(long *)(lVar19 + 0x180) + (long)iVar13 * 4) = uVar3;
        *(int *)(lVar19 + 0x188) = (int)(lVar16 + 1);
        nn::os::UnlockMutex(pMVar27);
      }
      uVar14 = *(uint *)(lVar25 + 0x48);
      lVar16 = *(long *)(param_1 + 0x140);
      uVar3 = uVar14;
      do {
        lVar19 = *(long *)(lVar16 + 0x10);
        uVar29 = (ulong)uVar3 & 0xffffff;
        if ((*(byte *)(lVar19 + uVar29 * 0xc0 + 0x54) >> 3 & 1) != 0) {
          *(byte *)(*(long *)(lVar16 + 0xd0) + uVar29) = bVar11;
        }
        lVar19 = lVar19 + uVar29 * 0xc0;
        *(ushort *)(lVar19 + 0x58) = *(ushort *)(lVar19 + 0x58) | 0x20;
        uVar3 = *(uint *)(lVar19 + 0x84);
      } while (uVar3 != uVar14);
    }
    uVar3 = local_68;
    auVar37._0_8_ =
         CONCAT44((int)(fVar31 * (float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20)),
                  (int)(fVar31 * (float)*(undefined8 *)(param_1 + 0x578)));
    auVar37._8_8_ = auVar37._0_8_;
    uVar61 = NEON_sqxtun(auVar37._0_8_,auVar37,4);
    uVar14 = (uint)(fVar40 * 41720.875 + 0.9999);
    if (0xfffe < (int)uVar14) {
      uVar14 = 0xffff;
    }
    uVar20 = local_68;
    do {
      lVar16 = *(long *)(param_1 + 0x38) + (ulong)(uVar20 & 0xffffff) * 0xc0;
      auVar35 = FUN_02f1ff30(param_1 + 0x530,
                             *(long *)(param_1 + 0x8b8) + (ulong)*(byte *)(lVar16 + 0x89) * 0x50 +
                             0x20,param_1 + 0x4e0,lVar16,
                             *(long *)(param_1 + 0x150) + (ulong)*(uint *)(lVar16 + 0x80) * 0x80);
      auVar8._2_12_ = auVar35._4_12_;
      auVar8._0_2_ = *(ushort *)(lVar16 + 0x94);
      auVar38._0_8_ =
           CONCAT44((int)((float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20) *
                         fVar49 * (float)((uint)*(ushort *)(lVar16 + 0x94) << 0x10)),
                    (int)((float)*(undefined8 *)(param_1 + 0x578) *
                         fVar40 * (float)(auVar8._0_4_ << 0x10)));
      auVar38._8_8_ = auVar38._0_8_;
      uVar34 = NEON_sqxtun(auVar38._0_8_,auVar38,4);
      uVar20 = (uint)*(ushort *)(lVar16 + 0x5c) + (uint)(ushort)uVar61 + (uint)(ushort)uVar34;
      uVar21 = (uint)*(ushort *)(lVar16 + 0x5e) + (uint)(ushort)uVar34;
      if (0xfffe < uVar20) {
        uVar20 = 0xffff;
      }
      if (0xfffe < uVar21) {
        uVar21 = 0xffff;
      }
      *(short *)(lVar16 + 0x5e) = (short)uVar21;
      *(short *)(lVar16 + 0x5c) = (short)uVar20;
      uVar21 = (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU) & 0xffff) +
               (uint)*(ushort *)(lVar16 + 0x5a);
      *(ushort *)(lVar16 + 0x58) = *(ushort *)(lVar16 + 0x58) | 4;
      uVar20 = *(uint *)(lVar16 + 0x84);
      if (0xfffe < uVar21) {
        uVar21 = 0xffff;
      }
      *(short *)(lVar16 + 0x5a) = (short)uVar21;
      puVar1 = PTR_DAT_047d1a08;
    } while (uVar20 != uVar3);
    plVar26 = *(long **)(param_1 + 0x698);
    if (plVar26 == (long *)0x0) goto LAB_02f35d9c;
    if (local_64 == 0) {
      FUN_02f35f08(param_1,local_68,0);
      goto LAB_02f35d9c;
    }
    if ((*(int *)(lVar25 + 0x4c) != 0x7fffffff) && (*(int *)(lVar25 + 0x4c) != 0))
    goto LAB_02f35d9c;
    local_64 = local_68;
    uVar14 = local_68;
    do {
      lVar25 = *(long *)(param_1 + 0x38);
      piVar23 = (int *)plVar26[99];
      plVar26 = plVar26 + 99;
      piVar12 = piVar23 + 1;
      do {
        iVar13 = *piVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      while (0xff < iVar13) {
        local_210 = (undefined8 *)&DAT_00000410;
        piVar12 = (int *)(**(code **)puVar1)(0,&local_210,0);
        if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
          (**(code **)(puVar1 + 0x10))(piVar12,"Block");
        }
        lVar16 = 0;
        do {
          lVar19 = lVar16 + 0x20;
          *(undefined8 *)((long)piVar12 + lVar16 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar12 + lVar16 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar12 + lVar16 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar12 + lVar16 + 0x28) = 0xffffff00ffffff;
          lVar16 = lVar19;
        } while (lVar19 != 0x400);
        if (piVar23 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar23 + 1;
        }
        *piVar12 = iVar13;
        piVar12[1] = 0;
        piVar12[2] = 0;
        piVar12[3] = 0;
        do {
          if ((int *)*plVar26 != piVar23) {
            ClearExclusiveLocal();
            (**(code **)(puVar1 + 8))(0,piVar12,0);
            goto LAB_02f35a8c;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar5) {
            *plVar26 = (long)piVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (piVar23 != (int *)0x0) {
          *(int **)(piVar23 + 2) = piVar12;
        }
LAB_02f35a8c:
        piVar23 = (int *)*plVar26;
        piVar12 = piVar23 + 1;
        do {
          iVar13 = *piVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar5) {
            *piVar12 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      piVar23[(long)iVar13 + 4] = uVar14;
      plVar26 = *(long **)(param_1 + 0x698);
      uVar14 = *(uint *)(lVar25 + (ulong)(uVar14 & 0xffffff) * 0xc0 + 0x84);
    } while (uVar14 != local_64);
    uVar29 = (ulong)local_68;
    iVar13 = *(int *)(plVar26[0x71] +
                      (long)*(int *)(*(long *)(*plVar26 + 0x38) + (uVar29 & 0xffffff) * 0xc0 + 0x80)
                      * 0x20 + 0x10);
    if ((iVar13 != -1) &&
       (lVar25 = *(long *)(plVar26[0x73] + (long)iVar13 * 8), *(char *)(lVar25 + 0x25) == '\0')) {
      iVar15 = (int)plVar26[0x67];
      lVar16 = (long)iVar15;
      if ((int)(*(uint *)((long)plVar26 + 0x33c) & 0x7fffffff) <= iVar15) {
        FUN_0133bb88(plVar26 + 0x66,PTR_PTR_047d1a50,lVar16 + 1);
        iVar15 = (int)plVar26[0x67];
      }
      *(int *)(plVar26[0x66] + (long)iVar15 * 4) = iVar13;
      *(int *)(plVar26 + 0x67) = (int)(lVar16 + 1);
      *(undefined1 *)(lVar25 + 0x25) = 1;
      uVar29 = (ulong)local_68;
    }
    puVar10 = PTR_PTR_047d1a50;
    local_210 = &local_200;
    uStack_208._0_4_ = 0.0;
    uStack_208._4_4_ = -2.24208e-44;
    lVar25 = *(long *)(param_1 + 0x38);
    iVar13 = 0;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    uVar28 = uVar29;
    do {
      uVar28 = (ulong)((uint)uVar28 & 0xffffff);
      if ((*(byte *)(lVar25 + uVar28 * 0xc0 + 0x88) >> 2 & 1) != 0) {
        iVar15 = iVar13 + 1;
        if ((int)((uint)uStack_208._4_4_ & 0x7fffffff) <= iVar13) {
          FUN_02f23d90(&local_210,puVar1,(long)iVar15);
          iVar13 = (int)(float)uStack_208;
        }
        *(undefined4 *)((long)local_210 + (long)iVar13 * 4) =
             *(undefined4 *)(lVar25 + uVar28 * 0xc0 + 0x50);
        lVar25 = *(long *)(param_1 + 0x38);
        iVar13 = iVar15;
        uStack_208._0_4_ = (float)iVar15;
      }
      uVar14 = *(uint *)(lVar25 + uVar28 * 0xc0 + 0x84);
      uVar28 = (ulong)uVar14;
    } while (uVar14 != (uint)uVar29);
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
              (*(long **)(param_1 + 0x4c0),local_210,iVar13,4);
    uVar14 = (uint)uStack_208._4_4_;
    uStack_208 = (ulong)(uint)uStack_208._4_4_ << 0x20;
    if (((int)uVar14 < 0) || (local_210 == (undefined8 *)0x0)) goto LAB_02f35d9c;
    pcVar18 = *(code **)(*(long *)(puVar10 + 0x20) + 0x20);
    plVar26 = (long *)(puVar10 + 0x20);
  }
  (*pcVar18)(plVar26,local_210,(ulong)uVar14 << 2);
LAB_02f35d9c:
  if (0 < *(int *)(*(long *)(param_1 + 0x498) + 0x28)) {
    FUN_0300ebf8(*(undefined8 *)(param_1 + 0x498),param_2,&local_90,param_2 + 6);
    if (0 < (int)local_178) {
      lVar16 = 0;
      lVar25 = 0;
      do {
        puVar17 = (undefined8 *)(local_180 + lVar16);
        local_210 = (undefined8 *)*puVar17;
        uStack_208 = puVar17[1];
        local_200 = puVar17[2];
        lVar19 = *(long *)(param_1 + 0x38) + ((ulong)*(uint *)(puVar17 + 3) & 0xffffff) * 0xc0;
        local_270 = *(undefined8 *)(lVar19 + 0x60);
        local_268 = *(undefined8 *)(lVar19 + 0x68);
        local_260 = *(ulong *)(lVar19 + 0x70);
        FUN_0300ebf8(*(undefined8 *)(param_1 + 0x498),lVar19,&local_210,&local_270);
        lVar25 = lVar25 + 1;
        lVar16 = lVar16 + 0x1c;
      } while (lVar25 < (int)local_178);
    }
  }
  lVar25 = local_178;
  uVar14 = local_68;
  do {
    lVar16 = *(long *)(param_1 + 0x38);
    uVar29 = (ulong)(uVar14 & 0xffffff);
    if ((*(byte *)(lVar16 + uVar29 * 0xc0 + 0x88) & 1) != 0) {
      lVar19 = lVar16 + uVar29 * 0xc0;
      *(undefined2 *)(lVar19 + 0x5e) = 0xffff;
      *(undefined4 *)(lVar19 + 0x5a) = 0xffffffff;
    }
    uVar14 = *(uint *)(lVar16 + uVar29 * 0xc0 + 0x84);
  } while (uVar14 != local_68);
  uVar29 = (ulong)local_178._4_4_;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  if ((-1 < lVar25) && (local_180 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_180,uVar29 * 0x1c);
  }
  return;
}


