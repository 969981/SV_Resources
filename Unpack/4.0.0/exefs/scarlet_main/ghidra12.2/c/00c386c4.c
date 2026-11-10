/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c386c4; name: FUN_00c386c4
 */


uint FUN_00c386c4(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  string sVar5;
  string sVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  void *pvVar18;
  long lVar19;
  string *psVar20;
  ulong extraout_x1;
  ulong extraout_x1_00;
  byte *pbVar21;
  long extraout_x1_01;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  int *piVar25;
  char *pcVar26;
  char *pcVar27;
  ulong uVar28;
  void *pvVar29;
  long *plVar30;
  long *plVar31;
  undefined8 *puVar32;
  long *plVar33;
  long *local_188;
  ulong local_180;
  char *local_178;
  byte *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  string local_150;
  string sStack_14f;
  undefined6 uStack_14e;
  undefined2 local_148;
  undefined6 uStack_146;
  void *local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  size_t local_118;
  byte *local_110;
  ulong local_108;
  char *local_100;
  void *local_f8;
  ulong local_f0;
  ulong local_e8;
  void *local_e0;
  undefined6 uStack_d8;
  undefined2 local_d2;
  undefined6 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  byte *local_78;
  void *local_70;
  
  plVar11 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  uVar12 = (**(code **)(*param_2 + 0xb8))(param_2);
  local_118 = 0;
  local_110 = (byte *)0x0;
  lVar19 = param_1 + 0x28;
  local_120 = 0;
  plVar30 = (long *)(ulong)*(uint *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  lVar13 = (**(code **)(*param_2 + 0xb8))(param_2);
  pbVar14 = *(byte **)(lVar13 + 8);
  uVar15 = (ulong)(*pbVar14 >> 1);
  if ((*pbVar14 & 1) != 0) {
    uVar15 = *(ulong *)(pbVar14 + 8);
  }
  if ((uVar15 != 0x13) ||
     (iVar9 = std::string::compare
                        ((ulong)pbVar14,0,(char *)0xffffffffffffffff,
                         (ulong)PTR_s_google_protobuf_Any_047dada8), iVar9 != 0)) {
LAB_00c38774:
    local_180 = CONCAT53(local_180._3_5_,0x5b02);
    bVar4 = *(byte *)(param_1 + 0x30);
    uVar22 = (ulong)(bVar4 >> 1);
    uVar15 = uVar22;
    if ((bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar15 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '[') {
          pcVar26 = (char *)(param_1 + 0x32);
          pcVar27 = (char *)((ulong)&local_180 | 2);
          do {
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_00c387e8;
            cVar2 = *pcVar27;
            cVar3 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar27 = pcVar27 + 1;
          } while (cVar3 == cVar2);
        }
        goto LAB_00c38848;
      }
      if (**(char **)(param_1 + 0x40) != '[') goto LAB_00c38848;
LAB_00c387e8:
      FUN_00c2f698(lVar19);
      uVar15 = FUN_00c3d00c(param_1,&local_120);
      if ((uVar15 & 1) == 0) goto LAB_00c3a654;
      local_180 = CONCAT53(local_180._3_5_,0x5d02);
      uVar15 = FUN_00c3caf8(param_1,&local_180);
      pbVar14 = local_170;
      if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
        lVar13 = tpidr_el0;
        plVar33 = *(long **)(lVar13 + 0x30);
        if (plVar33 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar33 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar22 = (**(code **)(*plVar33 + 0xf8))(plVar33);
        if (((uVar22 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar33 + 0x18))(plVar33,pbVar14,0,8);
          local_188 = plVar30;
        }
        else {
          FUN_00c48fe8(plVar33,pbVar14,0,8);
          local_188 = plVar30;
        }
      }
      if ((uVar15 & 1) == 0) goto LAB_00c3a654;
      plVar33 = *(long **)(param_1 + 8);
      if (plVar33 == (long *)0x0) {
        uVar15 = (**(code **)(*plVar11 + 0x268))(plVar11,&local_120);
      }
      else {
        uVar15 = (**(code **)(*plVar33 + 0x10))(plVar33,param_2,&local_120);
      }
      if (uVar15 != 0) goto LAB_00c38ec8;
      if (*(char *)(param_1 + 0xe5) == '\0') {
        std::operator+("Extension \"",(string *)&local_120);
        puVar16 = (ulong *)std::string::append((char *)&local_b0);
        local_90 = puVar16[1];
        local_88 = puVar16[2];
        local_98 = *puVar16;
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        pbVar23 = *(byte **)(uVar12 + 8);
        pbVar14 = *(byte **)(pbVar23 + 0x10);
        if ((*pbVar23 & 1) == 0) {
          pbVar14 = pbVar23 + 1;
        }
        goto LAB_00c38da8;
      }
      std::operator+("Extension \"",(string *)&local_120);
      puVar16 = (ulong *)std::string::append((char *)&local_b0);
      local_90 = puVar16[1];
      local_88 = puVar16[2];
      local_98 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      pbVar23 = *(byte **)(uVar12 + 8);
      pbVar14 = *(byte **)(pbVar23 + 0x10);
      if ((*pbVar23 & 1) == 0) {
        pbVar14 = pbVar23 + 1;
      }
LAB_00c38c20:
      puVar16 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar14);
      local_78 = (byte *)puVar16[1];
      local_70 = (void *)puVar16[2];
      local_80 = *puVar16;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16 = (ulong *)std::string::append((char *)&local_80);
      local_178 = (char *)puVar16[1];
      local_170 = (byte *)puVar16[2];
      local_180 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      FUN_00c38498(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   &local_180);
      pbVar14 = local_170;
      if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
        lVar13 = tpidr_el0;
        plVar30 = *(long **)(lVar13 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pbVar14,0,8);
        }
      }
      pvVar29 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
        lVar13 = tpidr_el0;
        plVar30 = *(long **)(lVar13 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      uVar15 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar13 = tpidr_el0;
        plVar30 = *(long **)(lVar13 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,uVar15,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,uVar15,0,8);
        }
      }
      pvVar29 = local_a0;
      if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        lVar13 = tpidr_el0;
        plVar30 = *(long **)(lVar13 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      if (*(char *)(param_1 + 0xe5) == '\0') {
        local_180 = CONCAT44(local_180._4_4_,3);
        local_158 = 0;
        local_170 = (byte *)CONCAT44(local_170._4_4_,0x1db);
        local_178 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
        ;
        local_168 = 0;
        uStack_160 = 0;
        std::string::append((char *)&local_168);
        FUN_00bb0e90(&local_180);
        FUN_00bb0d74(&local_180);
      }
      local_180 = CONCAT53(local_180._3_5_,0x3a02);
      bVar4 = *(byte *)(param_1 + 0x30);
      uVar12 = (ulong)(bVar4 >> 1);
      uVar15 = uVar12;
      if ((bVar4 & 1) != 0) {
        uVar15 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar15 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == ':') {
            pcVar26 = (char *)(param_1 + 0x32);
            pcVar27 = (char *)((ulong)&local_180 | 2);
            do {
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_00c38e40;
              cVar2 = *pcVar27;
              cVar3 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar27 = pcVar27 + 1;
            } while (cVar3 == cVar2);
          }
        }
        else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00c38e40:
          FUN_00c2f698(lVar19);
          local_80 = CONCAT53(local_80._3_5_,0x7b02);
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar12 = (ulong)(bVar4 >> 1);
          uVar15 = uVar12;
          if ((bVar4 & 1) != 0) {
            uVar15 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar15 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '{') {
                pcVar26 = (char *)(param_1 + 0x32);
                pcVar27 = (char *)((ulong)&local_80 | 2);
                uVar22 = uVar12;
                do {
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_00c39ad4;
                  cVar2 = *pcVar27;
                  cVar3 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '{') goto LAB_00c39ad4;
          }
          uVar22 = local_98 >> 0x10;
          local_98 = CONCAT62((uint6)uVar22 & 0xffffffffff00,0x3c02);
          if (uVar15 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '<') {
                pcVar26 = (char *)(param_1 + 0x32);
                pcVar27 = (char *)((ulong)&local_98 | 2);
                do {
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_00c39ad4;
                  cVar2 = *pcVar27;
                  cVar3 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00c39ad4;
          }
          uVar10 = FUN_00c3d4cc(param_1);
          goto LAB_00c3a658;
        }
      }
