/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f03e0c; name: FUN_02f03e0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f03e0c(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  short sVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined2 uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined1 (*pauVar35) [16];
  long lVar36;
  long lVar37;
  float *pfVar38;
  uint uVar39;
  undefined8 uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  void *__src;
  long lVar43;
  undefined8 *puVar44;
  ulong uVar45;
  undefined8 uVar46;
  int iVar47;
  int iVar55;
  int iVar57;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar48;
  float fVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar60;
  float fVar61;
  int iVar63;
  float fVar64;
  int iVar65;
  float fVar66;
  undefined1 auVar62 [16];
  float fVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar82;
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  long local_1308;
  float local_12c0;
  float fStack_12bc;
  float fStack_12b8;
  undefined8 local_1290;
  float fStack_1288;
  float fStack_1284;
  float local_1280;
  float fStack_127c;
  float fStack_1278;
  float fStack_1274;
  uint local_1264;
  float local_1250;
  float fStack_124c;
  float fStack_1248;
  float fStack_1244;
  float local_1240;
  float fStack_123c;
  float fStack_1238;
  float fStack_1234;
  undefined8 *local_1230;
  uint local_1228;
  uint local_1224;
  undefined8 local_1220;
  byte local_1218;
  uint local_1210 [255];
  int local_e14;
  int local_e10;
  int local_e0c;
  undefined8 *local_e00;
  uint local_df8;
  undefined4 local_df4;
  undefined4 local_df0;
  undefined1 local_deb;
  uint local_de8;
  long local_de0;
  undefined8 local_dd8;
  undefined8 **local_dd0;
  undefined2 local_dc8 [2];
  undefined8 local_dc4;
  undefined4 local_dbc;
  undefined8 local_db8;
  undefined1 *local_db0;
  int local_da8;
  uint local_da4;
  undefined1 local_da0 [256];
  undefined8 *local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 local_c30 [29];
  uint local_b48;
  ulong local_b40;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined *local_b10;
  long *local_b08;
  undefined1 *local_b00;
  undefined4 local_af8;
  undefined1 auStack_af0 [16];
  undefined *local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 **local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined1 local_aa8;
  undefined2 local_a8;
  undefined6 local_90;
  undefined2 uStack_8a;
  uint local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 local_80;
  undefined1 local_7b;
  uint local_78 [6];
  
  puVar42 = (undefined8 *)((long *)*param_2)[5];
  if (1 < *(byte *)((long)puVar42 + 0x19) - 1) {
    if (*(byte *)((long)puVar42 + 0x19) != 3) {
      local_ad0 = 1;
      local_ac8 = 0;
      local_ac0 = &local_ca0;
      local_ae0 = PTR_DAT_047e34b8 + 0x10;
      local_ad8 = 0xffffffff;
      local_aa8 = 0;
      local_ab8 = 0;
      local_ab0 = 0x1bf;
      memset(&local_ca0,0,0x1c0);
      FUN_0322bd4c(&local_ae0,"Unhandled query shape dispatch type",0x23);
      iVar47 = FUN_03226f50(0xf034cdff,&local_ca0,
                            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Collide/Shape/hknpShapeUtil.cpp"
                            ,0x171);
      if (iVar47 == 0) {
        return;
      }
      CallSupervisor(0x26);
      return;
    }
    bVar7 = *(byte *)(param_2 + 1);
    uVar19 = (uint)bVar7 << 0x1d | 0x1fffffff;
    uVar26 = 3;
    if (*(char *)(*(long *)(*(long *)*param_2 + 0x78) + 0x18) != '\x15') {
      uVar26 = 0;
      uVar19 = 0xffffffff;
    }
    FUN_02ee3eb4(&local_db0);
    __src = (void *)*param_2;
    memcpy(&local_e00,__src,0x50);
    plVar34 = (long *)PTR_DAT_047d19f0;
    uVar16 = _UNK_03cabe68;
    uVar46 = _DAT_03cabe60;
    uVar15 = _UNK_03caa5b8;
    uVar21 = _DAT_03caa5b0;
    puVar44 = *(undefined8 **)((long)__src + 0x30);
    puVar32 = (undefined8 *)*puVar44;
    uVar40 = puVar44[1];
    uVar96 = puVar44[2];
    uVar93 = puVar44[3];
    uVar97 = puVar44[4];
    uVar94 = puVar44[5];
    uVar98 = puVar44[6];
    uVar95 = puVar44[7];
    uVar99 = puVar44[8];
    uVar14 = puVar44[9];
    uVar10 = *(undefined2 *)((long)__src + 0x38);
    local_88 = (uint)((ulong)*(undefined8 *)((long)__src + 0x40) >> 0x10);
    uStack_84 = (undefined2)((ulong)*(undefined8 *)((long)__src + 0x40) >> 0x30);
    local_90 = (undefined6)*(undefined8 *)((long)__src + 0x3a);
    uStack_8a = (undefined2)((ulong)*(undefined8 *)((long)__src + 0x3a) >> 0x30);
    local_b00 = auStack_af0;
    local_b08 = (long *)0x0;
    local_af8 = 0x800;
    uStack_c78 = _UNK_03caa5b8;
    local_c80 = _DAT_03caa5b0;
    uStack_c68 = _UNK_03cabe58;
    local_c70 = _DAT_03cabe50;
    auVar78 = NEON_fmov(0x3f800000,4);
    local_b10 = PTR_DAT_047d1b40 + 0x10;
    local_b40 = 0xd;
    local_b20 = 0;
    local_c50 = 0;
    local_b48 = 0;
    uStack_c58 = 0;
    local_c60 = 0;
    local_1220 = 0;
    local_1210[0] = 0xffffffff;
    local_a8 = 0xffff;
    uStack_c88 = _UNK_03cabe68;
    local_c90 = _DAT_03cabe60;
    fStack_1248 = (float)DAT_03cab628;
    fStack_1244 = (float)((ulong)DAT_03cab628 >> 0x20);
    local_1250 = SUB84(DAT_03cab620,0);
    fStack_124c = (float)((ulong)DAT_03cab620 >> 0x20);
    uStack_c98 = DAT_03cab628;
    local_ca0 = DAT_03cab620;
    local_1230 = puVar42;
    local_1228 = uVar19;
    local_1224 = uVar26;
    local_1218 = bVar7;
    local_b30 = auVar78._0_8_;
    uStack_b28 = auVar78._8_8_;
    local_e10 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(puVar42 + 3) * 0x200 +
                            0xb0))(puVar42,local_1210,0x100);
    puVar17 = PTR_DAT_047d1a60;
    local_e0c = 0;
    if (0 < local_e10) {
      local_1280 = SUB84(puVar32,0);
      fStack_127c = (float)((ulong)puVar32 >> 0x20);
      fStack_1278 = (float)uVar40;
      fStack_1274 = (float)((ulong)uVar40 >> 0x20);
      auVar49._0_4_ = ABS(local_1250 - local_1280);
      auVar49._4_4_ = ABS(fStack_124c - fStack_127c);
      auVar49._8_4_ = ABS(fStack_1248 - fStack_1278);
      auVar49._12_4_ = ABS(fStack_1244 - fStack_1274);
      local_1290._0_4_ = (float)uVar96;
      local_1290._4_4_ = (float)((ulong)uVar96 >> 0x20);
      fStack_1288 = (float)uVar93;
      fStack_1284 = (float)((ulong)uVar93 >> 0x20);
      auVar62._0_4_ = ABS((float)uVar46 - (float)local_1290);
      auVar62._4_4_ = ABS((float)((ulong)uVar46 >> 0x20) - local_1290._4_4_);
      auVar62._8_4_ = ABS((float)uVar16 - fStack_1288);
      auVar62._12_4_ = ABS((float)((ulong)uVar16 >> 0x20) - fStack_1284);
      local_1240 = (float)uVar21;
      fStack_123c = (float)((ulong)uVar21 >> 0x20);
      fStack_1238 = (float)uVar15;
      fStack_1234 = (float)((ulong)uVar15 >> 0x20);
      fVar82 = ABS(fStack_123c - (float)((ulong)uVar97 >> 0x20));
      fVar88 = ABS(fStack_1238 - (float)uVar94);
      fVar91 = ABS(fStack_1234 - (float)((ulong)uVar94 >> 0x20));
      auVar49 = NEON_fmax(auVar49,auVar62,4);
      local_12c0 = (float)uVar98;
      fStack_12bc = (float)((ulong)uVar98 >> 0x20);
      fStack_12b8 = (float)uVar95;
      auVar50[4] = SUB41(fVar82,0);
      auVar50._0_4_ = ABS(local_1240 - (float)uVar97);
      auVar50[5] = (char)((uint)fVar82 >> 8);
      auVar50[6] = (char)((uint)fVar82 >> 0x10);
      auVar50[7] = (char)((uint)fVar82 >> 0x18);
      auVar50[8] = SUB41(fVar88,0);
      auVar50[9] = (char)((uint)fVar88 >> 8);
      auVar50[10] = (char)((uint)fVar88 >> 0x10);
      auVar50[0xb] = (char)((uint)fVar88 >> 0x18);
      auVar50[0xc] = SUB41(fVar91,0);
      auVar50[0xd] = (char)((uint)fVar91 >> 8);
      auVar50[0xe] = (char)((uint)fVar91 >> 0x10);
      auVar50[0xf] = (char)((uint)fVar91 >> 0x18);
      auVar50 = NEON_fmax(auVar49,auVar50,4);
      iVar60 = -(uint)(ABS(local_12c0) <= 1.1920929e-07);
      iVar63 = -(uint)(ABS(fStack_12bc) <= 1.1920929e-07);
      iVar65 = -(uint)(ABS(fStack_12b8) <= 1.1920929e-07);
      iVar47 = -(uint)(auVar50._0_4_ <= 1.1920929e-07);
      iVar55 = -(uint)(auVar50._4_4_ <= 1.1920929e-07);
      iVar57 = -(uint)(auVar50._8_4_ <= 1.1920929e-07);
      uVar19 = 0xc;
      if (CONCAT13((byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                   (byte)((uint)iVar65 >> 0x18),
                   CONCAT12((byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                            (byte)((uint)iVar65 >> 0x10),
                            CONCAT11((byte)((uint)iVar63 >> 8) & (byte)((uint)iVar60 >> 8) &
                                     (byte)((uint)iVar65 >> 8),
                                     (byte)iVar63 & (byte)iVar60 & (byte)iVar65))) != 0) {
        uVar19 = 0xd;
      }
      do {
        local_b40 = 8;
        uStack_c98 = uVar40;
        local_ca0 = puVar32;
        local_b20 = 0;
        uStack_c88 = uVar93;
        local_c90 = uVar96;
        local_c50 = 0;
        local_b48 = 0;
        uStack_c78 = uVar94;
        local_c80 = uVar97;
        uStack_c68 = uVar95;
        local_c70 = uVar98;
        uStack_c58 = uVar14;
        local_c60 = uVar99;
        uStack_b28 = auVar78._8_8_;
        local_b30 = auVar78._0_8_;
        if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                     (byte)((uint)iVar57 >> 0x18),
                     CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                              (byte)((uint)iVar57 >> 0x10),
                              CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar47 >> 8) &
                                       (byte)((uint)iVar57 >> 8),
                                       (byte)iVar55 & (byte)iVar47 & (byte)iVar57))) != 0) {
          local_b40 = (ulong)uVar19;
        }
        local_a8 = 0xffff;
        local_78[0] = local_1210[local_e0c];
        (**(code **)(*plVar34 + (ulong)*(byte *)(*(long *)(*(long *)*param_2 + 0x78) + 0x18) * 0x200
                    + 0xb8))(*(long *)(*(long *)*param_2 + 0x78),local_78,1,&local_ca0);
        if (((byte)local_b40 >> 4 & 1) == 0) {
          uVar21 = local_b20;
        }
        else {
          uVar21 = FUN_02ef6ac4(&local_ca0,0,&local_db0);
        }
        uVar26 = local_78[0];
        uVar18 = local_a8;
        uVar15 = local_c50;
        local_dd0 = &local_ca0;
        local_db8 = local_c50;
        local_dc4 = *(undefined8 *)((ulong)&local_90 | 2);
        local_dbc = *(undefined4 *)((undefined8 *)((ulong)&local_90 | 2) + 1);
        local_de0 = local_e00[0xf];
        local_de8 = local_78[0];
        if (*(char *)(local_de0 + 0x18) == '\x15') {
          plVar34 = (long *)(local_de0 + ((ulong)(local_78[0] >> 0x1a) & 0x38) + 0x48);
          lVar31 = *plVar34;
          local_de0 = 0;
          if (lVar31 != 0) {
            local_de0 = lVar31 + (long)plVar34;
          }
        }
        uVar41 = (ulong)local_b48;
        lVar31 = *(long *)*param_2;
        plVar34 = (long *)param_2[4];
        uVar46 = *(undefined8 *)(lVar31 + 0x78);
        local_dd8 = uVar21;
        local_dc8[0] = uVar10;
        if (0 < (int)local_b48) {
          uVar45 = 0;
          uVar39 = 0xffffffff;
          puVar42 = local_c30;
          do {
            lVar30 = uVar45 * 4;
            uVar29 = (int)uVar45 + (uint)*(byte *)(puVar42[-2] + 0x1c);
            uVar45 = (ulong)uVar29;
            uVar39 = (*(int *)(puVar42 + -1) + 1 << (ulong)(-uVar29 & 0x1f)) - 1U |
                     *(uint *)(puVar17 + lVar30) & uVar39;
            (**(code **)(*plVar34 + 0x40))
                      (plVar34,*(undefined2 *)(puVar42 + -3),6,lVar31,uVar46,puVar42[-2],uVar39,
                       *puVar42,local_dc8);
            uVar41 = uVar41 - 1;
            puVar42 = puVar42 + 4;
          } while (uVar41 != 0);
        }
        (**(code **)(*plVar34 + 0x40))
                  (plVar34,uVar18,6,lVar31,uVar46,uVar15,uVar26,uVar21,local_dc8);
        *param_2 = (long)&local_e00;
        plVar34 = (long *)PTR_DAT_047d19f0;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf8))
                  (param_1,param_2,param_3);
        iVar60 = local_e0c;
        local_e0c = local_e0c + 1;
        if ((0xfe < iVar60) && (local_e10 == 0x100)) {
          local_1210[0] = 0xffffffff;
          local_e10 = (**(code **)(*plVar34 + (ulong)*(byte *)(local_1230 + 3) * 0x200 + 0xb0))
                                (local_1230,local_1210,0x100,
                                 local_e14 << (ulong)(local_1224 & 0x1f) |
                                 -1 << (ulong)(local_1224 & 0x1f) ^ 0xffffffffU,&local_1228);
          local_e0c = 0;
        }
      } while (local_e0c < local_e10);
    }
    local_b10 = PTR_DAT_047d1b30 + 0x10;
    if (local_b08 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_b08 + 8))();
    return;
  }
  lVar31 = tpidr_el0;
  lVar30 = *(long *)(lVar31 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar30;
  }
  lVar31 = *(long *)(*(long *)(lVar30 + 0x3d0) + 0x10);
  if (*(long *)(lVar31 + 8) != 0) {
    lVar31 = 0;
  }
  uVar19 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(puVar42 + 3) * 0x200 + 0x58))
                     (puVar42);
  puVar17 = PTR_DAT_047d1a08;
  lVar30 = (long)(int)uVar19;
  puVar44 = (undefined8 *)(lVar30 * 0x10);
  puVar32 = (undefined8 *)
            (((-(ulong)(uVar19 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar19 << 1) +
             (long)(int)uVar19) * 4);
  local_1230 = puVar32;
  if (lVar31 == 0) {
    lVar20 = (**(code **)PTR_DAT_047d1a08)(1,&local_1230,0x40);
    local_1230 = puVar44;
    lVar22 = (**(code **)puVar17)(1,&local_1230,0x40);
    local_1230 = (undefined8 *)(lVar30 * 0x60);
    local_1290 = (undefined8 *)(**(code **)puVar17)(1,&local_1230,0x40);
  }
  else {
    local_ca0 = (undefined8 *)((long)puVar32 + 0x3fU & 0xffffffffffffffc0);
    puVar33 = *(undefined8 **)(lVar31 + 0x28);
    if (puVar33 < local_ca0) {
LAB_02f03efc:
      lVar20 = FUN_031cf3b4(lVar31,&local_ca0);
      puVar33 = *(undefined8 **)(lVar31 + 0x28);
    }
    else {
      lVar20 = *(long *)(lVar31 + 0x38);
      if (*(ulong *)(lVar31 + 0x40) < (ulong)((long)local_ca0 + lVar20)) goto LAB_02f03efc;
      *(long *)(lVar31 + 0x38) = (long)local_ca0 + lVar20;
    }
    local_ca0 = (undefined8 *)((long)puVar44 + 0x3fU & 0xffffffffffffffc0);
    if (puVar33 < local_ca0) {
LAB_02f04520:
      local_1230 = puVar44;
      lVar22 = FUN_031cf3b4(lVar31,&local_ca0);
      puVar33 = *(undefined8 **)(lVar31 + 0x28);
    }
    else {
      lVar22 = *(long *)(lVar31 + 0x38);
      if (*(ulong *)(lVar31 + 0x40) < (ulong)((long)local_ca0 + lVar22)) goto LAB_02f04520;
      *(long *)(lVar31 + 0x38) = (long)local_ca0 + lVar22;
    }
    local_1230 = (undefined8 *)(lVar30 * 0x60);
    local_ca0 = (undefined8 *)((long)local_1230 + 0x3fU & 0xffffffffffffffc0);
    if (local_ca0 <= puVar33) {
      local_1290 = *(undefined8 **)(lVar31 + 0x38);
      if ((ulong)((long)local_ca0 + (long)local_1290) <= *(ulong *)(lVar31 + 0x40)) {
        *(long *)(lVar31 + 0x38) = (long)local_ca0 + (long)local_1290;
        goto LAB_02f04594;
      }
    }
    local_1290 = (undefined8 *)FUN_031cf3b4(lVar31,&local_ca0);
  }
LAB_02f04594:
  local_1308 = lVar30 * 0x60;
  lVar23 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(puVar42 + 3) * 0x200 + 0x60))
                     (puVar42,lVar20,(ulong)uVar19,local_78);
  pauVar35 = *(undefined1 (**) [16])(*param_2 + 0x30);
  auVar78 = *pauVar35;
  auVar50 = pauVar35[1];
  uVar96 = *(undefined8 *)(pauVar35[2] + 8);
  uVar40 = *(undefined8 *)pauVar35[2];
  auVar49 = pauVar35[3];
  pfVar38 = (float *)(lVar23 + lVar30 * 0xc + -4);
  lVar23 = lVar30;
  do {
    fVar82 = (float)*(undefined8 *)(pfVar38 + -2);
    fVar88 = (float)((ulong)*(undefined8 *)(pfVar38 + -2) >> 0x20);
    fVar91 = *pfVar38;
    auVar83._0_8_ =
         CONCAT44(auVar49._4_4_ +
                  auVar78._4_4_ * fVar82 + auVar50._4_4_ * fVar88 +
                  (float)((ulong)uVar40 >> 0x20) * fVar91,
                  auVar49._0_4_ +
                  auVar78._0_4_ * fVar82 + auVar50._0_4_ * fVar88 + (float)uVar40 * fVar91);
    auVar83._8_4_ =
         auVar49._8_4_ + auVar78._8_4_ * fVar82 + auVar50._8_4_ * fVar88 + (float)uVar96 * fVar91;
    auVar83._12_4_ =
         auVar49._12_4_ +
         auVar78._12_4_ * fVar82 + auVar50._12_4_ * fVar88 + (float)((ulong)uVar96 >> 0x20) * fVar91
    ;
    puVar33 = (undefined8 *)(lVar22 + (lVar23 + -1) * 0x10);
    puVar33[1] = auVar83._8_8_;
    *puVar33 = auVar83._0_8_;
    bVar1 = 1 < lVar23;
    pfVar38 = pfVar38 + -3;
    lVar23 = lVar23 + -1;
  } while (bVar1);
  local_80 = 0x7f7fffee;
  uStack_84 = (undefined2)local_78[0];
  uStack_82 = (undefined2)(local_78[0] >> 0x10);
  local_90 = (undefined6)lVar22;
  uStack_8a = (undefined2)((ulong)lVar22 >> 0x30);
  local_7b = (*(ushort *)(param_2[2] + 10) & 0x180) != 0;
  local_88 = uVar19;
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf0))
            (param_1,&local_90,local_1290);
  local_ca0 = &local_c90;
  uStack_c98 = -0x7fffffe000000000;
  if ((char)param_2[5] == '\0') {
LAB_02f04b94:
    uStack_c98._0_4_ = 0;
  }
  else if (((*(ushort *)((long)puVar42 + 0x1a) ^ 0xffff) & 0x802) == 0) {
    if (*(int *)((long)puVar42 + 100) == 0) goto LAB_02f04b94;
    local_1230 = &local_1220;
    local_1228 = 0;
    local_1224 = 0x80000020;
    local_db0 = local_da0;
    local_da8 = 0;
    local_da4 = 0x80000020;
    iVar47 = *(int *)((long)puVar42 + 0x54);
    if (0 < iVar47) {
      lVar23 = 0;
      piVar2 = (int *)(puVar42 + 0xb);
      local_1264 = 0;
      do {
        bVar7 = *(byte *)((long)(puVar42 + 10) + lVar23 * 4 + (long)*(int *)(puVar42 + 10) + 2);
        if (bVar7 != 0) {
          uVar41 = 0;
          iVar47 = bVar7 - 1;
          do {
            bVar8 = *(byte *)((long)piVar2 + (long)(int)(iVar47 + local_1264) + (long)*piVar2);
            bVar9 = *(byte *)((long)piVar2 + uVar41 + local_1264 + (long)*piVar2);
            if (bVar8 < bVar9) {
              iVar47 = (int)(uVar41 + local_1264) * 0x10;
              pauVar35 = (undefined1 (*) [16])(lVar22 + (ulong)bVar8 * 0x10);
              uVar96 = *(undefined8 *)(*pauVar35 + 8);
              uVar40 = *(undefined8 *)*pauVar35;
              auVar87 = *(undefined1 (*) [16])(lVar22 + (ulong)bVar9 * 0x10);
              auVar78 = *(undefined1 (*) [16])(local_1290 + (ulong)bVar8 * 0xc);
              auVar50 = ((undefined1 (*) [16])(local_1290 + (ulong)bVar8 * 0xc))[1];
              fVar48 = auVar78._0_4_;
              fVar56 = auVar78._4_4_;
              fVar58 = auVar78._8_4_;
              fVar59 = auVar78._12_4_;
              fVar61 = auVar50._0_4_;
              fVar82 = fVar61 * (auVar87._0_4_ - fVar48);
              fVar64 = auVar50._4_4_;
              fVar88 = fVar64 * (auVar87._4_4_ - fVar56);
              uVar68 = (undefined1)((uint)fVar88 >> 8);
              uVar69 = (undefined1)((uint)fVar88 >> 0x10);
              uVar70 = (undefined1)((uint)fVar88 >> 0x18);
              fVar66 = auVar50._8_4_;
              fVar91 = fVar66 * (auVar87._8_4_ - fVar58);
              uVar71 = (undefined1)((uint)fVar91 >> 8);
              uVar72 = (undefined1)((uint)fVar91 >> 0x10);
              uVar73 = (undefined1)((uint)fVar91 >> 0x18);
              fVar67 = auVar50._12_4_;
              fVar13 = fVar67 * (auVar87._12_4_ - fVar59);
              uVar74 = (undefined1)((uint)fVar13 >> 8);
              uVar75 = (undefined1)((uint)fVar13 >> 0x10);
              uVar76 = (undefined1)((uint)fVar13 >> 0x18);
              auVar78[4] = SUB41(fVar88,0);
              auVar78._0_4_ = fVar82;
              auVar78[5] = uVar68;
              auVar78[6] = uVar69;
              auVar78[7] = uVar70;
              auVar78[8] = SUB41(fVar91,0);
              auVar78[9] = uVar71;
              auVar78[10] = uVar72;
              auVar78[0xb] = uVar73;
              auVar78[0xc] = SUB41(fVar13,0);
              auVar78[0xd] = uVar74;
              auVar78[0xe] = uVar75;
              auVar78[0xf] = uVar76;
              auVar12[4] = SUB41(fVar88,0);
              auVar12._0_4_ = fVar82;
              auVar12[5] = uVar68;
              auVar12[6] = uVar69;
              auVar12[7] = uVar70;
              auVar12[8] = SUB41(fVar91,0);
              auVar12[9] = uVar71;
              auVar12[10] = uVar72;
              auVar12[0xb] = uVar73;
              auVar12[0xc] = SUB41(fVar13,0);
              auVar12[0xd] = uVar74;
              auVar12[0xe] = uVar75;
              auVar12[0xf] = uVar76;
              auVar78 = NEON_ext(auVar78,auVar12,8,1);
              sVar11 = (short)iVar47;
              auVar53 = auVar87;
              if (-0.02 <= fVar82 + fVar88 + auVar78._0_4_) {
LAB_02f047cc:
                uVar26 = 0x10;
              }
              else {
                puVar33 = local_1290 + (ulong)bVar9 * 0xc;
                auVar78 = *(undefined1 (*) [16])(puVar33 + 2);
                fVar82 = (float)*puVar33;
                fVar100 = (float)uVar40;
                fVar88 = (float)((ulong)*puVar33 >> 0x20);
                fVar101 = (float)((ulong)uVar40 >> 0x20);
                fVar91 = (float)puVar33[1];
                fVar102 = (float)uVar96;
                fVar13 = (float)((ulong)puVar33[1] >> 0x20);
                fVar103 = (float)((ulong)uVar96 >> 0x20);
                fVar77 = auVar78._0_4_;
                auVar84._0_4_ = fVar77 * (fVar100 - fVar82);
                fVar79 = auVar78._4_4_;
                auVar84._4_4_ = fVar79 * (fVar101 - fVar88);
                fVar80 = auVar78._8_4_;
                auVar84._8_4_ = fVar80 * (fVar102 - fVar91);
                fVar81 = auVar78._12_4_;
                auVar84._12_4_ = fVar81 * (fVar103 - fVar13);
                auVar78 = NEON_ext(auVar84,auVar84,8,1);
                if (-0.02 <= auVar78._0_4_ + auVar84._0_4_ + auVar84._4_4_) goto LAB_02f047cc;
                fVar100 = fVar100 + (auVar87._0_4_ - fVar100) * 0.5;
                fVar101 = fVar101 + (auVar87._4_4_ - fVar101) * 0.5;
                uVar93 = CONCAT44(fVar101,fVar100);
                fVar102 = fVar102 + (auVar87._8_4_ - fVar102) * 0.5;
                fVar103 = fVar103 + (auVar87._12_4_ - fVar103) * 0.5;
                uVar97 = CONCAT44(fVar103,fVar102);
                auVar85._0_4_ = fVar61 * (fVar100 - fVar48);
                auVar85._4_4_ = fVar64 * (fVar101 - fVar56);
                auVar85._8_4_ = fVar66 * (fVar102 - fVar58);
                auVar85._12_4_ = fVar67 * (fVar103 - fVar59);
                auVar78 = NEON_ext(auVar85,auVar85,8,1);
                if (0.0 < auVar78._0_4_ + auVar85._0_4_ + auVar85._4_4_) {
                  uVar39 = 0x10;
                  uVar27 = 8;
                  uVar29 = 8;
                  uVar28 = 0xc;
                  uVar26 = 0xc;
                  auVar78 = auVar87;
LAB_02f04848:
                  fVar100 = fVar100 + (auVar78._0_4_ - fVar100) * 0.5;
                  fVar101 = fVar101 + (auVar78._4_4_ - fVar101) * 0.5;
                  uVar94 = CONCAT44(fVar101,fVar100);
                  fVar102 = fVar102 + (auVar78._8_4_ - fVar102) * 0.5;
                  fVar103 = fVar103 + (auVar78._12_4_ - fVar103) * 0.5;
                  uVar98 = CONCAT44(fVar103,fVar102);
                  auVar89._0_4_ = fVar61 * (fVar100 - fVar48);
                  auVar89._4_4_ = fVar64 * (fVar101 - fVar56);
                  auVar89._8_4_ = fVar66 * (fVar102 - fVar58);
                  auVar89._12_4_ = fVar67 * (fVar103 - fVar59);
                  auVar78 = NEON_ext(auVar89,auVar89,8,1);
                  auVar53 = auVar87;
                  if (0.0 < auVar78._0_4_ + auVar89._0_4_ + auVar89._4_4_) {
                    uVar29 = uVar39;
                  }
                  else {
                    auVar90._0_4_ = fVar77 * (fVar100 - fVar82);
                    auVar90._4_4_ = fVar79 * (fVar101 - fVar88);
                    auVar90._8_4_ = fVar80 * (fVar102 - fVar91);
                    auVar90._12_4_ = fVar81 * (fVar103 - fVar13);
                    auVar78 = NEON_ext(auVar90,auVar90,8,1);
                    if (auVar78._0_4_ + auVar90._0_4_ + auVar90._4_4_ <= 0.0) {
                      uVar40 = uVar93;
                      uVar96 = uVar97;
                      uVar93 = uVar94;
                      uVar97 = uVar98;
                      goto LAB_02f04944;
                    }
                    auVar87._8_8_ = uVar97;
                    auVar87._0_8_ = uVar93;
                    auVar53._8_8_ = uVar98;
                    auVar53._0_8_ = uVar94;
                    uVar94 = uVar93;
                    uVar98 = uVar97;
                    uVar39 = uVar26;
                    uVar28 = uVar27;
                  }
                  fVar100 = fVar100 + (auVar87._0_4_ - fVar100) * 0.5;
                  fVar101 = fVar101 + (auVar87._4_4_ - fVar101) * 0.5;
                  uVar95 = CONCAT44(fVar101,fVar100);
                  fVar102 = fVar102 + (auVar87._8_4_ - fVar102) * 0.5;
                  fVar103 = fVar103 + (auVar87._12_4_ - fVar103) * 0.5;
                  uVar99 = CONCAT44(fVar103,fVar102);
                  uVar26 = uVar29 + uVar26 >> 1;
                  auVar51._0_4_ = fVar61 * (fVar100 - fVar48);
                  auVar51._4_4_ = fVar64 * (fVar101 - fVar56);
                  auVar51._8_4_ = fVar66 * (fVar102 - fVar58);
                  auVar51._12_4_ = fVar67 * (fVar103 - fVar59);
                  auVar78 = NEON_ext(auVar51,auVar51,8,1);
                  if (0.0 < auVar78._0_4_ + auVar51._0_4_ + auVar51._4_4_) {
                    auVar92 = auVar53;
                  }
                  else {
                    auVar52._0_4_ = fVar77 * (fVar100 - fVar82);
                    auVar52._4_4_ = fVar79 * (fVar101 - fVar88);
                    auVar52._8_4_ = fVar80 * (fVar102 - fVar91);
                    auVar52._12_4_ = fVar81 * (fVar103 - fVar13);
                    auVar78 = NEON_ext(auVar52,auVar52,8,1);
                    uVar40 = uVar94;
                    uVar96 = uVar98;
                    uVar93 = uVar95;
                    uVar97 = uVar99;
                    if (auVar78._0_4_ + auVar52._0_4_ + auVar52._4_4_ <= 0.0) goto LAB_02f04944;
                    auVar92._8_8_ = uVar98;
                    auVar92._0_8_ = uVar94;
                    auVar53._8_8_ = uVar99;
                    auVar53._0_8_ = uVar95;
                    uVar95 = uVar94;
                    uVar99 = uVar98;
                    uVar39 = uVar28;
                  }
                  uVar93 = CONCAT44(fVar101 + (auVar92._4_4_ - fVar101) * 0.5,
                                    fVar100 + (auVar92._0_4_ - fVar100) * 0.5);
                  uVar97 = CONCAT44(fVar103 + (auVar92._12_4_ - fVar103) * 0.5,
                                    fVar102 + (auVar92._8_4_ - fVar102) * 0.5);
                  uVar26 = uVar39 + uVar26 >> 1;
                  uVar40 = uVar95;
                  uVar96 = uVar99;
                }
                else {
                  uVar39 = 8;
                  auVar86._0_4_ = fVar77 * (fVar100 - fVar82);
                  auVar86._4_4_ = fVar79 * (fVar101 - fVar88);
                  auVar86._8_4_ = fVar80 * (fVar102 - fVar91);
                  auVar86._12_4_ = fVar81 * (fVar103 - fVar13);
                  auVar78 = NEON_ext(auVar86,auVar86,8,1);
                  uVar26 = uVar39;
                  if (0.0 < auVar78._0_4_ + auVar86._0_4_ + auVar86._4_4_) {
                    auVar87._8_8_ = uVar97;
                    auVar87._0_8_ = uVar93;
                    uVar27 = 0;
                    uVar29 = 0;
                    uVar28 = 4;
                    uVar26 = 4;
                    auVar78 = *pauVar35;
                    uVar93 = uVar40;
                    uVar97 = uVar96;
                    goto LAB_02f04848;
                  }
                }
LAB_02f04944:
                lVar43 = (long)(int)local_1228;
                if ((int)(local_1224 & 0x7fffffff) <= (int)local_1228) {
                  FUN_02e9b11c(&local_1230,PTR_PTR_047d1a50,lVar43 + 1);
                }
                (local_1230 + (long)(int)local_1228 * 2)[1] = uVar97;
                local_1230[(long)(int)local_1228 * 2] = uVar93;
                lVar36 = (long)local_da8;
                local_1228 = (uint)(lVar43 + 1);
                if ((int)(local_da4 & 0x7fffffff) <= local_da8) {
                  FUN_02eaee40(&local_db0,PTR_PTR_047d1a50,lVar36 + 1);
                }
                *(short *)(local_db0 + (long)local_da8 * 2) = sVar11 + (short)uVar26 + -0x7ff0;
                local_da8 = (int)(lVar36 + 1);
              }
              fVar82 = (float)((ulong)uVar40 >> 0x20);
              fVar88 = (float)((ulong)uVar96 >> 0x20);
              lVar43 = 0;
              do {
                if ((*(char *)(param_2[2] + lVar43 + 0x60) != '\0') &&
                   (uVar29 = (uint)*(ushort *)(param_2[2] + lVar43 * 2 + 0x50),
                   uVar39 = uVar29 & 0xf,
                   (uVar29 & 0x7ff0) == (iVar47 + 0x10U & 0xffff) && uVar39 != uVar26)) {
                  fVar91 = (float)uVar39 * 0.0625;
                  auVar54._0_8_ =
                       CONCAT44(fVar82 + (auVar53._4_4_ - fVar82) * fVar91,
                                (float)uVar40 + (auVar53._0_4_ - (float)uVar40) * fVar91);
                  auVar54._8_4_ = (float)uVar96 + (auVar53._8_4_ - (float)uVar96) * fVar91;
                  auVar54._12_4_ = fVar88 + (auVar53._12_4_ - fVar88) * fVar91;
                  lVar36 = (long)(int)local_1228;
                  if ((int)(local_1224 & 0x7fffffff) <= (int)local_1228) {
                    FUN_02e9b11c(&local_1230,PTR_PTR_047d1a50,lVar36 + 1);
                    auVar54._8_8_ = auVar54._8_8_;
                  }
                  (local_1230 + (long)(int)local_1228 * 2)[1] = auVar54._8_8_;
                  local_1230[(long)(int)local_1228 * 2] = auVar54._0_8_;
                  lVar37 = (long)local_da8;
                  local_1228 = (uint)(lVar36 + 1);
                  if ((int)(local_da4 & 0x7fffffff) <= local_da8) {
                    FUN_02eaee40(&local_db0,PTR_PTR_047d1a50,lVar37 + 1);
                  }
                  *(ushort *)(local_db0 + (long)local_da8 * 2) = (ushort)uVar39 | sVar11 + 0x8010U;
                  local_da8 = (int)(lVar37 + 1);
                }
                lVar43 = lVar43 + 1;
              } while (lVar43 != 8);
            }
            iVar47 = (int)uVar41;
            uVar41 = uVar41 + 1;
          } while (uVar41 != bVar7);
          iVar47 = *(int *)((long)puVar42 + 0x54);
        }
        uVar26 = local_1228;
        lVar23 = lVar23 + 1;
        local_1264 = local_1264 + bVar7;
      } while (lVar23 < iVar47);
      if (local_1228 != 0) {
        lVar23 = (long)(int)local_1228;
        if ((int)(uStack_c98._4_4_ & 0x7fffffff) < (int)local_1228) {
          FUN_02f08294(&local_ca0,lVar23);
        }
        lVar43 = (long)(int)uStack_c98;
        if ((int)uStack_c98 < (int)uVar26) {
          uStack_c98 = CONCAT44(uStack_c98._4_4_,uVar26);
          lVar23 = lVar23 * 0x60 + lVar43 * -0x60;
          puVar33 = local_ca0 + lVar43 * 0xc + 9;
          do {
            *(undefined2 *)(puVar33 + -1) = 0xffff;
            lVar23 = lVar23 + -0x60;
            *(undefined4 *)((long)puVar33 + -4) = 0;
            *puVar33 = 0;
            puVar33 = puVar33 + 0xc;
          } while (lVar23 != 0);
        }
        else if ((int)uVar26 < (int)uStack_c98) {
          uStack_c98 = CONCAT44(uStack_c98._4_4_,uVar26);
        }
        local_df0 = 0x7f7fffee;
        local_df4 = *(undefined4 *)(puVar42 + 4);
        local_df8 = local_1228;
        local_e00 = local_1230;
        local_deb = (*(ushort *)(param_2[2] + 10) & 0x180) != 0;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf0))
                  (param_1,&local_e00,local_ca0);
        if (0 < (int)uStack_c98) {
          lVar43 = 0;
          lVar23 = 0;
          do {
            if (*(float *)((long)local_ca0 + lVar43 + 0x30) <= *(float *)(param_2 + 3)) {
              sVar11 = *(short *)(local_db0 + lVar23 * 2);
              *(short *)((long)local_ca0 + lVar43 + 0x34) = sVar11;
              lVar36 = param_2[2];
              pcVar25 = (char *)(lVar36 + 0x60);
              cVar5 = *pcVar25;
              if (*(short *)(lVar36 + 0x50) != sVar11 || cVar5 == '\0') {
                pcVar25 = (char *)(lVar36 + 0x61);
                if (*(short *)(lVar36 + 0x52) != sVar11 || *pcVar25 == '\0') {
                  uVar26 = -(uint)(cVar5 != '\0');
                  if (*pcVar25 == '\0' && cVar5 != '\0') {
                    uVar26 = 1;
                  }
                  pcVar25 = (char *)(lVar36 + 0x62);
                  cVar5 = *pcVar25;
                  if (*(short *)(lVar36 + 0x54) != sVar11 || cVar5 == '\0') {
                    pcVar25 = (char *)(lVar36 + 99);
                    cVar6 = *pcVar25;
                    uVar39 = 2;
                    if (cVar5 != '\0' || uVar26 != 0xffffffff) {
                      uVar39 = uVar26;
                    }
                    if ((*(short *)(lVar36 + 0x56) != sVar11) || (cVar6 == '\0')) {
                      pcVar25 = (char *)(lVar36 + 100);
                      cVar5 = *pcVar25;
                      uVar26 = 3;
                      if (cVar6 != '\0' || uVar39 != 0xffffffff) {
                        uVar26 = uVar39;
                      }
                      if ((*(short *)(lVar36 + 0x58) != sVar11) || (cVar5 == '\0')) {
                        pcVar25 = (char *)(lVar36 + 0x65);
                        cVar6 = *pcVar25;
                        uVar39 = 4;
                        if (cVar5 != '\0' || uVar26 != 0xffffffff) {
                          uVar39 = uVar26;
                        }
                        if ((*(short *)(lVar36 + 0x5a) != sVar11) || (cVar6 == '\0')) {
                          pcVar25 = (char *)(lVar36 + 0x66);
                          cVar5 = *pcVar25;
                          uVar26 = 5;
                          if (cVar6 != '\0' || uVar39 != 0xffffffff) {
                            uVar26 = uVar39;
                          }
                          if ((*(short *)(lVar36 + 0x5c) != sVar11) || (cVar5 == '\0')) {
                            pcVar25 = (char *)(lVar36 + 0x67);
                            uVar39 = 6;
                            if (cVar5 != '\0' || uVar26 != 0xffffffff) {
                              uVar39 = uVar26;
                            }
                            if ((*(short *)(lVar36 + 0x5e) != sVar11) || (*pcVar25 == '\0')) {
                              uVar26 = 7;
                              if (*pcVar25 != '\0' || uVar39 != 0xffffffff) {
                                uVar26 = uVar39;
                              }
                              if (uVar26 != 0xffffffff) {
                                *(short *)(lVar36 + (ulong)uVar26 * 2 + 0x50) = sVar11;
                                *(undefined1 *)(param_2[2] + (ulong)uVar26 + 0x60) = 2;
                              }
                              goto LAB_02f04d84;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *pcVar25 = '\x02';
            }
LAB_02f04d84:
            lVar23 = lVar23 + 1;
            lVar43 = lVar43 + 0x60;
          } while (lVar23 < (int)uStack_c98);
        }
      }
    }
    lVar23 = param_2[2];
    if (*(char *)(lVar23 + 0x60) != '\0') {
      *(char *)(lVar23 + 0x60) = *(char *)(lVar23 + 0x60) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 0x61) != '\0') {
      *(char *)(lVar23 + 0x61) = *(char *)(lVar23 + 0x61) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 0x62) != '\0') {
      *(char *)(lVar23 + 0x62) = *(char *)(lVar23 + 0x62) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 99) != '\0') {
      *(char *)(lVar23 + 99) = *(char *)(lVar23 + 99) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 100) != '\0') {
      *(char *)(lVar23 + 100) = *(char *)(lVar23 + 100) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 0x65) != '\0') {
      *(char *)(lVar23 + 0x65) = *(char *)(lVar23 + 0x65) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 0x66) != '\0') {
      *(char *)(lVar23 + 0x66) = *(char *)(lVar23 + 0x66) + -1;
      lVar23 = param_2[2];
    }
    if (*(char *)(lVar23 + 0x67) != '\0') {
      *(char *)(lVar23 + 0x67) = *(char *)(lVar23 + 0x67) + -1;
    }
    puVar17 = PTR_PTR_047d1a50;
    local_da8 = 0;
    if ((-1 < (int)local_da4) && (local_db0 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_db0,(ulong)local_da4 << 1);
    }
    local_1228 = 0;
    if ((-1 < (int)local_1224) && (local_1230 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar17 + 0x20))(puVar17,local_1230,(ulong)local_1224 << 4);
    }
  }
  else {
    uStack_c98._0_4_ = 0;
  }
  uVar26 = (int)uStack_c98 + uVar19;
  if (0 < (int)uVar26) {
    uVar41 = 0;
    puVar42 = local_1290;
    do {
      puVar33 = puVar42;
      if (lVar30 <= (long)uVar41) {
        puVar33 = local_ca0 + (long)(int)((int)uVar41 - uVar19) * 0xc;
      }
      if (*(float *)(puVar33 + 6) <= *(float *)(param_2 + 3)) {
        if (*(int *)(param_3 + 0x18) < 0xf41) {
          puVar24 = (undefined8 *)
                    (*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20);
        }
        else {
          puVar24 = (undefined8 *)FUN_031c36f4(param_3);
        }
        uVar3 = *(undefined4 *)(puVar33 + 1);
        uVar4 = *(undefined4 *)((long)puVar33 + 0xc);
        *puVar24 = *puVar33;
        *(undefined4 *)(puVar24 + 1) = uVar3;
        *(undefined4 *)((long)puVar24 + 0xc) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 3);
        uVar4 = *(undefined4 *)((long)puVar33 + 0x1c);
        puVar24[2] = puVar33[2];
        *(undefined4 *)(puVar24 + 3) = uVar3;
        *(undefined4 *)((long)puVar24 + 0x1c) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 5);
        uVar4 = *(undefined4 *)((long)puVar33 + 0x2c);
        puVar24[4] = puVar33[4];
        *(undefined4 *)(puVar24 + 5) = uVar3;
        *(undefined4 *)((long)puVar24 + 0x2c) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 7);
        uVar4 = *(undefined4 *)((long)puVar33 + 0x3c);
        puVar24[6] = puVar33[6];
        *(undefined4 *)(puVar24 + 7) = uVar3;
        *(undefined4 *)((long)puVar24 + 0x3c) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 9);
        uVar4 = *(undefined4 *)((long)puVar33 + 0x4c);
        puVar24[8] = puVar33[8];
        *(undefined4 *)(puVar24 + 9) = uVar3;
        *(undefined4 *)((long)puVar24 + 0x4c) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 0xb);
        uVar4 = *(undefined4 *)((long)puVar33 + 0x5c);
        puVar24[10] = puVar33[10];
        *(undefined4 *)(puVar24 + 0xb) = uVar3;
        *(undefined4 *)((long)puVar24 + 0x5c) = uVar4;
        uVar3 = *(undefined4 *)(puVar33 + 6);
        *(undefined2 *)((long)puVar24 + 0x34) = *(undefined2 *)((long)puVar33 + 0x34);
        *(undefined4 *)(puVar24 + 7) = *(undefined4 *)(*param_2 + 0x18);
        lVar23 = *param_2;
        *(undefined2 *)(puVar24 + 8) = *(undefined2 *)(lVar23 + 0x38);
        uVar40 = *(undefined8 *)(lVar23 + 0x3c);
        *(undefined4 *)((long)puVar24 + 0x4c) = *(undefined4 *)(lVar23 + 0x44);
        *(undefined8 *)((long)puVar24 + 0x44) = uVar40;
        *(undefined4 *)(puVar24 + 6) = uVar3;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 0x60;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      }
      uVar41 = uVar41 + 1;
      puVar42 = puVar42 + 0xc;
    } while (uVar26 != uVar41);
  }
  puVar17 = PTR_DAT_047d1a08;
  if (lVar31 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_1290,local_1308);
    (**(code **)(puVar17 + 8))(1,lVar22,puVar44);
    (**(code **)(puVar17 + 8))(1,lVar20,puVar32);
    goto LAB_02f0524c;
  }
  uVar41 = local_1308 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar31 + 0x28) < uVar41) ||
     (*(long *)(lVar31 + 0x38) != uVar41 + (long)local_1290)) {
    if (local_1290 != (undefined8 *)0x0) {
      if (*(ulong *)(lVar31 + 0x28) < uVar41 + 0x40) {
        *(int *)(*(long *)(lVar31 + 0x30) + 0x20) = *(int *)(*(long *)(lVar31 + 0x30) + 0x20) + -1;
        (**(code **)(**(long **)(lVar31 + 0x10) + 0x18))
                  (*(long **)(lVar31 + 0x10),
                   (long)local_1290 - (long)*(int *)((long)local_1290 + -4),uVar41 + 0x44);
      }
      else {
        if (*(long *)(lVar31 + 0x38) == uVar41 + (long)local_1290) {
          *(undefined8 **)(lVar31 + 0x38) = local_1290;
          goto LAB_02f050f8;
        }
        FUN_031cf778(lVar31);
      }
    }
  }
  else {
    *(undefined8 **)(lVar31 + 0x38) = local_1290;
    if (*(undefined8 **)(lVar31 + 0x48) == local_1290) {
LAB_02f050f8:
      FUN_031cf578(lVar31);
    }
  }
  uVar41 = (long)puVar44 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar31 + 0x28) < uVar41) || (*(long *)(lVar31 + 0x38) != uVar41 + lVar22)) {
    if (lVar22 != 0) {
      if (*(ulong *)(lVar31 + 0x28) < uVar41 + 0x40) {
        *(int *)(*(long *)(lVar31 + 0x30) + 0x20) = *(int *)(*(long *)(lVar31 + 0x30) + 0x20) + -1;
        (**(code **)(**(long **)(lVar31 + 0x10) + 0x18))
                  (*(long **)(lVar31 + 0x10),lVar22 - *(int *)(lVar22 + -4),uVar41 + 0x44);
      }
      else {
        if (*(long *)(lVar31 + 0x38) == uVar41 + lVar22) {
          *(long *)(lVar31 + 0x38) = lVar22;
          goto LAB_02f0519c;
        }
        FUN_031cf778(lVar31,lVar22);
      }
    }
  }
  else {
    *(long *)(lVar31 + 0x38) = lVar22;
    if (*(long *)(lVar31 + 0x48) == lVar22) {
LAB_02f0519c:
      FUN_031cf578(lVar31);
    }
  }
  uVar41 = (long)puVar32 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar31 + 0x28) < uVar41) || (*(long *)(lVar31 + 0x38) != uVar41 + lVar20)) {
    if (lVar20 == 0) goto LAB_02f0524c;
    if (*(ulong *)(lVar31 + 0x28) < uVar41 + 0x40) {
      *(int *)(*(long *)(lVar31 + 0x30) + 0x20) = *(int *)(*(long *)(lVar31 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar31 + 0x10) + 0x18))
                (*(long **)(lVar31 + 0x10),lVar20 - *(int *)(lVar20 + -4),uVar41 + 0x44);
      goto LAB_02f0524c;
    }
    if (*(long *)(lVar31 + 0x38) != uVar41 + lVar20) {
      FUN_031cf778(lVar31,lVar20);
      goto LAB_02f0524c;
    }
    *(long *)(lVar31 + 0x38) = lVar20;
  }
  else {
    *(long *)(lVar31 + 0x38) = lVar20;
    if (*(long *)(lVar31 + 0x48) != lVar20) goto LAB_02f0524c;
  }
  FUN_031cf578(lVar31);
LAB_02f0524c:
  lVar31 = uStack_c98;
  uVar41 = (ulong)uStack_c98._4_4_;
  uStack_c98 = (ulong)uStack_c98._4_4_ << 0x20;
  if ((-1 < lVar31) && (local_ca0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_ca0,uVar41 * 0x60);
  }
  return;
}


