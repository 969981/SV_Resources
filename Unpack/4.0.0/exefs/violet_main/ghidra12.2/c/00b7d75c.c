/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7d75c; name: FUN_00b7d75c
 */


long FUN_00b7d75c(long param_1,long param_2)

{
  char *__s2;
  undefined *puVar1;
  undefined *puVar2;
  char *__s1;
  size_t __n;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  char *pcVar19;
  byte *pbVar20;
  string *psVar21;
  byte *pbVar22;
  byte *__s1_00;
  long *plVar23;
  string *psVar24;
  long *plVar25;
  string *psVar26;
  byte *pbVar27;
  long lVar28;
  long lVar29;
  long local_238;
  long *local_230;
  undefined8 uStack_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  string *local_1f0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  long local_190;
  ushort local_188;
  long local_178;
  ulong local_170;
  undefined *local_168;
  char *local_160;
  string *local_158;
  string *local_150;
  string *local_148;
  long local_140;
  long lStack_138;
  undefined1 auStack_130 [152];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  char *local_70;
  
  plVar23 = *(long **)(param_1 + 0x20);
  psVar24 = *(string **)(param_2 + 0x18);
  lVar11 = FUN_00badb04(plVar23 + 3,psVar24);
  if (lVar11 != 0) {
    return 0;
  }
  uStack_228 = *(undefined8 *)(param_1 + 0x10);
  local_210 = 0;
  local_208 = 0;
  local_1f0 = (string *)0x0;
  local_188 = 0;
  local_1b0 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d8 = &local_1d0;
  local_1c0 = &local_1b8;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_220 = 0;
  local_218 = 0;
  local_1b8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_238 = param_1;
  local_230 = plVar23;
  std::string::operator=((string *)&local_200,psVar24);
  plVar23 = local_230;
  local_158 = (string *)((long)&local_200 + 1);
  if ((local_200 & 1) != 0) {
    local_158 = local_1f0;
  }
  lVar11 = FUN_00ba6514(local_230 + 0x23,&local_158);
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 != 0) {
      local_158 = (string *)(PTR_DAT_047dabe0 + 0x10);
      local_150 = (string *)0x0;
      memset(auStack_130,0,0x98);
      puVar17 = PTR_LAB_047daba8;
      puVar1 = PTR_DAT_047dab98;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        local_80 = PTR_DAT_047daba0 + 0x10;
        local_78 = PTR_LAB_047daba8;
        local_70 = (char *)((ulong)local_70 & 0xffffffffffffff00);
        if (*(long *)PTR_DAT_047dab98 != 2) {
          do {
            lVar16 = *(long *)puVar1;
            if (lVar16 != 0) break;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar9) {
              *(undefined8 *)puVar1 = 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          puVar1 = PTR_DAT_047dab98;
          DataMemoryBarrier(2,3);
          if (lVar16 == 0) {
            FUN_00bb162c(&local_80);
            *(undefined8 *)PTR_DAT_047dab98 = 2;
          }
          else {
            while (lVar16 == 1) {
              sched_yield();
              lVar16 = *(long *)puVar1;
            }
          }
        }
      }
      local_140 = *(long *)PTR_DAT_047dabb0;
      local_148 = (string *)0x0;
      local_98 = 0;
      uStack_90 = 0;
      lStack_138 = local_140;
      local_88 = local_140;
      FUN_00b7f638(lVar11,&local_158);
      if ((*(int *)(lVar11 + 0x7c) == 2) && ((*(byte *)(param_2 + 0x11) >> 3 & 1) != 0)) {
        FUN_00b8050c(&local_158,"proto2");
      }
      local_80 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      local_70 = (char *)0x0;
      uVar12 = FUN_00c11da8(&local_158,&local_80);
      if ((uVar12 & 1) == 0) {
        if (((ulong)local_80 & 1) == 0) {
          local_80 = (undefined *)((ulong)local_80 & 0xffffffffffff0000);
        }
        else {
          *local_70 = '\0';
          local_78 = (undefined *)0x0;
        }
      }
      local_170 = 0;
      local_168 = (undefined *)0x0;
      local_160 = (char *)0x0;
      uVar12 = FUN_00c11da8(param_2,&local_170);
      if ((uVar12 & 1) == 0) {
        if ((local_170 & 1) == 0) {
          local_170 = local_170 & 0xffffffffffff0000;
        }
        else {
          *local_160 = '\0';
          local_168 = (undefined *)0x0;
        }
      }
      uVar12 = local_170;
      bVar6 = (byte)local_80;
      puVar17 = (undefined *)(ulong)((byte)local_80 >> 1);
      puVar1 = puVar17;
      if (((ulong)local_80 & 1) != 0) {
        puVar1 = local_78;
      }
      puVar2 = (undefined *)(local_170 >> 1 & 0x7f);
      if ((local_170 & 1) != 0) {
        puVar2 = local_168;
      }
      pcVar8 = local_160;
      if (puVar1 == puVar2) {
        pcVar19 = (char *)((ulong)&local_80 | 1);
        __s1 = pcVar19;
        if (((ulong)local_80 & 1) != 0) {
          __s1 = local_70;
        }
        __s2 = (char *)((ulong)&local_170 | 1);
        if ((local_170 & 1) != 0) {
          __s2 = local_160;
        }
        if (((ulong)local_80 & 1) == 0) {
          while (puVar1 != (undefined *)0x0) {
            if (*pcVar19 != *__s2) goto LAB_00b7da38;
            pcVar19 = pcVar19 + 1;
            __s2 = __s2 + 1;
            puVar17 = puVar17 + -1;
            puVar1 = puVar17;
          }
        }
        else if (puVar1 != (undefined *)0x0) {
          iVar10 = memcmp(__s1,__s2,(size_t)puVar1);
          bVar9 = iVar10 == 0;
          pcVar8 = local_160;
          goto joined_r0x00b7da54;
        }
        bVar9 = true;
      }
      else {
LAB_00b7da38:
        bVar9 = false;
      }
joined_r0x00b7da54:
      local_160 = pcVar8;
      if ((uVar12 & 1) != 0) {
        if (pcVar8 != (char *)0x0) {
          lVar16 = tpidr_el0;
          plVar23 = *(long **)(lVar16 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar16 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,pcVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,pcVar8,0,8);
          }
        }
        bVar6 = (byte)local_80;
      }
      pcVar8 = local_70;
      if (((bVar6 & 1) != 0) && (local_70 != (char *)0x0)) {
        lVar16 = tpidr_el0;
        plVar23 = *(long **)(lVar16 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar16 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,pcVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,pcVar8,0,8);
        }
      }
      FUN_00bb9a58(&local_158);
      if (bVar9) goto LAB_00b7e1a0;
      plVar23 = local_230;
    }
  }
  lVar11 = *plVar23;
  psVar24 = (string *)plVar23[1];
  lVar16 = (long)psVar24 - lVar11 >> 3;
  if ((long)psVar24 - lVar11 != 0) {
    pbVar27 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar27;
    __n = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      __n = *(size_t *)(pbVar27 + 8);
    }
    uVar12 = lVar16 * -0x5555555555555555;
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar15 = 0;
    if ((bVar6 & 1) == 0) {
      do {
        pbVar20 = (byte *)(lVar11 + uVar15 * 0x18);
        bVar6 = *pbVar20;
        uVar18 = (ulong)(bVar6 >> 1);
        sVar3 = uVar18;
        if ((bVar6 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar20 + 8);
        }
        if (sVar3 == __n) {
          pbVar22 = *(byte **)(lVar11 + uVar15 * 0x18 + 0x10);
          if ((bVar6 & 1) == 0) {
            pbVar22 = pbVar20 + 1;
          }
          if ((bVar6 & 1) == 0) {
            if (__n == 0) goto LAB_00b7e074;
            pbVar22 = pbVar27 + 1;
            while (pbVar20 = pbVar20 + 1, *pbVar20 == *pbVar22) {
              uVar18 = uVar18 - 1;
              pbVar22 = pbVar22 + 1;
              if (uVar18 == 0) goto LAB_00b7e074;
            }
          }
          else if ((__n == 0) || (iVar10 = memcmp(pbVar22,pbVar27 + 1,__n), iVar10 == 0))
          goto LAB_00b7e074;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar12);
    }
    else {
      do {
        pbVar20 = (byte *)(lVar11 + uVar15 * 0x18);
        bVar6 = *pbVar20;
        uVar18 = (ulong)(bVar6 >> 1);
        sVar3 = uVar18;
        if ((bVar6 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar20 + 8);
        }
        if (sVar3 == __n) {
          __s1_00 = *(byte **)(lVar11 + uVar15 * 0x18 + 0x10);
          pbVar22 = *(byte **)(pbVar27 + 0x10);
          if ((bVar6 & 1) == 0) {
            __s1_00 = pbVar20 + 1;
          }
          if ((bVar6 & 1) == 0) {
            if (__n == 0) goto LAB_00b7e074;
            while (pbVar20 = pbVar20 + 1, *pbVar20 == *pbVar22) {
              uVar18 = uVar18 - 1;
              pbVar22 = pbVar22 + 1;
              if (uVar18 == 0) goto LAB_00b7e074;
            }
          }
          else if ((__n == 0) || (iVar10 = memcmp(__s1_00,pbVar22,__n), iVar10 == 0))
          goto LAB_00b7e074;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar12);
    }
  }
  if (*(long *)(local_238 + 8) != 0) {
    psVar26 = *(string **)(param_2 + 0x18);
    if ((string *)plVar23[2] == psVar24) {
      uVar15 = lVar16 * -0x5555555555555555;
      uVar12 = uVar15 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar12 <= (ulong)(lVar16 * 0x5555555555555556)) {
        uVar12 = lVar16 * 0x5555555555555556;
      }
      if (0x555555555555554 < uVar15) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_01f6e248(&local_158,uVar12,uVar15,plVar23 + 2);
      std::string::string(local_148,psVar26);
      psVar24 = local_148 + 0x18;
      local_148 = (string *)*plVar23;
      if ((string *)plVar23[1] == local_148) {
        local_158 = local_148;
      }
      else {
        psVar26 = (string *)plVar23[1];
        do {
          psVar21 = psVar26 + -0x18;
          uVar4 = *(undefined8 *)(psVar26 + -0x10);
          uVar5 = *(undefined8 *)(psVar26 + -8);
          *(undefined8 *)(local_150 + -0x18) = *(undefined8 *)psVar21;
          *(undefined8 *)(local_150 + -0x10) = uVar4;
          *(undefined8 *)(local_150 + -8) = uVar5;
          *(undefined8 *)psVar21 = 0;
          *(undefined8 *)(psVar26 + -0x10) = 0;
          *(undefined8 *)(psVar26 + -8) = 0;
          local_150 = local_150 + -0x18;
          psVar26 = psVar21;
        } while (local_148 != psVar21);
        local_148 = (string *)plVar23[1];
        local_158 = (string *)*plVar23;
      }
      *plVar23 = (long)local_150;
      plVar23[1] = (long)psVar24;
      lVar11 = plVar23[2];
      plVar23[2] = local_140;
      local_150 = local_158;
      local_140 = lVar11;
      FUN_01f6e36c(&local_158);
    }
    else {
      std::string::string(psVar24,psVar26);
      plVar23[1] = (long)(psVar24 + 0x18);
    }
    puVar1 = PTR_DAT_047dab98;
    if (0 < *(int *)(param_2 + 0x30)) {
      lVar11 = 0;
      psVar24 = (string *)(PTR_DAT_047dabe0 + 0x10);
      puVar17 = PTR_DAT_047daba0 + 0x10;
      do {
        pbVar27 = *(byte **)(*(long *)(param_2 + 0x38) + lVar11 * 8 + 8);
        local_158 = *(string **)(pbVar27 + 0x10);
        if ((*pbVar27 & 1) == 0) {
          local_158 = (string *)(pbVar27 + 1);
        }
        lVar16 = FUN_00ba6514(local_230 + 0x23,&local_158);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x18) == 0)) {
          if (*(long *)(local_238 + 0x18) != 0) {
            lVar16 = FUN_00b7b2f8(*(long *)(local_238 + 0x18),pbVar27);
            if (lVar16 != 0) goto LAB_00b7dea8;
            pbVar27 = *(byte **)(*(long *)(param_2 + 0x38) + lVar11 * 8 + 8);
          }
          lVar16 = local_238;
          if ((*(long *)(local_238 + 8) != 0) &&
             (lVar13 = FUN_00badb04(*(long *)(local_238 + 0x20) + 0x18,pbVar27), lVar13 == 0)) {
            local_150 = (string *)0x0;
            local_158 = psVar24;
            memset(auStack_130,0,0x98);
            if (*(long *)puVar1 != 2) {
              local_78 = PTR_LAB_047daba8;
              local_70 = (char *)((ulong)local_70 & 0xffffffffffffff00);
              local_80 = puVar17;
              if (*(long *)puVar1 != 2) {
                do {
                  lVar13 = *(long *)puVar1;
                  if (lVar13 != 0) break;
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar9) {
                    *(undefined8 *)puVar1 = 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                DataMemoryBarrier(2,3);
                if (lVar13 == 0) {
                  FUN_00bb162c(&local_80);
                  *(undefined8 *)puVar1 = 2;
                }
                else {
                  while (lVar13 == 1) {
                    sched_yield();
                    lVar13 = *(long *)puVar1;
                  }
                }
              }
            }
            local_140 = *(long *)PTR_DAT_047dabb0;
            local_98 = 0;
            uStack_90 = 0;
            local_148 = (string *)0x0;
            lStack_138 = local_140;
            local_88 = local_140;
            uVar12 = (**(code **)(**(long **)(lVar16 + 8) + 0x10))
                               (*(long **)(lVar16 + 8),pbVar27,&local_158);
            if (((uVar12 & 1) == 0) || (lVar13 = FUN_00b7d75c(lVar16,&local_158), lVar13 == 0)) {
              FUN_00b7e9c0(*(long *)(lVar16 + 0x20) + 0x18,pbVar27);
            }
            FUN_00bb9a58(&local_158);
          }
        }
LAB_00b7dea8:
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0x30));
    }
    plVar23 = local_230;
    pbVar27 = (byte *)(local_230[1] + -0x18);
    if (((*pbVar27 & 1) != 0) && (lVar11 = *(long *)(local_230[1] + -8), lVar11 != 0)) {
      lVar16 = tpidr_el0;
      plVar25 = *(long **)(lVar16 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar16 + 0x30) = DAT_04859430;
      }
      uVar12 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,lVar11,0,8);
      }
    }
    plVar23[1] = (long)pbVar27;
  }
  lVar11 = FUN_00b8c7e4(&local_238,param_2);
