/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c346cc; name: FUN_00c346cc
 */


void FUN_00c346cc(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  long extraout_x1;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 uVar21;
  ulong uVar22;
  char *pcVar23;
  char *pcVar24;
  long *plVar25;
  size_t sVar26;
  ulong uVar27;
  uint local_10c;
  byte local_108 [16];
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined1 auStack_d0 [8];
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char local_b0 [24];
  ulong local_98 [2];
  char *local_88;
  size_t local_80;
  size_t local_78;
  void *local_70;
  
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar5 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  pbVar6 = *(byte **)(lVar4 + 8);
  uVar8 = (ulong)(*pbVar6 >> 1);
  if ((*pbVar6 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar6 + 8);
  }
  if (uVar8 != 0x13) goto LAB_00c3475c;
  iVar3 = std::string::compare
                    ((ulong)pbVar6,0,(char *)0xffffffffffffffff,
                     (ulong)PTR_s_google_protobuf_Any_047dada8);
  if (iVar3 != 0) goto LAB_00c3475c;
  if (*(char *)(param_1 + 9) == '\0') goto LAB_00c3475c;
  lVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  pbVar6 = *(byte **)(lVar4 + 8);
  uVar8 = (ulong)(*pbVar6 >> 1);
  if ((*pbVar6 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar6 + 8);
  }
  if (uVar8 != 0x13) goto LAB_00c3475c;
  iVar3 = std::string::compare
                    ((ulong)pbVar6,0,(char *)0xffffffffffffffff,
                     (ulong)PTR_s_google_protobuf_Any_047dada8);
  if (iVar3 != 0) goto LAB_00c3475c;
  lVar10 = FUN_00b7c9fc(lVar4,1);
  uVar8 = FUN_00b7c9fc(lVar4,2);
  if (lVar10 == 0) goto LAB_00c3475c;
  if (uVar8 == 0) goto LAB_00c3475c;
  if (*(int *)(lVar10 + 0x3c) != 9) goto LAB_00c3475c;
  if (*(int *)(uVar8 + 0x3c) != 0xc) goto LAB_00c3475c;
  plVar25 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  (**(code **)(*plVar25 + 0xc0))(&local_80,plVar25,param_2,lVar10);
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (char *)0x0;
  uVar15 = FUN_02a02da0(&local_80,local_98);
  if ((uVar15 & 1) != 0) {
    lVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
    lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    iVar3 = FUN_00b7bcfc(*(undefined8 *)(lVar4 + 0x20),lVar4,local_98);
    if ((extraout_x1 != 0) && (iVar3 == 1)) {
      FUN_00c32f7c(&local_f0);
      FUN_00bb1344(auStack_d0);
      plVar16 = (long *)FUN_00c312f0(&local_f0,extraout_x1);
      FUN_00bb14b8(auStack_d0);
      plVar16 = (long *)(**(code **)(*plVar16 + 0x18))(plVar16);
      (**(code **)(*plVar25 + 0xc0))(local_108,plVar25,param_2,uVar8);
      uVar15 = FUN_00c10f68(plVar16,local_108);
      if ((uVar15 & 1) == 0) {
        local_b8 = (char *)CONCAT44(local_b8._4_4_,0x62a);
        local_c8 = (char *)CONCAT44(local_c8._4_4_,1);
        local_b0[0] = '\0';
        local_b0[1] = '\0';
        local_b0[2] = '\0';
        local_b0[3] = '\0';
        local_b0[4] = '\0';
        local_b0[5] = '\0';
        local_b0[6] = '\0';
        local_b0[7] = '\0';
        local_b0[8] = '\0';
        local_b0[9] = '\0';
        local_b0[10] = '\0';
        local_b0[0xb] = '\0';
        local_b0[0xc] = '\0';
        local_b0[0xd] = '\0';
        local_b0[0xe] = '\0';
        local_b0[0xf] = '\0';
        local_c0 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
        ;
        local_b0[0x10] = '\0';
        local_b0[0x11] = '\0';
        local_b0[0x12] = '\0';
        local_b0[0x13] = '\0';
        local_b0[0x14] = '\0';
        local_b0[0x15] = '\0';
        local_b0[0x16] = '\0';
        local_b0[0x17] = '\0';
        pvVar11 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar11 = local_70;
        }
        std::string::append(local_b0,(ulong)pvVar11);
        std::string::append(local_b0);
        FUN_00bb0e90(&local_c8);
        FUN_00bb0d74(&local_c8);
        uVar8 = 0;
      }
      else {
        bVar2 = (local_80 & 1) != 0;
        local_b8 = (char *)0x0;
        local_c8 = (char *)0x0;
        local_c0 = (char *)0x0;
        sVar26 = local_80 >> 1 & 0x7f;
        if (bVar2) {
          sVar26 = local_78;
        }
        pvVar11 = (void *)((ulong)&local_80 | 1);
        if (bVar2) {
          pvVar11 = local_70;
        }
        std::string::resize((ulong)&local_c8,(char)sVar26 + '\x02');
        pcVar23 = (char *)((ulong)&local_c8 | 1);
        if (((ulong)local_c8 & 1) != 0) {
          pcVar23 = local_b8;
        }
        *pcVar23 = '[';
        memcpy(pcVar23 + 1,pvVar11,sVar26);
        (pcVar23 + 1)[sVar26] = ']';
        pcVar23 = (char *)((ulong)local_c8 >> 1 & 0x7f);
        pcVar24 = (char *)((ulong)&local_c8 | 1);
        if (((ulong)local_c8 & 1) != 0) {
          pcVar23 = local_c0;
          pcVar24 = local_b8;
        }
        if (pcVar23 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)0x0;
          pcVar9 = (char *)0x0;
          do {
            if (pcVar24[(long)pcVar17] == '\n') {
              FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)(pcVar17 + 1) - (long)pcVar9);
              *(undefined1 *)(param_3 + 0x14) = 1;
              pcVar9 = pcVar17 + 1;
            }
            pcVar17 = pcVar17 + 1;
          } while (pcVar17 != pcVar23);
        }
        FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)pcVar23 - (long)pcVar9);
        pcVar23 = local_b8;
        if ((((ulong)local_c8 & 1) != 0) && (local_b8 != (char *)0x0)) {
          lVar4 = tpidr_el0;
          plVar25 = *(long **)(lVar4 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pcVar23,0,8);
          }
        }
        plVar25 = (long *)(param_1 + 0x28);
        plVar14 = (long *)*plVar25;
        plVar20 = *(long **)(param_1 + 0x18);
        if (plVar14 != (long *)0x0) {
          plVar13 = plVar25;
          do {
            if ((ulong)plVar14[4] >= uVar8) {
              plVar13 = plVar14;
            }
            plVar14 = (long *)plVar14[(ulong)plVar14[4] < uVar8];
          } while (plVar14 != (long *)0x0);
          if ((plVar13 != plVar25) && ((ulong)plVar13[4] <= uVar8)) {
            plVar20 = (long *)plVar13[5];
          }
        }
        (**(code **)(*plVar20 + 0x68))
                  (&local_c8,plVar20,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4));
        pcVar23 = (char *)((ulong)local_c8 >> 1 & 0x7f);
        pcVar24 = (char *)((ulong)&local_c8 | 1);
        if (((ulong)local_c8 & 1) != 0) {
          pcVar23 = local_c0;
          pcVar24 = local_b8;
        }
        if (pcVar23 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)0x0;
          pcVar9 = (char *)0x0;
          do {
            if (pcVar24[(long)pcVar17] == '\n') {
              FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)(pcVar17 + 1) - (long)pcVar9);
              *(undefined1 *)(param_3 + 0x14) = 1;
              pcVar9 = pcVar17 + 1;
            }
            pcVar17 = pcVar17 + 1;
          } while (pcVar17 != pcVar23);
        }
        FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)pcVar23 - (long)pcVar9);
        pcVar23 = local_b8;
        if ((((ulong)local_c8 & 1) != 0) && (local_b8 != (char *)0x0)) {
          lVar4 = tpidr_el0;
          plVar25 = *(long **)(lVar4 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pcVar23,0,8);
          }
        }
        std::string::append((char *)(param_3 + 0x18));
        FUN_00c346cc(param_1,plVar16,param_3);
        FUN_00c36b10(param_3);
        (**(code **)(*plVar20 + 0x70))
                  (&local_c8,plVar20,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4));
        pcVar23 = (char *)((ulong)local_c8 >> 1 & 0x7f);
        pcVar24 = (char *)((ulong)&local_c8 | 1);
        if (((ulong)local_c8 & 1) != 0) {
          pcVar23 = local_c0;
          pcVar24 = local_b8;
        }
        if (pcVar23 == (char *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)0x0;
          pcVar9 = (char *)0x0;
          do {
            if (pcVar24[(long)pcVar17] == '\n') {
              FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)(pcVar17 + 1) - (long)pcVar9);
              *(undefined1 *)(param_3 + 0x14) = 1;
              pcVar9 = pcVar17 + 1;
            }
            pcVar17 = pcVar17 + 1;
          } while (pcVar17 != pcVar23);
        }
        FUN_02a007d0(param_3,pcVar24 + (long)pcVar9,(long)pcVar23 - (long)pcVar9);
        pcVar23 = local_b8;
        if ((((ulong)local_c8 & 1) != 0) && (local_b8 != (char *)0x0)) {
          lVar4 = tpidr_el0;
          plVar25 = *(long **)(lVar4 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pcVar23,0,8);
          }
        }
        uVar8 = 1;
      }
      if (((local_108[0] & 1) != 0) && (local_f8 != 0)) {
        lVar4 = tpidr_el0;
        plVar25 = *(long **)(lVar4 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,local_f8,0,8);
        }
        else {
          FUN_00c48fe8(plVar25,local_f8,0,8);
        }
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      FUN_00c330ec(&local_f0);
      goto LAB_00c358a8;
    }
    local_b0[0x10] = '\0';
    local_b0[0x11] = '\0';
    local_b0[0x12] = '\0';
    local_b0[0x13] = '\0';
    local_b0[0x14] = '\0';
    local_b0[0x15] = '\0';
    local_b0[0x16] = '\0';
    local_b0[0x17] = '\0';
    local_c8 = (char *)CONCAT44(local_c8._4_4_,1);
    local_b8 = (char *)CONCAT44(local_b8._4_4_,0x622);
    local_c0 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
    ;
    local_b0[0] = '\0';
    local_b0[1] = '\0';
    local_b0[2] = '\0';
    local_b0[3] = '\0';
    local_b0[4] = '\0';
    local_b0[5] = '\0';
    local_b0[6] = '\0';
    local_b0[7] = '\0';
    local_b0[8] = '\0';
    local_b0[9] = '\0';
    local_b0[10] = '\0';
    local_b0[0xb] = '\0';
    local_b0[0xc] = '\0';
    local_b0[0xd] = '\0';
    local_b0[0xe] = '\0';
    local_b0[0xf] = '\0';
    std::string::append(local_b0);
    pvVar11 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar11 = local_70;
    }
    std::string::append(local_b0,(ulong)pvVar11);
    std::string::append(local_b0);
    FUN_00bb0e90(&local_c8);
    FUN_00bb0d74(&local_c8);
  }
  uVar8 = 0;