LAB_00c39ad4:
      uVar10 = FUN_00c3dcd8(param_1);
      goto LAB_00c3a658;
    }
LAB_00c38848:
    uVar15 = FUN_00c3d340(param_1,&local_120);
    if ((uVar15 & 1) == 0) goto LAB_00c3a654;
    if ((*(char *)(param_1 + 0xe7) == '\0') ||
       (uVar15 = FUN_00c10890(&local_120,&local_c8), (uVar15 & 1) == 0)) {
      iVar9 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(uVar12 + 0x10) + 0x98),uVar12,&local_120,2);
      if ((iVar9 == 0) ||
         ((extraout_x1 == 0 || (uVar15 = extraout_x1, *(char *)(extraout_x1 + 0x44) != '\0')))) {
        std::string::string((string *)&local_180,(string *)&local_120);
        pbVar23 = (byte *)((ulong)&local_180 | 1);
        pbVar14 = (byte *)((ulong)&local_180 | 1) + (local_180 >> 1 & 0x7f);
        if ((local_180 & 1) != 0) {
          pbVar23 = local_170;
          pbVar14 = local_170 + (long)local_178;
        }
        for (; pbVar23 != pbVar14; pbVar23 = pbVar23 + 1) {
          if (*pbVar23 - 0x41 < 0x1a) {
            *pbVar23 = *pbVar23 + 0x20;
          }
        }
        iVar9 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(uVar12 + 0x10) + 0x98),uVar12,&local_180,2);
        pbVar14 = local_170;
        uVar15 = 0;
        if ((((iVar9 != 0) && (extraout_x1_00 != 0)) && (*(char *)(extraout_x1_00 + 0x44) == '\0'))
           && (uVar15 = extraout_x1_00, *(int *)(extraout_x1_00 + 0x3c) != 10)) {
          uVar15 = 0;
        }
        if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
          lVar13 = tpidr_el0;
          plVar33 = *(long **)(lVar13 + 0x30);
          if (plVar33 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar33 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar22 = (**(code **)(*plVar33 + 0xf8))(plVar33);
          if (((uVar22 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar33 + 0x18))(plVar33,pbVar14,0,8);
            local_188 = plVar30;
          }
          else {
            FUN_00c48fe8(plVar33,pbVar14,0,8);
            local_188 = plVar30;
          }
        }
        if (uVar15 != 0) goto LAB_00c38984;
