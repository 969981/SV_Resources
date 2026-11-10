/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b884b8; name: FUN_00b884b8
 */


undefined8 FUN_00b884b8(long param_1,long *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  byte *__s2;
  size_t __n;
  size_t sVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  long lVar10;
  undefined **ppuVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  void *pvVar17;
  string *this;
  undefined8 *puVar18;
  long lVar19;
  string *psVar20;
  string *psVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong local_b8;
  size_t local_b0;
  byte *local_a8;
  long local_a0;
  long lStack_98;
  undefined **local_90;
  char *local_88;
  undefined1 local_80 [8];
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (param_3 == (undefined4 *)0x0) {
    local_90 = (undefined **)CONCAT44(local_90._4_4_,3);
    local_68 = 0;
    local_80._0_4_ = 0xa7;
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/stubs/logging.h"
    ;
    local_78 = (long *)0x0;
    uStack_70 = 0;
    std::string::append((char *)&local_78);
    FUN_00bb0e90(&local_90);
    FUN_00bb0d74(&local_90);
  }
  lStack_98 = *(long *)(param_1 + 0xa0);
  if (lStack_98 == 0) {
    return 0;
  }
  lVar19 = *(long *)(param_1 + 0x98);
  local_a0 = lVar19;
  if (*(long *)(lVar19 + 0xf0) != 2) {
    local_80._0_4_ = local_80._0_4_ & 0xffffff00;
    local_90 = &PTR_LAB_0455a420;
    local_88 = &LAB_00b7a9f8;
    local_78 = &local_a0;
    if (*(long *)(lVar19 + 0xf0) != 2) {
      plVar16 = (long *)(lVar19 + 0xf0);
      do {
        lVar13 = *plVar16;
        if (lVar13 != 0) break;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar13 == 0) {
        (*(code *)PTR_FUN_0455a430)(&local_90);
        *plVar16 = 2;
      }
      else {
        while (lVar13 == 1) {
          sched_yield();
          lVar13 = *(long *)(lVar19 + 0xf0);
        }
      }
    }
  }
  local_b0 = 0;
  local_a8 = (byte *)0x0;
  local_b8 = 0;
  piVar3 = (int *)*param_2;
  piVar4 = (int *)param_2[1];
  if (piVar3 == piVar4) {
    uVar22 = 0;
  }
  else {
    iVar9 = *piVar3;
    ppuVar11 = (undefined **)local_80;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      local_80[0] = 0x2d;
      ppuVar11 = (undefined **)(local_80 + 1);
    }
    local_90 = (undefined **)local_80;
    lVar13 = FUN_00c0fca0(iVar9,ppuVar11);
    local_88 = (char *)(lVar13 - (long)local_80);
    std::string::append((char *)&local_b8,(ulong)local_90);
    if (piVar3 + 1 != piVar4) {
      lVar13 = 4;
      do {
        if (lVar13 != 0) {
          std::string::append((char *)&local_b8);
        }
        iVar9 = *(int *)((long)piVar3 + lVar13);
        ppuVar11 = (undefined **)local_80;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
          local_80[0] = 0x2d;
          ppuVar11 = (undefined **)(local_80 + 1);
        }
        local_90 = (undefined **)local_80;
        lVar10 = FUN_00c0fca0(iVar9,ppuVar11);
        local_88 = (char *)(lVar10 - (long)local_80);
        std::string::append((char *)&local_b8,(ulong)local_90);
        lVar13 = lVar13 + 4;
      } while ((long)piVar4 - (long)piVar3 != lVar13);
    }
    uVar22 = local_b8 & 0xff;
  }
  pbVar8 = local_a8;
  __s2 = (byte *)((ulong)&local_b8 | 1);
  if ((uVar22 & 1) != 0) {
    __s2 = local_a8;
  }
  bVar12 = *__s2;
  if (bVar12 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    pbVar15 = __s2;
    do {
      pbVar15 = pbVar15 + 1;
      uVar23 = uVar23 * 5 + (ulong)bVar12;
      bVar12 = *pbVar15;
    } while (bVar12 != 0);
  }
  uVar26 = *(ulong *)(lVar19 + 0x100);
  if (uVar26 != 0) {
    uVar14 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar24 = uVar26 - 1 & uVar23;
    }
    else {
      uVar24 = uVar23;
      if (uVar26 <= uVar23) {
        uVar24 = 0;
        if (uVar26 != 0) {
          uVar24 = uVar23 / uVar26;
        }
        uVar24 = uVar23 - uVar24 * uVar26;
      }
    }
    plVar16 = *(long **)(*(long *)(lVar19 + 0xf8) + uVar24 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      __n = uVar22 >> 1;
      if ((uVar22 & 1) != 0) {
        __n = local_b0;
      }
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar23) {
            bVar12 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar12 >> 1);
            if ((bVar12 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == __n) {
              pvVar17 = (void *)plVar16[4];
              if ((bVar12 & 1) == 0) {
                pvVar17 = (void *)((long)plVar16 + 0x11);
              }
              if ((bVar12 & 1) == 0) {
                if (__n == 0) goto LAB_00b888b4;
                uVar14 = 0;
                while (*(byte *)((long)plVar16 + uVar14 + 0x11) == __s2[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar12 >> 1 == uVar14) goto LAB_00b888b0;
                }
              }
              else if ((__n == 0) || (iVar9 = memcmp(pvVar17,__s2,__n), iVar9 == 0))
              goto LAB_00b888b4;
            }
          }
          else if ((plVar16[1] & uVar26 - 1) != uVar24) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar23) {
            bVar12 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar12 >> 1);
            if ((bVar12 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == __n) {
              pvVar17 = (void *)plVar16[4];
              if ((bVar12 & 1) == 0) {
                pvVar17 = (void *)((long)plVar16 + 0x11);
              }
              if ((bVar12 & 1) == 0) {
                if (__n == 0) goto LAB_00b888b4;
                uVar14 = 0;
                while (*(byte *)((long)plVar16 + uVar14 + 0x11) == __s2[uVar14]) {
                  uVar14 = uVar14 + 1;
                  if (bVar12 >> 1 == uVar14) goto LAB_00b888b0;
                }
              }
              else if ((__n == 0) || (iVar9 = memcmp(pvVar17,__s2,__n), iVar9 == 0))
              goto LAB_00b888b4;
            }
          }
          else {
            if (uVar26 <= uVar14) {
              uVar7 = 0;
              if (uVar26 != 0) {
                uVar7 = uVar14 / uVar26;
              }
              uVar14 = uVar14 - uVar7 * uVar26;
            }
            if (uVar14 != uVar24) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_00b888c0:
  lVar19 = 0;
joined_r0x00b888c4:
  if ((pbVar8 != (byte *)0x0) && ((uVar22 & 1) != 0)) {
    lVar13 = tpidr_el0;
    plVar16 = *(long **)(lVar13 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar16 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
    uVar22 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar22 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,pbVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar16,pbVar8,0,8);
    }
  }
  if ((lVar19 == 0) || (1 < *(int *)(lVar19 + 0x30) - 3U)) {
    return 0;
  }
  *param_3 = *(undefined4 *)(*(long *)(lVar19 + 0x38) + 8);
  param_3[2] = *(undefined4 *)(*(long *)(lVar19 + 0x38) + 0xc);
  param_3[1] = *(undefined4 *)
                (*(long *)(lVar19 + 0x38) + (ulong)(*(int *)(lVar19 + 0x30) != 3) * 8 + 8);
  param_3[3] = *(undefined4 *)(*(long *)(lVar19 + 0x38) + (long)*(int *)(lVar19 + 0x30) * 4 + 4);
  std::string::operator=((string *)(param_3 + 4),*(string **)(lVar19 + 0x48));
  std::string::operator=((string *)(param_3 + 10),*(string **)(lVar19 + 0x50));
  puVar18 = (undefined8 *)(param_3 + 0x10);
  this = (string *)*puVar18;
  lVar13 = *(long *)(param_3 + 0x14);
  puVar25 = (undefined8 *)0x0;
  if (*(long *)(lVar19 + 0x68) != 0) {
    puVar25 = (undefined8 *)(*(long *)(lVar19 + 0x68) + 8);
  }
  uVar22 = (ulong)*(int *)(lVar19 + 0x60);
  puVar1 = puVar25 + uVar22;
  if ((ulong)((lVar13 - (long)this >> 3) * -0x5555555555555555) < uVar22) {
    if (this != (string *)0x0) {
      if (*(string **)(param_3 + 0x12) == this) {
        psVar21 = this;
      }
      else {
        lVar19 = tpidr_el0;
        psVar21 = *(string **)(param_3 + 0x12);
        do {
          psVar20 = psVar21 + -0x18;
          if ((((byte)*psVar20 & 1) != 0) && (lVar13 = *(long *)(psVar21 + -8), lVar13 != 0)) {
            plVar16 = *(long **)(lVar19 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar19 + 0x30) = DAT_04859430;
            }
            uVar23 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar23 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,0,8);
            }
            else {
              FUN_00c48fe8(plVar16,lVar13,0,8);
            }
          }
          psVar21 = psVar20;
        } while (this != psVar20);
        psVar21 = (string *)*puVar18;
      }
      *(string **)(param_3 + 0x12) = this;
      if (psVar21 != (string *)0x0) {
        lVar19 = tpidr_el0;
        plVar16 = *(long **)(lVar19 + 0x30);
        if (plVar16 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar16 = DAT_04859430;
          *(long **)(lVar19 + 0x30) = DAT_04859430;
        }
        uVar23 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar23 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,psVar21,0,8);
        }
        else {
          FUN_00c48fe8(plVar16,psVar21,0,8);
        }
      }
      lVar13 = 0;
      *(undefined8 *)(param_3 + 0x12) = 0;
      *(undefined8 *)(param_3 + 0x14) = 0;
      *puVar18 = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar22) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar23 = (lVar13 >> 3) * 0x5555555555555556;
    if (uVar22 <= uVar23) {
      uVar22 = uVar23;
    }
    if (0x555555555555554 < (ulong)((lVar13 >> 3) * -0x5555555555555555)) {
      uVar22 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_00bae578(puVar18,uVar22);
    this = *(string **)(param_3 + 0x12);
    for (; puVar1 != puVar25; puVar25 = puVar25 + 1) {
      std::string::string(this,(string *)*puVar25);
      this = this + 0x18;
    }
  }
  else {
    lVar19 = *(long *)(param_3 + 0x12) - (long)this >> 3;
    uVar23 = lVar19 * -0x5555555555555555;
    puVar18 = puVar25 + lVar19 * 0xaaaaaaaaaaaaaab;
    if (uVar22 <= uVar23) {
      puVar18 = puVar1;
    }
    for (; puVar25 != puVar18; puVar25 = puVar25 + 1) {
      std::string::operator=(this,(string *)*puVar25);
      this = this + 0x18;
    }
    if (uVar23 < uVar22) {
      this = *(string **)(param_3 + 0x12);
      for (; puVar1 != puVar18; puVar18 = puVar18 + 1) {
        std::string::string(this,(string *)*puVar18);
        this = this + 0x18;
      }
    }
    else if (*(string **)(param_3 + 0x12) != this) {
      lVar19 = tpidr_el0;
      psVar21 = *(string **)(param_3 + 0x12);
      do {
        psVar20 = psVar21 + -0x18;
        if ((((byte)*psVar20 & 1) != 0) && (lVar13 = *(long *)(psVar21 + -8), lVar13 != 0)) {
          plVar16 = *(long **)(lVar19 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(lVar19 + 0x30) = DAT_04859430;
          }
          uVar22 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar22 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,0,8);
          }
          else {
            FUN_00c48fe8(plVar16,lVar13,0,8);
          }
        }
        psVar21 = psVar20;
      } while (this != psVar20);
    }
  }
  *(string **)(param_3 + 0x12) = this;
  return 1;
LAB_00b888b0:
  if (plVar16 != (long *)0x0) {
LAB_00b888b4:
    lVar19 = plVar16[5];
    goto joined_r0x00b888c4;
  }
  goto LAB_00b888c0;
}


