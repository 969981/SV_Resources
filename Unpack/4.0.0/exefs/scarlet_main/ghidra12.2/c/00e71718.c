/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e71718; name: FUN_00e71718
 */


void FUN_00e71718(long param_1,undefined8 param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  LightEventType *pLVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  if (*(char *)(param_1 + 0x440) != '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x451) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x338) == *(long *)(param_1 + 0x340)) goto LAB_00e71cc4;
  local_a0 = *(long **)(param_1 + 8);
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plVar21 = (long *)(param_1 + 0x428);
  local_88 = local_88 & 0xffffffff00000000;
  local_a8 = 0;
  local_98 = 0x1fffffffffffffff;
  local_90 = 0;
  lVar22 = *plVar21;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar22) {
    plVar14 = *(long **)(param_1 + 0x338);
    plVar13 = *(long **)(param_1 + 0x340);
    if (plVar14 != plVar13) {
      plVar21 = (long *)0x0;
      bVar10 = true;
      goto LAB_00e717bc;
    }
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x430));
          while (*plVar21 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar10) {
              *plVar21 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00e717a8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00e717a8:
    plVar14 = *(long **)(param_1 + 0x338);
    plVar13 = *(long **)(param_1 + 0x340);
    if (plVar14 == plVar13) {
      pLVar9 = (LightEventType *)(param_1 + 0x430);
      *(undefined8 *)(param_1 + 0x428) = 0;
    }
    else {
      bVar10 = false;
LAB_00e717bc:
      *(long **)(param_1 + 0x338) = local_b8;
      uVar20 = *(undefined8 *)(param_1 + 0x348);
      *(long **)(param_1 + 0x340) = local_b0;
      *(undefined8 *)(param_1 + 0x348) = local_a8;
      local_80 = local_a0;
      uStack_78 = local_98;
      local_70 = local_90;
      uStack_68 = local_88;
      uVar16 = *(undefined8 *)(param_1 + 0x358);
      uVar17 = *(undefined8 *)(param_1 + 0x360);
      uVar18 = *(ulong *)(param_1 + 0x368);
      plVar19 = *(long **)(param_1 + 0x350);
      *(undefined8 *)(param_1 + 0x358) = local_98;
      *(undefined8 *)(param_1 + 0x360) = local_90;
      *(ulong *)(param_1 + 0x368) = local_88;
      *(long **)(param_1 + 0x350) = local_a0;
      local_b8 = plVar14;
      local_b0 = plVar13;
      local_a8 = uVar20;
      local_a0 = plVar19;
      local_98 = uVar16;
      local_90 = uVar17;
      local_88 = uVar18;
      if (!bVar10) {
        *plVar21 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
      }
      lVar22 = *(long *)(param_1 + 0x1c0);
      plVar21 = (long *)(lVar22 + 0x40);
      lVar23 = *plVar21;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 == lVar23) {
        plVar21 = (long *)0x0;
        bVar10 = true;
        plVar13 = local_b8;
        plVar14 = local_b0;
      }
      else {
        lVar7 = nn::os::GetCurrentThread();
        do {
          if (*plVar21 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x48));
              while (*plVar21 == 0) {
                cVar4 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar10) {
                  *plVar21 = lVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00e71860;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar10) {
            *plVar21 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00e71860:
        bVar10 = false;
        plVar13 = local_b8;
        plVar14 = local_b0;
      }
      for (; plVar19 = local_b0, plVar13 != local_b0; plVar13 = plVar13 + 1) {
        local_b0 = plVar14;
        if (*plVar13 != 0) {
          FUN_00d2bee4(&local_80);
          if ((local_80 != (long *)0x0) &&
             ((**(code **)(*local_80 + 0x38))(local_80,*plVar13), local_80 != (long *)0x0)) {
            (**(code **)(*local_80 + 0x18))();
          }
          lVar7 = *plVar13;
          if (*(char *)(lVar7 + 0x7c5) == '\0') {
            lVar22 = *(long *)(param_1 + 0x1c0);
            FUN_00f1fcc0(lVar7);
            *(undefined1 *)(lVar7 + 0x7c5) = 1;
            plVar14 = *(long **)(lVar22 + 0x60);
            if (plVar14 == *(long **)(lVar22 + 0x68)) {
              uVar15 = *(ulong *)(lVar22 + 0x78);
              lVar23 = (long)plVar14 - *(long *)(lVar22 + 0x58) >> 3;
              uVar18 = lVar23 + 1;
              if (0x7ffffffffffffffe < uVar15) {
                uVar15 = 0x7fffffffffffffff;
              }
              if (uVar15 < uVar18) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar11 = (long)*(long **)(lVar22 + 0x68) - *(long *)(lVar22 + 0x58);
              uVar12 = lVar11 >> 2;
              if (uVar18 <= uVar12) {
                uVar18 = uVar12;
              }
              if (uVar15 >> 1 <= (ulong)(lVar11 >> 3)) {
                uVar18 = uVar15;
              }
              if (uVar18 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = (**(code **)(**(long **)(lVar22 + 0x70) + 0x10))
                                   (*(long **)(lVar22 + 0x70),uVar18 << 3,8);
                if (lVar11 == 0) {
                  (**(code **)(**(long **)(lVar22 + 0x70) + 0xe8))();
                }
              }
              plVar14 = (long *)(lVar11 + lVar23 * 8);
              uVar16 = *(undefined8 *)(lVar22 + 0x70);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar23 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar23 == 0) {
                *plVar14 = lVar7;
              }
              else {
                if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_00e71f48;
                *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar16;
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
                *plVar14 = lVar7;
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
              }
              lVar7 = *(long *)(lVar22 + 0x58);
              lVar23 = *(long *)(lVar22 + 0x60);
              plVar24 = plVar14;
              if (lVar23 != lVar7) {
                do {
                  uVar16 = *(undefined8 *)(lVar22 + 0x70);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar8 == 0) {
                    plVar24[-1] = *(long *)(lVar23 + -8);
                  }
                  else {
                    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e71f48;
                    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar16;
                    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                    plVar24[-1] = *(long *)(lVar23 + -8);
                    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                  }
                  lVar23 = lVar23 + -8;
                  plVar24 = plVar24 + -1;
                } while (lVar7 != lVar23);
                lVar7 = *(long *)(lVar22 + 0x58);
              }
              *(long **)(lVar22 + 0x58) = plVar24;
              *(long **)(lVar22 + 0x60) = plVar14 + 1;
              lVar23 = *(long *)(lVar22 + 0x68);
              *(ulong *)(lVar22 + 0x68) = lVar11 + uVar18 * 8;
              if (lVar7 != 0) {
                plVar14 = *(long **)(lVar22 + 0x70);
                lVar23 = lVar23 - lVar7;
                uVar18 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar18 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar14 + 0x18))(plVar14,lVar7,lVar23,8);
                }
                else {
                  FUN_00c48fe8(plVar14,lVar7,lVar23,8);
                }
              }
            }
            else {
              uVar16 = *(undefined8 *)(lVar22 + 0x70);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar23 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar23 == 0) {
                *plVar14 = lVar7;
              }
              else {
                if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_00e71f48:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar16;
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
                *plVar14 = lVar7;
                *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
              }
              *(long **)(lVar22 + 0x60) = plVar14 + 1;
            }
          }
        }
        plVar14 = local_b0;
        local_b0 = plVar19;
      }
      local_b0 = plVar14;
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      uVar16 = *(undefined8 *)PTR_DAT_047d4e00;
      *(undefined8 *)PTR_DAT_047d4e08 = uVar16;
      lVar7 = 0;
      if (*(long *)(param_1 + 0x1c0) != 0) {
        lVar7 = *(long *)(param_1 + 0x1c0) + 0x20;
      }
      FUN_00f3aa48(&local_80,uVar16,lVar7);
      if (local_80 != (long *)0x0) {
        lVar7 = local_80[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_80 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (bVar10) goto LAB_00e71cbc;
      *plVar21 = 0;
      pLVar9 = (LightEventType *)(plVar21 + 1);
    }
    nn::os::SignalLightEvent(pLVar9);
  }