LAB_00c38ae8:
        if (*(char *)(param_1 + 0xe4) != '\0') {
          std::string::string((string *)&local_180,(string *)&local_120);
          pbVar21 = local_170;
          local_78 = (byte *)((ulong)&local_180 | 1);
          pbVar23 = local_78;
          pbVar14 = local_78 + (local_180 >> 1 & 0x7f);
          if ((local_180 & 1) != 0) {
            pbVar23 = local_170;
            pbVar14 = local_170 + (long)local_178;
          }
          for (; pbVar23 != pbVar14; pbVar23 = pbVar23 + 1) {
            if (*pbVar23 - 0x41 < 0x1a) {
              *pbVar23 = *pbVar23 + 0x20;
            }
          }
          uVar22 = local_180 & 1;
          if ((local_180 & 1) != 0) {
            local_78 = local_170;
          }
          local_80 = uVar12;
          uVar15 = FUN_00ba83e0(*(long *)(*(long *)(uVar12 + 0x10) + 0x98) + 0x28,&local_80);
          if (uVar15 == 0) {
            uVar15 = 0;
          }
          else if (*(char *)(uVar15 + 0x44) != '\0') {
            uVar15 = 0;
          }
          local_188 = plVar30;
          if ((uVar22 != 0) && (pbVar21 != (byte *)0x0)) {
            lVar13 = tpidr_el0;
            plVar33 = *(long **)(lVar13 + 0x30);
            if (plVar33 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar33 = DAT_04859430;
              *(long **)(lVar13 + 0x30) = DAT_04859430;
            }
            uVar22 = (**(code **)(*plVar33 + 0xf8))(plVar33);
            if (((uVar22 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
              (**(code **)(*plVar33 + 0x18))(plVar33,pbVar21,0,8);
            }
            else {
              FUN_00c48fe8(plVar33,pbVar21,0,8);
            }
          }
          goto joined_r0x00c38bbc;
        }
        goto LAB_00c38bc0;
      }
LAB_00c38984:
      if (*(int *)(uVar15 + 0x3c) == 10) {
        pbVar14 = (byte *)**(undefined8 **)(uVar15 + 0x68);
        bVar4 = *pbVar14;
        uVar22 = (ulong)(bVar4 >> 1);
        __n = uVar22;
        if ((bVar4 & 1) != 0) {
          __n = *(size_t *)(pbVar14 + 8);
        }
        sVar1 = local_120 >> 1 & 0x7f;
        if ((local_120 & 1) != 0) {
          sVar1 = local_118;
        }
        if (__n != sVar1) goto LAB_00c38ae8;
        pbVar23 = *(byte **)(pbVar14 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar23 = pbVar14 + 1;
        }
        pbVar21 = (byte *)((ulong)&local_120 | 1);
        if ((local_120 & 1) != 0) {
          pbVar21 = local_110;
        }
        if ((bVar4 & 1) == 0) {
          if (__n != 0) {
            do {
              pbVar14 = pbVar14 + 1;
              if (*pbVar14 != *pbVar21) goto LAB_00c38ae8;
              uVar22 = uVar22 - 1;
              pbVar21 = pbVar21 + 1;
            } while (uVar22 != 0);
            if (uVar15 == 0) goto LAB_00c38ae8;
          }
        }
        else if ((__n != 0) && (iVar9 = memcmp(pbVar23,pbVar21,__n), iVar9 != 0)) goto LAB_00c38ae8;
      }
LAB_00c38ec8:
      if (*(int *)(param_1 + 0xe0) == 1) {
        if ((*(int *)(uVar15 + 0x40) == 3) ||
           (uVar12 = (**(code **)(*plVar11 + 0x28))(plVar11,param_2,uVar15), (uVar12 & 1) == 0)) {
          puVar32 = *(undefined8 **)(uVar15 + 0x58);
          if ((puVar32 == (undefined8 *)0x0) ||
             (uVar12 = (**(code **)(*plVar11 + 0x40))(plVar11,param_2,puVar32), (uVar12 & 1) == 0))
          goto LAB_00c39140;
          puVar17 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,param_2,puVar32);
          std::operator+("Field \"",(string *)&local_120);
          puVar16 = (ulong *)std::string::append((char *)&local_f0);
          uStack_c0 = puVar16[1];
          local_b8 = puVar16[2];
          local_c8 = *puVar16;
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          pbVar23 = (byte *)*puVar17;
          pbVar14 = *(byte **)(pbVar23 + 0x10);
          if ((*pbVar23 & 1) == 0) {
            pbVar14 = pbVar23 + 1;
          }
          puVar16 = (ulong *)std::string::append((char *)&local_c8,(ulong)pbVar14);
          uStack_a8 = puVar16[1];
          local_a0 = (void *)puVar16[2];
          local_b0 = *puVar16;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16 = (ulong *)std::string::append((char *)&local_b0);
          local_90 = puVar16[1];
          local_88 = puVar16[2];
          local_98 = *puVar16;
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          pbVar23 = (byte *)*puVar32;
          pbVar14 = *(byte **)(pbVar23 + 0x10);
          if ((*pbVar23 & 1) == 0) {
            pbVar14 = pbVar23 + 1;
          }
          puVar16 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar14);
          local_78 = (byte *)puVar16[1];
          local_70 = (void *)puVar16[2];
          local_80 = *puVar16;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16 = (ulong *)std::string::append((char *)&local_80);
          local_178 = (char *)puVar16[1];
          local_170 = (byte *)puVar16[2];
          local_180 = *puVar16;
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_180);
          pbVar14 = local_170;
          if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,pbVar14,0,8);
            }
          }
          pvVar29 = local_70;
          if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,pvVar29,0,8);
            }
          }
          uVar15 = local_88;
          if (((local_98 & 1) != 0) && (local_88 != 0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,uVar15,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,uVar15,0,8);
            }
          }
          pvVar29 = local_a0;
          if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,pvVar29,0,8);
            }
          }
          uVar12 = local_b8;
          pvVar29 = local_e0;
          uVar15 = local_f0;
          if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,uVar12,0,8);
              pvVar29 = local_e0;
              uVar15 = local_f0;
            }
            else {
              FUN_00c48fe8(plVar30,uVar12,0,8);
              pvVar29 = local_e0;
              uVar15 = local_f0;
            }
          }
        }
        else {
          std::operator+("Non-repeated field \"",(string *)&local_120);
          puVar16 = (ulong *)std::string::append((char *)&local_80);
          local_178 = (char *)puVar16[1];
          local_170 = (byte *)puVar16[2];
          local_180 = *puVar16;
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_180);
          pbVar14 = local_170;
          pvVar29 = local_70;
          uVar15 = local_80;
          if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
            lVar19 = tpidr_el0;
            plVar30 = *(long **)(lVar19 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
              pvVar29 = local_70;
              uVar15 = local_80;
            }
            else {
              FUN_00c48fe8(plVar30,pbVar14,0,8);
              pvVar29 = local_70;
              uVar15 = local_80;
            }
          }
        }
        if (((uVar15 & 1) != 0) && (pvVar29 != (void *)0x0)) goto LAB_00c390f0;
      }
      else {
LAB_00c39140:
        if ((*(uint *)(uVar15 + 0x3c) & 0xfffffffe) == 10) {
          local_180 = CONCAT53(local_180._3_5_,0x3a02);
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar22 = (ulong)(bVar4 >> 1);
          uVar12 = uVar22;
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == ':') {
                pcVar26 = (char *)(param_1 + 0x32);
                pcVar27 = (char *)((ulong)&local_180 | 2);
                do {
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_00c391f0;
                  cVar2 = *pcVar27;
                  cVar3 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00c391f0:
              FUN_00c2f698(lVar19);
            }
          }
        }
        else {
          local_180 = CONCAT53(local_180._3_5_,0x3a02);
          uVar12 = FUN_00c3caf8(param_1,&local_180);
          pbVar14 = local_170;
          if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
            lVar13 = tpidr_el0;
            plVar33 = *(long **)(lVar13 + 0x30);
            if (plVar33 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar33 = DAT_04859430;
              *(long **)(lVar13 + 0x30) = DAT_04859430;
            }
            uVar22 = (**(code **)(*plVar33 + 0xf8))(plVar33);
            if (((uVar22 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
              (**(code **)(*plVar33 + 0x18))(plVar33,pbVar14,0,8);
              local_188 = plVar30;
            }
            else {
              FUN_00c48fe8(plVar33,pbVar14,0,8);
              local_188 = plVar30;
            }
          }
          if ((uVar12 & 1) == 0) goto LAB_00c3a654;
        }
        if (*(int *)(uVar15 + 0x40) == 3) {
          local_180 = CONCAT53(local_180._3_5_,0x5b02);
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar22 = (ulong)(bVar4 >> 1);
          uVar12 = uVar22;
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '[') {
                pcVar26 = (char *)(param_1 + 0x32);
                pcVar27 = (char *)((ulong)&local_180 | 2);
                do {
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_00c39274;
                  cVar2 = *pcVar27;
                  cVar3 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                } while (cVar3 == cVar2);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00c39274:
              FUN_00c2f698(lVar19);
              local_188 = (long *)((ulong)&local_180 | 2);
              lVar13 = tpidr_el0;
              do {
                if ((*(uint *)(uVar15 + 0x3c) & 0xfffffffe) == 10) {
                  uVar12 = FUN_00c3e41c();
                }
                else {
                  uVar12 = FUN_00c3eb24(param_1,param_2,plVar11,uVar15);
                }
                if ((uVar12 & 1) == 0) goto LAB_00c3a654;
                local_180._3_5_ = (undefined5)(local_180 >> 0x18);
                local_180 = CONCAT53(local_180._3_5_,0x5d02);
                bVar4 = *(byte *)(param_1 + 0x30);
                uVar22 = (ulong)(bVar4 >> 1);
                uVar12 = uVar22;
                if ((bVar4 & 1) != 0) {
                  uVar12 = *(ulong *)(param_1 + 0x38);
                }
                if (uVar12 == 1) {
                  if ((bVar4 & 1) == 0) {
                    if (*(char *)(param_1 + 0x31) == ']') {
                      plVar30 = local_188;
                      pcVar26 = (char *)(param_1 + 0x32);
                      do {
                        uVar22 = uVar22 - 1;
                        if (uVar22 == 0) goto LAB_00c396f4;
                        lVar24 = *plVar30;
                        cVar2 = *pcVar26;
                        plVar30 = (long *)((long)plVar30 + 1);
                        pcVar26 = pcVar26 + 1;
                      } while (cVar2 == (char)lVar24);
                    }
                  }
                  else if (**(char **)(param_1 + 0x40) == ']') {
LAB_00c396f4:
                    FUN_00c2f698(lVar19);
                    goto LAB_00c3948c;
                  }
                }
                local_180 = CONCAT53(local_180._3_5_,0x2c02);
                uVar12 = FUN_00c3caf8(param_1,&local_180);
                pbVar14 = local_170;
                if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
                  plVar30 = *(long **)(lVar13 + 0x30);
                  if (plVar30 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar30 = DAT_04859430;
                    *(long **)(lVar13 + 0x30) = DAT_04859430;
                  }
                  uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
                  if (((uVar22 & 1) == 0) ||
                     (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                    (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar30,pbVar14,0,8);
                  }
                }
                uVar10 = 0;
              } while ((uVar12 & 1) != 0);
              goto LAB_00c3a658;
            }
          }
        }
        if ((*(uint *)(uVar15 + 0x3c) & 0xfffffffe) == 10) {
          uVar12 = FUN_00c3e41c();
        }
        else {
          uVar12 = FUN_00c3eb24(param_1,param_2,plVar11,uVar15);
        }
        if ((uVar12 & 1) != 0) {
LAB_00c3948c:
          local_180 = CONCAT53(local_180._3_5_,0x3b02);
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar22 = (ulong)(bVar4 >> 1);
          uVar12 = uVar22;
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == ';') {
                pcVar26 = (char *)(param_1 + 0x32);
                pcVar27 = (char *)((ulong)&local_180 | 2);
                uVar28 = uVar22;
                do {
                  uVar28 = uVar28 - 1;
                  if (uVar28 == 0) goto LAB_00c395c0;
                  cVar2 = *pcVar27;
                  cVar3 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                } while (cVar3 == cVar2);
              }
              goto LAB_00c39500;
            }
            if (**(char **)(param_1 + 0x40) != ';') goto LAB_00c39500;