LAB_00c358a8:
  if ((local_98[0] & 1) == 0) goto LAB_00c358b0;
  if (local_88 == (char *)0x0) goto LAB_00c358b0;
  uVar15 = tpidr_el0;
  plVar25 = *(long **)(uVar15 + 0x30);
  pcVar23 = local_88;
  if (plVar25 == (long *)0x0) goto LAB_00c35c0c;
LAB_00c358e4:
  uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
  if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
  }
  else {
    FUN_00c48fe8(plVar25,pcVar23,0,8);
  }
LAB_00c358b0:
  pvVar11 = local_70;
  if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
    lVar4 = tpidr_el0;
    plVar25 = *(long **)(lVar4 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar25 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,pvVar11,0,8);
    }
    else {
      FUN_00c48fe8(plVar25,pvVar11,0,8);
    }
  }
  if ((uVar8 & 1) == 0) {
LAB_00c3475c:
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    (**(code **)(*plVar5 + 0x80))(plVar5,param_2,&local_80);
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_02a00a00(local_80,local_78);
    }
    uVar8 = tpidr_el0;
    if (local_78 != local_80) {
      uVar22 = 0;
LAB_00c3486c:
      uVar19 = *(ulong *)(local_80 + uVar22 * 8);
      bVar2 = *(int *)(uVar19 + 0x40) != 3;
      if (*(char *)(param_1 + 6) != '\0') {
        if (bVar2) goto LAB_00c348e0;
        if (*(int *)(PTR_DAT_047dad58 + (ulong)*(uint *)(uVar19 + 0x3c) * 4) - 9U < 2)
        goto LAB_00c348c0;
        FUN_00c37d88(param_1,param_2,plVar5,uVar19,param_3);
        goto LAB_00c351d0;
      }
      if (bVar2) {
LAB_00c348e0:
        local_10c = (**(code **)(*plVar5 + 0x28))(plVar5,param_2,uVar19);
        local_10c = local_10c & 1;
      }
      else {
LAB_00c348c0:
        local_10c = (**(code **)(*plVar5 + 0x30))(plVar5,param_2,uVar19);
      }
      local_c0 = (char *)0x0;
      local_b8 = (char *)0x0;
      local_c8 = (char *)0x0;
      if ((*(int *)(uVar19 + 0x3c) != 0xb) ||
         (*(char *)(*(long *)(*(long *)(uVar19 + 0x68) + 0x20) + 0x53) == '\0')) goto LAB_00c34ca0;
      lVar4 = (**(code **)(*plVar5 + 0x290))(plVar5,param_2,uVar19,10,0xffffffff,0);
      if (*(int *)(lVar4 + 8) == 0) {
        pcVar24 = (char *)0x0;
        pcVar23 = (char *)0x0;
        goto LAB_00c34bcc;
      }
      puVar1 = (undefined8 *)0x0;
      if (*(long *)(lVar4 + 0x10) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x10) + 8);
      }
      pcVar9 = (char *)0x0;
      pcVar17 = (char *)0x0;