LAB_00b7e1a0:
  if (((local_188 & 1) != 0) && (local_178 != 0)) {
    lVar16 = tpidr_el0;
    plVar23 = *(long **)(lVar16 + 0x30);
    if (plVar23 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar23 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,local_178,0,8);
    }
    else {
      FUN_00c48fe8(plVar23,local_178,0,8);
    }
  }
  lVar16 = local_190;
  if (((local_1a0 & 1) != 0) && (local_190 != 0)) {
    lVar13 = tpidr_el0;
    plVar23 = *(long **)(lVar13 + 0x30);
    if (plVar23 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar23 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar16,0,8);
    }
  }
  FUN_00bae668(local_1b8);
  FUN_00bae668(local_1d0);
  psVar24 = local_1f0;
  if (((local_200 & 1) != 0) && (local_1f0 != (string *)0x0)) {
    lVar16 = tpidr_el0;
    plVar23 = *(long **)(lVar16 + 0x30);
    if (plVar23 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar23 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,psVar24,0,8);
    }
    else {
      FUN_00c48fe8(plVar23,psVar24,0,8);
    }
  }
  lVar16 = local_220;
  if (local_220 != 0) {
    if (local_218 != local_220) {
      lVar13 = tpidr_el0;
      lVar28 = local_218;
      do {
        if (((*(byte *)(lVar28 + -0x28) & 1) != 0) &&
           (lVar29 = *(long *)(lVar28 + -0x18), lVar29 != 0)) {
          plVar23 = *(long **)(lVar13 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar29,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar29,0,8);
          }
        }
        lVar29 = lVar28 + -0x40;
        if (((*(byte *)(lVar28 + -0x40) & 1) != 0) &&
           (lVar28 = *(long *)(lVar28 + -0x30), lVar28 != 0)) {
          plVar23 = *(long **)(lVar13 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar28,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar28,0,8);
          }
        }
        lVar28 = lVar29;
      } while (lVar16 != lVar29);
    }
    lVar13 = local_220;
    local_218 = lVar16;
    if (local_220 != 0) {
      lVar16 = tpidr_el0;
      plVar23 = *(long **)(lVar16 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar16 + 0x30) = DAT_04859430;
      }
      uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar13,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,lVar13,0,8);
      }
    }
  }
  if (lVar11 == 0) {
    FUN_00b7e9c0(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0x18));
  }
  return lVar11;