LAB_00c395c0:
            FUN_00c2f698(lVar19);
          }
          else {
LAB_00c39500:
            uVar28 = local_80 >> 0x10;
            local_80 = CONCAT62((uint6)uVar28 & 0xffffffffff00,0x2c02);
            if (uVar12 == 1) {
              if ((bVar4 & 1) == 0) {
                if (*(char *)(param_1 + 0x31) == ',') {
                  pcVar26 = (char *)(param_1 + 0x32);
                  pcVar27 = (char *)((ulong)&local_80 | 2);
                  do {
                    uVar22 = uVar22 - 1;
                    if (uVar22 == 0) goto LAB_00c395c0;
                    cVar2 = *pcVar27;
                    cVar3 = *pcVar26;
                    pcVar26 = pcVar26 + 1;
                    pcVar27 = pcVar27 + 1;
                  } while (cVar3 == cVar2);
                }
              }
              else if (**(char **)(param_1 + 0x40) == ',') goto LAB_00c395c0;
            }
          }
          if (*(char *)(*(long *)(uVar15 + 0x78) + 0x5a) != '\0') {
            std::operator+("text format contains deprecated field \"",(string *)&local_120);
            puVar16 = (ulong *)std::string::append((char *)&local_80);
            local_178 = (char *)puVar16[1];
            local_170 = (byte *)puVar16[2];
            local_180 = *puVar16;
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
            FUN_00c38498(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_180);
            pbVar14 = local_170;
            if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
              lVar13 = tpidr_el0;
              plVar30 = *(long **)(lVar13 + 0x30);
              if (plVar30 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar30 = DAT_04859430;
                *(long **)(lVar13 + 0x30) = DAT_04859430;
              }
              uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
              if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
              }
              else {
                FUN_00c48fe8(plVar30,pbVar14,0,8);
              }
            }
            pvVar29 = local_70;
            if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
              lVar13 = tpidr_el0;
              plVar30 = *(long **)(lVar13 + 0x30);
              if (plVar30 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar30 = DAT_04859430;
                *(long **)(lVar13 + 0x30) = DAT_04859430;
              }
              uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
              if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
              }
              else {
                FUN_00c48fe8(plVar30,pvVar29,0,8);
              }
            }
          }
          plVar11 = *(long **)(param_1 + 0x10);
          if (plVar11 != (long *)0x0) {
            plVar33 = plVar11 + 1;
            plVar31 = (long *)*plVar33;
            if (plVar31 != (long *)0x0) {
              plVar33 = plVar11 + 1;
              do {
                uVar12 = plVar31[4];
                if (uVar15 <= uVar12 && uVar12 != uVar15) {
                  plVar30 = (long *)*plVar31;
                  plVar33 = plVar31;
                  if (plVar30 == (long *)0x0) {
                    goto LAB_00c39688;
                  }
                }
                else {
                  if (uVar15 <= uVar12) goto LAB_00c39688;
                  plVar33 = plVar31 + 1;
                  plVar30 = (long *)*plVar33;
                  if (plVar30 == (long *)0x0) goto LAB_00c39688;
                }
                plVar31 = plVar30;
              } while( true );
            }
            plVar31 = plVar33;
LAB_00c39688:
            plVar30 = (long *)*plVar33;
            if (plVar30 == (long *)0x0) {
              lVar13 = tpidr_el0;
              plVar30 = *(long **)(lVar13 + 0x30);
              if (plVar30 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar30 = DAT_04859430;
                *(long **)(lVar13 + 0x30) = DAT_04859430;
              }
              plVar30 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x40,8);
              plVar30[4] = uVar15;
              plVar30[5] = 0;
              plVar30[2] = (long)plVar31;
              plVar30[6] = 0;
              plVar30[7] = 0;
              *plVar30 = 0;
              plVar30[1] = 0;
              *plVar33 = (long)plVar30;
              if (*(long *)*plVar11 == 0) {
                plVar33 = plVar30;
              }
              else {
                *plVar11 = *(long *)*plVar11;
                plVar33 = (long *)*plVar33;
              }
              FUN_010108e0(plVar11[1],plVar33);
              plVar11[2] = plVar11[2] + 1;
            }
            puVar32 = (undefined8 *)plVar30[6];
            if (puVar32 == (undefined8 *)plVar30[7]) {
              pvVar29 = (void *)plVar30[5];
              param_2 = (long *)((long)puVar32 - (long)pvVar29);
              lVar13 = (long)param_2 >> 3;
              uVar15 = lVar13 + 1;
              if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar24 = plVar30[7] - (long)pvVar29;
              uVar12 = lVar24 >> 2;
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              if (0xffffffffffffffe < (ulong)(lVar24 >> 3)) {
                uVar15 = 0x1fffffffffffffff;
              }
              if (uVar15 == 0) {
                pvVar18 = (void *)0x0;
              }
              else {
                if (uVar15 >> 0x3d != 0) {
                  FUN_00c40590();
LAB_00c3c12c:
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar11 = DAT_04859430;
                  *(long **)(lVar19 + 0x30) = DAT_04859430;
LAB_00c3b328:
                  uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
                  if (((uVar12 & 1) == 0) ||
                     (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar29,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar11,pvVar29,0,8);
                  }
LAB_00c3ab9c:
                  uVar12 = local_b8;
                  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
                    lVar19 = tpidr_el0;
                    plVar11 = *(long **)(lVar19 + 0x30);
                    if (plVar11 == (long *)0x0) {
                      if (((DAT_04859438 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                        DAT_04859430 = DAT_04859418;
                        __cxa_guard_release(&DAT_04859438);
                      }
                      plVar11 = DAT_04859430;
                      *(long **)(lVar19 + 0x30) = DAT_04859430;
                    }
                    uVar22 = (**(code **)(*plVar11 + 0xf8))(plVar11);
                    if (((uVar22 & 1) == 0) ||
                       (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                      (**(code **)(*plVar11 + 0x18))(plVar11,uVar12,0,8);
                    }
                    else {
                      FUN_00c48fe8(plVar11,uVar12,0,8);
                    }
                  }
LAB_00c3aba4:
                  bVar8 = false;
                  goto LAB_00c3aba8;
                }
                lVar19 = tpidr_el0;
                plVar11 = *(long **)(lVar19 + 0x30);
                if (plVar11 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar11 = DAT_04859430;
                  *(long **)(lVar19 + 0x30) = DAT_04859430;
                }
                pvVar18 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar15 << 3,8);
              }
              puVar32 = (undefined8 *)((long)pvVar18 + lVar13 * 8);
              *puVar32 = uVar7;
              if (0 < (long)param_2) {
                memcpy(pvVar18,pvVar29,(size_t)param_2);
              }
              plVar30[5] = (long)pvVar18;
              plVar30[6] = (long)(puVar32 + 1);
              plVar30[7] = (long)((long)pvVar18 + uVar15 * 8);
              if (pvVar29 != (void *)0x0) {
                lVar19 = tpidr_el0;
                plVar30 = *(long **)(lVar19 + 0x30);
                if (plVar30 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar30 = DAT_04859430;
                  *(long **)(lVar19 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
                if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
                }
                else {
                  FUN_00c48fe8(plVar30,pvVar29,0,8);
                }
              }
            }
            else {
              *puVar32 = uVar7;
              plVar30[6] = (long)(puVar32 + 1);
            }
          }
          uVar10 = 1;
          goto LAB_00c3a658;
        }
      }
    }
    else {
      uVar15 = (ulong)*(uint *)(uVar12 + 0x68);
      if (0 < (int)*(uint *)(uVar12 + 0x68)) {
        piVar25 = (int *)(*(long *)(uVar12 + 0x70) + 4);
        do {
          if ((piVar25[-1] <= (int)local_c8) && ((int)local_c8 < *piVar25)) {
            uVar15 = (**(code **)(*plVar11 + 0x270))(plVar11);
            goto joined_r0x00c38bbc;
          }
          piVar25 = piVar25 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar15 = FUN_00b7c9fc(uVar12);
joined_r0x00c38bbc:
      if (uVar15 != 0) goto LAB_00c38ec8;
LAB_00c38bc0:
      if (*(char *)(param_1 + 0xe5) != '\0') {
        std::operator+("Message type \"",*(string **)(uVar12 + 8));
        puVar16 = (ulong *)std::string::append((char *)&local_b0);
        local_90 = puVar16[1];
        local_88 = puVar16[2];
        local_98 = *puVar16;
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        pbVar14 = (byte *)((ulong)&local_120 | 1);
        if ((local_120 & 1) != 0) {
          pbVar14 = local_110;
        }
        goto LAB_00c38c20;
      }
      std::operator+("Message type \"",*(string **)(uVar12 + 8));
      puVar16 = (ulong *)std::string::append((char *)&local_b0);
      local_90 = puVar16[1];
      local_88 = puVar16[2];
      local_98 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      pbVar14 = (byte *)((ulong)&local_120 | 1);
      if ((local_120 & 1) != 0) {
        pbVar14 = local_110;
      }
LAB_00c38da8:
      puVar16 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar14);
      local_78 = (byte *)puVar16[1];
      local_70 = (void *)puVar16[2];
      local_80 = *puVar16;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16 = (ulong *)std::string::append((char *)&local_80);
      local_178 = (char *)puVar16[1];
      local_170 = (byte *)puVar16[2];
      local_180 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   &local_180);
      pbVar14 = local_170;
      if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pbVar14,0,8);
        }
      }
      pvVar29 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      uVar15 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,uVar15,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,uVar15,0,8);
        }
      }
      if (((local_b0 & 1) == 0) || (pvVar29 = local_a0, local_a0 == (void *)0x0)) goto LAB_00c3a654;
