/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2f0c0; name: FUN_02f2f0c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2f0c0(long param_1,long param_2,int param_3,int param_4,long *param_5)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined2 uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  uint *puVar36;
  undefined1 (*pauVar37) [16];
  long lVar38;
  undefined1 (*pauVar39) [16];
  undefined8 *puVar40;
  long lVar41;
  uint *puVar42;
  undefined4 uVar43;
  float fVar44;
  int iVar45;
  float fVar50;
  double dVar46;
  undefined1 auVar47 [12];
  int iVar51;
  int iVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar81 [12];
  byte bVar53;
  byte bVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  float fVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar75;
  float fVar85;
  undefined8 uVar76;
  undefined8 uVar77;
  int iVar86;
  int iVar87;
  int iVar88;
  undefined8 uVar78;
  int iVar89;
  int iVar90;
  undefined1 auVar82 [16];
  ulong uVar79;
  undefined1 auVar83 [16];
  float fVar73;
  float fVar74;
  double dVar80;
  undefined1 auVar84 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  undefined1 in_q6 [16];
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 uStack_5b8;
  int local_574;
  undefined8 local_570;
  undefined8 uStack_568;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  undefined8 local_530;
  ulong uStack_528;
  float local_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  byte local_510;
  undefined1 uStack_50f;
  undefined2 uStack_50e;
  float local_50c;
  float local_508;
  float local_504;
  undefined8 local_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  undefined1 *local_4a8;
  undefined8 local_4a0;
  undefined1 auStack_498 [1032];
  
  if (param_5 != (long *)0x0) {
    lVar34 = *param_5;
    if (*(code **)(lVar34 + 0x18) != (code *)0x0) {
      (**(code **)(lVar34 + 0x18))("SubIntegrateLast",0x10,*(undefined8 *)(lVar34 + 0x28));
    }
    puVar40 = (undefined8 *)param_5[2];
    uVar27 = (long)puVar40 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)param_5[3]) && (param_5[2] = uVar27, puVar40 != (undefined8 *)0x0)) {
      *puVar40 = "TtSubIntegrateLast";
      uVar25 = nn::os::GetSystemTick();
      puVar40[1] = uVar25;
    }
    if (((*(byte *)(lVar34 + 0x38) & 1) != 0) && (param_5[6] != 0)) {
      puVar40 = (undefined8 *)param_5[2];
      uVar27 = (long)puVar40 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)param_5[3]) && (param_5[2] = uVar27, puVar40 != (undefined8 *)0x0)) {
        *puVar40 = &DAT_03c4e575;
        puVar40[1] = *(undefined8 *)(param_5[6] + 8);
      }
    }
  }
  uVar23 = _UNK_03cabeb8;
  uVar25 = _DAT_03cabeb0;
  lVar38 = *(long *)(param_2 + 0x10);
  lVar34 = *(long *)(param_1 + 0x4d8);
  if (*(long *)(*(long *)(param_1 + 8) + 0x698) == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = **(long **)(param_1 + 0x4b8);
  }
  local_4a8 = auStack_498;
  local_4a0 = -0x7fffff0000000000;
  if (0 < param_4) {
    pfVar32 = (float *)(*(long *)(param_2 + 0x68) + (long)param_3 * 0x20);
    lVar1 = param_1 + 0x540;
    uVar99 = NEON_fmov(0x3f800000,4);
    pauVar37 = (undefined1 (*) [16])(*(long *)(param_2 + 0x90) + (long)param_3 * 0x20);
    local_574 = 0;
    uStack_5b8 = (undefined1)_UNK_03cabeb8;
    do {
      fVar104 = pfVar32[3];
      auVar49 = *pauVar37;
      fStack_4b8 = auVar49._12_4_;
      fVar94 = *pfVar32 - auVar49._0_4_;
      fVar96 = pfVar32[1] - auVar49._4_4_;
      fVar97 = pfVar32[2] - auVar49._8_4_;
      fVar98 = fVar104 - fStack_4b8;
      uStack_4c8 = auVar49._8_8_;
      local_4d0 = auVar49._0_8_;
      fStack_4b4 = (float)(CONCAT17(auVar49[0xf],
                                    CONCAT16(auVar49[0xe],
                                             CONCAT15(auVar49[0xd],CONCAT14(auVar49[0xc],fStack_4b8)
                                                     ))) >> 0x20);
      local_4c0 = (float)*(undefined8 *)pauVar37[1];
      fStack_4bc = (float)((ulong)*(undefined8 *)pauVar37[1] >> 0x20);
      uVar27 = (ulong)*(ushort *)(pauVar37[1] + 0xc);
      fVar101 = (float)*(undefined8 *)(pfVar32 + 4) - local_4c0;
      fVar102 = (float)((ulong)*(undefined8 *)(pfVar32 + 4) >> 0x20) - fStack_4bc;
      uVar77 = CONCAT44(fVar102,fVar101);
      fVar103 = fVar104 - fStack_4b8;
      fVar104 = fVar104 - fStack_4b8;
      uVar78 = CONCAT44(fVar104,fVar103);
      lVar41 = *(long *)(param_1 + 0x30);
      fVar74 = (float)uVar99;
      fVar100 = (float)((ulong)uVar99 >> 0x20);
      if (*(long *)(pfVar32 + 6) == 0) {
        uStack_568 = CONCAT44(fVar98,fVar97);
        local_570 = CONCAT44(fVar96,fVar94);
        local_540 = fVar74;
        fStack_53c = fVar100;
LAB_02f2f5ac:
        auVar95._8_8_ = uVar78;
        auVar95._0_8_ = uVar77;
      }
      else {
        fVar44 = (float)((uint)*(ushort *)(pauVar37[1] + 0xe) << 0x10);
        fVar69 = fVar97 * fVar97 + fVar94 * fVar94 + fVar96 * fVar96;
        fVar85 = fVar97 * fVar97 + fVar94 * fVar94 + fVar96 * fVar96;
        uVar6 = *(undefined4 *)(lVar41 + uVar27 * 0x70 + 0x14);
        lVar28 = (ulong)CONCAT42(fVar44,*(ushort *)(pauVar37[1] + 0xe)) << 0x10;
        uVar77 = NEON_fmin(CONCAT17((char)((uint)uVar6 >> 0x18),
                                    CONCAT16((char)((uint)uVar6 >> 0x10),
                                             CONCAT15((char)((uint)uVar6 >> 8),
                                                      CONCAT14((char)uVar6,uVar6)))),lVar28,4);
        fVar50 = (float)uVar77;
        fVar73 = (float)((ulong)uVar77 >> 0x20);
        iVar70 = -(uint)(fVar69 <= fVar50 * fVar50);
        iVar86 = -(uint)(fVar85 <= fVar73 * fVar73);
        if (CONCAT13((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar70 >> 0x18),
                     CONCAT12((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar70 >> 0x10),
                              CONCAT11((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar70 >> 8),
                                       (byte)iVar86 | (byte)iVar70))) == 0) {
          iVar70 = -(uint)(0.0 <= fVar94);
          iVar86 = -(uint)(0.0 <= fVar96);
          iVar72 = -(uint)(0.0 <= fVar97);
          iVar88 = -(uint)(0.0 <= fVar98);
          iVar71 = -(uint)(fVar94 < 0.0);
          iVar87 = -(uint)(fVar96 < 0.0);
          iVar45 = -(uint)(fVar97 < 0.0);
          iVar51 = -(uint)(fVar98 < 0.0);
          uVar77 = NEON_fmov(0x3f800000,4);
          fStack_538 = in_q6._8_4_;
          fStack_534 = in_q6._12_4_;
          local_540 = (float)uVar77;
          fStack_53c = (float)((ulong)uVar77 >> 0x20);
          if (CONCAT13(~((byte)((uint)iVar87 >> 0x18) | (byte)((uint)iVar86 >> 0x18)) |
                       ~((byte)((uint)iVar71 >> 0x18) | (byte)((uint)iVar70 >> 0x18)) |
                       ~((byte)((uint)iVar45 >> 0x18) | (byte)((uint)iVar72 >> 0x18)) |
                       ~((byte)((uint)iVar51 >> 0x18) | (byte)((uint)iVar88 >> 0x18)),
                       CONCAT12(~((byte)((uint)iVar87 >> 0x10) | (byte)((uint)iVar86 >> 0x10)) |
                                ~((byte)((uint)iVar71 >> 0x10) | (byte)((uint)iVar70 >> 0x10)) |
                                ~((byte)((uint)iVar45 >> 0x10) | (byte)((uint)iVar72 >> 0x10)) |
                                ~((byte)((uint)iVar51 >> 0x10) | (byte)((uint)iVar88 >> 0x10)),
                                CONCAT11(~((byte)((uint)iVar87 >> 8) | (byte)((uint)iVar86 >> 8)) |
                                         ~((byte)((uint)iVar71 >> 8) | (byte)((uint)iVar70 >> 8)) |
                                         ~((byte)((uint)iVar45 >> 8) | (byte)((uint)iVar72 >> 8)) |
                                         ~((byte)((uint)iVar51 >> 8) | (byte)((uint)iVar88 >> 8)),
                                         ~((byte)iVar87 | (byte)iVar86) |
                                         ~((byte)iVar71 | (byte)iVar70) |
                                         ~((byte)iVar45 | (byte)iVar72) |
                                         ~((byte)iVar51 | (byte)iVar88)))) == 0) {
            fVar69 = local_540 / SQRT(fVar69);
            fVar85 = fStack_53c / SQRT(fVar85);
            iVar70 = -(uint)(0.0 <= fVar69);
            iVar86 = -(uint)(0.0 <= fVar85);
            iVar72 = -(uint)(fVar69 < 0.0);
            iVar88 = -(uint)(fVar85 < 0.0);
            uStack_568 = 0;
            local_570 = 0;
            if (CONCAT13(~((byte)((uint)iVar88 >> 0x18) | (byte)((uint)iVar86 >> 0x18)) |
                         ~((byte)((uint)iVar72 >> 0x18) | (byte)((uint)iVar70 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar88 >> 0x10) | (byte)((uint)iVar86 >> 0x10)) |
                                  ~((byte)((uint)iVar72 >> 0x10) | (byte)((uint)iVar70 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar88 >> 8) | (byte)((uint)iVar86 >> 8))
                                           | ~((byte)((uint)iVar72 >> 8) | (byte)((uint)iVar70 >> 8)
                                              ),~((byte)iVar88 | (byte)iVar86) |
                                                ~((byte)iVar72 | (byte)iVar70)))) == 0) {
              fVar50 = fVar50 * fVar69;
              fVar73 = fVar73 * fVar85;
              fVar96 = fVar96 * fVar73;
              fVar98 = fVar98 * (float)CONCAT13((char)((uint)fVar73 >> 0x18),
                                                CONCAT12((char)((uint)fVar73 >> 0x10),
                                                         (short)(CONCAT15((char)((uint)fVar73 >> 8),
                                                                          CONCAT14(SUB41(fVar73,0),
                                                                                   fVar50)) >> 0x20)
                                                        ));
              uStack_568 = CONCAT17((char)((uint)fVar98 >> 0x18),
                                    CONCAT16((char)((uint)fVar98 >> 0x10),
                                             CONCAT15((char)((uint)fVar98 >> 8),
                                                      CONCAT14(SUB41(fVar98,0),fVar97 * fVar50))));
              local_570 = CONCAT17((char)((uint)fVar96 >> 0x18),
                                   CONCAT16((char)((uint)fVar96 >> 0x10),
                                            CONCAT15((char)((uint)fVar96 >> 8),
                                                     CONCAT14(SUB41(fVar96,0),fVar94 * fVar50))));
              uVar77 = NEON_fmov(0x3f800000,4);
              uVar77 = NEON_fmin(CONCAT44(fVar85 * fVar44,fVar69 * (float)lVar28),uVar77,4);
              fStack_538 = 0.0;
              fStack_534 = 0.0;
              local_540 = (float)uVar77;
              fStack_53c = (float)((ulong)uVar77 >> 0x20);
            }
          }
          else {
            uStack_568 = 0;
            local_570 = 0;
          }
          fVar96 = ABS(*(float *)(pauVar37[1] + 8));
          local_520 = 3.7615963e-37;
          fStack_51c = 8.40779e-45;
          fStack_518 = 2.3509886e-38;
          local_510 = 0;
          uStack_50f = 0;
          uStack_50e = 0;
          puVar42 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8
                              );
          puVar40 = *(undefined8 **)(param_1 + 0x4e0);
          uVar24 = *puVar42;
          fStack_514 = fVar96;
          if (uVar24 >> 0x17 < 0x1f) {
            auVar49._4_4_ = fStack_53c;
            auVar49._0_4_ = local_540;
            auVar49._8_4_ = fStack_538;
            auVar49._12_4_ = fStack_534;
          }
          else {
            auVar49._4_4_ = fStack_53c;
            auVar49._0_4_ = local_540;
            auVar49._8_4_ = fStack_538;
            auVar49._12_4_ = fStack_534;
            puVar36 = puVar42;
            do {
              uVar24 = *(int *)(puVar40 + 0xb) - 1;
              if (*(int *)(puVar40 + 0xb) < 1) {
                lVar28 = puVar40[1];
                (**(code **)(*(long *)*puVar40 + 0x20))((long *)*puVar40,lVar28,6);
                *(undefined4 *)(puVar40 + 0xb) = 5;
                puVar29 = (undefined8 *)(lVar28 + 0x28);
              }
              else {
                *(uint *)(puVar40 + 0xb) = uVar24;
                puVar29 = (undefined8 *)(puVar40[1] + (ulong)uVar24 * 8);
              }
              puVar42 = (uint *)*puVar29;
              puVar42[4] = 0;
              puVar42[5] = 0;
              puVar42[6] = 0;
              puVar42[7] = 0;
              puVar42[0] = 0;
              puVar42[1] = 0;
              puVar42[2] = 0;
              puVar42[3] = 0;
              puVar42[1] = *(uint *)(param_1 + 0x548);
              iVar70 = *(int *)(param_1 + 0x548);
              lVar28 = (long)iVar70;
              if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar70) {
                FUN_031c25b4(lVar1,PTR_PTR_047d1a50,lVar28 + 1);
                iVar70 = *(int *)(param_1 + 0x548);
              }
              *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar70 * 8) = puVar42;
              *(int *)(param_1 + 0x548) = (int)(lVar28 + 1);
              *(uint **)(puVar36 + 2) = puVar42;
              uVar24 = *puVar42;
              puVar36 = puVar42;
            } while (0x1e < uVar24 >> 0x17);
          }
          do {
            uVar76 = auVar49._0_8_;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar42,0x10);
            if (bVar5) {
              *puVar42 = *puVar42 + 0x200001;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
          uVar24 = uVar24 >> 0x10;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x20) = local_520;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x24) = fStack_51c;
          *(undefined4 *)((long)puVar42 + (ulong)uVar24 + 0x28) = 0xffffff;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x2c) = fVar96;
          *(undefined4 *)((long)puVar42 + (ulong)uVar24 + 0x30) = 0;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x34) = local_50c;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x38) = local_508;
          *(float *)((long)puVar42 + (ulong)uVar24 + 0x3c) = local_504;
        }
        else {
          uStack_568 = CONCAT44(fVar98,fVar97);
          local_570 = CONCAT44(fVar96,fVar94);
          uVar76 = NEON_fmov(0x3f800000,4);
        }
        uVar78 = CONCAT44(fVar104,fVar103);
        uVar77 = CONCAT44(fVar102,fVar101);
        local_540 = (float)uVar76;
        fStack_53c = (float)((ulong)uVar76 >> 0x20);
        fVar98 = fVar103 * fVar103 + fVar101 * fVar101 + fVar102 * fVar102;
        fVar94 = fVar103 * fVar103 + fVar101 * fVar101 + fVar102 * fVar102;
        fVar96 = *(float *)(lVar41 + uVar27 * 0x70 + 0x20);
        if (fVar98 < fVar96 * fVar96) {
          iVar70 = -(uint)(fVar98 == 0.0);
          bVar53 = ~(byte)((uint)iVar70 >> 8);
          bVar54 = ~(byte)((uint)iVar70 >> 0x10);
          bVar57 = ~(byte)((uint)iVar70 >> 0x18);
          uVar31 = CONCAT44(0x5f375a86 - ((int)fVar94 >> 1),0x5f375a86 - ((int)fVar98 >> 1)) &
                   CONCAT17(bVar57,CONCAT16(bVar54,CONCAT15(bVar53,CONCAT14(~(byte)iVar70,
                                                                            CONCAT13(bVar57,CONCAT12
                                                  (bVar54,CONCAT11(bVar53,~(byte)iVar70)))))));
          fVar97 = *(float *)(lVar41 + uVar27 * 0x70 + 0x24);
          uVar77 = NEON_fmov(0x3f800000,4);
          fVar96 = (float)((ulong)uVar77 >> 0x20) -
                   (float)(uVar31 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar38 + 0x38) >> 0x20) * fVar97;
          uVar78 = NEON_fmax(CONCAT17((char)((uint)fVar96 >> 0x18),
                                      CONCAT16((char)((uint)fVar96 >> 0x10),
                                               CONCAT15((char)((uint)fVar96 >> 8),
                                                        CONCAT14(SUB41(fVar96,0),
                                                                 (float)uVar77 -
                                                                 (float)uVar31 *
                                                                 (float)*(undefined8 *)
                                                                         (lVar38 + 0x38) * fVar97)))
                                     ),0,4);
          fVar96 = (float)((ulong)uVar78 >> 0x20);
          uVar77 = CONCAT44(fVar102 * fVar96,fVar101 * (float)uVar78);
          uVar78 = CONCAT44(fVar104 * fVar96,fVar103 * (float)uVar78);
        }
        fVar96 = *(float *)(lVar41 + uVar27 * 0x70 + 0x10);
        iVar70 = -(uint)(fVar98 <= fVar96 * fVar96);
        iVar86 = -(uint)(fVar94 <= fVar96 * fVar96);
        if (CONCAT13((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar70 >> 0x18),
                     CONCAT12((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar70 >> 0x10),
                              CONCAT11((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar70 >> 8),
                                       (byte)iVar86 | (byte)iVar70))) != 0) goto LAB_02f2f5ac;
        fVar104 = (float)uVar77;
        iVar71 = -(uint)(0.0 <= fVar104);
        fVar97 = (float)((ulong)uVar77 >> 0x20);
        iVar87 = -(uint)(0.0 <= fVar97);
        fVar101 = (float)uVar78;
        iVar45 = -(uint)(0.0 <= fVar101);
        fVar102 = (float)((ulong)uVar78 >> 0x20);
        iVar51 = -(uint)(0.0 <= fVar102);
        iVar70 = -(uint)(fVar104 < 0.0);
        iVar86 = -(uint)(fVar97 < 0.0);
        iVar72 = -(uint)(fVar101 < 0.0);
        iVar88 = -(uint)(fVar102 < 0.0);
        auVar95 = ZEXT816(0);
        if (CONCAT13(~((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar87 >> 0x18)) |
                     ~((byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar71 >> 0x18)) |
                     ~((byte)((uint)iVar72 >> 0x18) | (byte)((uint)iVar45 >> 0x18)) |
                     ~((byte)((uint)iVar88 >> 0x18) | (byte)((uint)iVar51 >> 0x18)),
                     CONCAT12(~((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar87 >> 0x10)) |
                              ~((byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar71 >> 0x10)) |
                              ~((byte)((uint)iVar72 >> 0x10) | (byte)((uint)iVar45 >> 0x10)) |
                              ~((byte)((uint)iVar88 >> 0x10) | (byte)((uint)iVar51 >> 0x10)),
                              CONCAT11(~((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar87 >> 8)) |
                                       ~((byte)((uint)iVar70 >> 8) | (byte)((uint)iVar71 >> 8)) |
                                       ~((byte)((uint)iVar72 >> 8) | (byte)((uint)iVar45 >> 8)) |
                                       ~((byte)((uint)iVar88 >> 8) | (byte)((uint)iVar51 >> 8)),
                                       ~((byte)iVar86 | (byte)iVar87) |
                                       ~((byte)iVar70 | (byte)iVar71) |
                                       ~((byte)iVar72 | (byte)iVar45) |
                                       ~((byte)iVar88 | (byte)iVar51)))) == 0) {
          uVar77 = NEON_fmov(0x3f800000,4);
          auVar95 = ZEXT816(0);
          fVar98 = (float)uVar77 / SQRT(fVar98);
          fVar94 = (float)((ulong)uVar77 >> 0x20) / SQRT(fVar94);
          iVar72 = -(uint)(0.0 <= fVar98);
          iVar88 = -(uint)(0.0 <= fVar94);
          iVar70 = -(uint)(fVar98 < 0.0);
          iVar86 = -(uint)(fVar94 < 0.0);
          if (CONCAT13(~((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar88 >> 0x18)) |
                       ~((byte)((uint)iVar70 >> 0x18) | (byte)((uint)iVar72 >> 0x18)),
                       CONCAT12(~((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar88 >> 0x10)) |
                                ~((byte)((uint)iVar70 >> 0x10) | (byte)((uint)iVar72 >> 0x10)),
                                CONCAT11(~((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar88 >> 8)) |
                                         ~((byte)((uint)iVar70 >> 8) | (byte)((uint)iVar72 >> 8)),
                                         ~((byte)iVar86 | (byte)iVar88) |
                                         ~((byte)iVar70 | (byte)iVar72)))) == 0) {
            auVar95._0_4_ = fVar104 * fVar98 * fVar96;
            auVar95._4_4_ = fVar97 * fVar94 * fVar96;
            auVar95._8_4_ = fVar101 * fVar98 * fVar96;
            auVar95._12_4_ = fVar102 * fVar94 * fVar96;
          }
        }
        fVar96 = ABS(*(float *)(pauVar37[1] + 8));
        local_520 = 3.7615963e-37;
        fStack_51c = 8.40779e-45;
        fStack_518 = 2.3509886e-38;
        local_510 = 1;
        uStack_50f = 0;
        uStack_50e = 0;
        puVar42 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
        puVar40 = *(undefined8 **)(param_1 + 0x4e0);
        uVar24 = *puVar42;
        fStack_514 = fVar96;
        if (uVar24 >> 0x17 < 0x1f) {
          puVar36 = puVar42;
        }
        else {
          do {
            uVar24 = *(int *)(puVar40 + 0xb) - 1;
            if (*(int *)(puVar40 + 0xb) < 1) {
              lVar28 = puVar40[1];
              (**(code **)(*(long *)*puVar40 + 0x20))((long *)*puVar40,lVar28,6);
              *(undefined4 *)(puVar40 + 0xb) = 5;
              puVar29 = (undefined8 *)(lVar28 + 0x28);
            }
            else {
              *(uint *)(puVar40 + 0xb) = uVar24;
              puVar29 = (undefined8 *)(puVar40[1] + (ulong)uVar24 * 8);
            }
            puVar36 = (uint *)*puVar29;
            puVar36[4] = 0;
            puVar36[5] = 0;
            puVar36[6] = 0;
            puVar36[7] = 0;
            puVar36[0] = 0;
            puVar36[1] = 0;
            puVar36[2] = 0;
            puVar36[3] = 0;
            puVar36[1] = *(uint *)(param_1 + 0x548);
            iVar70 = *(int *)(param_1 + 0x548);
            lVar28 = (long)iVar70;
            if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar70) {
              FUN_031c25b4(lVar1,PTR_PTR_047d1a50,lVar28 + 1);
              iVar70 = *(int *)(param_1 + 0x548);
            }
            *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar70 * 8) = puVar36;
            *(int *)(param_1 + 0x548) = (int)(lVar28 + 1);
            *(uint **)(puVar42 + 2) = puVar36;
            uVar24 = *puVar36;
            puVar42 = puVar36;
          } while (0x1e < uVar24 >> 0x17);
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar36,0x10);
          if (bVar5) {
            *puVar36 = *puVar36 + 0x200001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
        uVar24 = uVar24 >> 0x10;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x20) = local_520;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x24) = fStack_51c;
        *(undefined4 *)((long)puVar36 + (ulong)uVar24 + 0x28) = 0xffffff;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x2c) = fVar96;
        *(undefined4 *)((long)puVar36 + (ulong)uVar24 + 0x30) = 1;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x34) = local_50c;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x38) = local_508;
        *(float *)((long)puVar36 + (ulong)uVar24 + 0x3c) = local_504;
      }
      fVar94 = (float)((ulong)local_570 >> 0x20);
      fStack_534 = (float)((ulong)uStack_568 >> 0x20);
      fVar104 = *(float *)(lVar38 + 0x74) * (float)*(undefined8 *)(lVar38 + 0xc0);
      uVar55 = (undefined1)((uint)fVar104 >> 0x10);
      uVar58 = (undefined1)((uint)fVar104 >> 0x18);
      lVar28 = lVar41 + uVar27 * 0x70;
      auVar47._0_4_ = (local_4c0 + auVar95._0_4_ * *(float *)(lVar38 + 0xb0)) * fVar104;
      auVar47._4_4_ = (fStack_4bc + auVar95._4_4_ * *(float *)(lVar38 + 0xb4)) * fVar104;
      auVar47._8_4_ = (fStack_4b8 + auVar95._8_4_ * *(float *)(lVar38 + 0xb8)) * fVar104;
      uVar15 = (undefined2)
               (CONCAT15((char)((uint)fVar104 >> 8),CONCAT14(SUB41(fVar104,0),fVar104)) >> 0x20);
      auVar48._12_4_ =
           (fStack_4b4 + auVar95._12_4_ * *(float *)(lVar38 + 0xbc)) *
           (float)CONCAT13(uVar58,CONCAT12(uVar55,uVar15));
      auVar48._0_12_ = auVar47;
      fVar96 = (fVar94 * *(float *)(lVar38 + 0xb4) + (float)((ulong)local_4d0 >> 0x20)) * fVar104;
      fVar98 = (fStack_534 * *(float *)(lVar38 + 0xbc) + (float)((ulong)uStack_4c8 >> 0x20)) *
               (float)CONCAT13(uVar58,CONCAT12(uVar55,uVar15));
      uStack_4c8 = CONCAT17((char)((uint)fVar98 >> 0x18),
                            CONCAT16((char)((uint)fVar98 >> 0x10),
                                     CONCAT15((char)((uint)fVar98 >> 8),
                                              CONCAT14(SUB41(fVar98,0),
                                                       ((float)uStack_568 *
                                                        *(float *)(lVar38 + 0xb8) +
                                                       (float)uStack_4c8) * fVar104))));
      local_4d0 = CONCAT17((char)((uint)fVar96 >> 0x18),
                           CONCAT16((char)((uint)fVar96 >> 0x10),
                                    CONCAT15((char)((uint)fVar96 >> 8),
                                             CONCAT14(SUB41(fVar96,0),
                                                      ((float)local_570 * *(float *)(lVar38 + 0xb0)
                                                      + (float)local_4d0) * fVar104))));
      fVar97 = *(float *)(lVar28 + 0x18);
      fVar101 = *(float *)(lVar28 + 0x1c);
      uVar31 = (ulong)*(uint *)(pauVar37[1] + 8) & 0x7fffffff;
      fVar96 = (float)*(undefined8 *)(lVar38 + 0x10);
      fVar98 = (float)((ulong)*(undefined8 *)(lVar38 + 0x10) >> 0x20);
      fVar104 = fVar98 * fVar97;
      uVar78 = NEON_fmin(CONCAT44(fVar98 * fVar101,fVar96 * fVar101),uVar99,4);
      uVar77 = NEON_fmin(CONCAT17((char)((uint)fVar104 >> 0x18),
                                  CONCAT16((char)((uint)fVar104 >> 0x10),
                                           CONCAT15((char)((uint)fVar104 >> 8),
                                                    CONCAT14(SUB41(fVar104,0),fVar96 * fVar97)))),
                         uVar99,4);
      fStack_538 = fVar74 - (float)uVar78;
      fVar104 = fVar100 - (float)((ulong)uVar78 >> 0x20);
      fVar96 = fVar74 - (float)uVar77;
      fVar98 = fVar100 - (float)((ulong)uVar77 >> 0x20);
      pauVar2 = (undefined1 (*) [16])(*(long *)(param_2 + 0x50) + uVar31 * 0x80);
      if ((*(ushort *)(pauVar2[5] + 10) & 0x7fff) != 0) {
        iVar70 = -(uint)(1.0 <= local_540);
        bVar53 = ~(byte)iVar70;
        bVar54 = ~(byte)((uint)iVar70 >> 8);
        bVar57 = ~(byte)((uint)iVar70 >> 0x10);
        bVar59 = ~(byte)((uint)iVar70 >> 0x18);
        auVar7[1] = bVar54;
        auVar7[0] = bVar53;
        auVar82._0_4_ = local_540 * auVar47._0_4_;
        auVar82._4_4_ = fStack_53c * auVar47._4_4_;
        auVar82._8_4_ = local_540 * auVar47._8_4_;
        auVar82._12_4_ = fStack_53c * auVar48._12_4_;
        auVar7[2] = bVar57;
        auVar7[3] = bVar59;
        auVar7[4] = bVar53;
        auVar7[5] = bVar54;
        auVar7[6] = bVar57;
        auVar7[7] = bVar59;
        auVar7[8] = bVar53;
        auVar7[9] = bVar54;
        auVar7[10] = bVar57;
        auVar7[0xb] = bVar59;
        auVar7[0xc] = bVar53;
        auVar7[0xd] = bVar54;
        auVar7[0xe] = bVar57;
        auVar7[0xf] = bVar59;
        auVar49 = auVar48 ^ (auVar48 ^ auVar82) & auVar7;
        fStack_518 = auVar49._8_4_;
        fStack_514 = auVar49._12_4_;
        local_520 = auVar49._0_4_;
        fStack_51c = auVar49._4_4_;
        plVar26 = *(long **)(*(long *)(param_1 + 8) + 0x650);
        local_4c0 = auVar47._0_4_;
        fStack_4bc = auVar47._4_4_;
        fStack_4b8 = auVar47._8_4_;
        fStack_4b4 = auVar48._12_4_;
        (**(code **)(*plVar26 + 0x28))
                  (plVar26,pauVar2,lVar38,&local_520,&local_4c0,&local_4d0,param_1);
        auVar47._4_4_ = fStack_4bc;
        auVar47._0_4_ = local_4c0;
        auVar47._8_4_ = fStack_4b8;
      }
      local_4e0 = *(undefined8 *)(pauVar2[3] + 8);
      auVar49 = *(undefined1 (*) [16])(pauVar2[2] + 8);
      uStack_4d8 = CONCAT17(auVar49[0xf],
                            CONCAT16(auVar49[0xe],
                                     CONCAT15(auVar49[0xd],CONCAT14(auVar49[0xc],auVar49._12_4_))));
      lVar28 = lVar41 + uVar27 * 0x70;
      fStack_4b8 = auVar47._8_4_;
      fStack_4b4 = 0.0;
      local_4c0 = auVar47._0_4_;
      fStack_4bc = auVar47._4_4_;
      uVar43 = *(undefined4 *)(lVar28 + 0x10);
      pauVar35 = pauVar2 + 6;
      uVar77 = *(undefined8 *)*pauVar35;
      *(ulong *)(pauVar2[6] + 8) =
           CONCAT17((char)((uint)uVar43 >> 0x18),
                    CONCAT16((char)((uint)uVar43 >> 0x10),
                             CONCAT15((char)((uint)uVar43 >> 8),
                                      CONCAT14((char)uVar43,(int)*(undefined8 *)(pauVar2[6] + 8)))))
      ;
      *(undefined8 *)*pauVar35 = uVar77;
      local_540 = (float)local_570 * fStack_538;
      fStack_53c = fVar94 * fVar104;
      fStack_538 = (float)uStack_568 * fStack_538;
      fStack_534 = fStack_534 * fVar104;
      uVar6 = *(undefined4 *)(lVar28 + 0x14);
      pauVar39 = pauVar2 + 7;
      uVar19 = *(undefined4 *)*pauVar39;
      uVar20 = *(undefined4 *)(pauVar2[7] + 4);
      *(undefined4 *)(pauVar2[7] + 8) = *(undefined4 *)(pauVar2[7] + 8);
      *(undefined4 *)(pauVar2[7] + 0xc) = uVar6;
      *(undefined4 *)*pauVar39 = uVar19;
      *(undefined4 *)(pauVar2[7] + 4) = uVar20;
      auVar105._0_4_ = auVar95._0_4_ * fVar96;
      auVar105._4_4_ = auVar95._4_4_ * fVar98;
      auVar105._8_4_ = auVar95._8_4_ * fVar96;
      auVar105._12_4_ = auVar95._12_4_ * fVar98;
      if (*(int *)(pauVar37[1] + 8) < 0) {
        auVar21._12_4_ = 0;
        auVar21._0_12_ = auVar47;
        local_570._0_2_ = 0x1000;
        uVar79 = CONCAT44(-(uint)(auVar105._8_4_ * auVar105._8_4_ +
                                  auVar105._0_4_ * auVar105._0_4_ + auVar105._4_4_ * auVar105._4_4_
                                 < local_4c0 * local_4c0 + fStack_4bc * fStack_4bc +
                                   fStack_4b8 * fStack_4b8),
                          -(uint)(auVar105._8_4_ * auVar105._8_4_ +
                                  auVar105._0_4_ * auVar105._0_4_ + auVar105._4_4_ * auVar105._4_4_
                                 < local_4c0 * local_4c0 + fStack_4bc * fStack_4bc +
                                   fStack_4b8 * fStack_4b8)) & 0x100000001;
        iVar70 = (int)uVar79;
        iVar86 = (int)(uVar79 >> 0x20);
        auVar83._0_4_ = (iVar70 << 0x1f) >> 0x1f;
        auVar83._4_4_ = (iVar86 << 0x1f) >> 0x1f;
        auVar83._8_4_ = (iVar70 << 0x1f) >> 0x1f;
        auVar83._12_4_ = (iVar86 << 0x1f) >> 0x1f;
        auVar105 = auVar105 ^ (auVar105 ^ auVar21) & ~auVar83;
        uVar79 = (ulong)CONCAT14(-(fStack_538 * fStack_538 +
                                   local_540 * local_540 + fStack_53c * fStack_53c <
                                  (float)local_4d0 * (float)local_4d0 +
                                  local_4d0._4_4_ * local_4d0._4_4_ +
                                  (float)uStack_4c8 * (float)uStack_4c8),
                                 -(uint)(fStack_538 * fStack_538 +
                                         local_540 * local_540 + fStack_53c * fStack_53c <
                                        (float)local_4d0 * (float)local_4d0 +
                                        local_4d0._4_4_ * local_4d0._4_4_ +
                                        (float)uStack_4c8 * (float)uStack_4c8)) & 0x100000001;
        iVar70 = (int)uVar79;
        iVar86 = (int)(uVar79 >> 0x20);
        fStack_558 = auVar105._8_4_;
        fStack_554 = auVar105._12_4_;
        local_560 = auVar105._0_4_;
        fStack_55c = auVar105._4_4_;
        local_540 = (float)((uint)local_540 ^
                           ((uint)local_540 ^ (uint)(float)local_4d0) & ~((iVar70 << 0x1f) >> 0x1f))
        ;
        fStack_53c = (float)((uint)fStack_53c ^
                            ((uint)fStack_53c ^ (uint)local_4d0._4_4_) & ~((iVar86 << 0x1f) >> 0x1f)
                            );
        fStack_538 = (float)((uint)fStack_538 ^
                            ((uint)fStack_538 ^ (uint)(float)uStack_4c8) &
                            ~((iVar70 << 0x1f) >> 0x1f));
        fStack_534 = (float)((uint)fStack_534 ^
                            ((uint)fStack_534 ^ uStack_4c8._4_4_) & ~((iVar86 << 0x1f) >> 0x1f));
      }
      else {
        local_570._0_2_ = 0;
        local_560 = auVar105._0_4_;
        fStack_55c = auVar105._4_4_;
        fStack_558 = auVar105._8_4_;
        fStack_554 = auVar105._12_4_;
      }
      lVar28 = *(long *)(param_1 + 0x40);
      uVar24 = *(uint *)(lVar41 + uVar27 * 0x70 + 4) | 2;
      if ((*(uint *)(lVar28 + 0xd68) & uVar24) == 0) {
        *(float *)(pauVar2[6] + 8) = fStack_558;
        *(undefined4 *)(pauVar2[6] + 0xc) = uVar43;
        *(float *)*pauVar35 = local_560;
        *(float *)(pauVar2[6] + 4) = fStack_55c;
        *(float *)(pauVar2[7] + 8) = fStack_538;
        *(undefined4 *)(pauVar2[7] + 0xc) = uVar6;
        *(float *)*pauVar39 = local_540;
        *(float *)(pauVar2[7] + 4) = fStack_53c;
      }
      else {
        lVar30 = 0;
        puVar40 = (undefined8 *)(lVar28 + 0xd78);
        fStack_518 = fStack_558;
        fStack_514 = fStack_554;
        local_520 = local_560;
        fStack_51c = fStack_55c;
        local_510 = SUB41(local_540,0);
        uStack_50f = (undefined1)((uint)local_540 >> 8);
        uStack_50e = (undefined2)((uint)local_540 >> 0x10);
        uStack_4f8 = (ulong)(uint)fStack_4b8;
        local_500 = auVar47._0_8_;
        uStack_4e8 = uStack_4c8;
        uStack_4f0 = local_4d0;
        local_50c = fStack_53c;
        local_508 = fStack_538;
        local_504 = fStack_534;
        do {
          if ((*(uint *)(puVar40 + -1) & uVar24) != 0) {
            (**(code **)(*(long *)*puVar40 + 0xb0))
                      ((long *)*puVar40,param_1,uVar31,pauVar2,&local_520);
          }
          lVar30 = lVar30 + 1;
          puVar40 = puVar40 + 2;
        } while (lVar30 < *(int *)(lVar28 + 0xd6c));
        uStack_4c8 = uStack_4e8;
        local_4d0 = uStack_4f0;
        fStack_4b8 = (float)uStack_4f8;
        fStack_4b4 = (float)(uStack_4f8 >> 0x20);
        local_4c0 = (float)local_500;
        fStack_4bc = (float)((ulong)local_500 >> 0x20);
        local_540 = (float)CONCAT22(uStack_50e,CONCAT11(uStack_50f,local_510));
        local_560 = local_520;
        fStack_55c = fStack_51c;
        fStack_558 = fStack_518;
        fVar96 = fStack_518 * fStack_518 + local_520 * local_520 + fStack_51c * fStack_51c;
        fVar98 = fStack_518 * fStack_518 + local_520 * local_520 + fStack_51c * fStack_51c;
        auVar49 = *pauVar35;
        auVar95 = NEON_ext(auVar49,auVar49,8,1);
        fVar104 = auVar95._4_4_ * auVar95._4_4_;
        iVar70 = -(uint)(fVar96 <= fVar104);
        iVar86 = -(uint)(fVar98 <= fVar104);
        if (CONCAT13((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar70 >> 0x18),
                     CONCAT12((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar70 >> 0x10),
                              CONCAT11((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar70 >> 8),
                                       (byte)iVar86 | (byte)iVar70))) == 0) {
          if ((~((uint)fVar96 & 0xffff0000) & 0x7fc00000) != 0) {
            uVar77 = NEON_fmov(0x3f800000,4);
            fVar96 = (float)uVar77 / SQRT(fVar96);
            if ((~((uint)fVar96 & 0xffff0000) & 0x7fc00000) != 0) {
              fVar96 = auVar49._12_4_ * fVar96 * 0.99999976;
              fVar104 = local_520 * fVar96;
              uVar55 = SUB41(fVar104,0);
              uVar58 = (undefined1)((uint)fVar104 >> 8);
              uVar56 = (undefined1)((uint)fVar104 >> 0x10);
              uVar60 = (undefined1)((uint)fVar104 >> 0x18);
              fVar98 = fStack_51c *
                       auVar49._12_4_ * ((float)((ulong)uVar77 >> 0x20) / SQRT(fVar98)) * 0.99999976
              ;
              uVar61 = SUB41(fVar98,0);
              uVar62 = (undefined1)((uint)fVar98 >> 8);
              uVar63 = (undefined1)((uint)fVar98 >> 0x10);
              uVar64 = (undefined1)((uint)fVar98 >> 0x18);
              fVar96 = fStack_518 * fVar96;
              uVar65 = SUB41(fVar96,0);
              uVar66 = (undefined1)((uint)fVar96 >> 8);
              uVar67 = (undefined1)((uint)fVar96 >> 0x10);
              uVar68 = (undefined1)((uint)fVar96 >> 0x18);
              goto LAB_02f2ff20;
            }
          }
        }
        else {
          uVar65 = SUB41(fStack_518,0);
          uVar66 = (undefined1)((uint)fStack_518 >> 8);
          uVar67 = (undefined1)((uint)fStack_518 >> 0x10);
          uVar68 = (undefined1)((uint)fStack_518 >> 0x18);
          uVar55 = SUB41(local_520,0);
          uVar58 = (undefined1)((uint)local_520 >> 8);
          uVar56 = (undefined1)((uint)local_520 >> 0x10);
          uVar60 = (undefined1)((uint)local_520 >> 0x18);
          uVar61 = SUB41(fStack_51c,0);
          uVar62 = (undefined1)((uint)fStack_51c >> 8);
          uVar63 = (undefined1)((uint)fStack_51c >> 0x10);
          uVar64 = (undefined1)((uint)fStack_51c >> 0x18);
LAB_02f2ff20:
          *(ulong *)(pauVar2[6] + 8) =
               CONCAT17(auVar49[0xf],
                        CONCAT16(auVar49[0xe],
                                 CONCAT15(auVar49[0xd],
                                          CONCAT14(auVar49[0xc],
                                                   CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,
                                                  uVar65)))))));
          *(ulong *)*pauVar35 =
               CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar62,CONCAT14(uVar61,CONCAT13(uVar60,
                                                  CONCAT12(uVar56,CONCAT11(uVar58,uVar55)))))));
        }
        fStack_53c = local_50c;
        fStack_538 = local_508;
        fVar96 = local_508 * local_508 + local_540 * local_540 + local_50c * local_50c;
        fVar98 = local_508 * local_508 + local_540 * local_540 + local_50c * local_50c;
        auVar49 = *pauVar39;
        auVar95 = NEON_ext(auVar49,auVar49,8,1);
        fVar104 = auVar95._4_4_ * auVar95._4_4_;
        iVar70 = -(uint)(fVar96 <= fVar104);
        iVar86 = -(uint)(fVar98 <= fVar104);
        if (CONCAT13((byte)((uint)iVar86 >> 0x18) | (byte)((uint)iVar70 >> 0x18),
                     CONCAT12((byte)((uint)iVar86 >> 0x10) | (byte)((uint)iVar70 >> 0x10),
                              CONCAT11((byte)((uint)iVar86 >> 8) | (byte)((uint)iVar70 >> 8),
                                       (byte)iVar86 | (byte)iVar70))) == 0) {
          if ((~((uint)fVar96 & 0xffff0000) & 0x7fc00000) != 0) {
            uVar77 = NEON_fmov(0x3f800000,4);
            fVar96 = (float)uVar77 / SQRT(fVar96);
            if ((~((uint)fVar96 & 0xffff0000) & 0x7fc00000) != 0) {
              fVar96 = auVar49._12_4_ * fVar96 * 0.99999976;
              fVar104 = local_540 * fVar96;
              bVar53 = SUB41(fVar104,0);
              uVar55 = (undefined1)((uint)fVar104 >> 8);
              uVar58 = (undefined1)((uint)fVar104 >> 0x10);
              uVar56 = (undefined1)((uint)fVar104 >> 0x18);
              fVar98 = local_50c *
                       auVar49._12_4_ * ((float)((ulong)uVar77 >> 0x20) / SQRT(fVar98)) * 0.99999976
              ;
              uVar60 = SUB41(fVar98,0);
              uVar61 = (undefined1)((uint)fVar98 >> 8);
              uVar62 = (undefined1)((uint)fVar98 >> 0x10);
              uVar63 = (undefined1)((uint)fVar98 >> 0x18);
              fVar96 = local_508 * fVar96;
              uVar64 = SUB41(fVar96,0);
              uVar65 = (undefined1)((uint)fVar96 >> 8);
              uVar66 = (undefined1)((uint)fVar96 >> 0x10);
              uVar67 = (undefined1)((uint)fVar96 >> 0x18);
              goto LAB_02f2ff64;
            }
          }
        }
        else {
          uVar64 = SUB41(local_508,0);
          uVar65 = (undefined1)((uint)local_508 >> 8);
          uVar66 = (undefined1)((uint)local_508 >> 0x10);
          uVar67 = (undefined1)((uint)local_508 >> 0x18);
          uVar58 = (undefined1)uStack_50e;
          uVar56 = (undefined1)((ushort)uStack_50e >> 8);
          uVar60 = SUB41(local_50c,0);
          uVar61 = (undefined1)((uint)local_50c >> 8);
          uVar62 = (undefined1)((uint)local_50c >> 0x10);
          uVar63 = (undefined1)((uint)local_50c >> 0x18);
          bVar53 = local_510;
          uVar55 = uStack_50f;
LAB_02f2ff64:
          *(ulong *)(pauVar2[7] + 8) =
               CONCAT17(auVar49[0xf],
                        CONCAT16(auVar49[0xe],
                                 CONCAT15(auVar49[0xd],
                                          CONCAT14(auVar49[0xc],
                                                   CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,
                                                  uVar64)))))));
          *(ulong *)*pauVar39 =
               CONCAT17(uVar63,CONCAT16(uVar62,CONCAT15(uVar61,CONCAT14(uVar60,CONCAT13(uVar56,
                                                  CONCAT12(uVar58,CONCAT11(uVar55,bVar53)))))));
        }
        fStack_534 = local_504;
      }
      auVar22._4_4_ = fStack_4bc;
      auVar22._0_4_ = local_4c0;
      auVar22._8_4_ = fStack_4b8;
      auVar22._12_4_ = fStack_4b4;
      auVar8[8] = uStack_5b8;
      auVar8._0_8_ = uVar25;
      auVar8[9] = (char)((ulong)uVar23 >> 8);
      auVar8[10] = (char)((ulong)uVar23 >> 0x10);
      auVar8[0xb] = (char)((ulong)uVar23 >> 0x18);
      auVar8[0xc] = (char)((ulong)uVar23 >> 0x20);
      auVar8[0xd] = (char)((ulong)uVar23 >> 0x28);
      auVar8[0xe] = (char)((ulong)uVar23 >> 0x30);
      auVar8[0xf] = (char)((ulong)uVar23 >> 0x38);
      auVar49 = a64_TBL(ZEXT816(0),auVar22,auVar8);
      *(ulong *)pauVar2[3] =
           CONCAT17(auVar49[0xf],
                    CONCAT16(auVar49[0xe],
                             CONCAT15(auVar49[0xd],CONCAT14(auVar49[0xc],(float)uStack_4c8))));
      *(undefined8 *)*(undefined1 (*) [16])(pauVar2[2] + 8) = local_4d0;
      *(ulong *)(pauVar2[3] + 8) = CONCAT44(fStack_4bc,local_4c0);
      *(undefined2 *)(pauVar2[5] + 6) = 0x3f80;
      fVar44 = (float)*(undefined8 *)(lVar38 + 0x10);
      fVar50 = (float)((ulong)*(undefined8 *)(lVar38 + 0x10) >> 0x20);
      auVar49 = *pauVar2;
      auVar95 = NEON_ext(auVar49,auVar49,8,1);
      uVar77 = NEON_ext(auVar49._0_8_,auVar95._0_8_,4,1);
      fVar96 = fVar44 * (float)local_4d0 * 0.5;
      fVar104 = fVar50 * (float)((ulong)local_4d0 >> 0x20) * 0.5;
      uVar55 = SUB41(fVar104,0);
      uVar58 = (undefined1)((uint)fVar104 >> 8);
      uVar56 = (undefined1)((uint)fVar104 >> 0x10);
      uVar60 = (undefined1)((uint)fVar104 >> 0x18);
      fVar97 = fVar44 * (float)uStack_4c8 * 0.5;
      uVar61 = (undefined1)((uint)fVar97 >> 8);
      uVar62 = (undefined1)((uint)fVar97 >> 0x10);
      uVar63 = (undefined1)((uint)fVar97 >> 0x18);
      fVar102 = fVar50 * (float)((ulong)uStack_4c8 >> 0x20) * 0.5;
      uVar64 = (undefined1)((uint)fVar102 >> 8);
      uVar65 = (undefined1)((uint)fVar102 >> 0x10);
      uVar66 = (undefined1)((uint)fVar102 >> 0x18);
      auVar9[4] = uVar55;
      auVar9._0_4_ = fVar96;
      auVar9[5] = uVar58;
      auVar9[6] = uVar56;
      auVar9[7] = uVar60;
      auVar9[8] = SUB41(fVar97,0);
      auVar9[9] = uVar61;
      auVar9[10] = uVar62;
      auVar9[0xb] = uVar63;
      auVar9[0xc] = SUB41(fVar102,0);
      auVar9[0xd] = uVar64;
      auVar9[0xe] = uVar65;
      auVar9[0xf] = uVar66;
      auVar10[4] = uVar55;
      auVar10._0_4_ = fVar96;
      auVar10[5] = uVar58;
      auVar10[6] = uVar56;
      auVar10[7] = uVar60;
      auVar10[8] = SUB41(fVar97,0);
      auVar10[9] = uVar61;
      auVar10[10] = uVar62;
      auVar10[0xb] = uVar63;
      auVar10[0xc] = SUB41(fVar102,0);
      auVar10[0xd] = uVar64;
      auVar10[0xe] = uVar65;
      auVar10[0xf] = uVar66;
      auVar95 = NEON_ext(auVar9,auVar10,4,1);
      fVar73 = fVar96 * fVar96 + fVar104 * fVar104 + fVar97 * fVar97;
      fVar69 = fVar96 * fVar96 + fVar104 * fVar104 + fVar97 * fVar97;
      fVar85 = auVar49._0_4_;
      in_q6._0_4_ = fVar85 * auVar95._0_4_;
      fVar91 = auVar49._4_4_;
      in_q6._4_4_ = fVar91 * auVar95._4_4_;
      fVar92 = auVar49._8_4_;
      in_q6._8_4_ = fVar92 * fVar96;
      fVar93 = auVar49._12_4_;
      in_q6._12_4_ = fVar93 * (float)(CONCAT17(uVar60,CONCAT16(uVar56,CONCAT15(uVar58,CONCAT14(
                                                  uVar55,fVar96)))) >> 0x20);
      fVar103 = in_q6._0_4_ - fVar96 * (float)uVar77;
      fVar98 = in_q6._4_4_ - fVar104 * (float)((ulong)uVar77 >> 0x20);
      uVar55 = (undefined1)((uint)fVar98 >> 8);
      uVar58 = (undefined1)((uint)fVar98 >> 0x10);
      uVar56 = (undefined1)((uint)fVar98 >> 0x18);
      fVar94 = in_q6._8_4_ - fVar97 * fVar85;
      uVar60 = (undefined1)((uint)fVar94 >> 8);
      uVar61 = (undefined1)((uint)fVar94 >> 0x10);
      uVar62 = (undefined1)((uint)fVar94 >> 0x18);
      fVar101 = in_q6._12_4_ - fVar102 * fVar91;
      uVar63 = (undefined1)((uint)fVar101 >> 8);
      uVar64 = (undefined1)((uint)fVar101 >> 0x10);
      uVar65 = (undefined1)((uint)fVar101 >> 0x18);
      auVar17[4] = SUB41(fVar98,0);
      auVar17._0_4_ = fVar103;
      auVar17[5] = uVar55;
      auVar17[6] = uVar58;
      auVar17[7] = uVar56;
      auVar17[8] = SUB41(fVar94,0);
      auVar17[9] = uVar60;
      auVar17[10] = uVar61;
      auVar17[0xb] = uVar62;
      auVar17[0xc] = SUB41(fVar101,0);
      auVar17[0xd] = uVar63;
      auVar17[0xe] = uVar64;
      auVar17[0xf] = uVar65;
      auVar18[4] = SUB41(fVar98,0);
      auVar18._0_4_ = fVar103;
      auVar18[5] = uVar55;
      auVar18[6] = uVar58;
      auVar18[7] = uVar56;
      auVar18[8] = SUB41(fVar94,0);
      auVar18[9] = uVar60;
      auVar18[10] = uVar61;
      auVar18[0xb] = uVar62;
      auVar18[0xc] = SUB41(fVar101,0);
      auVar18[0xd] = uVar63;
      auVar18[0xe] = uVar64;
      auVar18[0xf] = uVar65;
      auVar95 = NEON_ext(auVar17,auVar18,4,1);
      fVar98 = fVar96 * fVar85;
      fVar94 = fVar104 * fVar91;
      uVar55 = (undefined1)((uint)fVar94 >> 8);
      uVar58 = (undefined1)((uint)fVar94 >> 0x10);
      uVar56 = (undefined1)((uint)fVar94 >> 0x18);
      fVar101 = fVar97 * fVar92;
      uVar60 = (undefined1)((uint)fVar101 >> 8);
      uVar61 = (undefined1)((uint)fVar101 >> 0x10);
      uVar62 = (undefined1)((uint)fVar101 >> 0x18);
      fVar102 = fVar102 * fVar93;
      uVar63 = (undefined1)((uint)fVar102 >> 8);
      uVar64 = (undefined1)((uint)fVar102 >> 0x10);
      uVar65 = (undefined1)((uint)fVar102 >> 0x18);
      fVar74 = fVar73 * (fVar73 * (fVar73 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar74;
      auVar11[4] = SUB41(fVar94,0);
      auVar11._0_4_ = fVar98;
      auVar11[5] = uVar55;
      auVar11[6] = uVar58;
      auVar11[7] = uVar56;
      auVar11[8] = SUB41(fVar101,0);
      auVar11[9] = uVar60;
      auVar11[10] = uVar61;
      auVar11[0xb] = uVar62;
      auVar11[0xc] = SUB41(fVar102,0);
      auVar11[0xd] = uVar63;
      auVar11[0xe] = uVar64;
      auVar11[0xf] = uVar65;
      auVar12[4] = SUB41(fVar94,0);
      auVar12._0_4_ = fVar98;
      auVar12[5] = uVar55;
      auVar12[6] = uVar58;
      auVar12[7] = uVar56;
      auVar12[8] = SUB41(fVar101,0);
      auVar12[9] = uVar60;
      auVar12[10] = uVar61;
      auVar12[0xb] = uVar62;
      auVar12[0xc] = SUB41(fVar102,0);
      auVar12[0xd] = uVar63;
      auVar12[0xe] = uVar64;
      auVar12[0xf] = uVar65;
      auVar49 = NEON_ext(auVar11,auVar12,8,1);
      fVar98 = fVar74 * fVar93 - (fVar98 + fVar94 + auVar49._0_4_);
      fVar101 = fVar96 * fVar93 + auVar95._0_4_ + fVar85 * fVar74;
      fVar94 = fVar104 * fVar93 + auVar95._4_4_ +
               fVar91 * (fVar69 * (fVar69 * (fVar69 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        fVar100);
      fVar100 = fVar97 * fVar93 + fVar103 + fVar92 * fVar74;
      fVar96 = fVar101 * fVar101;
      fVar74 = fVar94 * fVar94;
      uVar55 = (undefined1)((uint)fVar74 >> 8);
      uVar58 = (undefined1)((uint)fVar74 >> 0x10);
      uVar56 = (undefined1)((uint)fVar74 >> 0x18);
      fVar104 = fVar100 * fVar100;
      uVar60 = (undefined1)((uint)fVar104 >> 8);
      uVar61 = (undefined1)((uint)fVar104 >> 0x10);
      uVar62 = (undefined1)((uint)fVar104 >> 0x18);
      fVar97 = fVar98 * fVar98;
      uVar63 = (undefined1)((uint)fVar97 >> 8);
      uVar64 = (undefined1)((uint)fVar97 >> 0x10);
      uVar65 = (undefined1)((uint)fVar97 >> 0x18);
      auVar13[4] = SUB41(fVar74,0);
      auVar13._0_4_ = fVar96;
      auVar13[5] = uVar55;
      auVar13[6] = uVar58;
      auVar13[7] = uVar56;
      auVar13[8] = SUB41(fVar104,0);
      auVar13[9] = uVar60;
      auVar13[10] = uVar61;
      auVar13[0xb] = uVar62;
      auVar13[0xc] = SUB41(fVar97,0);
      auVar13[0xd] = uVar63;
      auVar13[0xe] = uVar64;
      auVar13[0xf] = uVar65;
      auVar14[4] = SUB41(fVar74,0);
      auVar14._0_4_ = fVar96;
      auVar14[5] = uVar55;
      auVar14[6] = uVar58;
      auVar14[7] = uVar56;
      auVar14[8] = SUB41(fVar104,0);
      auVar14[9] = uVar60;
      auVar14[10] = uVar61;
      auVar14[0xb] = uVar62;
      auVar14[0xc] = SUB41(fVar97,0);
      auVar14[0xd] = uVar63;
      auVar14[0xe] = uVar64;
      auVar14[0xf] = uVar65;
      auVar49 = NEON_ext(auVar13,auVar14,8,1);
      fVar97 = auVar49._0_4_ + auVar49._4_4_;
      fVar104 = SQRT(fVar96 + fVar74 + fVar97);
      fVar96 = SQRT(fVar96 + fVar74 + fVar97);
      fVar94 = fVar94 / fVar96;
      fVar98 = fVar98 / (float)CONCAT13((char)((uint)fVar96 >> 0x18),
                                        CONCAT12((char)((uint)fVar96 >> 0x10),
                                                 (short)(CONCAT15((char)((uint)fVar96 >> 8),
                                                                  CONCAT14(SUB41(fVar96,0),fVar104))
                                                        >> 0x20)));
      dVar46 = *(double *)pauVar2[2];
      *(ulong *)(*pauVar2 + 8) =
           CONCAT17((char)((uint)fVar98 >> 0x18),
                    CONCAT16((char)((uint)fVar98 >> 0x10),
                             CONCAT15((char)((uint)fVar98 >> 8),
                                      CONCAT14(SUB41(fVar98,0),fVar100 / fVar104))));
      *(ulong *)*pauVar2 =
           CONCAT17((char)((uint)fVar94 >> 0x18),
                    CONCAT16((char)((uint)fVar94 >> 0x10),
                             CONCAT15((char)((uint)fVar94 >> 8),
                                      CONCAT14(SUB41(fVar94,0),fVar101 / fVar104))));
      dVar16 = *(double *)pauVar2[1] + (double)(fVar44 * local_4c0);
      dVar80 = *(double *)(pauVar2[1] + 8) + (double)(fVar50 * fStack_4bc);
      dVar46 = dVar46 + (double)(fVar44 * fStack_4b8);
      *(double *)pauVar2[1] = dVar16;
      *(double *)(pauVar2[1] + 8) = dVar80;
      fVar96 = (float)dVar80;
      *(double *)pauVar2[2] = dVar46;
      uStack_528 = (ulong)(uint)(float)dVar46;
      local_530 = CONCAT17((char)((uint)fVar96 >> 0x18),
                           CONCAT16((char)((uint)fVar96 >> 0x10),
                                    CONCAT15((char)((uint)fVar96 >> 8),
                                             CONCAT14(SUB41(fVar96,0),(float)dVar16))));
      if (lVar33 != 0) {
        uVar24 = FUN_02f306dc(*(long *)(param_2 + 0x98) + uVar31 * 0x20,pauVar2,
                              lVar41 + uVar27 * 0x70,&local_4e0);
        iVar70 = local_574 + param_3 >> 5;
        *(uint *)(lVar33 + (long)iVar70 * 4) =
             *(uint *)(lVar33 + (long)iVar70 * 4) |
             uVar24 & 1 << (ulong)(local_574 + param_3 & 0x1f);
      }
      uVar24 = (**(code **)(**(long **)(param_2 + 0x18) + 0x20))
                         (*(long **)(param_2 + 0x18),&local_530);
      bVar53 = pauVar2[5][0xe];
      auVar81._4_4_ = fStack_53c;
      auVar81._0_4_ = local_540;
      auVar81._8_4_ = fStack_538;
      auVar84._12_4_ = fStack_534;
      auVar84._0_12_ = auVar81;
      if ((bVar53 != 0xff) && (uVar24 != bVar53)) {
        fVar96 = *(float *)(pauVar2[4] + 8);
        local_520 = 3.7615963e-37;
        fStack_51c = 0.0;
        uStack_50f = (undefined1)uVar24;
        puVar42 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
        puVar40 = *(undefined8 **)(param_1 + 0x4e0);
        uVar3 = *puVar42;
        local_510 = bVar53;
        fStack_518 = fVar96;
        fStack_514 = (float)uVar31;
        while (0x1e < uVar3 >> 0x17) {
          uVar3 = *(int *)(puVar40 + 0xb) - 1;
          if (*(int *)(puVar40 + 0xb) < 1) {
            lVar41 = puVar40[1];
            (**(code **)(*(long *)*puVar40 + 0x20))((long *)*puVar40,lVar41,6);
            auVar84._4_4_ = fStack_53c;
            auVar84._0_4_ = local_540;
            auVar84._8_4_ = fStack_538;
            *(undefined4 *)(puVar40 + 0xb) = 5;
            puVar29 = (undefined8 *)(lVar41 + 0x28);
          }
          else {
            *(uint *)(puVar40 + 0xb) = uVar3;
            puVar29 = (undefined8 *)(puVar40[1] + (ulong)uVar3 * 8);
          }
          puVar36 = (uint *)*puVar29;
          puVar36[4] = 0;
          puVar36[5] = 0;
          puVar36[6] = 0;
          puVar36[7] = 0;
          puVar36[0] = 0;
          puVar36[1] = 0;
          puVar36[2] = 0;
          puVar36[3] = 0;
          puVar36[1] = *(uint *)(param_1 + 0x548);
          iVar70 = *(int *)(param_1 + 0x548);
          lVar41 = (long)iVar70;
          if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar70) {
            FUN_031c25b4(lVar1,PTR_PTR_047d1a50,lVar41 + 1);
            auVar84._4_4_ = fStack_53c;
            auVar84._0_4_ = local_540;
            auVar84._8_4_ = fStack_538;
            iVar70 = *(int *)(param_1 + 0x548);
          }
          auVar81 = auVar84._0_12_;
          *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar70 * 8) = puVar36;
          *(int *)(param_1 + 0x548) = (int)(lVar41 + 1);
          *(uint **)(puVar42 + 2) = puVar36;
          puVar42 = puVar36;
          uVar3 = *puVar36;
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar42,0x10);
          if (bVar5) {
            *puVar42 = *puVar42 + 0x200001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
        uVar3 = uVar3 >> 0x10;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x20) = local_520;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x24) = fStack_51c;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x28) = fVar96;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x2c) = (float)uVar31;
        *(uint *)((long)puVar42 + (ulong)uVar3 + 0x30) =
             CONCAT22(uStack_50e,CONCAT11(uStack_50f,local_510));
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x34) = local_50c;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x38) = local_508;
        *(float *)((long)puVar42 + (ulong)uVar3 + 0x3c) = local_504;
      }
      if (lVar34 != 0) {
        plVar26 = (long *)(lVar34 + (long)(int)uVar24 * 0x20);
        uVar27 = (ulong)(byte)pauVar2[5][0xf];
        *plVar26 = *plVar26 + (long)(int)((float)local_530 * 128.0) * uVar27;
        plVar26[1] = plVar26[1] + (long)(int)(local_530._4_4_ * 128.0) * uVar27;
        plVar26[2] = plVar26[2] + (long)(int)((float)uStack_528 * 128.0) * uVar27;
        plVar26[3] = plVar26[3] + uVar27;
      }
      iVar70 = -(uint)(auVar81._0_4_ == 0.0);
      iVar86 = -(uint)(auVar81._4_4_ == 0.0);
      iVar72 = -(uint)(auVar81._8_4_ == 0.0);
      iVar75 = -(uint)(local_4c0 == 0.0);
      iVar89 = -(uint)(fStack_4bc == 0.0);
      iVar90 = -(uint)(fStack_4b8 == 0.0);
      iVar45 = -(uint)(local_560 == 0.0);
      iVar51 = -(uint)(fStack_55c == 0.0);
      iVar52 = -(uint)(fStack_558 == 0.0);
      iVar88 = -(uint)((float)local_4d0 == 0.0);
      iVar71 = -(uint)((float)((ulong)local_4d0 >> 0x20) == 0.0);
      iVar87 = -(uint)((float)uStack_4c8 == 0.0);
      uVar24 = *(uint *)(pauVar2[4] + 8);
      do {
        lVar41 = *(long *)(param_2 + 0x48) + (ulong)(uVar24 & 0xffffff) * 0xc0;
        *(ushort *)(lVar41 + 0x58) =
             (ushort)local_570 |
             (ushort)(CONCAT13(~(byte)((uint)iVar51 >> 0x18) | ~(byte)((uint)iVar86 >> 0x18) |
                               ~(byte)((uint)iVar89 >> 0x18) | ~(byte)((uint)iVar71 >> 0x18) |
                               ~(byte)((uint)iVar45 >> 0x18) | ~(byte)((uint)iVar70 >> 0x18) |
                               ~(byte)((uint)iVar75 >> 0x18) | ~(byte)((uint)iVar88 >> 0x18) |
                               ~(byte)((uint)iVar52 >> 0x18) | ~(byte)((uint)iVar72 >> 0x18) |
                               ~(byte)((uint)iVar90 >> 0x18) | ~(byte)((uint)iVar87 >> 0x18),
                               CONCAT12(~(byte)((uint)iVar51 >> 0x10) |
                                        ~(byte)((uint)iVar86 >> 0x10) |
                                        ~(byte)((uint)iVar89 >> 0x10) |
                                        ~(byte)((uint)iVar71 >> 0x10) |
                                        ~(byte)((uint)iVar45 >> 0x10) |
                                        ~(byte)((uint)iVar70 >> 0x10) |
                                        ~(byte)((uint)iVar75 >> 0x10) |
                                        ~(byte)((uint)iVar88 >> 0x10) |
                                        ~(byte)((uint)iVar52 >> 0x10) |
                                        ~(byte)((uint)iVar72 >> 0x10) |
                                        ~(byte)((uint)iVar90 >> 0x10) |
                                        ~(byte)((uint)iVar87 >> 0x10),
                                        CONCAT11(~(byte)((uint)iVar51 >> 8) |
                                                 ~(byte)((uint)iVar86 >> 8) |
                                                 ~(byte)((uint)iVar89 >> 8) |
                                                 ~(byte)((uint)iVar71 >> 8) |
                                                 ~(byte)((uint)iVar45 >> 8) |
                                                 ~(byte)((uint)iVar70 >> 8) |
                                                 ~(byte)((uint)iVar75 >> 8) |
                                                 ~(byte)((uint)iVar88 >> 8) |
                                                 ~(byte)((uint)iVar52 >> 8) |
                                                 ~(byte)((uint)iVar72 >> 8) |
                                                 ~(byte)((uint)iVar90 >> 8) |
                                                 ~(byte)((uint)iVar87 >> 8),
                                                 ~(byte)iVar51 | ~(byte)iVar86 | ~(byte)iVar89 |
                                                 ~(byte)iVar71 |
                                                 ~(byte)iVar45 | ~(byte)iVar70 | ~(byte)iVar75 |
                                                 ~(byte)iVar88 |
                                                 ~(byte)iVar52 | ~(byte)iVar72 | ~(byte)iVar90 |
                                                 ~(byte)iVar87))) != 0) << 10;
        FUN_02f20814(param_1,lVar38,
                     *(long *)(param_1 + 0x10) + (ulong)*(byte *)(lVar41 + 0x89) * 0x50,
                     param_2 + 0x20,lVar41,pauVar2);
        puVar40 = (undefined8 *)(*(long *)(param_1 + 0x500) + (ulong)(uVar24 & 0xffffff) * 0x20);
        *puVar40 = 0;
        *(undefined4 *)((long)puVar40 + 0xc) = 0;
        puVar40[2] = 0;
        uVar24 = *(uint *)(lVar41 + 0x84);
      } while (uVar24 != *(uint *)(pauVar2[4] + 8));
      local_574 = local_574 + 1;
      pfVar32 = pfVar32 + 8;
      pauVar37 = pauVar37 + 2;
    } while (local_574 != param_4);
  }
  if (param_5 != (long *)0x0) {
    lVar34 = *param_5;
    if (((*(byte *)(lVar34 + 0x38) & 1) != 0) && (param_5[6] != 0)) {
      puVar40 = (undefined8 *)param_5[2];
      uVar27 = (long)puVar40 + 0x17U & 0xfffffffffffffff8;
      if ((uVar27 <= (ulong)param_5[3]) && (param_5[2] = uVar27, puVar40 != (undefined8 *)0x0)) {
        *puVar40 = &DAT_03c4e575;
        puVar40[1] = *(undefined8 *)(param_5[6] + 8);
      }
    }
    puVar40 = (undefined8 *)param_5[2];
    uVar27 = (long)puVar40 + 0x17U & 0xfffffffffffffff8;
    if ((uVar27 <= (ulong)param_5[3]) && (param_5[2] = uVar27, puVar40 != (undefined8 *)0x0)) {
      *puVar40 = &DAT_03c2d363;
      uVar25 = nn::os::GetSystemTick();
      puVar40[1] = uVar25;
    }
    if (*(code **)(lVar34 + 0x20) != (code *)0x0) {
      (**(code **)(lVar34 + 0x20))(*(undefined8 *)(lVar34 + 0x28));
    }
  }
  lVar34 = local_4a0;
  uVar27 = (ulong)local_4a0._4_4_;
  local_4a0 = (ulong)local_4a0._4_4_ << 0x20;
  if ((-1 < lVar34) && (local_4a8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4a8,uVar27 << 2);
  }
  return;
}


