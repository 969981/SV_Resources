/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01229314; name: FUN_01229314
 */


uint FUN_01229314(long param_1,ulong *param_2,ulong param_3,uint param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  float fVar21;
  long *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  code *local_e0;
  long local_d8;
  undefined1 auStack_d0 [96];
  code *local_70 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar14 = *(ulong *)(param_1 + 0x78);
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar9 = uVar14 - 1 & uVar11;
    }
    else if (uVar11 < uVar14) {
      uVar9 = uVar11;
    }
    else {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar11 / uVar14;
      }
      uVar9 = uVar11 - uVar9 * uVar14;
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x70) + uVar9 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar16[1] == uVar11) {
            if (plVar16[2] == uVar11) goto LAB_012293e8;
          }
          else if ((plVar16[1] & uVar14 - 1) != uVar9) goto LAB_012299f0;
          plVar16 = (long *)*plVar16;
          uVar19 = 0;
        } while (plVar16 != (long *)0x0);
        goto LAB_01229828;
      }
      do {
        uVar15 = plVar16[1];
        if (uVar15 == uVar11) {
          if (plVar16[2] == uVar11) goto LAB_012293e8;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar13 = 0;
            if (uVar14 != 0) {
              uVar13 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar13 * uVar14;
          }
          if (uVar15 != uVar9) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_012299f0:
  uVar19 = 0;
  goto LAB_01229828;
LAB_012293e8:
  uVar19 = *(int *)(param_1 + 0x140) + 1;
  *(uint *)(param_1 + 0x140) = uVar19;
  plVar17 = *(long **)(param_1 + 0x28);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01229c8c;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar17;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x210,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_110 = (long *)&LAB_020e407c;
  local_108 = FUN_02acbcc8;
  local_100 = &LAB_02acbccc;
  local_f8 = &LAB_02acbcd8;
  local_f0 = param_1;
  FUN_01229de4(plVar7,*(undefined8 *)(param_1 + 0x28),uVar19,plVar16[3],param_3,param_4 | 1,
               &local_110,param_6,param_7);
  pcVar10 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar10)(&local_f0);
  }
  *(undefined4 *)(plVar7 + 3) = 0x100210;
  plVar7[1] = (long)plVar17;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  lVar6 = plVar7[6];
  if (*(long *)(lVar6 + 0x10) == 0) goto LAB_01229c44;
  plVar16 = (long *)(param_1 + 0xd8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 8) = uVar8;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_01229c64;
  lVar6 = plVar7[6];
  local_110 = plVar7;
  if (*(long *)(lVar6 + 0x10) == 0) goto LAB_01229c44;
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 8) = uVar8;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_01229c64;
  local_108 = (code *)0x0;
  pcVar18 = (char *)param_2[1];
  if ((pcVar18 == (char *)0x0) || (*pcVar18 == '\0')) {
    pcVar10 = (code *)FUN_00d44228();
    if (pcVar10 != (code *)0x0) {
      (**(code **)(*(long *)pcVar10 + 0x18))(pcVar10);
    }
    if (local_108 != (code *)0x0) {
      lVar6 = *(long *)local_108;
      local_108 = pcVar10;
      (**(code **)(lVar6 + 0x20))();
      pcVar10 = local_108;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(local_70,uVar8,pcVar18);
    pcVar10 = local_108;
    local_108 = (code *)0x0;
    if (pcVar10 != (code *)0x0) {
      (**(code **)(*(long *)pcVar10 + 0x20))();
    }
    local_108 = local_70[0];
    pcVar10 = local_108;
  }
  local_108 = pcVar10;
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,uVar19);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (code *)0x0;
  local_d8 = 0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_d0);
    local_d8 = param_5[3];
    local_e8 = param_5[1];
    local_f0 = *param_5;
    local_e0 = (code *)param_5[2];
  }
  uVar15 = *(ulong *)(param_1 + 0xe0);
  uVar14 = (ulong)uVar19;
  if (uVar15 == 0) {
LAB_0122966c:
    plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0x110) + 0x10))
                                (*(long **)(param_1 + 0x110),0xc0,0x10);
    if (plVar17 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x110) + 0xe8))();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x110);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01229c8c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    *(uint *)(plVar17 + 2) = uVar19;
    plVar17[4] = (long)local_110;
    if (local_110 != (long *)0x0) {
      lVar20 = local_110[6];
      if (*(long *)(lVar20 + 0x10) == 0) {
LAB_01229c44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar20 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        *(undefined8 *)(lVar20 + 8) = uVar8;
        *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01229c64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar17[5] = (long)local_108;
    if (local_108 != (code *)0x0) {
      (**(code **)(*(long *)local_108 + 0x18))();
    }
    plVar17[8] = 0;
    *(undefined4 *)(plVar17 + 6) = local_100._0_4_;
    plVar17[9] = 0;
    plVar17[10] = 0;
    plVar17[0xb] = 0;
    if (local_e0 != (code *)0x0) {
      (*local_e0)(auStack_d0,plVar17 + 0xc);
      plVar17[0xb] = local_d8;
      plVar17[8] = local_f0;
      plVar17[9] = local_e8;
      plVar17[10] = (long)local_e0;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar17 = 0;
    plVar17[1] = uVar14;
    fVar21 = (float)(*(long *)(param_1 + 0x130) + 1);
    if ((uVar15 == 0) || (*(float *)(param_1 + 0x138) * (float)uVar15 < fVar21)) {
      uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
      uVar11 = (ulong)(fVar21 / *(float *)(param_1 + 0x138));
      if (uVar11 <= uVar15) {
        uVar11 = uVar15;
      }
      if (uVar11 - 1 == 0) {
        uVar11 = 2;
      }
      else if ((uVar11 & uVar11 - 1) != 0) {
        uVar11 = std::__next_prime(uVar11);
      }
      uVar15 = *(ulong *)(param_1 + 0xe0);
      if (uVar15 < uVar11) {
        uVar9 = uVar11;
LAB_012298a0:
        FUN_0122a068(plVar16,uVar9);
      }
      else if (uVar11 < uVar15) {
        uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x130) / *(float *)(param_1 + 0x138));
        if ((uVar15 < 3) ||
           (uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
           1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar9 = std::__next_prime(uVar9);
        }
        else if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (uVar9 < uVar15) goto LAB_012298a0;
      }
      uVar15 = *(ulong *)(param_1 + 0xe0);
      if ((uVar15 & uVar15 - 1) == 0) {
        param_3 = (ulong)((int)uVar15 - 1U & uVar19);
      }
      else if (uVar14 < uVar15) {
        param_3 = uVar14;
      }
      else {
        uVar11 = 0;
        if (uVar15 != 0) {
          uVar11 = uVar14 / uVar15;
        }
        param_3 = uVar14 - uVar11 * uVar15;
      }
    }
    plVar12 = *(long **)(*plVar16 + param_3 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar17 = *(long *)(param_1 + 0x108);
      *(long **)(param_1 + 0x108) = plVar17;
      *(long *)(*(long *)(param_1 + 0xd8) + param_3 * 8) = param_1 + 0x108;
      if (*plVar17 != 0) {
        uVar14 = *(ulong *)(*plVar17 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar14 = uVar14 & uVar15 - 1;
        }
        else if (uVar15 <= uVar14) {
          uVar11 = 0;
          if (uVar15 != 0) {
            uVar11 = uVar14 / uVar15;
          }
          uVar14 = uVar14 - uVar11 * uVar15;
        }
        plVar12 = (long *)(*plVar16 + uVar14 * 8);
        goto LAB_012297d8;
      }
    }
    else {
      *plVar17 = *plVar12;
LAB_012297d8:
      *plVar12 = (long)plVar17;
    }
    *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
  }
  else if ((uVar15 & uVar15 - 1) == 0) {
    param_3 = (ulong)((int)uVar15 - 1U & uVar19);
    plVar17 = *(long **)(*plVar16 + param_3 * 8);
    if (plVar17 == (long *)0x0) goto LAB_0122966c;
    do {
      plVar17 = (long *)*plVar17;
      if ((plVar17 == (long *)0x0) || (plVar17[1] != uVar14 && (plVar17[1] & uVar15 - 1) != param_3)
         ) goto LAB_0122966c;
    } while (*(uint *)(plVar17 + 2) != uVar19);
  }
  else {
    param_3 = uVar14;
    if (uVar15 <= uVar14) {
      uVar11 = 0;
      if (uVar15 != 0) {
        uVar11 = uVar14 / uVar15;
      }
      param_3 = uVar14 - uVar11 * uVar15;
    }
    plVar17 = *(long **)(*plVar16 + param_3 * 8);
    if (plVar17 == (long *)0x0) goto LAB_0122966c;
    do {
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) goto LAB_0122966c;
      uVar11 = plVar17[1];
      if (uVar11 != uVar14) {
        if (uVar15 <= uVar11) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar9 * uVar15;
        }
        if (uVar11 != param_3) goto LAB_0122966c;
      }
    } while (*(uint *)(plVar17 + 2) != uVar19);
  }
  FUN_01229ce8(&local_110);
  lVar6 = plVar7[6];
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (*(int *)(plVar17[4] + 0x60) == 0) {
    FUN_0122a3ac();
  }
LAB_01229828:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return uVar19;
}