LAB_00b7e074:
  lVar11 = tpidr_el0;
  plVar23 = *(long **)(lVar11 + 0x30);
  if (plVar23 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar23 = DAT_04859430;
    *(long **)(lVar11 + 0x30) = DAT_04859430;
  }
  psVar24 = (string *)(**(code **)(*plVar23 + 0x10))(plVar23,0x30,8);
  local_158 = (string *)&DAT_00000031;
  local_150 = (string *)&DAT_00000021;
  local_148 = psVar24;
  memcpy(psVar24,"File recursively imports itself: ",0x21);
  psVar24[0x21] = (string)0x0;
  iVar10 = (int)uVar15;
  if ((ulong)(long)iVar10 < (ulong)((local_230[1] - *local_230 >> 3) * -0x5555555555555555)) {
    uVar12 = (ulong)iVar10;
    lVar16 = (uVar12 * 2 + (long)iVar10) * 8;
    do {
      pbVar27 = (byte *)(*local_230 + lVar16);
      pbVar20 = *(byte **)(pbVar27 + 0x10);
      if ((*pbVar27 & 1) == 0) {
        pbVar20 = pbVar27 + 1;
      }
      std::string::append((char *)&local_158,(ulong)pbVar20);
      std::string::append((char *)&local_158);
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 0x18;
    } while (uVar12 < (ulong)((local_230[1] - *local_230 >> 3) * -0x5555555555555555));
  }
  pbVar20 = *(byte **)(param_2 + 0x18);
  pbVar27 = *(byte **)(pbVar20 + 0x10);
  if ((*pbVar20 & 1) == 0) {
    pbVar27 = pbVar20 + 1;
  }
  std::string::append((char *)&local_158,(ulong)pbVar27);
  FUN_00b89f94(&local_238,*(undefined8 *)(param_2 + 0x18),param_2,9,&local_158);
  psVar24 = local_148;
  if ((((ulong)local_158 & 1) != 0) && (local_148 != (string *)0x0)) {
    plVar23 = *(long **)(lVar11 + 0x30);
    if (plVar23 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar23 = DAT_04859430;
      *(long **)(lVar11 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,psVar24,0,8);
    }
    else {
      FUN_00c48fe8(plVar23,psVar24,0,8);
    }
  }
  lVar11 = 0;
  goto LAB_00b7e1a0;
}