LAB_00c390f0:
      lVar19 = tpidr_el0;
      plVar30 = *(long **)(lVar19 + 0x30);
      if (plVar30 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar30 = DAT_04859430;
        *(long **)(lVar19 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
      if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
      }
      else {
        FUN_00c48fe8(plVar30,pvVar29,0,8);
      }
    }
LAB_00c3a654:
    uVar10 = 0;
    goto LAB_00c3a658;
  }
  uVar15 = FUN_00b7c9fc(lVar13,1);
  lVar13 = FUN_00b7c9fc(lVar13,2);
  if ((uVar15 == 0) ||
     (((lVar13 == 0 || (*(int *)(uVar15 + 0x3c) != 9)) || (*(int *)(lVar13 + 0x3c) != 0xc))))
  goto LAB_00c38774;
  local_180 = CONCAT53(local_180._3_5_,0x5b02);
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar28 = (ulong)(bVar4 >> 1);
  uVar22 = uVar28;
  if ((bVar4 & 1) != 0) {
    uVar22 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar22 != 1) goto LAB_00c38774;
  if ((bVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x31) == '[') {
      pcVar26 = (char *)(param_1 + 0x32);
      pcVar27 = (char *)((ulong)&local_180 | 2);
      do {
        uVar28 = uVar28 - 1;
        if (uVar28 == 0) goto LAB_00c39858;
        cVar2 = *pcVar27;
        cVar3 = *pcVar26;
        pcVar26 = pcVar26 + 1;
        pcVar27 = pcVar27 + 1;
      } while (cVar3 == cVar2);
    }
    goto LAB_00c38774;
  }
  if (**(char **)(param_1 + 0x40) != '[') goto LAB_00c38774;
