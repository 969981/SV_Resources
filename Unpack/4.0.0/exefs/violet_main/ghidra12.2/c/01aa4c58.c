/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aa4c58; name: FUN_01aa4c58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01aa4c58(long *param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  long lVar23;
  size_t sVar24;
  long *plVar25;
  long *plVar26;
  ushort uVar27;
  undefined4 uVar28;
  ulong uVar29;
  long lVar30;
  undefined1 *puVar31;
  long lVar32;
  undefined1 *puVar33;
  long lVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  ulong uVar38;
  uint *puVar39;
  int *piVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  char *pcVar44;
  undefined8 *puVar45;
  void *pvVar46;
  long lVar47;
  uint *puVar48;
  long lVar49;
  uint *puVar50;
  void *__s;
  ulong uVar51;
  float fVar52;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  int iVar58;
  uint uVar59;
  int iVar63;
  int iVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  int iVar97;
  int iVar101;
  int iVar102;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar110 [16];
  undefined1 auVar109 [16];
  undefined1 auVar108 [16];
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar114 [16];
  undefined1 auVar113 [16];
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  ulong local_1f0;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  auVar134 = FUN_00cf8cd8();
  uVar41 = auVar134._0_8_;
  local_1f0 = uVar41 >> 0x28;
  if ((uVar41 >> 0x20 & 0xff) == 0) {
    uVar41 = 0;
    goto LAB_01aa5cf8;
  }
  if (auVar134._8_4_ == 0) {
    auVar134 = (**(code **)(*param_1 + 0x80))(param_1);
    local_1f0 = auVar134._0_8_ >> 0x28;
    uVar41 = auVar134._0_8_ >> 0x20;
    FUN_00cf8c04(param_1);
    uVar29 = uVar41;
  }
  else {
    uVar41 = uVar41 >> 0x20;
    uVar29 = 1;
  }
  if ((auVar134._8_4_ != 0) || ((uVar29 & 0xff) == 0)) goto LAB_01aa5cf8;
  puVar50 = (uint *)param_1[0x3e];
  uVar8 = *puVar50;
  piVar2 = (int *)((long)puVar50 + (ulong)uVar8);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
     (uVar29 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar29 == 0)) {
    puVar48 = (uint *)0x0;
  }
  else {
    puVar48 = (uint *)((long)piVar2 + uVar29);
    puVar48 = (uint *)((long)puVar48 + (ulong)*puVar48);
  }
  plVar1 = param_1 + 0x42;
  lVar30 = param_1[0x42];
  lVar34 = param_1[0x43] - lVar30 >> 4;
  uVar29 = (ulong)*puVar48;
  if ((ulong)(lVar34 * 0x4ec4ec4ec4ec4ec5) < uVar29) {
    if ((ulong)((param_1[0x44] - param_1[0x43] >> 4) * 0x4ec4ec4ec4ec4ec5) <
        uVar29 + lVar34 * -0x4ec4ec4ec4ec4ec5) {
      uVar38 = param_1[0x46];
      if (0x7ffffffffffffffe < uVar38) {
        uVar38 = 0x7fffffffffffffff;
      }
      if (uVar38 < uVar29) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar30 = param_1[0x44] - lVar30 >> 4;
      uVar35 = lVar30 * -0x6276276276276276;
      uVar51 = uVar29;
      if (uVar29 <= uVar35) {
        uVar51 = uVar35;
      }
      plVar25 = param_1 + 0x45;
      if (uVar38 >> 1 <= (ulong)(lVar30 * 0x4ec4ec4ec4ec4ec5)) {
        uVar51 = uVar38;
      }
      if (uVar51 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = (**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,uVar51 * 0xd0,0x10);
        if (lVar30 == 0) {
          (**(code **)(*(long *)*plVar25 + 0xe8))();
        }
      }
      uVar16 = _UNK_03cabe58;
      uVar15 = _DAT_03cabe50;
      uVar14 = _DAT_03caa980;
      lVar34 = lVar34 * 0x10;
      lVar49 = lVar30 + uVar51 * 0xd0;
      lVar42 = uVar29 * 0xd0;
      lVar43 = lVar30 + lVar34;
      fStack_78 = (float)_UNK_03caa988;
      fStack_74 = (float)((ulong)_UNK_03caa988 >> 0x20);
      lVar32 = lVar30 + lVar42;
      do {
        lVar47 = *plVar25;
        if (((DAT_04865a38 & 1) == 0) && (iVar58 = __cxa_guard_acquire(&DAT_04865a38), iVar58 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar23 != 0) {
          if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_01aa682c;
          *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar47;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
        }
        puVar45 = (undefined8 *)(lVar30 + lVar34);
        memset(puVar45 + 8,0,0x90);
        puVar45[2] = 0;
        puVar45[3] = 0;
        *puVar45 = &DAT_cbf29ce484222645;
        puVar45[1] = &DAT_03c886bc;
        puVar45[4] = &DAT_cbf29ce484222645;
        puVar45[5] = &DAT_03c886bc;
        puVar45[6] = 0;
        puVar45[7] = 0;
        puVar45[0xe] = 0;
        puVar45[0xf] = 0;
        auVar53._8_4_ = fStack_78;
        auVar53._0_8_ = uVar14;
        auVar53._12_4_ = fStack_74;
        puVar45[0xb] = auVar53._8_8_;
        puVar45[10] = uVar14;
        puVar45[0xd] = uVar16;
        puVar45[0xc] = uVar15;
        if (lVar23 != 0) {
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
        }
        lVar42 = lVar42 + -0xd0;
        lVar30 = lVar30 + 0xd0;
      } while (lVar34 != lVar42);
      lVar34 = param_1[0x42];
      lVar30 = param_1[0x43];
      if (lVar30 == lVar34) {
        lVar30 = lVar34;
      }
      else {
        do {
          lVar43 = lVar43 + -0xd0;
          lVar30 = lVar30 + -0xd0;
          FUN_01aa6b00(plVar25,lVar43,lVar30);
        } while (lVar34 != lVar30);
        lVar30 = param_1[0x42];
        lVar34 = param_1[0x43];
      }
      param_1[0x42] = lVar43;
      lVar43 = param_1[0x44];
      param_1[0x43] = lVar32;
      param_1[0x44] = lVar49;
      if (lVar34 != lVar30) {
        if (*(long **)(lVar34 + -0x98) != (long *)0x0) {
          (**(code **)(**(long **)(lVar34 + -0x98) + 0x20))();
        }
        if (*(long **)(lVar34 + -0xb8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar34 + -0xb8) + 0x20))();
        }
        if (lVar34 + -0xd0 != lVar30) {
          do {
            if (*(long **)(lVar34 + -0x168) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x168) + 0x20))();
            }
            if (*(long **)(lVar34 + -0x188) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x188) + 0x20))();
            }
            lVar34 = lVar34 + -0xd0;
          } while (lVar30 + 0xd0 != lVar34);
        }
      }
      if (lVar30 != 0) {
        plVar25 = (long *)*plVar25;
        uVar29 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar29 & 1) == 0) || (lVar34 = FUN_00c4e600(), *(int *)(lVar34 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar30,lVar43 - lVar30,0x10);
        }
        else {
          FUN_00c48fe8(plVar25,lVar30,lVar43 - lVar30,0x10);
        }
      }
    }
    else {
      FUN_01aa6eac(plVar1);
    }
  }
  else if (uVar29 < (ulong)(lVar34 * 0x4ec4ec4ec4ec4ec5)) {
    FUN_01aa68c8(plVar1,lVar30 + uVar29 * 0xd0);
  }
  uVar21 = _UNK_03cac218;
  uVar20 = _DAT_03cac210;
  uVar19 = _UNK_03cabb08;
  uVar16 = _DAT_03cabb00;
  uVar15 = _UNK_03cab3a8;
  uVar14 = _DAT_03cab3a0;
  puVar39 = puVar48 + 1;
  auVar53 = NEON_fmov(0x3f800000,4);
  fStack_78 = auVar53._8_4_;
  fStack_74 = auVar53._12_4_;
  local_80 = auVar53._0_4_;
  fStack_7c = auVar53._4_4_;
  if (*puVar48 != 0) {
    puVar3 = puVar39 + *puVar48;
    lVar34 = 0;
    lVar30 = (long)puVar48 + 9;
    auVar54 = NEON_fmov(0x40800000,4);
    do {
      puVar31 = &DAT_cbf29ce484222645;
      uVar9 = *puVar39;
      lVar43 = *plVar1;
      piVar40 = (int *)((long)puVar39 + (ulong)uVar9);
      if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar29 == 0)) {
        lVar32 = 0;
      }
      else {
        puVar48 = (uint *)((long)piVar40 + uVar29);
        lVar32 = (long)puVar48 + (ulong)*puVar48;
      }
      sVar24 = strlen((char *)(lVar32 + 4));
      bVar10 = *(byte *)(lVar32 + 4);
      if (bVar10 != 0) {
        pbVar36 = (byte *)(lVar32 + 5);
        do {
          puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar10) * 0x100000001b3);
          bVar10 = *pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (bVar10 != 0);
      }
      puVar45 = (undefined8 *)(lVar43 + lVar34 * 0xd0);
      *puVar45 = puVar31;
      puVar45[1] = (char *)(lVar32 + 4);
      puVar45[2] = sVar24;
      plVar26 = puVar45 + 3;
      plVar25 = (long *)*plVar26;
      *plVar26 = 0;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x20))();
      }
      *plVar26 = 0;
      if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 0x11) ||
         (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[8], uVar29 == 0)) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar58 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar58 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar31 = *(undefined1 **)PTR_DAT_047d3e30;
        pcVar44 = *(char **)(PTR_DAT_047d3e30 + 8);
        sVar24 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
        plVar25 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      else {
        puVar48 = (uint *)((long)piVar40 + uVar29);
        uVar38 = (ulong)*puVar48;
        pcVar44 = (char *)((long)puVar48 + uVar38 + 4);
        sVar24 = strlen(pcVar44);
        bVar10 = *(byte *)((long)puVar48 + uVar38 + 4);
        if (bVar10 == 0) {
          plVar25 = (long *)0x0;
          puVar31 = &DAT_cbf29ce484222645;
        }
        else {
          puVar31 = &DAT_cbf29ce484222645;
          pbVar36 = (byte *)(lVar30 + uVar38 + uVar29 + (ulong)uVar9);
          do {
            puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar10) * 0x100000001b3);
            bVar10 = *pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (bVar10 != 0);
          plVar25 = (long *)0x0;
        }
      }
      lVar32 = lVar43 + lVar34 * 0xd0;
      *(undefined1 **)(lVar32 + 0x20) = puVar31;
      *(char **)(lVar32 + 0x28) = pcVar44;
      *(size_t *)(lVar32 + 0x30) = sVar24;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      plVar26 = *(long **)(lVar32 + 0x38);
      *(long **)(lVar32 + 0x38) = plVar25;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))();
      }
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      if (*(ushort *)((long)piVar40 - (long)*piVar40) < 0xd) {
        uVar28 = 0xffffffff;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[6];
        uVar28 = 0xffffffff;
        if (uVar29 != 0) {
          uVar28 = *(undefined4 *)((long)piVar40 + uVar29);
        }
      }
      *(undefined4 *)(lVar43 + lVar34 * 0xd0 + 0x40) = uVar28;
      if (*(ushort *)((long)piVar40 - (long)*piVar40) < 0xf) {
        uVar28 = 0xffffffff;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[7];
        uVar28 = 0xffffffff;
        if (uVar29 != 0) {
          uVar28 = *(undefined4 *)((long)piVar40 + uVar29);
        }
      }
      *(undefined4 *)(lVar43 + lVar34 * 0xd0 + 0xc0) = uVar28;
      if (*(ushort *)((long)piVar40 - (long)*piVar40) < 0x13) {
        uVar28 = 0;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[9];
        uVar28 = 0;
        if (uVar29 != 0) {
          uVar28 = *(undefined4 *)((long)piVar40 + uVar29);
        }
      }
      *(undefined4 *)(lVar43 + lVar34 * 0xd0 + 0xc4) = uVar28;
      if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 0x15) ||
         (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[10], uVar29 == 0)) {
        bVar22 = false;
      }
      else {
        bVar22 = *(char *)((long)piVar40 + uVar29) != '\0';
      }
      lVar43 = lVar43 + lVar34 * 0xd0;
      lVar34 = lVar34 + 1;
      *(bool *)(lVar43 + 200) = bVar22;
      puVar48 = (uint *)((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (6 - (long)*piVar40)));
      piVar4 = (int *)((long)puVar48 + (ulong)*puVar48);
      puVar45 = (undefined8 *)
                ((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
      uVar12 = *puVar45;
      *(undefined4 *)(lVar43 + 0x58) = *(undefined4 *)(puVar45 + 1);
      *(undefined4 *)(lVar43 + 0x5c) = 0;
      *(undefined8 *)(lVar43 + 0x50) = uVar12;
      puVar48 = (uint *)((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (6 - (long)*piVar40)));
      piVar4 = (int *)((long)puVar48 + (ulong)*puVar48);
      puVar45 = (undefined8 *)
                ((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4)));
      fVar57 = *(float *)(puVar45 + 1);
      uVar12 = *puVar45;
      fVar52 = (float)uVar12;
      fVar67 = fVar52 + 1.5707964;
      fVar56 = (float)((ulong)uVar12 >> 0x20);
      fVar77 = fVar56 + 1.5707964;
      fVar79 = fVar57 + 1.5707964;
      puVar39 = puVar39 + 1;
      lVar30 = lVar30 + 4;
      iVar58 = -(uint)(fVar52 == 0.0);
      iVar63 = -(uint)(fVar56 == 0.0);
      iVar64 = -(uint)(fVar57 == 0.0);
      auVar60[0] = ~(byte)iVar58;
      auVar60[1] = ~(byte)((uint)iVar58 >> 8);
      auVar60[2] = ~(byte)((uint)iVar58 >> 0x10);
      auVar60[3] = ~(byte)((uint)iVar58 >> 0x18);
      auVar60[4] = ~(byte)iVar63;
      auVar60[5] = ~(byte)((uint)iVar63 >> 8);
      auVar60[6] = ~(byte)((uint)iVar63 >> 0x10);
      auVar60[7] = ~(byte)((uint)iVar63 >> 0x18);
      auVar60[8] = ~(byte)iVar64;
      auVar60[9] = ~(byte)((uint)iVar64 >> 8);
      auVar60[10] = ~(byte)((uint)iVar64 >> 0x10);
      auVar60[0xb] = ~(byte)((uint)iVar64 >> 0x18);
      auVar60._12_4_ = 0;
      auVar82._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar52) & 0x80000000 ^ 0xbf000000) + fVar52 * 0.15915494);
      auVar82._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar56) & 0x80000000 ^ 0xbf000000) + fVar56 * 0.15915494);
      auVar82._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar57) & 0x80000000 ^ 0xbf000000) + fVar57 * 0.15915494);
      auVar82._12_4_ = 0;
      auVar88._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000) + fVar67 * 0.15915494);
      auVar88._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar77) & 0x80000000 ^ 0xbf000000) + fVar77 * 0.15915494);
      auVar88._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar79) & 0x80000000 ^ 0xbf000000) + fVar79 * 0.15915494);
      auVar88._12_4_ = 0;
      auVar83 = NEON_scvtf(auVar82,4);
      fVar93 = fVar52 - auVar83._0_4_ * 6.2831855;
      fVar94 = fVar56 - auVar83._4_4_ * 6.2831855;
      fVar95 = fVar57 - auVar83._8_4_ * 6.2831855;
      fVar96 = 0.0 - auVar83._12_4_ * 6.2831855;
      auVar83 = NEON_scvtf(auVar88,4);
      fVar68 = fVar67 - auVar83._0_4_ * 6.2831855;
      fVar78 = fVar77 - auVar83._4_4_ * 6.2831855;
      fVar80 = fVar79 - auVar83._8_4_ * 6.2831855;
      fVar81 = 1.5707964 - auVar83._12_4_ * 6.2831855;
      fVar68 = (float)((uint)fVar68 ^
                      ((uint)fVar68 ^ (uint)(-3.1415927 - fVar68)) & -(uint)(fVar68 < -1.5707964));
      fVar78 = (float)((uint)fVar78 ^
                      ((uint)fVar78 ^ (uint)(-3.1415927 - fVar78)) & -(uint)(fVar78 < -1.5707964));
      fVar80 = (float)((uint)fVar80 ^
                      ((uint)fVar80 ^ (uint)(-3.1415927 - fVar80)) & -(uint)(fVar80 < -1.5707964));
      fVar81 = (float)((uint)fVar81 ^
                      ((uint)fVar81 ^ (uint)(-3.1415927 - fVar81)) & -(uint)(fVar81 < -1.5707964));
      fVar93 = (float)((uint)fVar93 ^
                      ((uint)fVar93 ^ (uint)(-3.1415927 - fVar93)) & -(uint)(fVar93 < -1.5707964));
      fVar94 = (float)((uint)fVar94 ^
                      ((uint)fVar94 ^ (uint)(-3.1415927 - fVar94)) & -(uint)(fVar94 < -1.5707964));
      fVar95 = (float)((uint)fVar95 ^
                      ((uint)fVar95 ^ (uint)(-3.1415927 - fVar95)) & -(uint)(fVar95 < -1.5707964));
      fVar96 = (float)((uint)fVar96 ^
                      ((uint)fVar96 ^ (uint)(-3.1415927 - fVar96)) & -(uint)(fVar96 < -1.5707964));
      fVar93 = (float)((uint)fVar93 ^
                      ((uint)fVar93 ^ (uint)(3.1415927 - fVar93)) & -(uint)(1.5707964 < fVar93));
      fVar94 = (float)((uint)fVar94 ^
                      ((uint)fVar94 ^ (uint)(3.1415927 - fVar94)) & -(uint)(1.5707964 < fVar94));
      fVar95 = (float)((uint)fVar95 ^
                      ((uint)fVar95 ^ (uint)(3.1415927 - fVar95)) & -(uint)(1.5707964 < fVar95));
      fVar96 = (float)((uint)fVar96 ^
                      ((uint)fVar96 ^ (uint)(3.1415927 - fVar96)) & -(uint)(1.5707964 < fVar96));
      fVar68 = (float)((uint)fVar68 ^
                      ((uint)fVar68 ^ (uint)(3.1415927 - fVar68)) & -(uint)(1.5707964 < fVar68));
      fVar78 = (float)((uint)fVar78 ^
                      ((uint)fVar78 ^ (uint)(3.1415927 - fVar78)) & -(uint)(1.5707964 < fVar78));
      fVar80 = (float)((uint)fVar80 ^
                      ((uint)fVar80 ^ (uint)(3.1415927 - fVar80)) & -(uint)(1.5707964 < fVar80));
      fVar81 = (float)((uint)fVar81 ^
                      ((uint)fVar81 ^ (uint)(3.1415927 - fVar81)) & -(uint)(1.5707964 < fVar81));
      fVar126 = fVar93 * fVar93;
      fVar131 = fVar94 * fVar94;
      fVar132 = fVar95 * fVar95;
      fVar133 = fVar96 * fVar96;
      fVar116 = fVar68 * fVar68;
      fVar117 = fVar78 * fVar78;
      fVar118 = fVar80 * fVar80;
      fVar120 = fVar81 * fVar81;
      iVar97 = -(uint)(ABS(fVar52) == INFINITY);
      iVar101 = -(uint)(ABS(fVar56) == INFINITY);
      iVar102 = -(uint)(ABS(fVar57) == INFINITY);
      iVar58 = -(uint)(ABS(fVar67) == INFINITY);
      iVar63 = -(uint)(ABS(fVar77) == INFINITY);
      iVar64 = -(uint)(ABS(fVar79) == INFINITY);
      auVar89[0] = ~(byte)iVar97;
      auVar89[1] = ~(byte)((uint)iVar97 >> 8);
      auVar89[2] = ~(byte)((uint)iVar97 >> 0x10);
      auVar89[3] = ~(byte)((uint)iVar97 >> 0x18);
      auVar89[4] = ~(byte)iVar101;
      auVar89[5] = ~(byte)((uint)iVar101 >> 8);
      auVar89[6] = ~(byte)((uint)iVar101 >> 0x10);
      auVar89[7] = ~(byte)((uint)iVar101 >> 0x18);
      auVar89[8] = ~(byte)iVar102;
      auVar89[9] = ~(byte)((uint)iVar102 >> 8);
      auVar89[10] = ~(byte)((uint)iVar102 >> 0x10);
      auVar89[0xb] = ~(byte)((uint)iVar102 >> 0x18);
      auVar89[0xc] = 0xff;
      auVar89[0xd] = 0xff;
      auVar89[0xe] = 0xff;
      auVar89[0xf] = 0xff;
      auVar69._0_4_ =
           fVar68 * (local_80 +
                    fVar116 * (fVar116 * (fVar116 * (fVar116 * (fVar116 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar69._4_4_ =
           fVar78 * (fStack_7c +
                    fVar117 * (fVar117 * (fVar117 * (fVar117 * (fVar117 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar69._8_4_ =
           fVar80 * (fStack_78 +
                    fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar69._12_4_ =
           fVar81 * (fStack_74 +
                    fVar120 * (fVar120 * (fVar120 * (fVar120 * (fVar120 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar90._8_4_ = 0x7fc00000;
      auVar90._0_8_ = 0x7fc000007fc00000;
      auVar90._12_4_ = 0x7fc00000;
      auVar84._0_4_ =
           fVar93 * (local_80 +
                    fVar126 * (fVar126 * (fVar126 * (fVar126 * (fVar126 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar84._4_4_ =
           fVar94 * (fStack_7c +
                    fVar131 * (fVar131 * (fVar131 * (fVar131 * (fVar131 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar84._8_4_ =
           fVar95 * (fStack_78 +
                    fVar132 * (fVar132 * (fVar132 * (fVar132 * (fVar132 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar84._12_4_ =
           fVar96 * (fStack_74 +
                    fVar133 * (fVar133 * (fVar133 * (fVar133 * (fVar133 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar66[0] = ~(byte)iVar58;
      auVar66[1] = ~(byte)((uint)iVar58 >> 8);
      auVar66[2] = ~(byte)((uint)iVar58 >> 0x10);
      auVar66[3] = ~(byte)((uint)iVar58 >> 0x18);
      auVar66[4] = ~(byte)iVar63;
      auVar66[5] = ~(byte)((uint)iVar63 >> 8);
      auVar66[6] = ~(byte)((uint)iVar63 >> 0x10);
      auVar66[7] = ~(byte)((uint)iVar63 >> 0x18);
      auVar66[8] = ~(byte)iVar64;
      auVar66[9] = ~(byte)((uint)iVar64 >> 8);
      auVar66[10] = ~(byte)((uint)iVar64 >> 0x10);
      auVar66[0xb] = ~(byte)((uint)iVar64 >> 0x18);
      auVar66[0xc] = 0xff;
      auVar66[0xd] = 0xff;
      auVar66[0xe] = 0xff;
      auVar66[0xf] = 0xff;
      auVar84 = auVar84 ^ (auVar84 ^ auVar90) & ~auVar89;
      fVar79 = auVar84._0_4_;
      fVar81 = auVar84._4_4_;
      auVar90 = auVar90 ^ (auVar90 ^
                          auVar53 ^ (auVar53 ^ auVar90 ^ (auVar90 ^ auVar69) & auVar66) & auVar60) &
                          auVar89;
      fVar56 = auVar90._0_4_;
      fVar57 = auVar90._8_4_;
      fVar68 = -fVar81;
      fVar52 = auVar84._8_4_;
      fVar80 = auVar90._4_4_;
      fVar93 = fVar80 * fVar57;
      fVar67 = fVar79 * fVar81 * fVar52 + fVar56 * fVar57;
      fVar94 = fVar56 * fVar80;
      fVar96 = fVar79 * fVar81 * fVar57 - fVar52 * fVar56;
      fVar77 = fVar81 * fVar56 * fVar52 - fVar79 * fVar57;
      fVar116 = fVar52 * fVar80 + fVar96;
      fVar96 = fVar52 * fVar80 - fVar96;
      local_190 = (float)uVar14;
      fStack_18c = (float)((ulong)uVar14 >> 0x20);
      fStack_188 = (float)uVar15;
      fStack_184 = (float)((ulong)uVar15 >> 0x20);
      fVar78 = fVar79 * fVar52 + fVar81 * fVar56 * fVar57;
      local_1a0 = (float)uVar20;
      fStack_19c = (float)((ulong)uVar20 >> 0x20);
      fStack_198 = (float)uVar21;
      fStack_194 = (float)((ulong)uVar21 >> 0x20);
      local_1b0 = (float)uVar16;
      fStack_1ac = (float)((ulong)uVar16 >> 0x20);
      fStack_1a8 = (float)uVar19;
      fStack_1a4 = (float)((ulong)uVar19 >> 0x20);
      fVar52 = local_80 + local_190 * fVar93 + local_1a0 * fVar67 + local_1b0 * fVar94;
      fVar56 = fStack_7c + fStack_18c * fVar93 + fStack_19c * fVar67 + fStack_1ac * fVar94;
      fVar57 = fStack_78 + fStack_188 * fVar93 + fStack_198 * fVar67 + fStack_1a8 * fVar94;
      fVar67 = fStack_74 + fStack_184 * fVar93 + fStack_194 * fVar67 + fStack_1a4 * fVar94;
      fVar79 = fVar79 * fVar80;
      local_1c0 = auVar54._0_4_;
      fStack_1bc = auVar54._4_4_;
      fStack_1b8 = auVar54._8_4_;
      fStack_1b4 = auVar54._12_4_;
      auVar85._4_4_ = fVar56;
      auVar85._0_4_ = fVar56;
      auVar85._8_4_ = fVar56;
      auVar85._12_4_ = fVar56;
      auVar98._0_4_ = SQRT(fVar52) * 0.5 * local_1c0;
      auVar98._4_4_ = SQRT(fVar56) * 0.5 * fStack_1bc;
      auVar98._8_4_ = SQRT(fVar57) * 0.5 * fStack_1b8;
      auVar98._12_4_ = SQRT(fVar67) * 0.5 * fStack_1b4;
      auVar70._4_4_ = fVar52;
      auVar70._0_4_ = fVar52;
      auVar70._8_4_ = fVar52;
      auVar70._12_4_ = fVar52;
      auVar127 = NEON_frecpe(auVar98,4);
      auVar83._4_4_ = -(uint)(fVar52 <= fVar56);
      auVar83._0_4_ = -(uint)(fVar52 <= fVar56);
      auVar83._8_4_ = -(uint)(fVar52 <= fVar56);
      auVar83._12_4_ = -(uint)(fVar52 <= fVar56);
      auVar70 = auVar70 ^ (auVar70 ^ auVar85) & auVar83;
      auVar83 = NEON_frecps(auVar127,auVar98,4);
      auVar86._0_4_ = auVar127._0_4_ * auVar83._0_4_;
      auVar86._4_4_ = auVar127._4_4_ * auVar83._4_4_;
      auVar86._8_4_ = auVar127._8_4_ * auVar83._8_4_;
      auVar86._12_4_ = auVar127._12_4_ * auVar83._12_4_;
      auVar83 = NEON_frecps(auVar86,auVar98,4);
      fVar80 = auVar86._0_4_ * auVar83._0_4_;
      fVar93 = auVar86._4_4_ * auVar83._4_4_;
      fVar94 = auVar86._8_4_ * auVar83._8_4_;
      fVar95 = auVar86._12_4_ * auVar83._12_4_;
      auVar13._4_8_ = auVar83._8_8_;
      auVar13._0_4_ = fVar116 * fVar80;
      auVar99._0_8_ = auVar13._0_8_ << 0x20;
      auVar99._8_4_ = (fVar78 + fVar68) * fVar80;
      auVar99._12_4_ = (-fVar77 + fVar79) * fVar80;
      auVar128._0_4_ = fVar116 * fVar93;
      auVar128._4_4_ = fVar93 * 0.0;
      auVar128._8_4_ = (fVar77 + fVar79) * fVar93;
      auVar128._12_4_ = (fVar81 + fVar78) * fVar93;
      auVar100._4_12_ = auVar99._4_12_;
      auVar100._0_4_ = SQRT(fVar52) * 0.5;
      auVar129._8_8_ = auVar128._8_8_;
      auVar129._4_4_ = SQRT(fVar56) * 0.5;
      auVar129._0_4_ = auVar128._0_4_;
      auVar91._0_4_ = (fVar78 + fVar68) * fVar94;
      auVar91._4_4_ = (fVar77 + fVar79) * fVar94;
      auVar91._12_4_ = fVar96 * fVar94;
      auVar127._4_4_ = -(uint)(fVar52 <= fVar56);
      auVar127._0_4_ = -(uint)(fVar52 <= fVar56);
      auVar127._8_4_ = -(uint)(fVar52 <= fVar56);
      auVar127._12_4_ = -(uint)(fVar52 <= fVar56);
      auVar61._0_4_ = (fVar79 - fVar77) * fVar95;
      auVar61._4_4_ = (fVar78 - fVar68) * fVar95;
      auVar61._8_4_ = fVar96 * fVar95;
      auVar130._0_4_ = -(uint)(auVar70._0_4_ <= fVar57);
      auVar130._4_4_ = -(uint)(auVar70._4_4_ <= fVar57);
      auVar130._8_4_ = -(uint)(auVar70._8_4_ <= fVar57);
      auVar130._12_4_ = -(uint)(auVar70._12_4_ <= fVar57);
      auVar91._8_4_ = SQRT(fVar57) * 0.5;
      auVar11._4_4_ = fVar57;
      auVar11._0_4_ = fVar57;
      auVar11._8_4_ = fVar57;
      auVar11._12_4_ = fVar57;
      auVar70 = auVar70 ^ (auVar70 ^ auVar11) & auVar130;
      auVar61._12_4_ = SQRT(fVar67) * 0.5;
      auVar91 = auVar91 ^ (auVar91 ^ auVar100 ^ (auVar100 ^ auVar129) & auVar127) & ~auVar130;
      auVar55._0_4_ = -(uint)(auVar70._0_4_ <= fVar67);
      auVar55._4_4_ = -(uint)(auVar70._4_4_ <= fVar67);
      auVar55._8_4_ = -(uint)(auVar70._8_4_ <= fVar67);
      auVar55._12_4_ = -(uint)(auVar70._12_4_ <= fVar67);
      auVar91 = auVar91 ^ (auVar91 ^ auVar61) & auVar55;
      *(long *)(lVar43 + 0x68) = auVar91._8_8_;
      *(long *)(lVar43 + 0x60) = auVar91._0_8_;
      puVar48 = (uint *)((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (6 - (long)*piVar40)));
      piVar40 = (int *)((long)puVar48 + (ulong)*puVar48);
      puVar45 = (undefined8 *)
                ((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (8 - (long)*piVar40)));
      auVar62._4_12_ = SUB1612(ZEXT816(0),4);
      auVar62._0_4_ = *(undefined4 *)(puVar45 + 1);
      uVar12 = *puVar45;
      *(long *)(lVar43 + 0x78) = auVar62._0_8_;
      *(undefined8 *)(lVar43 + 0x70) = uVar12;
    } while (puVar39 != puVar3);
  }
  lVar34 = param_1[0x43];
  for (lVar30 = param_1[0x42]; lVar30 != lVar34; lVar30 = lVar30 + 0xd0) {
    uVar9 = *(uint *)(lVar30 + 0x40);
    if ((int)uVar9 < 0) {
      fVar52 = *(float *)(lVar30 + 0x50);
      fVar56 = *(float *)(lVar30 + 0x54);
      auVar53 = *(undefined1 (*) [16])(lVar30 + 0x60);
      auVar54 = NEON_ext(auVar53,auVar53,0xc,1);
      fVar57 = auVar53._0_4_;
      auVar107._4_12_ = auVar54._4_12_;
      auVar107._0_4_ = fVar57;
      fVar67 = auVar53._4_4_;
      auVar109._12_4_ = auVar54._12_4_;
      auVar109._0_8_ = auVar107._0_8_;
      auVar109._8_4_ = fVar67;
      auVar108._8_8_ = auVar109._8_8_;
      auVar108._4_4_ = auVar54._0_4_;
      auVar108._0_4_ = fVar57;
      auVar110._0_12_ = auVar108._0_12_;
      auVar110._12_4_ = auVar54._4_4_;
      fVar77 = auVar53._8_4_;
      fVar78 = auVar53._12_4_;
      auVar53 = NEON_ext(auVar110,auVar110,8,1);
      fVar52 = (float)((uint)fVar52 ^ ((uint)fVar52 ^ 0x2b8cbccc) & -(uint)(ABS(fVar52) < 1e-12));
      fVar93 = fVar67 * fVar67 + fVar67 * fVar67;
      fVar94 = fVar77 * fVar77 + fVar77 * fVar77;
      fVar79 = fVar57 * fVar78 + fVar57 * fVar78;
      fVar80 = fVar67 * fVar78 + fVar67 * fVar78;
      fVar81 = fVar77 * fVar78 + fVar77 * fVar78;
      fVar68 = auVar53._0_4_ * fVar77;
      fVar77 = auVar53._4_4_ * fVar77;
      fVar67 = auVar53._8_4_ * fVar67;
      auVar111._0_4_ = local_80 - (fVar57 * fVar57 + fVar57 * fVar57);
      auVar111._4_4_ = fStack_7c - fVar93;
      auVar111._8_4_ = fStack_78 - fVar94;
      auVar111._12_4_ = fStack_74 - (fVar78 * fVar78 + fVar78 * fVar78);
      auVar112._4_12_ = auVar111._4_12_;
      auVar112._0_4_ = auVar111._0_4_;
      auVar114._0_8_ = auVar112._0_8_;
      auVar114._8_4_ = auVar111._4_4_;
      auVar114._12_4_ = auVar111._12_4_;
      auVar113._8_8_ = auVar114._8_8_;
      auVar113._4_4_ = auVar111._0_4_;
      auVar113._0_4_ = auVar111._0_4_;
      auVar115._0_12_ = auVar113._0_12_;
      auVar115._12_4_ = auVar111._4_4_;
      auVar53 = NEON_ext(auVar115,auVar115,0xc,1);
      fVar68 = fVar68 + fVar68;
      fVar77 = fVar77 + fVar77;
      fVar67 = fVar67 + fVar67;
      fVar56 = (float)((uint)fVar56 ^ ((uint)fVar56 ^ 0x2b8cbccc) & -(uint)(ABS(fVar56) < 1e-12));
      fVar57 = (float)(((uint)*(float *)(lVar30 + 0x58) ^ 0x2b8cbccc) &
                       ~-(uint)(ABS(*(float *)(lVar30 + 0x58)) < 1e-12) ^ 0x2b8cbccc);
      auVar92._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar30 + 0x70),0);
      auVar92._12_4_ = 1.0;
      auVar54._0_4_ = (auVar53._0_4_ - fVar94) * fVar52;
      auVar54._4_4_ = (fVar67 + fVar81) * fVar52;
      auVar54._8_4_ = (fVar77 - fVar80) * fVar52;
      auVar54._12_4_ = fVar52 * 0.0;
      auVar87._0_4_ = (fVar77 + fVar80) * fVar57;
      auVar87._4_4_ = (fVar68 - fVar79) * fVar57;
      auVar87._8_4_ = (auVar53._8_4_ - fVar93) * fVar57;
      auVar87._12_4_ = fVar57 * 0.0;
      auVar76._0_4_ = (fVar67 - fVar81) * fVar56;
      auVar76._4_4_ = (auVar53._4_4_ - fVar94) * fVar56;
      auVar76._8_4_ = (fVar68 + fVar79) * fVar56;
      auVar76._12_4_ = fVar56 * 0.0;
    }
    else {
      if ((ulong)((param_1[0x43] - param_1[0x42] >> 4) * 0x4ec4ec4ec4ec4ec5) <= (ulong)uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      fVar52 = *(float *)(lVar30 + 0x50);
      fVar56 = *(float *)(lVar30 + 0x54);
      fVar57 = *(float *)(lVar30 + 0x58);
      auVar53 = *(undefined1 (*) [16])(lVar30 + 0x60);
      auVar54 = NEON_ext(auVar53,auVar53,0xc,1);
      lVar43 = param_1[0x42] + (ulong)uVar9 * 0xd0;
      fVar77 = auVar53._0_4_;
      fVar79 = auVar53._4_4_;
      fVar81 = auVar53._8_4_;
      fVar94 = auVar53._12_4_;
      auVar53 = *(undefined1 (*) [16])(lVar30 + 0x70);
      auVar103._4_12_ = auVar54._4_12_;
      auVar103._0_4_ = fVar77;
      auVar105._12_4_ = auVar54._12_4_;
      auVar105._0_8_ = auVar103._0_8_;
      auVar105._8_4_ = fVar79;
      auVar104._8_8_ = auVar105._8_8_;
      auVar104._4_4_ = auVar54._0_4_;
      auVar104._0_4_ = fVar77;
      auVar106._0_12_ = auVar104._0_12_;
      auVar106._12_4_ = auVar54._4_4_;
      fVar119 = (float)*(undefined8 *)(lVar43 + 0xa8);
      fVar121 = (float)((ulong)*(undefined8 *)(lVar43 + 0xa8) >> 0x20);
      fVar132 = (float)*(undefined8 *)(lVar43 + 0xa0);
      fVar133 = (float)((ulong)*(undefined8 *)(lVar43 + 0xa0) >> 0x20);
      fVar52 = (float)((uint)fVar52 ^ ((uint)fVar52 ^ 0x2b8cbccc) & -(uint)(ABS(fVar52) < 1e-12));
      fVar56 = (float)((uint)fVar56 ^ ((uint)fVar56 ^ 0x2b8cbccc) & -(uint)(ABS(fVar56) < 1e-12));
      fVar57 = (float)((uint)fVar57 ^ ((uint)fVar57 ^ 0x2b8cbccc) & -(uint)(ABS(fVar57) < 1e-12));
      fVar67 = fVar79 * fVar79 + fVar79 * fVar79;
      fVar68 = fVar81 * fVar81 + fVar81 * fVar81;
      auVar54 = NEON_ext(auVar106,auVar106,8,1);
      fVar78 = fVar77 * fVar94 + fVar77 * fVar94;
      fVar80 = fVar79 * fVar94 + fVar79 * fVar94;
      fVar93 = fVar81 * fVar94 + fVar81 * fVar94;
      fVar116 = auVar54._0_4_ * fVar81;
      fVar81 = auVar54._4_4_ * fVar81;
      fVar79 = auVar54._8_4_ * fVar79;
      fVar116 = fVar116 + fVar116;
      fVar81 = fVar81 + fVar81;
      fVar79 = fVar79 + fVar79;
      auVar71._0_4_ = local_80 - (fVar77 * fVar77 + fVar77 * fVar77);
      auVar71._4_4_ = fStack_7c - fVar67;
      auVar71._8_4_ = fStack_78 - fVar68;
      auVar71._12_4_ = fStack_74 - (fVar94 * fVar94 + fVar94 * fVar94);
      auVar72._4_12_ = auVar71._4_12_;
      auVar72._0_4_ = auVar71._0_4_;
      auVar74._0_8_ = auVar72._0_8_;
      auVar74._8_4_ = auVar71._4_4_;
      auVar74._12_4_ = auVar71._12_4_;
      auVar73._8_8_ = auVar74._8_8_;
      auVar73._4_4_ = auVar71._0_4_;
      auVar73._0_4_ = auVar71._0_4_;
      auVar75._0_12_ = auVar73._0_12_;
      auVar75._12_4_ = auVar71._4_4_;
      auVar54 = NEON_ext(auVar75,auVar75,0xc,1);
      fVar120 = (fVar81 + fVar80) * fVar57;
      fVar126 = (fVar116 - fVar78) * fVar57;
      fVar131 = (auVar54._8_4_ - fVar67) * fVar57;
      fVar57 = fVar57 * 0.0;
      fVar94 = (auVar54._0_4_ - fVar68) * fVar52;
      fVar95 = (fVar79 + fVar93) * fVar52;
      fVar96 = (fVar81 - fVar80) * fVar52;
      fVar52 = fVar52 * 0.0;
      fVar117 = (fVar79 - fVar93) * fVar56;
      fVar118 = (auVar54._4_4_ - fVar68) * fVar56;
      fVar116 = (fVar116 + fVar78) * fVar56;
      fVar56 = fVar56 * 0.0;
      fVar67 = *(float *)(lVar43 + 0x80);
      fVar68 = *(float *)(lVar43 + 0x84);
      fVar77 = *(float *)(lVar43 + 0x88);
      fVar78 = *(float *)(lVar43 + 0x8c);
      fVar79 = *(float *)(lVar43 + 0x90);
      fVar80 = *(float *)(lVar43 + 0x94);
      fVar81 = *(float *)(lVar43 + 0x98);
      fVar93 = *(float *)(lVar43 + 0x9c);
      fVar122 = (float)*(undefined8 *)(lVar43 + 0xb0);
      fVar123 = (float)((ulong)*(undefined8 *)(lVar43 + 0xb0) >> 0x20);
      fVar124 = (float)*(undefined8 *)(lVar43 + 0xb8);
      fVar125 = (float)((ulong)*(undefined8 *)(lVar43 + 0xb8) >> 0x20);
      auVar54._0_4_ = fVar67 * fVar94 + fVar79 * fVar95 + fVar132 * fVar96 + fVar122 * fVar52;
      auVar54._4_4_ = fVar68 * fVar94 + fVar80 * fVar95 + fVar133 * fVar96 + fVar123 * fVar52;
      auVar54._8_4_ = fVar77 * fVar94 + fVar81 * fVar95 + fVar119 * fVar96 + fVar124 * fVar52;
      auVar54._12_4_ = fVar78 * fVar94 + fVar93 * fVar95 + fVar121 * fVar96 + fVar125 * fVar52;
      auVar76._0_4_ = fVar67 * fVar117 + fVar79 * fVar118 + fVar132 * fVar116 + fVar122 * fVar56;
      auVar76._4_4_ = fVar68 * fVar117 + fVar80 * fVar118 + fVar133 * fVar116 + fVar123 * fVar56;
      auVar76._8_4_ = fVar77 * fVar117 + fVar81 * fVar118 + fVar119 * fVar116 + fVar124 * fVar56;
      auVar76._12_4_ = fVar78 * fVar117 + fVar93 * fVar118 + fVar121 * fVar116 + fVar125 * fVar56;
      fVar52 = auVar53._0_4_;
      fVar56 = auVar53._4_4_;
      fVar94 = auVar53._8_4_;
      auVar87._0_4_ = fVar67 * fVar120 + fVar79 * fVar126 + fVar132 * fVar131 + fVar122 * fVar57;
      auVar87._4_4_ = fVar68 * fVar120 + fVar80 * fVar126 + fVar133 * fVar131 + fVar123 * fVar57;
      auVar87._8_4_ = fVar77 * fVar120 + fVar81 * fVar126 + fVar119 * fVar131 + fVar124 * fVar57;
      auVar87._12_4_ = fVar78 * fVar120 + fVar93 * fVar126 + fVar121 * fVar131 + fVar125 * fVar57;
      auVar92._0_4_ = fVar122 + fVar67 * fVar52 + fVar79 * fVar56 + fVar132 * fVar94;
      auVar92._4_4_ = fVar123 + fVar68 * fVar52 + fVar80 * fVar56 + fVar133 * fVar94;
      auVar92._8_4_ = fVar124 + fVar77 * fVar52 + fVar81 * fVar56 + fVar119 * fVar94;
      auVar92._12_4_ = fVar125 + fVar78 * fVar52 + fVar93 * fVar56 + fVar121 * fVar94;
    }
    *(long *)(lVar30 + 0x88) = auVar54._8_8_;
    *(long *)(lVar30 + 0x80) = auVar54._0_8_;
    *(long *)(lVar30 + 0x98) = auVar76._8_8_;
    *(long *)(lVar30 + 0x90) = auVar76._0_8_;
    *(long *)(lVar30 + 0xa8) = auVar87._8_8_;
    *(long *)(lVar30 + 0xa0) = auVar87._0_8_;
    *(long *)(lVar30 + 0xb8) = auVar92._8_8_;
    *(long *)(lVar30 + 0xb0) = auVar92._0_8_;
  }
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
     (uVar29 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar29 == 0)) {
    puVar48 = (uint *)0x0;
  }
  else {
    puVar48 = (uint *)((long)piVar2 + uVar29);
    puVar48 = (uint *)((long)puVar48 + (ulong)*puVar48);
  }
  plVar1 = param_1 + 0x49;
  lVar30 = param_1[0x49];
  lVar34 = param_1[0x4a] - lVar30 >> 4;
  uVar29 = (ulong)*puVar48;
  if ((ulong)(lVar34 * -0x3333333333333333) < uVar29) {
    if ((ulong)((param_1[0x4b] - param_1[0x4a] >> 4) * -0x3333333333333333) <
        uVar29 + lVar34 * 0x3333333333333333) {
      uVar38 = param_1[0x4d];
      if (0x7ffffffffffffffe < uVar38) {
        uVar38 = 0x7fffffffffffffff;
      }
      if (uVar38 < uVar29) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar30 = param_1[0x4b] - lVar30 >> 4;
      uVar35 = lVar30 * -0x6666666666666666;
      uVar51 = uVar29;
      if (uVar29 <= uVar35) {
        uVar51 = uVar35;
      }
      plVar25 = param_1 + 0x4c;
      if (uVar38 >> 1 <= (ulong)(lVar30 * -0x3333333333333333)) {
        uVar51 = uVar38;
      }
      if (uVar51 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = (**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,uVar51 * 0x50,0x10);
        if (lVar30 == 0) {
          (**(code **)(*(long *)*plVar25 + 0xe8))();
        }
      }
      pvVar46 = (void *)(lVar30 + lVar34 * 0x10);
      lVar34 = uVar29 * 0x50 + lVar34 * -0x10;
      __s = pvVar46;
      do {
        lVar43 = *plVar25;
        if (((DAT_04865a38 & 1) == 0) && (iVar58 = __cxa_guard_acquire(&DAT_04865a38), iVar58 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar32 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar32 == 0) {
          memset(__s,0,0x50);
        }
        else {
          if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_01aa682c;
          *(long *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = lVar43;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
          memset(__s,0,0x50);
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
        }
        __s = (void *)((long)__s + 0x50);
        lVar34 = lVar34 + -0x50;
      } while (lVar34 != 0);
      lVar34 = param_1[0x49];
      lVar43 = param_1[0x4a];
      if (lVar43 != lVar34) {
        do {
          pvVar46 = (void *)((long)pvVar46 + -0x50);
          lVar43 = lVar43 + -0x50;
          FUN_01aa6a08(plVar25,pvVar46,lVar43);
        } while (lVar34 != lVar43);
        lVar34 = *plVar1;
      }
      param_1[0x49] = (long)pvVar46;
      lVar43 = param_1[0x4b];
      param_1[0x4a] = lVar30 + uVar29 * 0x50;
      param_1[0x4b] = lVar30 + uVar51 * 0x50;
      if (lVar34 != 0) {
        plVar25 = (long *)*plVar25;
        uVar29 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar29 & 1) == 0) || (lVar30 = FUN_00c4e600(), *(int *)(lVar30 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar34,lVar43 - lVar34,0x10);
        }
        else {
          FUN_00c48fe8(plVar25,lVar34,lVar43 - lVar34,0x10);
        }
      }
    }
    else {
      FUN_01aa6c28(plVar1);
    }
  }
  else if (lVar34 * -0x3333333333333333 != uVar29) {
    param_1[0x4a] = lVar30 + uVar29 * 0x50;
  }
  uVar9 = *puVar48;
  if (uVar9 != 0) {
    lVar34 = 0;
    lVar30 = 0;
    do {
      uVar29 = (ulong)*(uint *)((long)puVar48 + lVar34 + 4);
      lVar43 = *plVar1;
      lVar32 = lVar34 + uVar29;
      lVar42 = lVar34 + (uVar29 - (long)*(int *)((long)puVar48 + lVar32 + 4));
      if (*(ushort *)((long)puVar48 + lVar42 + 4) < 5) {
        bVar22 = false;
      }
      else {
        uVar38 = (ulong)*(ushort *)((long)puVar48 + lVar42 + 8);
        bVar22 = false;
        if (uVar38 != 0) {
          bVar22 = *(char *)((long)puVar48 + lVar34 + uVar29 + uVar38 + 4) != '\0';
        }
      }
      *(bool *)(lVar43 + lVar30) = bVar22;
      lVar42 = lVar34 + (uVar29 - (long)*(int *)((long)puVar48 + lVar32 + 4));
      if (*(ushort *)((long)puVar48 + lVar42 + 4) < 7) {
        bVar22 = false;
      }
      else {
        uVar38 = (ulong)*(ushort *)((long)puVar48 + lVar42 + 10);
        bVar22 = false;
        if (uVar38 != 0) {
          bVar22 = *(char *)((long)puVar48 + lVar34 + uVar29 + uVar38 + 4) != '\0';
        }
      }
      lVar43 = lVar43 + lVar30;
      *(bool *)(lVar43 + 1) = bVar22;
      lVar32 = lVar34 + (uVar29 - (long)*(int *)((long)puVar48 + lVar32 + 4));
      if ((*(ushort *)((long)puVar48 + lVar32 + 4) < 9) ||
         (uVar38 = (ulong)*(ushort *)((long)puVar48 + lVar32 + 0xc), uVar38 == 0)) {
        piVar40 = (int *)0x0;
      }
      else {
        lVar32 = uVar29 + uVar38;
        piVar40 = (int *)((long)puVar48 +
                         lVar34 + lVar32 + (ulong)*(uint *)((long)puVar48 + lVar34 + lVar32 + 4) + 4
                         );
      }
      iVar58 = *piVar40;
      puVar45 = (undefined8 *)
                ((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (4 - (long)iVar58)));
      puVar5 = (undefined8 *)
               ((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (6 - (long)iVar58)));
      lVar30 = lVar30 + 0x50;
      lVar34 = lVar34 + 4;
      uVar65 = *(uint *)(puVar5 + 1);
      uVar14 = *puVar45;
      uVar15 = *puVar5;
      puVar5 = (undefined8 *)
               ((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (8 - (long)iVar58)));
      puVar6 = (undefined4 *)
               ((long)piVar40 + (ulong)*(ushort *)((long)piVar40 + (10 - (long)iVar58)));
      uVar16 = *puVar5;
      uVar59 = *(uint *)(puVar5 + 1);
      uVar28 = *puVar6;
      uVar17 = puVar6[1];
      uVar18 = puVar6[2];
      *(ulong *)(lVar43 + 0x18) = (ulong)*(uint *)(puVar45 + 1);
      *(undefined8 *)(lVar43 + 0x10) = uVar14;
      *(ulong *)(lVar43 + 0x28) = (ulong)uVar65;
      *(undefined8 *)(lVar43 + 0x20) = uVar15;
      *(ulong *)(lVar43 + 0x38) = (ulong)uVar59;
      *(undefined8 *)(lVar43 + 0x30) = uVar16;
      *(undefined4 *)(lVar43 + 0x48) = uVar18;
      *(float *)(lVar43 + 0x4c) = fStack_74;
      *(undefined4 *)(lVar43 + 0x40) = uVar28;
      *(undefined4 *)(lVar43 + 0x44) = uVar17;
    } while ((ulong)uVar9 * 4 != lVar34);
  }
  lVar30 = (long)*piVar2;
  uVar27 = *(ushort *)((long)piVar2 - lVar30);
  if (uVar27 < 0xb) {
LAB_01aa5cbc:
    uVar28 = 0xffffffff;
  }
  else {
    uVar29 = (ulong)((ushort *)((long)piVar2 - lVar30))[5];
    if (uVar29 != 0) {
      uVar51 = (ulong)*(uint *)((long)piVar2 + uVar29);
      puVar48 = (uint *)((long)((long)piVar2 + uVar29) + uVar51);
      plVar1 = param_1 + 0x50;
      lVar30 = param_1[0x50];
      lVar34 = param_1[0x51] - lVar30 >> 6;
      uVar38 = (ulong)*puVar48;
      if ((ulong)(lVar34 * -0x5555555555555555) < uVar38) {
        if ((ulong)((param_1[0x52] - param_1[0x51] >> 6) * -0x5555555555555555) <
            uVar38 + lVar34 * 0x5555555555555555) {
          uVar35 = param_1[0x54];
          if (0x7ffffffffffffffe < uVar35) {
            uVar35 = 0x7fffffffffffffff;
          }
          if (uVar35 < uVar38) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar30 = param_1[0x52] - lVar30 >> 6;
          uVar37 = lVar30 * 0x5555555555555556;
          uVar7 = uVar38;
          if (uVar38 <= uVar37) {
            uVar7 = uVar37;
          }
          plVar25 = param_1 + 0x53;
          if (uVar35 >> 1 <= (ulong)(lVar30 * -0x5555555555555555)) {
            uVar7 = uVar35;
          }
          if (uVar7 == 0) {
            lVar30 = 0;
          }
          else {
            lVar30 = (**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,uVar7 * 0xc0,0x10);
            if (lVar30 == 0) {
              (**(code **)(*(long *)*plVar25 + 0xe8))();
            }
          }
          lVar42 = lVar30 + uVar7 * 0xc0;
          lVar43 = lVar30 + lVar34 * 0x40;
          lVar49 = uVar38 * 0xc0;
          lVar32 = lVar30 + uVar38 * 0xc0;
          do {
            lVar47 = *plVar25;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar58 = __cxa_guard_acquire(&DAT_04865a38), iVar58 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar23 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar23 != 0) {
              if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_01aa682c:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar47;
              *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
            }
            puVar45 = (undefined8 *)(lVar30 + lVar34 * 0x40);
            puVar45[0x16] = 0;
            puVar45[0x17] = 0;
            puVar45[0x14] = 0;
            puVar45[0x15] = 0;
            *puVar45 = &DAT_cbf29ce484222645;
            puVar45[1] = &DAT_03c886bc;
            puVar45[2] = 0;
            puVar45[3] = 0;
            puVar45[4] = &DAT_cbf29ce484222645;
            puVar45[5] = &DAT_03c886bc;
            puVar45[6] = 0;
            puVar45[7] = 0;
            puVar45[8] = &DAT_cbf29ce484222645;
            puVar45[9] = &DAT_03c886bc;
            puVar45[10] = 0;
            puVar45[0xb] = 0;
            puVar45[0xc] = &DAT_cbf29ce484222645;
            puVar45[0xd] = &DAT_03c886bc;
            puVar45[0xe] = 0;
            puVar45[0xf] = 0;
            puVar45[0x10] = &DAT_cbf29ce484222645;
            puVar45[0x11] = &DAT_03c886bc;
            puVar45[0x12] = 0;
            puVar45[0x13] = 0;
            if (lVar23 != 0) {
              *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
            }
            lVar49 = lVar49 + -0xc0;
            lVar30 = lVar30 + 0xc0;
          } while (lVar34 * 0x40 != lVar49);
          lVar34 = param_1[0x50];
          lVar30 = param_1[0x51];
          if (lVar30 == lVar34) {
            lVar30 = lVar34;
          }
          else {
            do {
              lVar43 = lVar43 + -0xc0;
              lVar30 = lVar30 + -0xc0;
              FUN_01aa7028(plVar25,lVar43,lVar30);
            } while (lVar34 != lVar30);
            lVar30 = param_1[0x50];
            lVar34 = param_1[0x51];
          }
          param_1[0x50] = lVar43;
          lVar43 = param_1[0x52];
          param_1[0x51] = lVar32;
          param_1[0x52] = lVar42;
          if (lVar34 != lVar30) {
            if (*(long **)(lVar34 + -0x28) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x28) + 0x20))();
            }
            if (*(long **)(lVar34 + -0x48) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x48) + 0x20))();
            }
            if (*(long **)(lVar34 + -0x68) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x68) + 0x20))();
            }
            if (*(long **)(lVar34 + -0x88) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0x88) + 0x20))();
            }
            if (*(long **)(lVar34 + -0xa8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar34 + -0xa8) + 0x20))();
            }
            if (lVar34 + -0xc0 != lVar30) {
              do {
                if (*(long **)(lVar34 + -0xe8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar34 + -0xe8) + 0x20))();
                }
                if (*(long **)(lVar34 + -0x108) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar34 + -0x108) + 0x20))();
                }
                if (*(long **)(lVar34 + -0x128) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar34 + -0x128) + 0x20))();
                }
                if (*(long **)(lVar34 + -0x148) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar34 + -0x148) + 0x20))();
                }
                if (*(long **)(lVar34 + -0x168) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar34 + -0x168) + 0x20))();
                }
                lVar34 = lVar34 + -0xc0;
              } while (lVar30 + 0xc0 != lVar34);
            }
          }
          if (lVar30 != 0) {
            plVar25 = (long *)*plVar25;
            uVar38 = (**(code **)(*plVar25 + 0xf8))(plVar25);
            if (((uVar38 & 1) == 0) || (lVar34 = FUN_00c4e600(), *(int *)(lVar34 + 0x12c8) < 1)) {
              (**(code **)(*plVar25 + 0x18))(plVar25,lVar30,lVar43 - lVar30,0x10);
            }
            else {
              FUN_00c48fe8(plVar25,lVar30,lVar43 - lVar30,0x10);
            }
          }
        }
        else {
          FUN_01aa6d58(plVar1);
        }
      }
      else if (uVar38 < (ulong)(lVar34 * -0x5555555555555555)) {
        FUN_01aa6944(plVar1,lVar30 + uVar38 * 0xc0);
      }
      puVar39 = puVar48 + 1;
      if (*puVar48 != 0) {
        puVar48 = puVar39 + *puVar48;
        lVar34 = 0;
        lVar30 = (long)puVar50 + uVar51 + uVar29 + (ulong)uVar8 + 9;
        do {
          puVar31 = &DAT_cbf29ce484222645;
          uVar8 = *puVar39;
          piVar40 = (int *)((long)puVar39 + (ulong)uVar8);
          lVar43 = *plVar1;
          if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
             (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar29 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar50 = (uint *)((long)piVar40 + uVar29);
            lVar32 = (long)puVar50 + (ulong)*puVar50;
          }
          sVar24 = strlen((char *)(lVar32 + 4));
          bVar10 = *(byte *)(lVar32 + 4);
          puVar33 = puVar31;
          if (bVar10 != 0) {
            pbVar36 = (byte *)(lVar32 + 5);
            do {
              puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar10) * 0x100000001b3);
              bVar10 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            } while (bVar10 != 0);
          }
          puVar45 = (undefined8 *)(lVar43 + lVar34 * 0xc0);
          *puVar45 = puVar33;
          puVar45[1] = (char *)(lVar32 + 4);
          puVar45[2] = sVar24;
          plVar26 = puVar45 + 3;
          plVar25 = (long *)*plVar26;
          *plVar26 = 0;
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x20))();
          }
          *plVar26 = 0;
          if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 7) ||
             (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[3], uVar29 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar50 = (uint *)((long)piVar40 + uVar29);
            lVar32 = (long)puVar50 + (ulong)*puVar50;
          }
          sVar24 = strlen((char *)(lVar32 + 4));
          bVar10 = *(byte *)(lVar32 + 4);
          puVar33 = puVar31;
          if (bVar10 != 0) {
            pbVar36 = (byte *)(lVar32 + 5);
            do {
              puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar10) * 0x100000001b3);
              bVar10 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            } while (bVar10 != 0);
          }
          lVar42 = lVar43 + lVar34 * 0xc0;
          plVar25 = *(long **)(lVar42 + 0x38);
          *(undefined1 **)(lVar42 + 0x20) = puVar33;
          *(char **)(lVar42 + 0x28) = (char *)(lVar32 + 4);
          *(size_t *)(lVar42 + 0x30) = sVar24;
          *(undefined8 *)(lVar42 + 0x38) = 0;
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
          *(long *)(lVar42 + 0x38) = 0;
          if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 9) ||
             (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[4], uVar29 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar50 = (uint *)((long)piVar40 + uVar29);
            lVar32 = (long)puVar50 + (ulong)*puVar50;
          }
          sVar24 = strlen((char *)(lVar32 + 4));
          bVar10 = *(byte *)(lVar32 + 4);
          puVar33 = puVar31;
          if (bVar10 != 0) {
            pbVar36 = (byte *)(lVar32 + 5);
            do {
              puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar10) * 0x100000001b3);
              bVar10 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            } while (bVar10 != 0);
          }
          lVar42 = lVar43 + lVar34 * 0xc0;
          plVar25 = *(long **)(lVar42 + 0x58);
          *(undefined1 **)(lVar42 + 0x40) = puVar33;
          *(char **)(lVar42 + 0x48) = (char *)(lVar32 + 4);
          *(size_t *)(lVar42 + 0x50) = sVar24;
          *(undefined8 *)(lVar42 + 0x58) = 0;
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
          *(long *)(lVar42 + 0x58) = 0;
          if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 0xb) ||
             (uVar29 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[5], uVar29 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar50 = (uint *)((long)piVar40 + uVar29);
            lVar32 = (long)puVar50 + (ulong)*puVar50;
          }
          sVar24 = strlen((char *)(lVar32 + 4));
          bVar10 = *(byte *)(lVar32 + 4);
          if (bVar10 != 0) {
            pbVar36 = (byte *)(lVar32 + 5);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar10) * 0x100000001b3);
              bVar10 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            } while (bVar10 != 0);
          }
          lVar42 = lVar43 + lVar34 * 0xc0;
          plVar25 = *(long **)(lVar42 + 0x78);
          *(undefined1 **)(lVar42 + 0x60) = puVar31;
          *(char **)(lVar42 + 0x68) = (char *)(lVar32 + 4);
          *(size_t *)(lVar42 + 0x70) = sVar24;
          *(undefined8 *)(lVar42 + 0x78) = 0;
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
          *(long *)(lVar42 + 0x78) = 0;
          lVar32 = (long)*piVar40;
          uVar27 = *(ushort *)((long)piVar40 - lVar32);
          if (0xc < uVar27) {
            uVar29 = (ulong)((ushort *)((long)piVar40 - lVar32))[6];
            if (uVar29 != 0) {
              puVar50 = (uint *)((long)piVar40 + uVar29);
              uVar38 = (ulong)*puVar50;
              pcVar44 = (char *)((long)puVar50 + uVar38 + 4);
              sVar24 = strlen(pcVar44);
              bVar10 = *(byte *)((long)puVar50 + uVar38 + 4);
              puVar31 = &DAT_cbf29ce484222645;
              if (bVar10 != 0) {
                puVar31 = &DAT_cbf29ce484222645;
                pbVar36 = (byte *)(lVar30 + uVar38 + uVar29 + (ulong)uVar8);
                do {
                  puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar10) * 0x100000001b3);
                  bVar10 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                } while (bVar10 != 0);
              }
              lVar32 = lVar43 + lVar34 * 0xc0;
              plVar25 = *(long **)(lVar32 + 0x98);
              *(undefined1 **)(lVar32 + 0x80) = puVar31;
              *(char **)(lVar32 + 0x88) = pcVar44;
              *(size_t *)(lVar32 + 0x90) = sVar24;
              *(undefined8 *)(lVar32 + 0x98) = 0;
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0x20))(plVar25);
              }
              *(long *)(lVar32 + 0x98) = 0;
              lVar32 = (long)*piVar40;
              uVar27 = *(ushort *)((long)piVar40 - lVar32);
            }
            lVar32 = -lVar32;
            if (0xe < uVar27) {
              uVar29 = (ulong)*(ushort *)((long)piVar40 + lVar32 + 0xe);
              if (uVar29 != 0) {
                lVar32 = lVar43 + lVar34 * 0xc0;
                auVar13 = *(undefined1 (*) [12])((long)piVar40 + uVar29);
                *(ulong *)(lVar32 + 0xa8) = (ulong)auVar13._8_4_;
                *(long *)(lVar32 + 0xa0) = auVar13._0_8_;
                lVar32 = -(long)*piVar40;
                uVar27 = *(ushort *)((long)piVar40 - (long)*piVar40);
              }
              if ((0x10 < uVar27) &&
                 (uVar29 = (ulong)*(ushort *)((long)piVar40 + lVar32 + 0x10), uVar29 != 0)) {
                puVar45 = (undefined8 *)((long)piVar40 + uVar29);
                uVar14 = *puVar45;
                lVar43 = lVar43 + lVar34 * 0xc0;
                *(undefined8 *)(lVar43 + 0xb8) = puVar45[1];
                *(undefined8 *)(lVar43 + 0xb0) = uVar14;
              }
            }
          }
          puVar39 = puVar39 + 1;
          lVar34 = lVar34 + 1;
          lVar30 = lVar30 + 4;
        } while (puVar39 != puVar48);
      }
      lVar30 = (long)*piVar2;
      uVar27 = *(ushort *)((long)piVar2 - lVar30);
    }
    if ((uVar27 < 0xd) || (uVar29 = (ulong)*(ushort *)((long)piVar2 + (0xc - lVar30)), uVar29 == 0))
    goto LAB_01aa5cbc;
    uVar28 = *(undefined4 *)((long)piVar2 + uVar29);
  }
  *(undefined4 *)(param_1 + 0x57) = uVar28;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) {
    bVar22 = false;
  }
  else {
    uVar29 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
    bVar22 = false;
    if (uVar29 != 0) {
      bVar22 = *(char *)((long)piVar2 + uVar29) != '\0';
    }
  }
  *(bool *)((long)param_1 + 700) = bVar22;
LAB_01aa5cf8:
  auVar135._0_8_ = local_1f0 << 0x28 | auVar134._0_8_ & 0xffffffff | (uVar41 & 0xff) << 0x20;
  auVar135._8_8_ = auVar134._8_8_ & 0xffffffff;
  return auVar135;
}