LAB_00c34978:
      pcVar23 = local_c8;
      if (pcVar17 == pcVar9) {
        sVar26 = (long)pcVar9 - (long)local_c8;
        uVar15 = (long)sVar26 >> 3;
        uVar27 = uVar15 + 1;
        if (uVar27 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar27 <= (ulong)((long)sVar26 >> 2)) {
          uVar27 = (long)sVar26 >> 2;
        }
        if (0xffffffffffffffe < uVar15) {
          uVar27 = 0x1fffffffffffffff;
        }
        if (uVar27 == 0) {
          pcVar9 = (char *)0x0;
        }
        else {
          if (uVar27 >> 0x3d != 0) goto LAB_00c35c08;
          plVar25 = *(long **)(uVar8 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(uVar8 + 0x30) = DAT_04859430;
          }
          pcVar9 = (char *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar27 << 3,8);
        }
        pcVar17 = pcVar9 + uVar27 * 8;
        pcVar24 = pcVar9 + uVar15 * 8 + 8;
        *(undefined8 *)(pcVar9 + uVar15 * 8) = *puVar1;
        if (0 < (long)sVar26) {
          memcpy(pcVar9,pcVar23,sVar26);
        }
        local_c8 = pcVar9;
        local_c0 = pcVar24;
        local_b8 = pcVar17;
        if (pcVar23 != (char *)0x0) {
          plVar25 = *(long **)(uVar8 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(uVar8 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar15 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pcVar23,0,8);
          }
        }
      }
      else {
        pcVar24 = pcVar17 + 8;
        *(undefined8 *)pcVar17 = *puVar1;
        local_c0 = pcVar24;
      }
      lVar10 = 0;
      if (*(long *)(lVar4 + 0x10) != 0) {
        lVar10 = *(long *)(lVar4 + 0x10) + 8;
      }
      if (puVar1 + 1 == (undefined8 *)(lVar10 + (long)*(int *)(lVar4 + 8) * 8)) goto LAB_00c34bb8;
      pcVar9 = local_b8;
      pcVar17 = pcVar24;
      puVar1 = puVar1 + 1;
      goto LAB_00c34978;
    }