LAB_00c39858:
  FUN_00c2f698(lVar19);
  local_180 = 0;
  local_130 = 0;
  local_128 = 0;
  local_140 = (void *)0x0;
  local_138 = 0;
  local_150 = (string)0x0;
  sStack_14f = (string)0x0;
  uStack_14e = 0;
  local_148 = 0;
  uStack_146 = 0;
  local_178 = (char *)0x0;
  local_170 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = (void *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar12 = FUN_00c3d340(param_1,&local_180);
  if ((uVar12 & 1) == 0) {
LAB_00c39b68:
    bVar8 = false;
  }
  else {
    local_b0 = CONCAT53(local_b0._3_5_,0x2e02);
    uVar12 = FUN_00c3caf8(param_1,&local_b0);
    pvVar29 = local_a0;
    if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
      lVar24 = tpidr_el0;
      plVar30 = *(long **)(lVar24 + 0x30);
      if (plVar30 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar30 = DAT_04859430;
        *(long **)(lVar24 + 0x30) = DAT_04859430;
      }
      uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
      if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
      }
      else {
        FUN_00c48fe8(plVar30,pvVar29,0,8);
      }
    }
    if (((uVar12 & 1) == 0) || (uVar12 = FUN_00c3d340(param_1,&local_80), (uVar12 & 1) == 0)) {
LAB_00c39d98:
      bVar8 = false;
    }
    else {
      local_b0 = CONCAT53(local_b0._3_5_,0x2e02);
      uVar12 = FUN_00c3caf8(param_1,&local_b0);
      pvVar29 = local_a0;
      if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      if (((uVar12 & 1) == 0) || (uVar12 = FUN_00c3d340(param_1,&local_98), (uVar12 & 1) == 0))
      goto LAB_00c39b68;
      local_b0 = CONCAT53(local_b0._3_5_,0x2f02);
      uVar12 = FUN_00c3caf8(param_1,&local_b0);
      pvVar29 = local_a0;
      if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      if (((uVar12 & 1) == 0) || (uVar12 = FUN_00c3d00c(param_1,&local_138), (uVar12 & 1) == 0))
      goto LAB_00c39d98;
      pcVar26 = (char *)(local_180 >> 1 & 0x7f);
      pbVar14 = (byte *)((ulong)&local_180 | 1);
      if ((local_180 & 1) != 0) {
        pcVar26 = local_178;
        pbVar14 = local_170;
      }
      local_100 = (char *)0x0;
      local_f8 = (void *)0x0;
      local_108 = 0;
      if ((char *)0xffffffffffffffef < pcVar26 + 1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pcVar26 + 1 < (char *)0x17) {
        local_108 = (ulong)(byte)((int)pcVar26 << 1);
        pvVar29 = (void *)((ulong)&local_108 | 1);
        if (pcVar26 != (char *)0x0) goto LAB_00c3a778;
      }
      else {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        pvVar29 = (void *)(**(code **)(*plVar30 + 0x10))
                                    (plVar30,(ulong)(pcVar26 + 0x11) & 0xfffffffffffffff0,8);
        local_108 = (ulong)(pcVar26 + 0x11) & 0xfffffffffffffff0 | 1;
        local_100 = pcVar26;
        local_f8 = pvVar29;
LAB_00c3a778:
        memcpy(pvVar29,pbVar14,(size_t)pcVar26);
      }
      *(char *)((long)pvVar29 + (long)pcVar26) = '\0';
      std::string::append((char *)&local_108,0x3bdface);
      pvVar29 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar29 = local_70;
      }
      puVar16 = (ulong *)std::string::append((char *)&local_108,(ulong)pvVar29);
      local_e8 = puVar16[1];
      local_e0 = (void *)puVar16[2];
      local_f0 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      puVar16 = (ulong *)std::string::append((char *)&local_f0);
      uStack_c0 = puVar16[1];
      local_b8 = puVar16[2];
      local_c8 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      uVar12 = (ulong)&local_98 | 1;
      if ((local_98 & 1) != 0) {
        uVar12 = local_88;
      }
      puVar16 = (ulong *)std::string::append((char *)&local_c8,uVar12);
      uStack_a8 = puVar16[1];
      local_a0 = (void *)puVar16[2];
      local_b0 = *puVar16;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      psVar20 = (string *)std::string::append((char *)&local_b0);
      pvVar18 = local_140;
      sVar5 = *psVar20;
      pvVar29 = *(void **)(psVar20 + 0x10);
      sVar6 = psVar20[1];
      uStack_d0 = (undefined6)((ulong)*(undefined8 *)(psVar20 + 8) >> 0x10);
      uStack_d8 = (undefined6)*(undefined8 *)(psVar20 + 2);
      local_d2 = (undefined2)((ulong)*(undefined8 *)(psVar20 + 2) >> 0x30);
      *(undefined8 *)(psVar20 + 0x10) = 0;
      *(undefined8 *)psVar20 = 0;
      *(undefined8 *)(psVar20 + 8) = 0;
      if ((((byte)local_150 & 1) != 0) && (local_140 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar18,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar18,0,8);
        }
      }
      pvVar18 = local_a0;
      uStack_14e = uStack_d8;
      local_148 = local_d2;
      uStack_146 = uStack_d0;
      local_150 = sVar5;
      sStack_14f = sVar6;
      local_140 = pvVar29;
      if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar18,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar18,0,8);
        }
      }
      uVar12 = local_b8;
      if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,uVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,uVar12,0,8);
        }
      }
      pvVar29 = local_e0;
      if (((local_f0 & 1) != 0) && (local_e0 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      pvVar29 = local_f8;
      if (((local_108 & 1) != 0) && (local_f8 != (void *)0x0)) {
        lVar24 = tpidr_el0;
        plVar30 = *(long **)(lVar24 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar24 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
      uVar28 = CONCAT62(uStack_146,local_148);
      uVar22 = (ulong)((byte)local_150 >> 1);
      uVar12 = uVar22;
      if (((byte)local_150 & 1) != 0) {
        uVar12 = uVar28;
      }
      if (uVar12 == 0x14) {
        iVar9 = std::string::compare
                          ((ulong)&local_150,0,(char *)0xffffffffffffffff,
                           (ulong)PTR_s_type_googleapis_com__047dadb0);
        if (iVar9 != 0) {
          uVar28 = CONCAT62(uStack_146,local_148);
          uVar22 = (ulong)((byte)local_150 >> 1);
          goto LAB_00c3a964;
        }
      }
      else {
LAB_00c3a964:
        if (((byte)local_150 & 1) != 0) {
          uVar22 = uVar28;
        }
        if ((uVar22 != 0x14) ||
           (iVar9 = std::string::compare
                              ((ulong)&local_150,0,(char *)0xffffffffffffffff,
                               (ulong)PTR_s_type_googleprod_com__047dadb8), iVar9 != 0)) {
          std::operator+("TextFormat::Parser for Any supports only type.googleapis.com and type.googleprod.com, but found \""
                         ,&local_150);
          puVar16 = (ulong *)std::string::append((char *)&local_c8);
          uStack_a8 = puVar16[1];
          local_a0 = (void *)puVar16[2];
          local_b0 = *puVar16;
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_b0);
          pvVar29 = local_a0;
          if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
            lVar24 = tpidr_el0;
            plVar30 = *(long **)(lVar24 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar24 + 0x30) = DAT_04859430;
            }
            uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,pvVar29,0,8);
            }
          }
          uVar12 = local_b8;
          if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
            lVar24 = tpidr_el0;
            plVar30 = *(long **)(lVar24 + 0x30);
            if (plVar30 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar30 = DAT_04859430;
              *(long **)(lVar24 + 0x30) = DAT_04859430;
            }
            uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
            if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
              (**(code **)(*plVar30 + 0x18))(plVar30,uVar12,0,8);
            }
            else {
              FUN_00c48fe8(plVar30,uVar12,0,8);
            }
          }
          bVar8 = false;
          goto LAB_00c39da0;
        }
      }
      bVar8 = true;
    }
  }
