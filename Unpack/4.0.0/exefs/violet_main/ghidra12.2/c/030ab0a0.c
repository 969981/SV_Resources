/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ab0a0; name: FUN_030ab0a0
 */


/* WARNING: Removing unreachable block (ram,0x030ab664) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_030ab0a0(long param_1,undefined8 param_2)

{
  unkbyte9 *pVar1;
  undefined *puVar2;
  char *pcVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  void *__dest;
  long lVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long lVar20;
  void *pvVar21;
  long lVar22;
  undefined4 *puVar23;
  float *pfVar24;
  long lVar25;
  char cVar26;
  long lVar27;
  bool bVar28;
  undefined8 uVar29;
  void **ppvVar30;
  uint uVar31;
  long *plVar32;
  int *piVar33;
  float fVar34;
  float fVar35;
  int iVar40;
  float fVar41;
  float fVar44;
  int iVar45;
  undefined1 auVar36 [12];
  float fVar39;
  undefined1 auVar37 [16];
  float fVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  undefined1 auVar38 [16];
  float fVar50;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  int iVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar81;
  undefined8 uVar77;
  float fVar83;
  undefined1 auVar78 [16];
  float fVar82;
  float fVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined8 uVar85;
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fStack_1028;
  float fStack_1024;
  long *local_fe0;
  undefined8 uStack_fd8;
  undefined *local_e20;
  undefined8 local_e18;
  undefined8 local_e10;
  undefined8 local_e08;
  long **local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined1 local_de8;
  uint local_de0 [2];
  char local_dd8 [4];
  int local_dd4;
  undefined1 auStack_dd0 [12];
  float local_dc4;
  float local_dc0;
  undefined1 auStack_dbc [12];
  undefined8 local_db0;
  undefined8 uStack_da8;
  ulong local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  long local_d80;
  undefined8 uStack_d78;
  float local_d70;
  float fStack_d6c;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  uint local_d50;
  uint local_d4c;
  void *local_d48;
  void *local_d40;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar14 = *(long *)(param_1 + 0x220);
  if (lVar14 == 0) {
    *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
    if (*(int *)(param_1 + 0x40) == 1) {
      *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x30);
    }
    goto LAB_030ab6f0;
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  lVar22 = param_1 + 0x230;
  if (*(char *)(param_1 + 0x198) == '\0') {
    iVar13 = *(int *)(param_1 + 0x238);
    lVar17 = (long)iVar13;
    if ((*(int *)(param_1 + 0x194) == 8) && (*(int *)(lVar14 + 0x20) != 0)) {
      lVar20 = *(long *)(lVar14 + 0x18) + (long)*(int *)(lVar14 + 0x20) * 0x90;
      fVar35 = *(float *)(lVar20 + -0x90);
      fVar43 = *(float *)(lVar20 + -0x8c);
      fVar47 = *(float *)(lVar20 + -0x88);
      iVar40 = -(uint)(fVar35 == *(float *)(lVar20 + -0x80));
      iVar45 = -(uint)(fVar43 == *(float *)(lVar20 + -0x7c));
      iVar48 = -(uint)(fVar47 == *(float *)(lVar20 + -0x78));
      iVar56 = -(uint)(*(float *)(lVar20 + -0x84) == *(float *)(lVar20 + -0x74));
      if (CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                   (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar56 >> 0x18),
                   CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                            (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar56 >> 0x10),
                            CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar40 >> 8) &
                                     (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar56 >> 8),
                                     (byte)iVar45 & (byte)iVar40 & (byte)iVar48 & (byte)iVar56))) !=
          0) {
        uVar6 = *(uint *)(lVar20 + -0x20) >> 0x16;
        if (*(uint *)(lVar20 + -0x20) == 0xffffffff) {
          uVar6 = 0xffffffff;
        }
        lVar20 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x180) + 0x130) + 0x38) +
                          (-(ulong)(uVar6 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar6 << 8));
        fVar49 = *(float *)(lVar20 + 0x60);
        fVar41 = *(float *)(lVar20 + 100);
        fVar76 = *(float *)(lVar20 + 0x6c);
        uVar77 = *(undefined8 *)(lVar20 + 0x78);
        uVar18 = *(undefined8 *)(lVar20 + 0x70);
        auVar87 = *(undefined1 (*) [16])(lVar20 + 0x80);
        auVar86 = *(undefined1 (*) [16])(lVar20 + 0x90);
        *(float *)(param_1 + 0x1b8) =
             auVar86._8_4_ +
             auVar87._8_4_ * fVar47 + *(float *)(lVar20 + 0x68) * fVar35 + (float)uVar77 * fVar43;
        *(float *)(param_1 + 0x1bc) =
             auVar86._12_4_ +
             auVar87._12_4_ * fVar47 + fVar76 * fVar35 + (float)((ulong)uVar77 >> 0x20) * fVar43;
        *(float *)(param_1 + 0x1b0) =
             auVar86._0_4_ + auVar87._0_4_ * fVar47 + fVar49 * fVar35 + (float)uVar18 * fVar43;
        *(float *)(param_1 + 0x1b4) =
             auVar86._4_4_ +
             auVar87._4_4_ * fVar47 + fVar41 * fVar35 + (float)((ulong)uVar18 >> 0x20) * fVar43;
      }
    }
    local_90 = (float)*(undefined8 *)(param_1 + 0x30);
    fStack_8c = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    fStack_88 = (float)*(undefined8 *)(param_1 + 0x38);
    fStack_84 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    iVar40 = FUN_030594e0(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
                          (char)*(undefined4 *)(param_1 + 0x168),lVar14,lVar22,&local_90,
                          *(long *)(param_1 + 0x180) + 0x120,
                          *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_fe0,&local_dc0)
    ;
    if (iVar40 != 0) {
      if (iVar40 != 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      lVar14 = *(long *)(param_1 + 0x228);
      if (lVar14 != 0) {
        pcVar3 = (char *)(lVar14 + 100);
        do {
          cVar26 = *pcVar3;
          cVar7 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar28) {
            *pcVar3 = '\x04';
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (cVar26 == '\x01') {
          *(undefined1 *)(*(long *)(lVar14 + 0x68) + 0x20) = 3;
          plVar15 = *(long **)(lVar14 + 0x68);
          *(undefined8 *)(lVar14 + 0x68) = 0;
          if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
            plVar32 = plVar15 + 2;
            do {
              lVar14 = *plVar32;
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar28) {
                *plVar32 = lVar14 + -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))();
            }
          }
        }
        plVar15 = *(long **)(param_1 + 0x228);
        *(undefined8 *)(param_1 + 0x228) = 0;
        if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
          plVar32 = plVar15 + 2;
          do {
            lVar14 = *plVar32;
            cVar26 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar28) {
              *plVar32 = lVar14 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))();
          }
        }
      }
      local_d90 = 0x3a83126f3a83126f;
      local_db0 = CONCAT44(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x158));
      uStack_d98._4_4_ = uStack_d98._4_4_ & 0xffffff00;
      uStack_d98 = CONCAT44(uStack_d98._4_4_,0x3f800000);
      local_da0 = CONCAT44(*(float *)(param_1 + 0xc0) * 0.5,(undefined4)local_da0) &
                  0xffffffffffffff00;
      uStack_d88 = CONCAT44(*(undefined4 *)(param_1 + 0xa0),0xffffffff);
      local_d80 = *(undefined8 *)(param_1 + 0xe8);
      local_d60 = *(undefined8 *)(param_1 + 200);
      uStack_d78 = *(undefined8 *)(param_1 + 0xf0);
      local_d70 = *(float *)(param_1 + 0xf8);
      uStack_d68 = *(undefined8 *)(param_1 + 0x100);
      uStack_da8 = local_db0;
      local_dc0 = (float)FUN_030ae3b0(*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_90,
                                      param_1 + 0x90,&local_db0,&local_fe0);
      if (local_dc0 == -NAN) {
        local_fe0 = (long *)CONCAT44(fStack_8c,local_90);
        auVar87._8_4_ = fStack_88;
        auVar87._0_8_ = local_fe0;
        auVar87._12_4_ = fStack_84;
        uVar18 = 1;
        local_dc0 = -NAN;
        uStack_fd8 = auVar87._8_8_;
      }
      else {
        uVar18 = 2;
      }
      FUN_030ac134(param_1,uVar18,param_2);
    }
    *(float *)(param_1 + 0x19c) = local_dc0;
    *(undefined8 *)(param_1 + 0x1a8) = uStack_fd8;
    *(long **)(param_1 + 0x1a0) = local_fe0;
    if ((*(char *)(param_1 + 0x198) == '\0') &&
       (iVar40 = *(int *)(param_1 + 0x238), iVar13 < iVar40)) {
      uVar18 = NEON_fmov(0x3f800000,4);
      lVar14 = lVar17 * 0x90 + 400;
      do {
        lVar25 = *(long *)(param_1 + 0x220);
        lVar17 = lVar17 + 1;
        lVar20 = *(long *)(lVar25 + 0x18) + lVar14;
        if ((*(byte *)(lVar20 + -0x80) >> 4 & 1) != 0) {
          local_d50 = *(uint *)(lVar20 + -0x90) >> 0x16;
          lVar27 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x180) + 0x130) + 0x38) +
                            (ulong)local_d50 * 0x100);
          auVar87 = *(undefined1 (*) [16])(lVar27 + 0x60);
          auVar37 = *(undefined1 (*) [16])(lVar27 + 0x70);
          pVar1 = (unkbyte9 *)(lVar27 + 0x80);
          uVar77 = *(undefined8 *)(lVar27 + 0x88);
          uVar57 = (undefined1)((ulong)uVar77 >> 8);
          uVar58 = (undefined1)((ulong)uVar77 >> 0x10);
          uVar59 = (undefined1)((ulong)uVar77 >> 0x18);
          uVar60 = (undefined1)((ulong)uVar77 >> 0x20);
          uVar61 = (undefined1)((ulong)uVar77 >> 0x28);
          uVar62 = (undefined1)((ulong)uVar77 >> 0x30);
          uVar63 = (undefined1)((ulong)uVar77 >> 0x38);
          fVar35 = *(float *)(param_1 + 0x30) - *(float *)(lVar27 + 0x90);
          fVar43 = *(float *)(param_1 + 0x34) - *(float *)(lVar27 + 0x94);
          fVar47 = *(float *)(param_1 + 0x38) - *(float *)(lVar27 + 0x98);
          auVar51 = NEON_ext(auVar87,auVar87,8,1);
          auVar78 = NEON_ext(auVar37,auVar37,8,1);
          auVar86[9] = uVar57;
          auVar86._0_9_ = *pVar1;
          auVar86[10] = uVar58;
          auVar86[0xb] = uVar59;
          auVar86[0xc] = uVar60;
          auVar86[0xd] = uVar61;
          auVar86[0xe] = uVar62;
          auVar86[0xf] = uVar63;
          auVar89[9] = uVar57;
          auVar89._0_9_ = *pVar1;
          auVar89[10] = uVar58;
          auVar89[0xb] = uVar59;
          auVar89[0xc] = uVar60;
          auVar89[0xd] = uVar61;
          auVar89[0xe] = uVar62;
          auVar89[0xf] = uVar63;
          auVar86 = NEON_ext(auVar86,auVar89,8,1);
          fVar49 = auVar51._0_4_ * fVar47 + auVar87._0_4_ * fVar35 + auVar87._4_4_ * fVar43;
          fVar41 = auVar78._0_4_ * fVar47 + auVar37._0_4_ * fVar35 + auVar37._4_4_ * fVar43;
          fVar76 = auVar86._0_4_ * fVar47 +
                   (float)*(undefined8 *)pVar1 * fVar35 +
                   (float)((ulong)*(undefined8 *)pVar1 >> 0x20) * fVar43;
          fVar35 = *(float *)(lVar20 + -0x100) - (float)*(undefined8 *)(lVar20 + -0xf0);
          fVar43 = *(float *)(lVar20 + -0xfc) -
                   (float)((ulong)*(undefined8 *)(lVar20 + -0xf0) >> 0x20);
          fVar47 = *(float *)(lVar20 + -0xf8) - (float)*(undefined8 *)(lVar20 + -0xe8);
          fVar34 = *(float *)(lVar20 + -0x100) - fVar49;
          fVar39 = *(float *)(lVar20 + -0xfc) - fVar41;
          fVar44 = *(float *)(lVar20 + -0xf8) - fVar76;
          fVar73 = fVar35 * fVar34;
          fVar81 = fVar43 * fVar39;
          fVar83 = fVar47 * fVar44;
          uVar77 = NEON_fminnm(CONCAT44((fVar73 + fVar81 + fVar83) /
                                        (fVar35 * fVar35 + fVar43 * fVar43 + fVar47 * fVar47),
                                        (fVar73 + fVar81 + fVar83) /
                                        (fVar35 * fVar35 + fVar43 * fVar43 + fVar47 * fVar47)),
                               uVar18,4);
          uVar77 = NEON_fmax(uVar77,0,4);
          fVar73 = (float)uVar77;
          fVar34 = fVar34 - fVar35 * fVar73;
          fVar39 = fVar39 - fVar43 * (float)((ulong)uVar77 >> 0x20);
          fVar44 = fVar44 - fVar47 * fVar73;
          fVar35 = SQRT(fVar34 * fVar34 + fVar39 * fVar39 + fVar44 * fVar44);
          fVar43 = SQRT(fVar34 * fVar34 + fVar39 * fVar39 + fVar44 * fVar44);
          iVar13 = -(uint)(fVar35 == 0.0);
          iVar40 = -(uint)(fVar43 == 0.0);
          iVar45 = -(uint)(fVar35 == 0.0);
          fVar47 = ((fVar49 - (fVar49 + fVar34)) / fVar35) * 0.0;
          fVar43 = ((fVar41 - (fVar41 + fVar39)) / fVar43) * 0.0;
          fVar35 = ((fVar76 - (fVar76 + fVar44)) / fVar35) * 0.0;
          local_d70 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                      CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                               ~(byte)((uint)iVar13 >> 0x10),
                                               CONCAT11((byte)((uint)fVar47 >> 8) &
                                                        ~(byte)((uint)iVar13 >> 8),
                                                        SUB41(fVar47,0) & ~(byte)iVar13)));
          auVar36._0_8_ =
               CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                        CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                 CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                          CONCAT14(SUB41(fVar43,0) & ~(byte)iVar40,local_d70))));
          auVar36[8] = SUB41(fVar35,0) & ~(byte)iVar45;
          auVar36[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar45 >> 8);
          auVar36[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
          auVar36[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
          local_d70 = fVar49 + fVar34 + local_d70;
          fStack_d6c = fVar41 + fVar39 + (float)((ulong)auVar36._0_8_ >> 0x20);
          uStack_d68 = CONCAT44(fVar73,fVar76 + fVar44 + auVar36._8_4_);
          local_d4c = *(uint *)(*(long *)(lVar25 + 0x18) + lVar14) >> 0x16;
          local_db0 = *(undefined8 *)(lVar20 + -0xd0);
          uStack_da8 = *(undefined8 *)(lVar20 + -200);
          local_da0 = *(undefined8 *)(lVar20 + -0xc0);
          uStack_d98 = *(undefined8 *)(lVar20 + -0xb8);
          local_d90 = *(undefined8 *)(lVar20 + -0xb0);
          uStack_d88 = *(undefined8 *)(lVar20 + -0xa8);
          local_d80 = *(undefined8 *)(lVar20 + -0xa0);
          uStack_d78 = *(undefined8 *)(lVar20 + -0x98);
          local_d48 = (void *)(*(long *)(lVar25 + 0x28) + lVar17 * *(int *)(lVar25 + 0x38) * 4);
          local_d40 = (void *)((long)local_d48 + (long)*(int *)(lVar25 + 0x38) * 4);
          auVar87 = *(undefined1 (*) [16])(lVar20 + -0xf0);
          auVar37._0_8_ =
               CONCAT44(*(float *)(lVar20 + -0xfc) - auVar87._4_4_,
                        *(float *)(lVar20 + -0x100) - auVar87._0_4_);
          auVar37._8_4_ = *(float *)(lVar20 + -0xf8) - auVar87._8_4_;
          auVar37._12_4_ = *(float *)(lVar20 + -0xf4) - auVar87._12_4_;
          uStack_d58 = auVar37._8_8_;
          iVar13 = *(int *)(param_1 + 0x250);
          lVar20 = (long)iVar13;
          local_d60 = auVar37._0_8_;
          if ((int)(*(uint *)(param_1 + 0x254) & 0x7fffffff) <= iVar13) {
            FUN_030ae1bc(param_1 + 0x248,PTR_PTR_047d1a50,lVar20 + 1);
            iVar13 = *(int *)(param_1 + 0x250);
          }
          pvVar21 = local_d48;
          lVar25 = *(long *)(param_1 + 0x248);
          *(int *)(param_1 + 0x250) = (int)(lVar20 + 1);
          puVar23 = (undefined4 *)(lVar25 + (long)iVar13 * 0xa0);
          ppvVar30 = (void **)(puVar23 + 0x24);
          *ppvVar30 = (void *)0x0;
          piVar33 = puVar23 + 0x26;
          piVar33[0] = 0;
          piVar33[1] = -0x80000000;
          *puVar23 = 5;
          *(undefined8 *)(puVar23 + 6) = uStack_da8;
          *(undefined8 *)(puVar23 + 4) = local_db0;
          *(undefined8 *)(puVar23 + 10) = uStack_d98;
          *(ulong *)(puVar23 + 8) = local_da0;
          *(undefined8 *)(puVar23 + 0xe) = uStack_d88;
          *(undefined8 *)(puVar23 + 0xc) = local_d90;
          *(undefined8 *)(puVar23 + 0x12) = uStack_d78;
          *(long *)(puVar23 + 0x10) = local_d80;
          *(undefined8 *)(puVar23 + 0x16) = uStack_d68;
          *(ulong *)(puVar23 + 0x14) = CONCAT44(fStack_d6c,local_d70);
          *(undefined8 *)(puVar23 + 0x1a) = uStack_d58;
          *(undefined8 *)(puVar23 + 0x18) = local_d60;
          puVar23[0x1c] = local_d50;
          puVar23[0x1d] = local_d4c;
          *(void **)(puVar23 + 0x1e) = local_d48;
          *(void **)(puVar23 + 0x20) = local_d40;
          if (&local_d48 == ppvVar30) {
            pvVar21 = (void *)0x0;
            lVar20 = 0;
          }
          else {
            lVar20 = ((long)local_d40 - (long)local_d48) * 0x40000000 >> 0x20;
            iVar40 = (int)((ulong)((long)local_d40 - (long)local_d48) >> 2);
            if (iVar40 < 1) {
              __dest = (void *)0x0;
            }
            else {
              FUN_02f5f190(ppvVar30,PTR_PTR_047d1a50,lVar20);
              __dest = *ppvVar30;
            }
            memcpy(__dest,pvVar21,lVar20 << 2);
            *piVar33 = iVar40;
            pvVar21 = *ppvVar30;
          }
          *(void **)(puVar23 + 0x1e) = pvVar21;
          *(void **)(lVar25 + (long)iVar13 * 0xa0 + 0x80) = (void *)((long)pvVar21 + lVar20 * 4);
          *(undefined4 *)(param_1 + 0x40) = 2;
          *(undefined4 *)(param_1 + 400) = 4;
          *(undefined1 *)(*(long *)(param_1 + 0x228) + 0x30) = 0;
          *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x60) = *(undefined4 *)(param_1 + 0x234);
          iVar40 = *(int *)(param_1 + 0x238);
        }
        lVar14 = lVar14 + 0x90;
      } while (lVar17 < iVar40);
    }
  }
  if (*(int *)(param_1 + 0x40) != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x198) == '\0') {
    local_d80 = *(long *)(*(long *)(param_1 + 0x180) + 0x130);
    uVar6 = *(uint *)(param_1 + 0x19c) >> 0x16;
    lVar14 = *(long *)(*(long *)(local_d80 + 0x38) + (ulong)uVar6 * 0x100);
    auVar87 = *(undefined1 (*) [16])(lVar14 + 0x60);
    auVar86 = *(undefined1 (*) [16])(lVar14 + 0x70);
    auVar89 = *(undefined1 (*) [16])(lVar14 + 0x80);
    auVar51 = NEON_ext(auVar86,auVar86,8,1);
    auVar37 = NEON_ext(auVar87,auVar87,8,1);
    auVar78 = NEON_ext(auVar89,auVar89,8,1);
    fVar35 = auVar37._0_4_;
    fVar49 = auVar51._0_4_;
    fVar43 = auVar87._0_4_;
    fVar41 = auVar86._0_4_;
    fVar83 = auVar89._4_4_;
    fVar47 = auVar87._4_4_;
    fVar76 = auVar86._4_4_;
    fVar34 = *(float *)(param_1 + 0x1a0) - (float)*(undefined8 *)(lVar14 + 0x90);
    fVar39 = *(float *)(param_1 + 0x1a4) - (float)((ulong)*(undefined8 *)(lVar14 + 0x90) >> 0x20);
    fVar44 = *(float *)(param_1 + 0x1a8) - (float)*(undefined8 *)(lVar14 + 0x98);
    fVar73 = auVar89._0_4_;
    fVar81 = auVar78._4_4_;
    fVar88 = auVar78._0_4_;
    local_90 = fVar35 * fVar44 + fVar43 * fVar34 + fVar47 * fVar39;
    fStack_8c = fVar49 * fVar44 + fVar41 * fVar34 + fVar76 * fVar39;
    fStack_88 = fVar88 * fVar44 + fVar73 * fVar34 + fVar83 * fVar39;
    fStack_84 = fVar81 * fVar44 + fVar83 * fVar34 + fVar81 * fVar39;
    uVar18 = *(undefined8 *)(lVar14 + 0xa0);
    uVar77 = *(undefined8 *)(lVar14 + 0xa8);
    uVar85 = *(undefined8 *)(lVar14 + 0xb0);
    uVar10 = *(undefined8 *)(lVar14 + 0xb8);
    auVar37 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x180) + 0x120);
    uStack_d68 = *(undefined8 *)(param_1 + 200);
    uStack_d78._0_4_ = *(int *)(param_1 + 0xa0);
    uStack_d88 = *(undefined8 *)(param_1 + 0xe8);
    local_da0 = *(long *)(param_1 + 0xf0);
    uStack_d78._4_4_ = *(float *)(param_1 + 0xc0) * 0.5;
    uVar29 = *(undefined8 *)(param_1 + 0x100);
    local_d70 = 0.001;
    uStack_d98 = CONCAT44(uStack_d98._4_4_,*(undefined4 *)(param_1 + 0xf8));
    local_d90 = 0;
    uStack_da8 = auVar37._8_8_;
    local_db0 = auVar37._0_8_;
    local_d60 = 0;
    FUN_03060fe8(&uStack_d58);
    if (*(float *)(local_d80 + (long)(int)uStack_d78 * 4 + 0x60) + local_d70 < uStack_d78._4_4_) {
      if (-1 < (long)local_da0) {
        uVar29 = *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(local_d80 + 0x58) + 0x18) +
                            (long)(int)local_da0 * 0x18) + ((long)local_da0 >> 0x20) * 0x18);
      }
      local_d90 = uVar29;
    }
    if (*(char *)(param_1 + 0x198) == '\0') {
      uVar31 = 0;
      puVar2 = PTR_DAT_047e5068 + 0x10;
      while (local_de0[0] = uVar6,
            iVar13 = FUN_0305c53c(*(undefined8 *)(param_1 + 0x220),lVar22,&local_90,local_de0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_dc0,
                                  auStack_dd0,&local_dd4,local_dd8), 2 < iVar13 - 2U) {
        if ((((iVar13 != 0) || (*(char *)(param_1 + 0xbb) == '\0')) || (local_dc4 != 0.0)) ||
           (3 < uVar31)) goto LAB_030abd08;
        lVar14 = *(long *)(param_1 + 0x220);
        lVar17 = (long)local_dd4;
        pfVar24 = (float *)(*(long *)(lVar14 + 0x18) + lVar17 * 0x90);
        iVar13 = -(uint)(*pfVar24 == pfVar24[4]);
        iVar40 = -(uint)(pfVar24[1] == pfVar24[5]);
        iVar45 = -(uint)(pfVar24[2] == pfVar24[6]);
        iVar48 = -(uint)(pfVar24[3] == pfVar24[7]);
        if (CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar13 >> 0x18) &
                     (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                     CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar13 >> 0x10) &
                              (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                              CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar13 >> 8) &
                                       (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar48 >> 8),
                                       (byte)iVar40 & (byte)iVar13 & (byte)iVar45 & (byte)iVar48)))
            != 0) goto LAB_030abd08;
        local_fe0 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xbc)
                                    );
        if ((*(byte *)(*(long *)(lVar14 + 0x18) + lVar17 * 0x90 + 0x80) >> 4 & 1) == 0) {
          iVar13 = FUN_0305af4c(lVar14,lVar17,local_dd8[0] != '\0',lVar22,
                                *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_db0);
        }
        else {
          iVar13 = FUN_03059acc(lVar14,lVar17,local_dd8[0] != '\0');
        }
        lVar14 = *(long *)(param_1 + 0x228);
        if (lVar14 != 0) {
          bVar5 = *(byte *)(lVar14 + 100);
          pcVar3 = (char *)(lVar14 + 100);
          do {
            cVar26 = *pcVar3;
            cVar7 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar28) {
              *pcVar3 = '\x04';
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (cVar26 == '\x01') {
            *(undefined1 *)(*(long *)(lVar14 + 0x68) + 0x20) = 3;
            plVar15 = *(long **)(lVar14 + 0x68);
            *(undefined8 *)(lVar14 + 0x68) = 0;
            if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
              plVar32 = plVar15 + 2;
              do {
                lVar14 = *plVar32;
                cVar26 = '\x01';
                bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar28) {
                  *plVar32 = lVar14 + -1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              if (lVar14 + -1 == 0) {
                (**(code **)(*plVar15 + 0x18))();
              }
            }
          }
          plVar15 = *(long **)(param_1 + 0x228);
          *(undefined8 *)(param_1 + 0x228) = 0;
          if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
            plVar32 = plVar15 + 2;
            do {
              lVar14 = *plVar32;
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar28) {
                *plVar32 = lVar14 + -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))();
            }
          }
          puVar12 = PTR_DAT_047d1a08;
          uVar29 = *(undefined8 *)(param_1 + 0x220);
          local_fe0 = (long *)0x110;
          plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_fe0,0);
          if (*(code **)(puVar12 + 0x10) != (code *)0x0) {
            (**(code **)(puVar12 + 0x10))(plVar15,"NavigatorSettings");
          }
          plVar32 = plVar15 + 2;
          *plVar32 = 1;
          *plVar15 = (long)puVar2;
          plVar15[1] = 0xffffffff;
          memcpy(plVar15 + 4,(void *)(param_1 + 0x90),0xa8);
          lVar14 = *(long *)(param_1 + 0x140);
          plVar15[0x1a] = lVar14;
          if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
            plVar4 = (long *)(lVar14 + 0x10);
            do {
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar28) {
                *plVar4 = *plVar4 + 1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
          }
          lVar14 = *(long *)(param_1 + 0x148);
          plVar15[0x1b] = lVar14;
          if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
            plVar4 = (long *)(lVar14 + 0x10);
            do {
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar28) {
                *plVar4 = *plVar4 + 1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
          }
          lVar14 = *(long *)(param_1 + 0x150);
          plVar15[0x1c] = lVar14;
          if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
            plVar4 = (long *)(lVar14 + 0x10);
            do {
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar28) {
                *plVar4 = *plVar4 + 1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
          }
          lVar14 = *(long *)(param_1 + 0x160);
          lVar17 = *(long *)(param_1 + 0x168);
          uVar19 = *(undefined4 *)(param_1 + 0x170);
          plVar15[0x1d] = *(long *)(param_1 + 0x158);
          *(undefined4 *)(plVar15 + 0x20) = uVar19;
          plVar15[0x1e] = lVar14;
          plVar15[0x1f] = lVar17;
          puVar12 = PTR_DAT_047d1a08;
          local_fe0 = (long *)0x80;
          uVar16 = (**(code **)PTR_DAT_047d1a08)(0,&local_fe0,0);
          if (*(code **)(puVar12 + 0x10) != (code *)0x0) {
            (**(code **)(puVar12 + 0x10))(uVar16,"hkaiNavigatorStalenessChecker");
          }
          local_fe0 = plVar15;
          FUN_030af550(uVar16,uVar29,param_1,param_1 + 0x30,*(long *)(param_1 + 0x20),
                       *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 0x20,&local_fe0)
          ;
          if (plVar15[1] != 0) {
            do {
              lVar14 = *plVar32;
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar28) {
                *plVar32 = lVar14 + -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          plVar15 = *(long **)(param_1 + 0x228);
          *(undefined8 *)(param_1 + 0x228) = uVar16;
          if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
            plVar32 = plVar15 + 2;
            do {
              lVar14 = *plVar32;
              cVar26 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar28) {
                *plVar32 = lVar14 + -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))();
            }
          }
          if ((bVar5 & 0xfe) == 2) {
            lVar14 = *(long *)(param_1 + 0x228);
            pcVar3 = (char *)(lVar14 + 100);
            cVar26 = *(char *)(lVar14 + 100);
LAB_030ab618:
            do {
              while (cVar26 != '\x01') {
                if (cVar26 != '\0') goto LAB_030ab6c8;
                cVar26 = *pcVar3;
                if (cVar26 == '\0') {
                  cVar7 = '\x01';
                  bVar28 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
                  if (bVar28) {
                    *pcVar3 = '\x02';
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 != '\0') goto LAB_030ab674;
                  bVar28 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_030ab674:
                  bVar28 = false;
                }
                if (bVar28) goto LAB_030ab6c8;
              }
              cVar26 = *pcVar3;
              if (cVar26 != '\x01') {
                ClearExclusiveLocal();
                goto LAB_030ab618;
              }
              cVar7 = '\x01';
              bVar28 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
              if (bVar28) {
                *pcVar3 = '\x03';
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(undefined1 *)(*(long *)(lVar14 + 0x68) + 0x20) = 3;
            plVar15 = *(long **)(lVar14 + 0x68);
            *(undefined8 *)(lVar14 + 0x68) = 0;
            if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
              plVar32 = plVar15 + 2;
              do {
                lVar14 = *plVar32;
                cVar26 = '\x01';
                bVar28 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar28) {
                  *plVar32 = lVar14 + -1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
              if (lVar14 + -1 == 0) {
                (**(code **)(*plVar15 + 0x18))();
              }
            }
          }
        }
LAB_030ab6c8:
        uVar31 = uVar31 + 1;
        if (iVar13 != 0) goto LAB_030abd08;
      }
      local_e10 = 1;
      local_e08 = 0;
      local_e00 = &local_fe0;
      local_e20 = PTR_DAT_047e34b8 + 0x10;
      local_e18 = 0xffffffff;
      local_de8 = 0;
      local_df8 = 0;
      local_df0 = 0x1bf;
      memset(&local_fe0,0,0x1c0);
      FUN_0322bd4c(&local_e20,
                   "Unexpected calcForwardVector output; going to stale path. (This is unexpected and weird.)"
                   ,0x59);
      iVar13 = FUN_03226f50(0x23ae872e,&local_fe0,
                            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/Navigator/hkaiNavigator.cpp"
                            ,0x3b2);
      if (iVar13 != 0) {
        CallSupervisor(0x26);
      }
      FUN_030ac134(param_1,0,param_2);
LAB_030abd08:
      if (*(char *)(param_1 + 0x198) == '\0') {
        fStack_1028 = auVar87._8_4_;
        fStack_1024 = auVar87._12_4_;
        auVar51._4_12_ = auStack_dbc;
        auVar51._0_4_ = local_dc0;
        fVar42 = auStack_dbc._0_4_;
        fVar46 = auStack_dbc._4_4_;
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x128);
        uVar29 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x120);
        fVar50 = fVar73 * fVar46 + fVar43 * local_dc0 + fVar41 * fVar42;
        fVar54 = fVar83 * fVar46 + fVar47 * local_dc0 + fVar76 * fVar42;
        fVar55 = auVar89._8_4_ * fVar46 + fStack_1028 * local_dc0 + auVar86._8_4_ * fVar42;
        fVar34 = (float)uVar29;
        fVar74 = fVar34 * fVar50;
        fVar39 = (float)((ulong)uVar29 >> 0x20);
        fVar82 = fVar39 * fVar54;
        fVar44 = (float)uVar16;
        fVar84 = fVar44 * fVar55;
        fVar75 = fVar74 + fVar82 + fVar84;
        fVar84 = fVar74 + fVar82 + fVar84;
        fVar50 = fVar50 - fVar34 * fVar75;
        fVar54 = fVar54 - fVar39 * fVar84;
        fVar55 = fVar55 - fVar44 * fVar75;
        fVar34 = fVar50 * fVar50 + fVar54 * fVar54 + fVar55 * fVar55;
        fVar39 = SQRT(fVar34);
        fVar44 = SQRT(fVar50 * fVar50 + fVar54 * fVar54 + fVar55 * fVar55);
        auVar78 = ZEXT816(0);
        *(float *)(param_1 + 0x1e0) = fVar39;
        if (fVar34 != 0.0) {
          auVar78._0_4_ = fVar50 / fVar39;
          auVar78._4_4_ = fVar54 / fVar44;
          auVar78._8_4_ = fVar55 / fVar39;
          auVar78._12_4_ =
               ((auVar89._12_4_ * fVar46 + fStack_1024 * local_dc0 + auVar86._12_4_ * fVar42) -
               (float)((ulong)uVar16 >> 0x20) * fVar84) / fVar44;
        }
        *(long *)(param_1 + 0x1c8) = auVar78._8_8_;
        *(long *)(param_1 + 0x1c0) = auVar78._0_8_;
        fVar44 = (float)((ulong)uVar85 >> 0x20);
        fVar39 = (float)uVar85;
        fVar42 = (float)uVar10;
        auVar11._8_4_ = fStack_88;
        auVar11._0_8_ = CONCAT44(fStack_8c,local_90);
        auVar11._12_4_ = fStack_84;
        auVar79._0_4_ = fVar35 * fVar42 + fVar43 * fVar39 + fVar47 * fVar44;
        auVar79._4_4_ = fVar49 * fVar42 + fVar41 * fVar39 + fVar76 * fVar44;
        auVar79._8_4_ = fVar88 * fVar42 + fVar73 * fVar39 + fVar83 * fVar44;
        auVar79._12_4_ = fVar81 * fVar42 + fVar83 * fVar39 + fVar81 * fVar44;
        auVar87 = NEON_ext(auVar11,auVar11,8,1);
        uVar85 = NEON_ext(CONCAT44(fStack_8c,local_90),auVar87._0_8_,4,1);
        auVar87 = NEON_ext(auVar79,auVar79,4,1);
        fVar46 = (float)uVar77;
        auVar80._0_4_ = auVar79._0_4_ * (float)uVar85 - auVar87._0_4_ * local_90;
        auVar80._4_4_ = auVar79._4_4_ * (float)((ulong)uVar85 >> 0x20) - auVar87._4_4_ * fStack_8c;
        auVar80._8_4_ = auVar79._8_4_ * local_90 - auVar79._0_4_ * fStack_88;
        auVar80._12_4_ = auVar79._12_4_ * fStack_8c - auVar79._4_4_ * fStack_84;
        fVar34 = (float)uVar18;
        auVar87 = NEON_ext(auVar80,auVar80,4,1);
        fVar81 = (float)((ulong)uVar18 >> 0x20);
        fVar35 = fVar35 * fVar46 + fVar43 * fVar34 + fVar47 * fVar81 + auVar87._0_4_ + 0.0;
        fVar49 = fVar49 * fVar46 + fVar41 * fVar34 + fVar76 * fVar81 + auVar87._4_4_ + 0.0;
        fVar34 = fVar88 * fVar46 + fVar73 * fVar34 + fVar83 * fVar81 + auVar80._0_4_ + 0.0;
        iVar13 = -(uint)(ABS(fVar39) <= 1.1920929e-07);
        iVar40 = -(uint)(ABS(fVar44) <= 1.1920929e-07);
        iVar45 = -(uint)(ABS(fVar42) <= 1.1920929e-07);
        fVar47 = fVar83 * fVar34 + fVar47 * fVar35 + fVar76 * fVar49;
        fVar76 = auVar89._12_4_ * fVar34 + fStack_1024 * fVar35 + auVar86._12_4_ * fVar49;
        *(ulong *)(param_1 + 0x1d8) =
             CONCAT17((char)((uint)fVar76 >> 0x18),
                      CONCAT16((char)((uint)fVar76 >> 0x10),
                               CONCAT15((char)((uint)fVar76 >> 8),
                                        CONCAT14(SUB41(fVar76,0),
                                                 auVar89._8_4_ * fVar34 +
                                                 fStack_1028 * fVar35 + auVar86._8_4_ * fVar49))));
        *(ulong *)(param_1 + 0x1d0) =
             CONCAT17((char)((uint)fVar47 >> 0x18),
                      CONCAT16((char)((uint)fVar47 >> 0x10),
                               CONCAT15((char)((uint)fVar47 >> 8),
                                        CONCAT14(SUB41(fVar47,0),
                                                 fVar73 * fVar34 + fVar43 * fVar35 + fVar41 * fVar49
                                                ))));
        uVar65 = auStack_dbc[4];
        uVar66 = auStack_dbc[5];
        uVar67 = auStack_dbc[6];
        uVar68 = auStack_dbc[7];
        uVar69 = auStack_dbc[8];
        uVar70 = auStack_dbc[9];
        uVar71 = auStack_dbc[10];
        uVar72 = auStack_dbc[0xb];
        uVar57 = SUB41(local_dc0,0);
        uVar58 = (undefined1)((uint)local_dc0 >> 8);
        uVar59 = (undefined1)((uint)local_dc0 >> 0x10);
        uVar60 = (undefined1)((uint)local_dc0 >> 0x18);
        uVar61 = auStack_dbc[0];
        uVar62 = auStack_dbc[1];
        uVar63 = auStack_dbc[2];
        uVar64 = auStack_dbc[3];
        if (CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar13 >> 0x18) &
                     (byte)((uint)iVar45 >> 0x18),
                     CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar13 >> 0x10) &
                              (byte)((uint)iVar45 >> 0x10),
                              CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar13 >> 8) &
                                       (byte)((uint)iVar45 >> 8),
                                       (byte)iVar40 & (byte)iVar13 & (byte)iVar45))) != 0) {
          uVar65 = auVar78[8];
          uVar66 = auVar78[9];
          uVar67 = auVar78[10];
          uVar68 = auVar78[0xb];
          uVar69 = auVar78[0xc];
          uVar70 = auVar78[0xd];
          uVar71 = auVar78[0xe];
          uVar72 = auVar78[0xf];
          uVar57 = auVar78[0];
          uVar58 = auVar78[1];
          uVar59 = auVar78[2];
          uVar60 = auVar78[3];
          uVar61 = auVar78[4];
          uVar62 = auVar78[5];
          uVar63 = auVar78[6];
          uVar64 = auVar78[7];
          *(undefined1 *)(param_1 + 0x60) = 0;
        }
        *(ulong *)(param_1 + 0x58) =
             CONCAT17(uVar72,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(uVar69,CONCAT13(uVar68,
                                                  CONCAT12(uVar67,CONCAT11(uVar66,uVar65)))))));
        *(ulong *)(param_1 + 0x50) =
             CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar62,CONCAT14(uVar61,CONCAT13(uVar60,
                                                  CONCAT12(uVar59,CONCAT11(uVar58,uVar57)))))));
        *(long *)(param_1 + 0x1f8) = auStack_dbc._4_8_;
        *(long *)(param_1 + 0x1f0) = auVar51._0_8_;
        *(int *)(param_1 + 0x200) = local_dd4;
        *(char *)(param_1 + 0x204) = local_dd8[0];
        *(undefined1 *)(param_1 + 0x61) = 1;
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    lVar14 = tpidr_el0;
    lVar22 = *(long *)(lVar14 + 0x1000b8);
    if (lVar22 == 0) {
      lVar22 = FUN_00e5d3b4();
      *(long *)(lVar14 + 0x1000b8) = lVar22;
    }
    FUN_030684b8(&uStack_d58,*(undefined8 *)(lVar22 + 0x3e0));
    if (((*(char *)(param_1 + 0x198) == '\0') && (*(int *)(param_1 + 0x194) == 8)) &&
       (fVar35 = *(float *)(param_1 + 0x1a0) - *(float *)(param_1 + 0x1b0),
       fVar43 = *(float *)(param_1 + 0x1a4) - *(float *)(param_1 + 0x1b4),
       fVar47 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1b8),
       fVar49 = *(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1bc),
       auVar38._0_4_ = fVar35 * fVar35, auVar38._4_4_ = fVar43 * fVar43,
       auVar38._8_4_ = fVar47 * fVar47, auVar38._12_4_ = fVar49 * fVar49,
       auVar87 = NEON_ext(auVar38,auVar38,8,1),
       auVar38._0_4_ + auVar38._4_4_ + auVar87._0_4_ <
       *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x164))) {
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1e0) = 0x7f7fffee;
      if (*(char *)(param_1 + 0x218) == '\0') {
        iVar13 = *(int *)(param_1 + 0x250);
        lVar14 = (long)iVar13;
        if ((int)(*(uint *)(param_1 + 0x254) & 0x7fffffff) <= iVar13) {
          FUN_030ae1bc(param_1 + 0x248,PTR_PTR_047d1a50,lVar14 + 1);
          iVar13 = *(int *)(param_1 + 0x250);
        }
        puVar23 = (undefined4 *)(*(long *)(param_1 + 0x248) + (long)iVar13 * 0xa0);
        *(int *)(param_1 + 0x250) = (int)(lVar14 + 1);
        *(undefined8 *)(puVar23 + 0x24) = 0;
        *(undefined8 *)(puVar23 + 0x26) = 0x8000000000000000;
        *puVar23 = 6;
        *(undefined1 *)(param_1 + 0x218) = 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x218) == '\0') {
    if (*(char *)(param_1 + 0x198) != '\0') {
      if (*(char *)(param_1 + 0x61) == '\0') {
LAB_030ab6f0:
        if (*(long *)(param_1 + 0x210) == 0) {
          uVar19 = 1;
        }
        else {
          uVar19 = 2;
        }
        goto LAB_030abf4c;
      }
      if (*(uint *)(param_1 + 0x19c) == 0xffffffff) {
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        if (*(char *)(param_1 + 0x60) != '\0') goto LAB_030ab6f0;
      }
      else {
        lVar22 = *(long *)(param_1 + 0x180);
        lVar14 = *(long *)(*(long *)(lVar22 + 0x130) + 0x38) +
                 (ulong)(*(uint *)(param_1 + 0x19c) >> 0x16) * 0x100;
        pfVar24 = (float *)(lVar14 + 0x30);
        if (*(char *)(param_1 + 0x60) == '\0') {
          fVar35 = *(float *)(param_1 + 0x50);
          fVar43 = *(float *)(param_1 + 0x54);
          fVar47 = *(float *)(param_1 + 0x58);
          fVar49 = *(float *)(param_1 + 0x5c);
        }
        else {
          fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
          fVar49 = (float)*(undefined8 *)(param_1 + 0x50);
          fVar76 = (float)*(undefined8 *)(param_1 + 0x58);
          fVar35 = *(float *)(lVar14 + 0x50) * fVar76 +
                   *pfVar24 * fVar49 + *(float *)(lVar14 + 0x40) * fVar41;
          fVar43 = *(float *)(lVar14 + 0x54) * fVar76 +
                   *(float *)(lVar14 + 0x34) * fVar49 + *(float *)(lVar14 + 0x44) * fVar41;
          fVar47 = *(float *)(lVar14 + 0x58) * fVar76 +
                   *(float *)(lVar14 + 0x38) * fVar49 + *(float *)(lVar14 + 0x48) * fVar41;
          fVar49 = *(float *)(lVar14 + 0x5c) * fVar76 +
                   *(float *)(lVar14 + 0x3c) * fVar49 + *(float *)(lVar14 + 0x4c) * fVar41;
        }
        *(float *)(param_1 + 0x1c8) = fVar47;
        *(float *)(param_1 + 0x1cc) = fVar49;
        *(float *)(param_1 + 0x1c0) = fVar35;
        *(float *)(param_1 + 0x1c4) = fVar43;
        fVar41 = fVar35 * *(float *)(lVar22 + 0x120);
        fVar34 = fVar43 * *(float *)(lVar22 + 0x124);
        fVar39 = fVar47 * *(float *)(lVar22 + 0x128);
        fVar76 = fVar41 + fVar34 + fVar39;
        fVar39 = fVar41 + fVar34 + fVar39;
        fVar35 = fVar35 - *(float *)(lVar22 + 0x120) * fVar76;
        fVar43 = fVar43 - *(float *)(lVar22 + 0x124) * fVar39;
        fVar47 = fVar47 - *(float *)(lVar22 + 0x128) * fVar76;
        fVar49 = fVar49 - *(float *)(lVar22 + 300) *
                          (float)CONCAT13((char)((uint)fVar39 >> 0x18),
                                          CONCAT12((char)((uint)fVar39 >> 0x10),
                                                   (short)(CONCAT15((char)((uint)fVar39 >> 8),
                                                                    CONCAT14(SUB41(fVar39,0),fVar76)
                                                                   ) >> 0x20)));
        fVar41 = fVar35 * fVar35 + fVar43 * fVar43 + fVar47 * fVar47;
        *(float *)(param_1 + 0x1c8) = fVar47;
        *(float *)(param_1 + 0x1cc) = fVar49;
        *(float *)(param_1 + 0x1c0) = fVar35;
        *(float *)(param_1 + 0x1c4) = fVar43;
        fVar76 = 0.0;
        fVar34 = 0.0;
        fVar39 = 0.0;
        fVar44 = 0.0;
        if (fVar41 != 0.0) {
          fVar41 = SQRT(fVar41);
          fVar44 = SQRT(fVar35 * fVar35 + fVar43 * fVar43 + fVar47 * fVar47);
          fVar76 = fVar35 / fVar41;
          fVar34 = fVar43 / fVar44;
          fVar39 = fVar47 / fVar41;
          fVar44 = fVar49 / (float)CONCAT13((char)((uint)fVar44 >> 0x18),
                                            CONCAT12((char)((uint)fVar44 >> 0x10),
                                                     (short)(CONCAT15((char)((uint)fVar44 >> 8),
                                                                      CONCAT14(SUB41(fVar44,0),
                                                                               fVar41)) >> 0x20)));
        }
        *(float *)(param_1 + 0x1c8) = fVar39;
        *(float *)(param_1 + 0x1cc) = fVar44;
        *(float *)(param_1 + 0x1c0) = fVar76;
        *(float *)(param_1 + 0x1c4) = fVar34;
        fVar47 = *(float *)(lVar14 + 0x70);
        fVar49 = *(float *)(lVar14 + 0x74);
        fVar41 = *(float *)(lVar14 + 0x78);
        fVar76 = *(float *)(param_1 + 0x1a0) - (float)*(undefined8 *)(lVar14 + 0x60);
        fVar34 = *(float *)(param_1 + 0x1a4) -
                 (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
        fVar39 = *(float *)(param_1 + 0x1a8) - (float)*(undefined8 *)(lVar14 + 0x68);
        uVar18 = *(undefined8 *)(lVar14 + 0x38);
        uVar57 = (undefined1)((ulong)uVar18 >> 8);
        uVar58 = (undefined1)((ulong)uVar18 >> 0x10);
        uVar59 = (undefined1)((ulong)uVar18 >> 0x18);
        uVar60 = (undefined1)((ulong)uVar18 >> 0x20);
        uVar61 = (undefined1)((ulong)uVar18 >> 0x28);
        uVar62 = (undefined1)((ulong)uVar18 >> 0x30);
        uVar63 = (undefined1)((ulong)uVar18 >> 0x38);
        auVar87 = *(undefined1 (*) [16])(lVar14 + 0x40);
        auVar86 = *(undefined1 (*) [16])(lVar14 + 0x50);
        auVar37 = NEON_ext(auVar87,auVar87,8,1);
        auVar8[9] = uVar57;
        auVar8._0_9_ = *(unkbyte9 *)pfVar24;
        auVar8[10] = uVar58;
        auVar8[0xb] = uVar59;
        auVar8[0xc] = uVar60;
        auVar8[0xd] = uVar61;
        auVar8[0xe] = uVar62;
        auVar8[0xf] = uVar63;
        auVar9[9] = uVar57;
        auVar9._0_9_ = *(unkbyte9 *)pfVar24;
        auVar9[10] = uVar58;
        auVar9[0xb] = uVar59;
        auVar9[0xc] = uVar60;
        auVar9[0xd] = uVar61;
        auVar9[0xe] = uVar62;
        auVar9[0xf] = uVar63;
        auVar89 = NEON_ext(auVar8,auVar9,8,1);
        fVar44 = auVar89._0_4_;
        fVar73 = auVar37._0_4_;
        auVar89 = NEON_ext(auVar86,auVar86,8,1);
        fVar35 = (float)*(undefined8 *)pfVar24;
        fVar81 = auVar87._0_4_;
        fVar43 = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20);
        fVar83 = auVar87._4_4_;
        fVar88 = auVar86._4_4_;
        fVar46 = auVar86._0_4_;
        fVar50 = auVar89._4_4_;
        fVar42 = auVar89._0_4_;
        auVar52._0_4_ = fVar44 * fVar39 + fVar35 * fVar76 + fVar43 * fVar34;
        auVar52._4_4_ = fVar73 * fVar39 + fVar81 * fVar76 + fVar83 * fVar34;
        auVar52._8_4_ = fVar42 * fVar39 + fVar46 * fVar76 + fVar88 * fVar34;
        auVar52._12_4_ = fVar50 * fVar39 + fVar88 * fVar76 + fVar50 * fVar34;
        fVar76 = *(float *)(lVar14 + 0x80);
        fVar34 = *(float *)(lVar14 + 0x84);
        fVar39 = *(float *)(lVar14 + 0x88);
        auVar37 = NEON_ext(auVar52,auVar52,4,1);
        auVar90._0_4_ = fVar44 * fVar39 + fVar35 * fVar76 + fVar43 * fVar34;
        auVar90._4_4_ = fVar73 * fVar39 + fVar81 * fVar76 + fVar83 * fVar34;
        auVar90._8_4_ = fVar42 * fVar39 + fVar46 * fVar76 + fVar88 * fVar34;
        auVar90._12_4_ = fVar50 * fVar39 + fVar88 * fVar76 + fVar50 * fVar34;
        auVar89 = NEON_ext(auVar90,auVar90,4,1);
        auVar53._0_4_ = auVar90._0_4_ * auVar37._0_4_ - auVar52._0_4_ * auVar89._0_4_;
        auVar53._4_4_ = auVar90._4_4_ * auVar37._4_4_ - auVar52._4_4_ * auVar89._4_4_;
        auVar53._8_4_ = auVar90._8_4_ * auVar52._0_4_ - auVar52._8_4_ * auVar90._0_4_;
        auVar53._12_4_ = auVar90._12_4_ * auVar52._4_4_ - auVar52._12_4_ * auVar90._4_4_;
        auVar89 = NEON_ext(auVar53,auVar53,4,1);
        fVar76 = fVar44 * fVar41 + fVar35 * fVar47 + fVar43 * fVar49 + auVar89._0_4_ + 0.0;
        fVar34 = fVar73 * fVar41 + fVar81 * fVar47 + fVar83 * fVar49 + auVar89._4_4_ + 0.0;
        fVar47 = fVar42 * fVar41 + fVar46 * fVar47 + fVar88 * fVar49 + auVar53._0_4_ + 0.0;
        *(float *)(param_1 + 0x1d8) =
             auVar86._8_4_ * fVar47 + (float)uVar18 * fVar76 + auVar87._8_4_ * fVar34;
        *(float *)(param_1 + 0x1dc) =
             auVar86._12_4_ * fVar47 +
             (float)((ulong)uVar18 >> 0x20) * fVar76 + auVar87._12_4_ * fVar34;
        *(float *)(param_1 + 0x1d0) = fVar46 * fVar47 + fVar35 * fVar76 + fVar81 * fVar34;
        *(float *)(param_1 + 0x1d4) = fVar88 * fVar47 + fVar43 * fVar76 + fVar83 * fVar34;
      }
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  else {
    uVar19 = 3;
LAB_030abf4c:
    *(undefined4 *)(param_1 + 400) = uVar19;
  }
  return;
}


