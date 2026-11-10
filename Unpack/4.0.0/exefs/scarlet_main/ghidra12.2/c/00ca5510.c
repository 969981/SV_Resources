/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca5510; name: FUN_00ca5510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca5510(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint uVar28;
  undefined4 uVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  uint uVar37;
  float *pfVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  float fVar52;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  uint local_264;
  undefined8 local_210;
  ulong uStack_208;
  uint local_1fc;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c4;
  float fStack_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1a4;
  float fStack_17c;
  float fStack_174;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  bool local_e8 [4];
  undefined4 local_e4;
  float local_e0 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((*(char *)(param_1 + 0x1b0) == '\0') || (*(long *)(param_1 + 0x188) == 0)) {
    return;
  }
  if (((DAT_048417a0 & 1) == 0) && (iVar33 = __cxa_guard_acquire(&DAT_048417a0), iVar33 != 0)) {
    uRam0000000004841798 = _UNK_03cac298;
    _DAT_04841790 = _DAT_03cac290;
    __cxa_guard_release(&DAT_048417a0);
  }
  plVar2 = (long *)(param_1 + 0x1b8);
  lVar30 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar27) {
      *plVar2 = lVar30;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ca5578;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar27) {
            *plVar2 = lVar30;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ca5578;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar27) {
      *plVar2 = lVar30;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ca5578:
  if ((*(char *)(param_1 + 0x1b0) != '\0') && (*(long *)(param_1 + 0x188) != 0)) {
    local_1fc = *(uint *)(param_1 + 0x17c);
    uVar39 = *(uint *)(param_1 + 0x180);
    uVar37 = *(uint *)(param_1 + 0x174);
    local_264 = *(uint *)(param_1 + 0x178);
    uVar31 = uVar39;
    if (0xb < (int)uVar39) {
      uVar31 = 0xc;
    }
    uVar31 = uVar31 + 4;
    if ((int)uVar39 < (int)uVar31) {
      iVar33 = *(int *)(param_1 + 0x120);
      fVar8 = (float)*(undefined8 *)(param_1 + 0x130);
      fVar57 = (float)*(undefined8 *)(param_1 + 0x138);
      auVar53._4_4_ = fVar57;
      auVar53._0_4_ = fVar8;
      auVar53._8_4_ = fVar8;
      auVar53._12_4_ = fVar57;
      auVar53 = NEON_ext(ZEXT816(0),auVar53,8,1);
      fVar66 = (*(float *)(param_1 + 0x140) - fVar8) / (float)iVar33;
      auVar53 = NEON_ext(auVar53,auVar53,8,1);
      fVar64 = (*(float *)(param_1 + 0x148) - fVar57) / (float)iVar33;
      fVar61 = (float)_DAT_04841790;
      fVar56 = auVar53._4_4_ + fVar64 * (float)((ulong)_DAT_04841790 >> 0x20);
      uVar48 = (undefined2)((uint)fVar56 >> 0x10);
      pfVar38 = (float *)(param_1 + 400);
      fVar8 = *pfVar38;
      uVar23 = *(undefined8 *)pfVar38;
      uVar22 = *(undefined8 *)pfVar38;
      uVar21 = *(undefined8 *)pfVar38;
      uVar20 = *(undefined8 *)pfVar38;
      uVar19 = *(undefined8 *)pfVar38;
      uVar18 = *(undefined8 *)pfVar38;
      uVar10 = *(ulong *)(param_1 + 0x1a8);
      fVar57 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x188) + 0x40));
      fVar57 = fVar57 / ((float)*(undefined8 *)(param_1 + 0x1a0) - fVar8);
      uVar6 = uVar10 & 0xffffffff;
      uVar44 = SUB42(fVar57,0);
      while( true ) {
        iVar40 = *(int *)(param_1 + (long)(int)uVar39 * 8 + 0x54);
        if (iVar40 < iVar33) {
          do {
            iVar32 = *(int *)(param_1 + (-(ulong)((uVar39 & 0x7fffffff) >> 0x1e) &
                                         0xfffffffc00000000 | (ulong)(uVar39 << 1) << 2 | 4) + 0x54)
            ;
            fVar9 = auVar53._0_4_ + fVar66 * fVar61 + fVar66 * (float)iVar40;
            uVar45 = SUB42(fVar9,0);
            uVar49 = (undefined2)((uint)fVar9 >> 0x10);
            uStack_114 = (undefined4)(CONCAT26(uVar49,CONCAT24(uVar45,fVar9)) >> 0x20);
            uStack_11c = (undefined4)(CONCAT26(uVar49,CONCAT24(uVar45,fVar9)) >> 0x20);
            fStack_17c = (float)(CONCAT26(uVar48,CONCAT24(SUB42(fVar56,0),fVar56)) >> 0x20);
            fStack_174 = (float)(CONCAT26(uVar48,CONCAT24(SUB42(fVar56,0),fVar56)) >> 0x20);
            iVar41 = iVar32;
            if (iVar32 + 0x3f < iVar33) {
              do {
                local_e0[0] = 0.0;
                local_e0[1] = 0.0;
                local_e0[2] = 0.0;
                local_e0[3] = 0.0;
                local_d0 = CONCAT44(fStack_17c + fVar64 * (float)(iVar41 + 4),
                                    fVar56 + fVar64 * (float)iVar41);
                uStack_c8 = CONCAT44(fStack_174 + fVar64 * (float)(iVar41 + 0xc),
                                     fVar56 + fVar64 * (float)(iVar41 + 8));
                fVar42 = fVar56 + fVar64 * (float)(iVar41 + 0x10);
                fVar58 = fStack_17c + fVar64 * (float)(iVar41 + 0x14);
                uVar46 = SUB42(fVar58,0);
                uVar47 = (undefined2)((uint)fVar58 >> 0x10);
                fVar58 = fStack_174 + fVar64 * (float)(iVar41 + 0x1c);
                local_b0 = fVar56 + fVar64 * (float)(iVar41 + 0x20);
                fStack_ac = fStack_17c + fVar64 * (float)(iVar41 + 0x24);
                fStack_a8 = fVar56 + fVar64 * (float)(iVar41 + 0x28);
                fStack_a4 = fStack_174 + fVar64 * (float)(iVar41 + 0x2c);
                local_1d0 = CONCAT44(fStack_ac,local_b0);
                uStack_b8 = CONCAT26((short)((uint)fVar58 >> 0x10),
                                     CONCAT24(SUB42(fVar58,0),
                                              fVar56 + fVar64 * (float)(iVar41 + 0x18)));
                uStack_c0 = CONCAT26(uVar47,CONCAT24(uVar46,fVar42));
                fVar58 = fVar56 + fVar64 * (float)(iVar41 + 0x30);
                fVar59 = fStack_17c + fVar64 * (float)(iVar41 + 0x34);
                uVar50 = SUB42(fVar59,0);
                uVar51 = (undefined2)((uint)fVar59 >> 0x10);
                fVar59 = fStack_174 + fVar64 * (float)(iVar41 + 0x3c);
                uStack_98 = CONCAT26((short)((uint)fVar59 >> 0x10),
                                     CONCAT24(SUB42(fVar59,0),
                                              fVar56 + fVar64 * (float)(iVar41 + 0x38)));
                uStack_a0 = CONCAT26(uVar51,CONCAT24(uVar50,fVar58));
                uVar36 = *(undefined8 *)(param_1 + 0x188);
                auVar14._4_4_ = uStack_11c;
                auVar14._0_4_ = fVar9;
                auVar14._8_4_ = fVar9;
                auVar14._12_4_ = uStack_114;
                uVar29 = FUN_00ca6480(uVar44,auVar14,local_d0,uVar19,uVar6,uVar36);
                auVar15._4_4_ = uStack_11c;
                auVar15._0_4_ = fVar9;
                auVar15._8_4_ = fVar9;
                auVar15._12_4_ = uStack_114;
                local_e0[0] = (float)uVar29;
                uVar29 = FUN_00ca6480(uVar44,auVar15,CONCAT26(uVar47,CONCAT24(uVar46,fVar42)),uVar20
                                      ,uVar6,uVar36);
                auVar16._4_4_ = uStack_11c;
                auVar16._0_4_ = fVar9;
                auVar16._8_4_ = fVar9;
                auVar16._12_4_ = uStack_114;
                local_e0[1] = (float)uVar29;
                uVar29 = FUN_00ca6480(uVar44,auVar16,local_1d0,uVar21,uVar6,uVar36);
                auVar17._4_4_ = uStack_11c;
                auVar17._0_4_ = fVar9;
                auVar17._8_4_ = fVar9;
                auVar17._12_4_ = uStack_114;
                local_e0[2] = (float)uVar29;
                uVar29 = FUN_00ca6480(uVar44,auVar17,CONCAT26(uVar51,CONCAT24(uVar50,fVar58)),uVar22
                                      ,uVar6,uVar36);
                lVar30 = 0;
                local_e0[3] = (float)uVar29;
                pfVar38 = (float *)((ulong)&local_d0 | 8);
                do {
                  local_e4 = *(int *)((long)local_e0 + lVar30);
                  if (*(int *)((long)local_e0 + lVar30) != 0) {
                    bVar27 = local_e8[lVar30 + 4];
                    uStack_208 = 0;
                    local_210 = 0;
                    local_e8[0] = bVar27 != false;
                    bVar24 = local_e8[lVar30 + 5];
                    local_e8[1] = bVar24 != false;
                    cVar4 = *(char *)((long)local_e0 + lVar30 + -2);
                    cVar3 = *(char *)((long)local_e0 + lVar30 + -1);
                    local_e8[2] = cVar4 != '\0';
                    local_e8[3] = cVar3 != '\0';
                    fStack_1bc = (float)(CONCAT26(uVar49,CONCAT24(uVar45,fVar9)) >> 0x20);
                    if (local_e8[lVar30] != false) {
                      fVar67 = pfVar38[-2];
                      uVar7 = *(undefined8 *)(param_1 + 0xd4);
                      uVar36 = *(undefined8 *)(param_1 + 0xd4);
                      uVar46 = SUB42(fVar9 * (float)uVar36,0);
                      fVar42 = fVar67 * (float)uVar7;
                      fVar68 = (float)(CONCAT26((short)((uint)fVar67 >> 0x10),
                                                CONCAT24(SUB42(fVar67,0),fVar67)) >> 0x20) *
                               (float)((ulong)uVar7 >> 0x20);
                      fVar58 = (float)FUN_00ca6670(uVar46,fVar42,*(undefined4 *)(param_1 + 0xe8));
                      fVar59 = (float)FUN_00ca6670(uVar46,fVar42,*(undefined4 *)(param_1 + 0xec));
                      uStack_1c4 = (undefined4)
                                   (CONCAT26((short)((uint)fVar68 >> 0x10),
                                             CONCAT24(SUB42(fVar68,0),fVar42)) >> 0x20);
                      fVar42 = (float)FUN_00ca6670(SUB42(fStack_1bc * (float)((ulong)uVar36 >> 0x20)
                                                         ,0),uStack_1c4,
                                                   *(undefined4 *)(param_1 + 0xf0));
                      fVar67 = fVar67 + fVar59 * fVar64 * *(float *)(param_1 + 0xe4);
                      uStack_208 = (ulong)(uint)(*(float *)(param_1 + 0xdc) +
                                                (fVar42 + 1.0) * 0.5 *
                                                (*(float *)(param_1 + 0xe0) -
                                                *(float *)(param_1 + 0xdc)));
                      local_210 = CONCAT26((short)((uint)fVar67 >> 0x10),
                                           CONCAT24(SUB42(fVar67,0),
                                                    fVar9 + fVar58 * fVar66 * *(float *)(param_1 +
                                                                                        0xe4)));
                    }
                    uVar62 = 0;
                    uVar36 = 0;
                    if (*(char *)(((ulong)local_e8 | 1) + lVar30) != '\0') {
                      fVar67 = pfVar38[-1];
                      uVar7 = *(undefined8 *)(param_1 + 0xd4);
                      uVar36 = *(undefined8 *)(param_1 + 0xd4);
                      uVar46 = SUB42(fVar9 * (float)uVar36,0);
                      fVar42 = fVar67 * (float)uVar7;
                      fVar68 = (float)(CONCAT26((short)((uint)fVar67 >> 0x10),
                                                CONCAT24(SUB42(fVar67,0),fVar67)) >> 0x20) *
                               (float)((ulong)uVar7 >> 0x20);
                      fVar58 = (float)FUN_00ca6670(uVar46,fVar42,*(undefined4 *)(param_1 + 0xe8));
                      fVar59 = (float)FUN_00ca6670(uVar46,fVar42,*(undefined4 *)(param_1 + 0xec));
                      uStack_1c4 = (undefined4)
                                   (CONCAT26((short)((uint)fVar68 >> 0x10),
                                             CONCAT24(SUB42(fVar68,0),fVar42)) >> 0x20);
                      fVar42 = (float)FUN_00ca6670(SUB42(fStack_1bc * (float)((ulong)uVar36 >> 0x20)
                                                         ,0),uStack_1c4,
                                                   *(undefined4 *)(param_1 + 0xf0));
                      uVar36 = CONCAT44(fVar67 + fVar59 * fVar64 * *(float *)(param_1 + 0xe4),
                                        fVar9 + fVar58 * fVar66 * *(float *)(param_1 + 0xe4));
                      uVar62 = (ulong)(uint)(*(float *)(param_1 + 0xdc) +
                                            (fVar42 + 1.0) * 0.5 *
                                            (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc)
                                            ));
                    }
                    fVar58 = 0.0;
                    fVar42 = 0.0;
                    uVar46 = 0;
                    uVar50 = 0;
                    lVar35 = ((ulong)local_e8 | 1) + lVar30;
                    if (*(char *)(lVar35 + 1) != '\0') {
                      fVar42 = *pfVar38;
                      uVar11 = *(undefined8 *)(param_1 + 0xd4);
                      uVar7 = *(undefined8 *)(param_1 + 0xd4);
                      uVar46 = SUB42(fVar9 * (float)uVar7,0);
                      fVar58 = fVar42 * (float)uVar11;
                      fVar68 = (float)(CONCAT26((short)((uint)fVar42 >> 0x10),
                                                CONCAT24(SUB42(fVar42,0),fVar42)) >> 0x20) *
                               (float)((ulong)uVar11 >> 0x20);
                      fVar59 = (float)FUN_00ca6670(uVar46,fVar58,*(undefined4 *)(param_1 + 0xe8));
                      fVar67 = (float)FUN_00ca6670(uVar46,fVar58,*(undefined4 *)(param_1 + 0xec));
                      uStack_1d4 = (undefined4)
                                   (CONCAT26((short)((uint)fVar68 >> 0x10),
                                             CONCAT24(SUB42(fVar68,0),fVar58)) >> 0x20);
                      fVar58 = (float)FUN_00ca6670(SUB42(fStack_1bc * (float)((ulong)uVar7 >> 0x20),
                                                         0),uStack_1d4,
                                                   *(undefined4 *)(param_1 + 0xf0));
                      fVar68 = *(float *)(param_1 + 0xdc) +
                               (fVar58 + 1.0) * 0.5 *
                               (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc));
                      fVar58 = fVar9 + fVar59 * fVar66 * *(float *)(param_1 + 0xe4);
                      fVar42 = fVar42 + fVar67 * fVar64 * *(float *)(param_1 + 0xe4);
                      uVar46 = SUB42(fVar68,0);
                      uVar50 = (undefined2)((uint)fVar68 >> 0x10);
                    }
                    fVar68 = 0.0;
                    fVar59 = 0.0;
                    fVar67 = 0.0;
                    uVar7 = CONCAT26((short)((uint)fVar42 >> 0x10),CONCAT24(SUB42(fVar42,0),fVar58))
                    ;
                    if (*(char *)(lVar35 + 2) != '\0') {
                      fVar59 = pfVar38[1];
                      uVar12 = *(undefined8 *)(param_1 + 0xd4);
                      uVar11 = *(undefined8 *)(param_1 + 0xd4);
                      uVar47 = SUB42(fVar9 * (float)uVar11,0);
                      fVar42 = fVar59 * (float)uVar12;
                      fVar67 = (float)(CONCAT26((short)((uint)fVar59 >> 0x10),
                                                CONCAT24(SUB42(fVar59,0),fVar59)) >> 0x20) *
                               (float)((ulong)uVar12 >> 0x20);
                      fVar68 = (float)FUN_00ca6670(uVar47,fVar42,*(undefined4 *)(param_1 + 0xe8));
                      fVar52 = (float)FUN_00ca6670(uVar47,fVar42,*(undefined4 *)(param_1 + 0xec));
                      uStack_1b4 = (undefined4)
                                   (CONCAT26((short)((uint)fVar67 >> 0x10),
                                             CONCAT24(SUB42(fVar67,0),fVar42)) >> 0x20);
                      fVar42 = (float)FUN_00ca6670(SUB42(fStack_1bc * (float)((ulong)uVar11 >> 0x20)
                                                         ,0),uStack_1b4,
                                                   *(undefined4 *)(param_1 + 0xf0));
                      fVar67 = *(float *)(param_1 + 0xdc) +
                               (fVar42 + 1.0) * 0.5 *
                               (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc));
                      fVar68 = fVar9 + fVar68 * fVar66 * *(float *)(param_1 + 0xe4);
                      fVar59 = fVar59 + fVar52 * fVar64 * *(float *)(param_1 + 0xe4);
                    }
                    fVar42 = (float)local_210;
                    fVar60 = (float)uVar36;
                    auVar55._4_4_ = fVar60;
                    auVar55._0_4_ = fVar42;
                    fVar52 = (float)((ulong)local_210 >> 0x20);
                    fVar43 = (float)((ulong)uVar36 >> 0x20);
                    auVar55._12_2_ = SUB42(fVar68,0);
                    auVar55._8_4_ = fVar58;
                    auVar55._14_2_ = (short)((uint)fVar68 >> 0x10);
                    uVar28 = FUN_00ca6480(uVar44,auVar55,CONCAT44(fVar43,fVar52),uVar23,uVar6,
                                          *(undefined8 *)(param_1 + 0x188));
                    if ((((((uVar28 & 0xff) != 0) && (bVar27 != false)) &&
                         (fVar52 < (float)*(undefined8 *)(param_1 + 0x1a8))) &&
                        (((float)*(undefined8 *)(param_1 + 400) < fVar42 &&
                         ((float)*(undefined8 *)(param_1 + 0x198) < fVar52)))) &&
                       (fVar42 < (float)*(undefined8 *)(param_1 + 0x1a0))) {
                      lVar35 = *(long *)(param_1 + 0x38);
                      FUN_00c41540(lVar35);
                      puVar5 = (undefined8 *)(*(long *)(lVar35 + 0x88) + (ulong)uVar37 * 0x10);
                      puVar5[1] = uStack_208;
                      *puVar5 = local_210;
                      uVar37 = uVar37 + 1;
                    }
                    if ((((uVar28 & 0xff00) != 0) && (bVar24 != false)) &&
                       ((fVar43 < (float)*(undefined8 *)(param_1 + 0x1a8) &&
                        ((((float)*(undefined8 *)(param_1 + 400) < fVar60 &&
                          ((float)*(undefined8 *)(param_1 + 0x198) < fVar43)) &&
                         (fVar60 < (float)*(undefined8 *)(param_1 + 0x1a0))))))) {
                      lVar35 = *(long *)(param_1 + 0x38);
                      FUN_00c41540(lVar35);
                      puVar5 = (undefined8 *)(*(long *)(lVar35 + 0x88) + (ulong)uVar37 * 0x10);
                      puVar5[1] = uVar62;
                      *puVar5 = uVar36;
                      uVar37 = uVar37 + 1;
                    }
                    fVar42 = (float)((ulong)uVar7 >> 0x20);
                    if ((((uVar28 & 0xff0000) != 0) && (cVar4 != '\0')) &&
                       (((fVar42 < (float)*(undefined8 *)(param_1 + 0x1a8) &&
                         (((float)*(undefined8 *)(param_1 + 400) < fVar58 &&
                          ((float)*(undefined8 *)(param_1 + 0x198) < fVar42)))) &&
                        (fVar58 < (float)*(undefined8 *)(param_1 + 0x1a0))))) {
                      lVar35 = *(long *)(param_1 + 0x38);
                      FUN_00c41540(lVar35);
                      puVar5 = (undefined8 *)(*(long *)(lVar35 + 0x88) + (ulong)uVar37 * 0x10);
                      puVar5[1] = (ulong)CONCAT22(uVar50,uVar46);
                      *puVar5 = uVar7;
                      uVar37 = uVar37 + 1;
                    }
                    if ((((uVar28 >> 0x18 != 0) && (cVar3 != '\0')) &&
                        (fVar59 < (float)*(undefined8 *)(param_1 + 0x1a8))) &&
                       ((((float)*(undefined8 *)(param_1 + 400) < fVar68 &&
                         ((float)*(undefined8 *)(param_1 + 0x198) < fVar59)) &&
                        (fVar68 < (float)*(undefined8 *)(param_1 + 0x1a0))))) {
                      lVar35 = *(long *)(param_1 + 0x38);
                      FUN_00c41540(lVar35);
                      puVar5 = (undefined8 *)(*(long *)(lVar35 + 0x88) + (ulong)uVar37 * 0x10);
                      puVar5[1] = (ulong)(uint)fVar67;
                      *puVar5 = CONCAT44(fVar59,fVar68);
                      uVar37 = uVar37 + 1;
                    }
                  }
                  lVar30 = lVar30 + 4;
                  pfVar38 = pfVar38 + 4;
                } while (lVar30 != 0x10);
                iVar33 = *(int *)(param_1 + 0x120);
                iVar32 = iVar41 + 0x40;
                iVar1 = iVar41 + 0x7f;
                iVar41 = iVar32;
              } while (iVar1 < iVar33);
            }
            iVar41 = iVar32 + -0x40;
            if (iVar32 <= iVar33) {
              iVar41 = iVar32;
            }
            fVar42 = (float)(CONCAT26((short)((uint)fVar57 >> 0x10),CONCAT24(uVar44,fVar57)) >> 0x20
                            );
            fVar58 = (float)uVar10;
            iVar32 = iVar41;
            if (iVar41 + 0xf < iVar33) {
              do {
                local_d0 = CONCAT44(fStack_17c + fVar64 * (float)(iVar32 + 4),
                                    fVar56 + fVar64 * (float)iVar32);
                uStack_c8 = CONCAT44(fStack_174 + fVar64 * (float)(iVar32 + 0xc),
                                     fVar56 + fVar64 * (float)(iVar32 + 8));
                auVar13._4_4_ = uStack_11c;
                auVar13._0_4_ = fVar9;
                auVar13._8_4_ = fVar9;
                auVar13._12_4_ = uStack_114;
                uVar28 = FUN_00ca6480(uVar44,auVar13,local_d0,uVar18,uVar6,
                                      *(undefined8 *)(param_1 + 0x188));
                lVar30 = 0;
                local_e0[0] = (float)uVar28;
                while( true ) {
                  if ((uVar28 & 0xff) != 0) {
                    fVar60 = local_e0[lVar30 + 4];
                    uVar7 = *(undefined8 *)(param_1 + 0xd4);
                    uVar36 = *(undefined8 *)(param_1 + 0xd4);
                    uVar45 = SUB42(fVar9 * (float)uVar36,0);
                    fVar59 = fVar60 * (float)uVar7;
                    fVar52 = fVar60 * (float)((ulong)uVar7 >> 0x20);
                    fVar67 = (float)FUN_00ca6670(uVar45,fVar59,*(undefined4 *)(param_1 + 0xe8));
                    fVar68 = (float)FUN_00ca6670(uVar45,fVar59,*(undefined4 *)(param_1 + 0xec));
                    uStack_1a4 = (undefined4)
                                 (CONCAT26((short)((uint)fVar52 >> 0x10),
                                           CONCAT24(SUB42(fVar52,0),fVar59)) >> 0x20);
                    fVar59 = (float)FUN_00ca6670(SUB42(fVar9 * (float)((ulong)uVar36 >> 0x20),0),
                                                 uStack_1a4,*(undefined4 *)(param_1 + 0xf0));
                    fVar67 = fVar9 + fVar67 * fVar66 * *(float *)(param_1 + 0xe4);
                    fVar60 = fVar60 + fVar68 * fVar64 * *(float *)(param_1 + 0xe4);
                    iVar33 = (int)(fVar57 * (fVar67 - fVar8));
                    if (-1 < iVar33) {
                      lVar35 = *(long *)(param_1 + 0x188);
                      iVar41 = *(int *)(lVar35 + 0x40);
                      if (((iVar33 < iVar41) &&
                          (iVar1 = *(int *)(lVar35 + 0x44) - (int)(fVar42 * (fVar58 - fVar60)),
                          -1 < iVar1)) && (iVar1 < iVar41)) {
                        lVar34 = (long)(iVar33 + iVar41 * iVar1);
                        if (*(int *)(lVar35 + 0x38) == 4) {
                          uVar28 = (uint)*(byte *)(*(long *)(lVar35 + 0x30) +
                                                  (long)*(int *)(lVar35 + 0x3c) + lVar34 * 4);
                        }
                        else {
                          uVar28 = (int)*(char *)(*(long *)(lVar35 + 0x30) + lVar34) <<
                                   (ulong)((*(uint *)(lVar35 + 0x3c) & 0xf) << 1) & 0xffffff80;
                        }
                        if ((uVar28 & 0xff) != 0) {
                          fVar52 = (float)*(undefined8 *)(param_1 + 0x1a0);
                          fVar68 = (float)*(undefined8 *)(param_1 + 0x198);
                          bVar27 = false;
                          if (fVar60 < (float)*(undefined8 *)(param_1 + 0x1a8)) {
                            bVar27 = false;
                            fVar43 = (float)*(undefined8 *)(param_1 + 400);
                            if (!NAN(fVar43) && !NAN(fVar67)) {
                              bVar27 = fVar43 < fVar67;
                            }
                          }
                          bVar24 = false;
                          if ((bVar27) && (bVar24 = false, !NAN(fVar68) && !NAN(fVar60))) {
                            bVar24 = fVar68 < fVar60;
                          }
                          bVar27 = false;
                          bVar25 = true;
                          bVar26 = false;
                          if (bVar24) {
                            bVar27 = false;
                            bVar25 = false;
                            bVar26 = true;
                            if (!NAN(fVar52) && !NAN(fVar67)) {
                              bVar27 = fVar52 < fVar67;
                              bVar25 = fVar52 == fVar67;
                              bVar26 = false;
                            }
                          }
                          if (!bVar25 && bVar27 == bVar26) {
                            auVar54._4_12_ = SUB1612(ZEXT816(0),4);
                            auVar54._0_4_ =
                                 *(float *)(param_1 + 0xdc) +
                                 (fVar59 + 1.0) * 0.5 *
                                 (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc));
                            lVar35 = *(long *)(param_1 + 0x38);
                            FUN_00c41540(lVar35);
                            puVar5 = (undefined8 *)(*(long *)(lVar35 + 0x88) + (ulong)uVar37 * 0x10)
                            ;
                            puVar5[1] = auVar54._0_8_;
                            *puVar5 = CONCAT44(fVar60,fVar67);
                            uVar37 = uVar37 + 1;
                          }
                        }
                      }
                    }
                  }
                  if (lVar30 == 3) break;
                  uVar28 = (uint)*(byte *)(((ulong)local_e0 | 1) + lVar30);
                  lVar30 = lVar30 + 1;
                }
                iVar33 = *(int *)(param_1 + 0x120);
                iVar41 = iVar32 + 0x10;
                iVar1 = iVar32 + 0x1f;
                iVar32 = iVar41;
              } while (iVar1 < iVar33);
            }
            iVar32 = iVar41 + -0x10;
            if (iVar41 <= iVar33) {
              iVar32 = iVar41;
            }
            if (iVar32 < iVar33) {
              do {
                fVar59 = fVar56 + fVar64 * (float)iVar32;
                iVar33 = (int)(fVar57 * (fVar9 - fVar8));
                if (-1 < iVar33) {
                  lVar30 = *(long *)(param_1 + 0x188);
                  iVar41 = *(int *)(lVar30 + 0x40);
                  if (((iVar33 < iVar41) &&
                      (iVar1 = *(int *)(lVar30 + 0x44) - (int)(fVar42 * (fVar58 - fVar59)),
                      -1 < iVar1)) && (iVar1 < iVar41)) {
                    lVar35 = (long)(iVar33 + iVar41 * iVar1);
                    if (*(int *)(lVar30 + 0x38) == 4) {
                      uVar28 = (uint)*(byte *)(*(long *)(lVar30 + 0x30) +
                                              (long)*(int *)(lVar30 + 0x3c) + lVar35 * 4);
                    }
                    else {
                      uVar28 = (int)*(char *)(*(long *)(lVar30 + 0x30) + lVar35) <<
                               (ulong)((*(uint *)(lVar30 + 0x3c) & 0xf) << 1) & 0xffffff80;
                    }
                    if ((uVar28 & 0xff) != 0) {
                      uVar7 = *(undefined8 *)(param_1 + 0xd4);
                      uVar36 = *(undefined8 *)(param_1 + 0xd4);
                      uVar45 = SUB42(fVar9 * (float)uVar36,0);
                      fVar67 = fVar59 * (float)uVar7;
                      fVar68 = fVar59 * (float)((ulong)uVar7 >> 0x20);
                      uStack_114 = (undefined4)
                                   (CONCAT26((short)((uint)fVar68 >> 0x10),
                                             CONCAT24(SUB42(fVar68,0),fVar67)) >> 0x20);
                      fVar68 = (float)FUN_00ca6670(uVar45,fVar67,*(undefined4 *)(param_1 + 0xe8));
                      fVar52 = (float)FUN_00ca6670(uVar45,fVar67,*(undefined4 *)(param_1 + 0xec));
                      fVar67 = (float)FUN_00ca6670(SUB42(fVar9 * (float)((ulong)uVar36 >> 0x20),0),
                                                   uStack_114,*(undefined4 *)(param_1 + 0xf0));
                      fVar68 = fVar9 + fVar68 * fVar66 * *(float *)(param_1 + 0xe4);
                      fVar59 = fVar59 + fVar52 * fVar64 * *(float *)(param_1 + 0xe4);
                      iVar33 = (int)(fVar57 * (fVar68 - fVar8));
                      if (-1 < iVar33) {
                        lVar30 = *(long *)(param_1 + 0x188);
                        iVar41 = *(int *)(lVar30 + 0x40);
                        if (((iVar33 < iVar41) &&
                            (iVar1 = *(int *)(lVar30 + 0x44) - (int)(fVar42 * (fVar58 - fVar59)),
                            -1 < iVar1)) && (iVar1 < iVar41)) {
                          fVar52 = *(float *)(param_1 + 0xdc);
                          fVar60 = *(float *)(param_1 + 0xe0);
                          lVar35 = (long)(iVar33 + iVar41 * iVar1);
                          if (*(int *)(lVar30 + 0x38) == 4) {
                            uVar28 = (uint)*(byte *)(*(long *)(lVar30 + 0x30) +
                                                    (long)*(int *)(lVar30 + 0x3c) + lVar35 * 4);
                          }
                          else {
                            uVar28 = (int)*(char *)(*(long *)(lVar30 + 0x30) + lVar35) <<
                                     (ulong)((*(uint *)(lVar30 + 0x3c) & 0xf) << 1) & 0xffffff80;
                          }
                          if ((uVar28 & 0xff) != 0) {
                            fVar65 = (float)*(undefined8 *)(param_1 + 0x1a0);
                            fVar43 = (float)*(undefined8 *)(param_1 + 0x198);
                            bVar27 = false;
                            if (fVar59 < (float)*(undefined8 *)(param_1 + 0x1a8)) {
                              bVar27 = false;
                              fVar63 = (float)*(undefined8 *)(param_1 + 400);
                              if (!NAN(fVar63) && !NAN(fVar68)) {
                                bVar27 = fVar63 < fVar68;
                              }
                            }
                            bVar24 = false;
                            if ((bVar27) && (bVar24 = false, !NAN(fVar43) && !NAN(fVar59))) {
                              bVar24 = fVar43 < fVar59;
                            }
                            bVar27 = false;
                            bVar25 = true;
                            bVar26 = false;
                            if (bVar24) {
                              bVar27 = false;
                              bVar25 = false;
                              bVar26 = true;
                              if (!NAN(fVar65) && !NAN(fVar68)) {
                                bVar27 = fVar65 < fVar68;
                                bVar25 = fVar65 == fVar68;
                                bVar26 = false;
                              }
                            }
                            if (!bVar25 && bVar27 == bVar26) {
                              lVar30 = *(long *)(param_1 + 0x38);
                              FUN_00c41540(lVar30);
                              puVar5 = (undefined8 *)
                                       (*(long *)(lVar30 + 0x88) + (ulong)uVar37 * 0x10);
                              puVar5[1] = (ulong)(uint)(fVar52 + (fVar67 + 1.0) * 0.5 *
                                                                 (fVar60 - fVar52));
                              *puVar5 = CONCAT44(fVar59,fVar68);
                              uVar37 = uVar37 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar33 = *(int *)(param_1 + 0x120);
                iVar32 = iVar32 + 4;
              } while (iVar32 < iVar33);
            }
            iVar40 = iVar40 + 4;
          } while (iVar40 < iVar33);
        }
        if (local_1fc == uVar39) {
          uVar62 = (ulong)local_264;
          uVar28 = local_264 & 0x1f;
          local_264 = local_264 + 1;
          *(uint *)(param_1 + uVar62 * 4 + 0x40) = uVar37;
          local_1fc = (2 << (ulong)uVar28) - 1;
        }
        uVar39 = uVar39 + 1;
        if (uVar31 == uVar39) break;
        iVar33 = *(int *)(param_1 + 0x120);
      }
      uVar39 = uVar31;
    }
    bVar27 = uVar31 != 0x10;
    if (!bVar27) {
      uVar37 = 0;
    }
    *(uint *)(param_1 + 0x174) = uVar37;
    if (!bVar27) {
      local_264 = 0;
    }
    *(bool *)(param_1 + 0x170) = bVar27;
    *(bool *)(param_1 + 0x1b0) = bVar27;
    if (!bVar27) {
      local_1fc = 0;
    }
    *(uint *)(param_1 + 0x178) = local_264;
    if (!bVar27) {
      uVar39 = 0;
    }
    *(uint *)(param_1 + 0x180) = uVar39;
    *(uint *)(param_1 + 0x17c) = local_1fc;
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