LAB_00c39da0:
  uVar12 = local_88;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    lVar24 = tpidr_el0;
    plVar30 = *(long **)(lVar24 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar24 + 0x30) = DAT_04859430;
    }
    uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,uVar12,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,uVar12,0,8);
    }
  }
  pvVar29 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
    lVar24 = tpidr_el0;
    plVar30 = *(long **)(lVar24 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar24 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,pvVar29,0,8);
    }
  }
  pbVar14 = local_170;
  if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
    lVar24 = tpidr_el0;
    plVar30 = *(long **)(lVar24 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar24 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar12 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,pbVar14,0,8);
    }
  }
  if (bVar8) {
    local_180 = CONCAT53(local_180._3_5_,0x5d02);
    uVar12 = FUN_00c3caf8(param_1,&local_180);
    pbVar14 = local_170;
    if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
      lVar24 = tpidr_el0;
      plVar30 = *(long **)(lVar24 + 0x30);
      if (plVar30 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar30 = DAT_04859430;
        *(long **)(lVar24 + 0x30) = DAT_04859430;
      }
      uVar22 = (**(code **)(*plVar30 + 0xf8))(plVar30);
      if (((uVar22 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
      }
      else {
        FUN_00c48fe8(plVar30,pbVar14,0,8);
      }
    }
    if ((uVar12 & 1) == 0) goto LAB_00c39e54;
    local_180 = CONCAT53(local_180._3_5_,0x3a02);
    bVar4 = *(byte *)(param_1 + 0x30);
    uVar22 = (ulong)(bVar4 >> 1);
    uVar12 = uVar22;
    if ((bVar4 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar12 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == ':') {
          pcVar26 = (char *)(param_1 + 0x32);
          pcVar27 = (char *)((ulong)&local_180 | 2);
          do {
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_00c3a234;
            cVar2 = *pcVar27;
            cVar3 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar27 = pcVar27 + 1;
          } while (cVar3 == cVar2);
        }
      }
      else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00c3a234:
        FUN_00c2f698(lVar19);
      }
    }
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    lVar19 = (**(code **)(*param_2 + 0xb8))(param_2);
    lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10);
    iVar9 = FUN_00b7bcfc(*(undefined8 *)(lVar19 + 0x20),lVar19,&local_138);
    if (extraout_x1_01 == 0 || iVar9 != 1) {
      std::operator+("Could not find type \"",(string *)&local_138);
      puVar16 = (ulong *)std::string::append((char *)&local_80);
      local_178 = (char *)puVar16[1];
      local_170 = (byte *)puVar16[2];
      local_180 = *puVar16;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   &local_180);
      pbVar14 = local_170;
      if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pbVar14,0,8);
        }
      }
      pvVar29 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pvVar29,0,8);
        }
      }