LAB_00e71cbc:
  FUN_00deb044(&local_b8);
LAB_00e71cc4:
  plVar21 = (long *)(param_1 + 0x1d8);
  lVar22 = *plVar21;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar22) {
    plVar21 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
          while (*plVar21 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar10) {
              *plVar21 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00e71cf0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00e71cf0:
    bVar10 = false;
  }
  plVar13 = *(long **)(param_1 + 0x1f0);
  if (plVar13 == *(long **)(param_1 + 0x1f8)) {
    bVar5 = false;
  }
  else {
    bVar5 = false;
    do {
      lVar7 = *plVar13;
      if (*(char *)(lVar7 + 0x44f) == '\0') {
        FUN_00e71718(lVar7,param_2);
        bVar5 = *(char *)(lVar7 + 0x451) != '\0' || bVar5;
LAB_00e71da4:
        plVar13 = plVar13 + 1;
      }
      else {
        uVar18 = FUN_0143ed90(lVar7);
        if ((uVar18 & 1) == 0) {
          bVar5 = true;
          goto LAB_00e71da4;
        }
        if (*(char *)(lVar7 + 0x44c) == '\0') goto LAB_00e71da4;
        plVar24 = *(long **)(param_1 + 0x1f8);
        plVar14 = plVar13 + 1;
        plVar19 = plVar13;
        if (plVar14 == plVar24) {
LAB_00e71dd8:
          do {
            plVar14 = plVar14 + -1;
            if ((long *)*plVar14 != (long *)0x0) {
              (**(code **)(*(long *)*plVar14 + 0x60))();
            }
          } while (plVar19 != plVar14);
        }
        else {
          plVar14 = plVar13;
          do {
            plVar19 = (long *)*plVar14;
            *plVar14 = 0;
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x60))();
            }
            plVar19 = plVar14 + 1;
            lVar7 = *plVar19;
            *plVar19 = 0;
            *plVar14 = lVar7;
            plVar2 = plVar14 + 2;
            plVar14 = plVar19;
          } while (plVar2 != plVar24);
          plVar14 = *(long **)(param_1 + 0x1f8);
          if (plVar14 != plVar19) goto LAB_00e71dd8;
        }
        *(long **)(param_1 + 0x1f8) = plVar19;
      }
    } while (plVar13 != *(long **)(param_1 + 0x1f8));
  }
  if (!bVar10) {
    *plVar21 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
  }
  *(bool *)(param_1 + 0x451) = bVar5;
  return;
}


