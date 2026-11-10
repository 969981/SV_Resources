/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebac40; name: FUN_00ebac40
 */


void FUN_00ebac40(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  uint uVar20;
  ulong uVar21;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ebac8c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x78) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ebac8c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ebac8c:
  lVar6 = *(long *)(param_1 + 0x30);
  plVar17 = *(long **)(param_1 + 0x38);
  uVar21 = (long)plVar17 - lVar6 >> 3;
  uVar20 = (uint)uVar21;
  if (uVar20 != param_3) {
    *(undefined1 *)(param_1 + 0x19a) = 1;
  }
  if (param_3 < uVar20) {
    uVar8 = (ulong)param_3;
    if (uVar21 < param_3) {
      FUN_00ede218((long *)(param_1 + 0x30),uVar8 - uVar21);
    }
    else if (uVar8 < uVar21) {
      plVar7 = (long *)(lVar6 + uVar8 * 8);
      while (plVar7 != plVar17) {
        plVar17 = plVar17 + -1;
        plVar10 = (long *)*plVar17;
        if (plVar10 != (long *)0x0) {
          plVar14 = plVar10 + 5;
          do {
            lVar6 = *plVar14;
            iVar5 = (int)lVar6 + -1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *(int *)plVar14 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_00ebb6d4;
        }
      }
      *(long **)(param_1 + 0x38) = plVar7;
    }
    lVar6 = *(long *)(param_1 + 0x90);
    uVar16 = *(long *)(param_1 + 0x98) - lVar6 >> 2;
    if (uVar16 < uVar8) {
      FUN_00ee5e44((long *)(param_1 + 0x90),uVar8 - uVar16);
    }
    else if (uVar8 < uVar16) {
      *(ulong *)(param_1 + 0x98) = lVar6 + uVar8 * 4;
    }
  }
  if (uVar20 < param_3) {
    puVar2 = (undefined8 *)(param_1 + 0x48);
    do {
      local_70 = *param_2;
      local_98 = (long *)&DAT_cbf29ce484222645;
      local_90 = (long *)&DAT_03c886bc;
      local_88 = (long *)0x0;
      local_80 = (long *)0x0;
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 == 0) {
        lVar6 = *(long *)(local_70 + 8);
      }
      plVar17 = (long *)FUN_00dfee60(auStack_68,lVar6,&local_70,param_1 + 200);
      if (plVar17 != (long *)0x0) {
        plVar7 = plVar17 + 5;
        do {
          lVar6 = *plVar7;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *(int *)plVar7 = (int)lVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar6 == -1) goto LAB_00ebb6c4;
      }
      if ((char)*local_90 != '\0') {
        FUN_00eac828(plVar17,&local_98);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 == *(long **)(param_1 + 0x40)) {
        uVar16 = *(ulong *)(param_1 + 0x50);
        lVar6 = (long)plVar7 - *(long *)(param_1 + 0x30) >> 3;
        uVar8 = lVar6 + 1;
        if (0x7ffffffffffffffe < uVar16) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = (long)*(long **)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
        uVar13 = lVar12 >> 2;
        local_80 = (long *)0x0;
        if (uVar8 <= uVar13) {
          uVar8 = uVar13;
        }
        if (uVar16 >> 1 <= (ulong)(lVar12 >> 3)) {
          uVar8 = uVar16;
        }
        puStack_78 = puVar2;
        if (uVar8 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar8 << 3,8);
          if (plVar7 == (long *)0x0) {
            (**(code **)(*(long *)*puVar2 + 0xe8))();
          }
        }
        plVar10 = plVar7 + lVar6;
        local_80 = plVar7 + uVar8;
        uVar18 = *puVar2;
        local_98 = plVar7;
        local_90 = plVar10;
        local_88 = plVar10;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebb60c;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        *plVar10 = (long)plVar17;
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 5;
          do {
            lVar12 = *plVar7;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar11) {
              *(int *)plVar7 = (int)lVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar12 == -1) goto LAB_00ebb6c4;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        local_88 = local_88 + 1;
        plVar7 = *(long **)(param_1 + 0x30);
        plVar10 = *(long **)(param_1 + 0x38);
        if (plVar10 == plVar7) {
          plVar10 = plVar7;
        }
        else {
          do {
            plVar14 = local_90;
            uVar18 = *puVar2;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 == 0) {
              lVar6 = plVar10[-1];
              plVar10[-1] = 0;
              plVar14[-1] = lVar6;
            }
            else {
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebb60c;
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              lVar12 = plVar10[-1];
              plVar10[-1] = 0;
              plVar14[-1] = lVar12;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            plVar10 = plVar10 + -1;
            local_90 = local_90 + -1;
          } while (plVar7 != plVar10);
          plVar7 = *(long **)(param_1 + 0x30);
          plVar10 = *(long **)(param_1 + 0x38);
        }
        *(long **)(param_1 + 0x30) = local_90;
        *(long **)(param_1 + 0x38) = local_88;
        plVar14 = *(long **)(param_1 + 0x40);
        *(long **)(param_1 + 0x40) = local_80;
        local_98 = plVar7;
        local_90 = plVar7;
        local_88 = plVar10;
        local_80 = plVar14;
        FUN_00ebb704(&local_98);
      }
      else {
        uVar18 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebb60c;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        *plVar7 = (long)plVar17;
        if (plVar17 != (long *)0x0) {
          plVar10 = plVar17 + 5;
          do {
            lVar12 = *plVar10;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar11) {
              *(int *)plVar10 = (int)lVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar12 == -1) {
LAB_00ebb6c4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x38) = plVar7 + 1;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x98);
      if (puVar3 < *(undefined4 **)(param_1 + 0xa0)) {
        uVar18 = *(undefined8 *)(param_1 + 0xa8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          *puVar3 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebb60c;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *puVar3 = 0;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        *(undefined4 **)(param_1 + 0x98) = puVar3 + 1;
      }
      else {
        uVar16 = *(ulong *)(param_1 + 0xb0);
        lVar6 = (long)puVar3 - *(long *)(param_1 + 0x90) >> 2;
        uVar8 = lVar6 + 1;
        if (0x7ffffffffffffffe < uVar16) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = (long)*(undefined4 **)(param_1 + 0xa0) - *(long *)(param_1 + 0x90);
        uVar13 = lVar12 >> 1;
        if (uVar8 <= uVar13) {
          uVar8 = uVar13;
        }
        if (uVar16 >> 1 <= (ulong)(lVar12 >> 2)) {
          uVar8 = uVar16;
        }
        if (uVar8 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))
                             (*(long **)(param_1 + 0xa8),uVar8 << 2,4);
          if (lVar12 == 0) {
            (**(code **)(**(long **)(param_1 + 0xa8) + 0xe8))();
          }
        }
        uVar18 = *(undefined8 *)(param_1 + 0xa8);
        puVar3 = (undefined4 *)(lVar12 + lVar6 * 4);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          *puVar3 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00ebb60c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar18;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *puVar3 = 0;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar6 = *(long *)(param_1 + 0x90);
        lVar15 = *(long *)(param_1 + 0x98);
        puVar19 = puVar3;
        if (lVar15 != lVar6) {
          do {
            uVar18 = *(undefined8 *)(param_1 + 0xa8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 == 0) {
              puVar19[-1] = *(undefined4 *)(lVar15 + -4);
            }
            else {
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00ebb60c;
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              puVar19[-1] = *(undefined4 *)(lVar15 + -4);
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            lVar15 = lVar15 + -4;
            puVar19 = puVar19 + -1;
          } while (lVar6 != lVar15);
          lVar6 = *(long *)(param_1 + 0x90);
        }
        *(undefined4 **)(param_1 + 0x90) = puVar19;
        *(undefined4 **)(param_1 + 0x98) = puVar3 + 1;
        lVar15 = *(long *)(param_1 + 0xa0);
        *(ulong *)(param_1 + 0xa0) = lVar12 + uVar8 * 4;
        if (lVar6 != 0) {
          plVar7 = *(long **)(param_1 + 0xa8);
          lVar15 = lVar15 - lVar6;
          uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar15,4);
          }
          else {
            FUN_00c48fe8(plVar7,lVar6,lVar15,4);
          }
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar7 = plVar17 + 5;
        do {
          lVar6 = *plVar7;
          iVar5 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *(int *)plVar7 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
        else if ((int)lVar6 == 0) {
LAB_00ebb6d4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar20;
    } while (uVar20 != param_3);
  }
  do {
    lVar6 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x78) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar15 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar15 != lVar6 || lVar9 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00ebb1e0;
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x74) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar11 = true;
LAB_00ebb1e0:
  if (!bVar11) {
    do {
      lVar6 = *plVar1;
      lVar12 = *(long *)(param_1 + 0x78);
      if (lVar6 != lVar15 || lVar12 != lVar9) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ebb614;
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x74) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = true;
joined_r0x00ebb614:
    if (!bVar11) {
      do {
        lVar15 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x78);
        if (lVar15 != lVar6 || lVar9 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar6 = lVar15;
          lVar12 = lVar9;
          goto joined_r0x00ebb614;
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x74) = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar11 = true;
      lVar6 = lVar15;
      lVar12 = lVar9;
      goto joined_r0x00ebb614;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