LAB_00c3b4d8:
      uVar10 = 0;
    }
    else {
      FUN_00c32f7c(&local_180);
      FUN_00bb1344(&uStack_160);
      plVar30 = (long *)FUN_00c312f0(&local_180,extraout_x1_01);
      FUN_00bb14b8(&uStack_160);
      if (plVar30 == (long *)0x0) {
        FUN_00c330ec(&local_180);
        goto LAB_00c3b4d8;
      }
      plVar30 = (long *)(**(code **)(*plVar30 + 0x18))(plVar30);
      local_80 = 0;
      local_78 = (byte *)0x0;
      local_70 = (void *)0x0;
      uVar12 = FUN_00c4059c(param_1,&local_80);
      local_188 = plVar11;
      if ((uVar12 & 1) == 0) goto LAB_00c3aba4;
      std::string::string((string *)&local_98,(string *)&local_80);
      uVar22 = FUN_00c40774(param_1,plVar30,&local_98);
      uVar12 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar19 = tpidr_el0;
        plVar11 = *(long **)(lVar19 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar28 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar28 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,uVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,uVar12,0,8);
        }
      }
      if ((uVar22 & 1) == 0) goto LAB_00c3aba4;
      if ((*(char *)(param_1 + 0xe8) == '\0') &&
         (uVar12 = (**(code **)(*plVar30 + 0x40))(plVar30), (uVar12 & 1) == 0)) {
        std::operator+("Value of type \"",(string *)&local_138);
        puVar16 = (ulong *)std::string::append((char *)&local_c8);
        uStack_a8 = puVar16[1];
        local_a0 = (void *)puVar16[2];
        local_b0 = *puVar16;
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_b0);
        if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
          lVar19 = tpidr_el0;
          plVar11 = *(long **)(lVar19 + 0x30);
          pvVar29 = local_a0;
          if (plVar11 == (long *)0x0) goto LAB_00c3c12c;
          goto LAB_00c3b328;
        }
        goto LAB_00c3ab9c;
      }
      FUN_00c11da8(plVar30,&local_f0);
      bVar8 = true;
LAB_00c3aba8:
      pvVar29 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
        lVar19 = tpidr_el0;
        plVar11 = *(long **)(lVar19 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar11,pvVar29,0,8);
        }
      }
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 8))(plVar30);
      }
      FUN_00c330ec(&local_180);
      uVar12 = local_138;
      if (!bVar8) goto LAB_00c3b4d8;
      local_178 = (char *)0x0;
      local_170 = (byte *)0x0;
      local_180 = 0;
      uVar22 = local_138 >> 1 & 0x7f;
      if ((local_138 & 1) != 0) {
        uVar22 = local_130;
      }
      bVar8 = ((byte)local_150 & 1) != 0;
      pcVar26 = (char *)(ulong)((byte)local_150 >> 1);
      if (bVar8) {
        pcVar26 = (char *)CONCAT62(uStack_146,local_148);
      }
      pvVar29 = (void *)((ulong)&local_150 | 1);
      if (bVar8) {
        pvVar29 = local_140;
      }
      pcVar27 = pcVar26 + uVar22;
      if ((char *)0xffffffffffffffef < pcVar27) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pcVar27 < (char *)0x17) {
        local_180 = (ulong)(byte)((int)pcVar26 << 1);
        pbVar14 = (byte *)((ulong)&local_180 | 1);
      }
      else {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        pbVar14 = (byte *)(**(code **)(*plVar30 + 0x10))
                                    (plVar30,(ulong)(pcVar27 + 0x10) & 0xfffffffffffffff0,8);
        local_180 = (ulong)(pcVar27 + 0x10) & 0xfffffffffffffff0 | 1;
        local_178 = pcVar26;
        local_170 = pbVar14;
      }
      if (pcVar26 != (char *)0x0) {
        memcpy(pbVar14,pvVar29,(size_t)pcVar26);
      }
      pbVar14[(long)pcVar26] = 0;
      uVar22 = (ulong)&local_138 | 1;
      if ((uVar12 & 1) != 0) {
        uVar22 = local_128;
      }
      std::string::append((char *)&local_180,uVar22);
      (**(code **)(*local_188 + 0x120))(local_188,param_2,uVar15,&local_180);
      pbVar14 = local_170;
      if (((local_180 & 1) != 0) && (local_170 != (byte *)0x0)) {
        lVar19 = tpidr_el0;
        plVar30 = *(long **)(lVar19 + 0x30);
        if (plVar30 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar30 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
        if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar30,pbVar14,0,8);
        }
      }
      (**(code **)(*local_188 + 0x120))(local_188,param_2,lVar13,&local_f0);
      uVar10 = 1;
    }
    pvVar29 = local_e0;
    if (((local_f0 & 1) != 0) && (local_e0 != (void *)0x0)) {
      lVar19 = tpidr_el0;
      plVar30 = *(long **)(lVar19 + 0x30);
      if (plVar30 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar30 = DAT_04859430;
        *(long **)(lVar19 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
      if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
      }
      else {
        FUN_00c48fe8(plVar30,pvVar29,0,8);
      }
    }
  }
  else {
LAB_00c39e54:
    uVar10 = 0;
  }
  pvVar29 = local_140;
  if ((((byte)local_150 & 1) != 0) && (local_140 != (void *)0x0)) {
    lVar19 = tpidr_el0;
    plVar30 = *(long **)(lVar19 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar19 + 0x30) = DAT_04859430;
    }
    uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,pvVar29,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,pvVar29,0,8);
    }
  }
  uVar15 = local_128;
  if (((local_138 & 1) != 0) && (local_128 != 0)) {
    lVar19 = tpidr_el0;
    plVar30 = *(long **)(lVar19 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar19 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar12 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,uVar15,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,uVar15,0,8);
    }
  }
LAB_00c3a658:
  pbVar14 = local_110;
  if (((local_120 & 1) != 0) && (local_110 != (byte *)0x0)) {
    lVar19 = tpidr_el0;
    plVar30 = *(long **)(lVar19 + 0x30);
    if (plVar30 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar30 = DAT_04859430;
      *(long **)(lVar19 + 0x30) = DAT_04859430;
    }
    uVar15 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,pbVar14,0,8);
    }
    else {
      FUN_00c48fe8(plVar30,pbVar14,0,8);
    }
  }
  return uVar10 & 1;
}