LAB_00c347a8:
    if (*(char *)(param_1 + 7) == '\0') {
      uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
      FUN_00c35e7c(param_1,uVar7,param_3);
    }
    sVar26 = local_80;
    if (local_80 != 0) {
      plVar5 = *(long **)(uVar8 + 0x30);
      local_78 = local_80;
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(uVar8 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,sVar26,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,sVar26,0,8);
      }
    }
  }
  return;
LAB_00c35c08:
  FUN_00c40590();
LAB_00c35c0c:
  if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar25 = DAT_04859430;
  *(long **)(uVar15 + 0x30) = DAT_04859430;
  goto LAB_00c358e4;
LAB_00c34bb8:
  pcVar23 = local_c8;
LAB_00c34bcc:
  local_f0 = *(ulong *)(*(long *)(uVar19 + 0x68) + 0x30);
  uVar15 = (long)pcVar24 - (long)pcVar23 >> 3;
  if (0x400 < (long)pcVar24 - (long)pcVar23) {
    uVar27 = uVar15;
    if (0xffffffffffffffe < (long)uVar15) {
      uVar27 = 0xfffffffffffffff;
    }
    do {
      pvVar11 = operator_new(uVar27 << 3,(nothrow_t *)PTR_nothrow_047cdb88);
      if (pvVar11 != (void *)0x0) {
        FUN_02a01f80(pcVar23,pcVar24,&local_f0,uVar15,pvVar11,uVar27);
        plVar25 = *(long **)(uVar8 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(uVar8 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,pvVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar25,pvVar11,0,8);
        }
        goto LAB_00c34ca0;
      }
      uVar27 = uVar27 >> 1;
    } while (uVar27 != 0);
  }
  FUN_02a01f80(pcVar23,pcVar24,&local_f0,uVar15,0,0);
LAB_00c34ca0:
  if (0 < (int)local_10c) {
    uVar15 = 0;
    do {
      uVar21 = (undefined4)uVar15;
      if (*(int *)(uVar19 + 0x40) != 3) {
        uVar21 = 0xffffffff;
      }
      FUN_00c37ebc(param_1,param_2,plVar5,uVar19,param_3);
      if ((*(uint *)(uVar19 + 0x3c) & 0xfffffffe) == 10) {
        plVar25 = *(long **)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          lVar10 = param_1 + 0x28;
          do {
            bVar2 = *(ulong *)(lVar4 + 0x20) < uVar19;
            if (!bVar2) {
              lVar10 = lVar4;
            }
            lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
          } while (lVar4 != 0);
          if ((lVar10 != param_1 + 0x28) && (*(ulong *)(lVar10 + 0x20) <= uVar19)) {
            plVar25 = *(long **)(lVar10 + 0x28);
          }
        }
        if (*(int *)(uVar19 + 0x40) == 3) {
          if ((*(uint *)(uVar19 + 0x3c) == 0xb) &&
             (*(char *)(*(long *)(*(long *)(uVar19 + 0x68) + 0x20) + 0x53) != '\0')) {
            uVar7 = *(undefined8 *)(local_c8 + uVar15 * 8);
          }
          else {
            uVar7 = (**(code **)(*plVar5 + 0x1a0))(plVar5,param_2,uVar19,uVar15 & 0xffffffff);
          }
        }
        else {
          uVar7 = (**(code **)(*plVar5 + 0xd8))(plVar5,param_2,uVar19,0);
        }
        (**(code **)(*plVar25 + 0x68))
                  (&local_f0,plVar25,uVar7,uVar21,local_10c,*(undefined1 *)(param_1 + 4));
        uVar27 = (ulong)&local_f0 | 1;
        uVar12 = local_f0 >> 1 & 0x7f;
        if ((local_f0 & 1) != 0) {
          uVar27 = local_e0;
          uVar12 = local_e8;
        }
        if (uVar12 == 0) {
          lVar4 = 0;
        }
        else {
          uVar18 = 0;
          lVar4 = 0;
          do {
            if (*(char *)(uVar27 + uVar18) == '\n') {
              FUN_02a007d0(param_3,uVar27 + lVar4,(uVar18 + 1) - lVar4);
              *(undefined1 *)(param_3 + 0x14) = 1;
              lVar4 = uVar18 + 1;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar12);
        }
        FUN_02a007d0(param_3,uVar27 + lVar4,uVar12 - lVar4);
        uVar27 = local_e0;
        if (((local_f0 & 1) != 0) && (local_e0 != 0)) {
          plVar16 = *(long **)(uVar8 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(uVar8 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar12 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,uVar27,0,8);
          }
          else {
            FUN_00c48fe8(plVar16,uVar27,0,8);
          }
        }
        std::string::append((char *)(param_3 + 0x18));
        FUN_00c346cc(param_1,uVar7,param_3);
        FUN_00c36b10(param_3);
        (**(code **)(*plVar25 + 0x70))
                  (&local_f0,plVar25,uVar7,uVar21,local_10c,*(undefined1 *)(param_1 + 4));
        uVar27 = (ulong)&local_f0 | 1;
        uVar12 = local_f0 >> 1 & 0x7f;
        if ((local_f0 & 1) != 0) {
          uVar27 = local_e0;
          uVar12 = local_e8;
        }
        if (uVar12 == 0) {
          lVar4 = 0;
        }
        else {
          uVar18 = 0;
          lVar4 = 0;
          do {
            if (*(char *)(uVar27 + uVar18) == '\n') {
              FUN_02a007d0(param_3,uVar27 + lVar4,(uVar18 + 1) - lVar4);
              *(undefined1 *)(param_3 + 0x14) = 1;
              lVar4 = uVar18 + 1;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar12);
        }
        FUN_02a007d0(param_3,uVar27 + lVar4,uVar12 - lVar4);
        uVar27 = local_e0;
        if (((local_f0 & 1) != 0) && (local_e0 != 0)) {
          plVar25 = *(long **)(uVar8 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(uVar8 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar12 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,uVar27,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,uVar27,0,8);
          }
        }
      }
      else {
        FUN_02a007d0(param_3,&DAT_03c4d655,2);
        FUN_00c36d80(param_1,param_2,plVar5,uVar19,uVar21,param_3);
        if (*(char *)(param_1 + 4) == '\0') {
          FUN_02a007d0(param_3,&DAT_03c67c74,1);
          *(undefined1 *)(param_3 + 0x14) = 1;
        }
        else {
          FUN_02a007d0(param_3,&DAT_03bf391f,1);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != local_10c);
  }
  pcVar23 = local_c8;
  if (local_c8 != (char *)0x0) {
    local_c0 = local_c8;
    plVar25 = *(long **)(uVar8 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar25 = DAT_04859430;
      *(long **)(uVar8 + 0x30) = DAT_04859430;
    }
    uVar15 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar15 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,pcVar23,0,8);
    }
    else {
      FUN_00c48fe8(plVar25,pcVar23,0,8);
    }
  }
LAB_00c351d0:
  uVar22 = uVar22 + 1;
  if ((ulong)((long)(local_78 - local_80) >> 3) <= uVar22) goto LAB_00c347a8;
  goto LAB_00c3486c;
}


