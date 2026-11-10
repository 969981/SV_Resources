/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa5d8c; name: FUN_00fa5d8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa5d8c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  short sVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  char cVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_a0 [8];
  long local_98;
  
  puVar2 = PTR_DAT_047d8af8;
  if (((*PTR_DAT_047d8af8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8af8);
  }
  puVar13 = PTR_DAT_047d8b08;
  puVar3 = PTR_DAT_047d8b00;
  lVar26 = *(long *)PTR_DAT_047d8b00;
  *(long *)PTR_DAT_047d8b08 = lVar26;
  plVar22 = (long *)(lVar26 + 0x68);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar22 == 0) {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar11) {
      *plVar22 = lVar15;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_00fa5df4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x70));
  do {
    if (*plVar22 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x70));
        while (*plVar22 == 0) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar11) {
            *plVar22 = lVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_00fa5df4;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar11) {
      *plVar22 = lVar15;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_00fa5df4:
  puVar12 = PTR_PTR_047d4508;
  puVar8 = *(undefined8 **)(lVar26 + 0x38);
  for (puVar7 = *(undefined8 **)(lVar26 + 0x30); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    plVar22 = (long *)*puVar7;
    if (plVar22 == (long *)0x0) {
      puVar5 = (undefined8 *)puVar12;
      if (_DAT_00000038 != 0) {
        puVar5 = (undefined8 *)(_DAT_00000038 + 0x38);
      }
      FUN_00fa6560(*(undefined8 *)(param_1 + 0x38),*puVar5,_DAT_00000030);
    }
    else {
      plVar1 = plVar22 + 5;
      do {
        lVar15 = *plVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *(int *)plVar1 = (int)lVar15 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      puVar5 = (undefined8 *)puVar12;
      if (plVar22[7] != 0) {
        puVar5 = (undefined8 *)(plVar22[7] + 0x38);
      }
      FUN_00fa6560(*(undefined8 *)(param_1 + 0x38),*puVar5,plVar22[6]);
      do {
        lVar15 = *plVar1;
        iVar14 = (int)lVar15 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *(int *)plVar1 = iVar14;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
      else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  *(undefined8 *)(lVar26 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x70));
  if (((*puVar2 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8af8);
  }
  lVar26 = *(long *)puVar3;
  *(long *)puVar13 = lVar26;
  plVar22 = (long *)(lVar26 + 0xb8);
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar22 == 0) {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar11) {
      *plVar22 = lVar15;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_00fa5eac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xc0));
  do {
    if (*plVar22 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xc0));
        while (*plVar22 == 0) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar11) {
            *plVar22 = lVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_00fa5eac;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar11) {
      *plVar22 = lVar15;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_00fa5eac:
  lVar15 = *(long *)(lVar26 + 0x80);
  lVar9 = *(long *)(lVar26 + 0x88);
  if (lVar15 != lVar9) {
    puVar2 = PTR_DAT_047dd2d8 + 0x10;
    puVar3 = PTR_DAT_047dd2d0 + 0x10;
    do {
      FUN_00fa6724(auStack_a0,lVar15);
      FUN_00fa656c(*(undefined8 *)(param_1 + 0x38),*(long *)(local_98 + 0x1f8) + 0x58);
      if (*(long *)(param_1 + 0xf0) == *(long *)(param_1 + 0xf8)) {
        uVar21 = *(ulong *)(param_1 + 0x108);
        lVar23 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 6;
        uVar17 = lVar23 + 1;
        if (0x7ffffffffffffffe < uVar21) {
          uVar21 = 0x7fffffffffffffff;
        }
        if (uVar21 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xe8);
        uVar19 = lVar18 >> 5;
        if (uVar17 <= uVar19) {
          uVar17 = uVar19;
        }
        if (uVar21 >> 1 <= (ulong)(lVar18 >> 6)) {
          uVar17 = uVar21;
        }
        if (uVar17 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = (**(code **)(**(long **)(param_1 + 0x100) + 0x10))
                             (*(long **)(param_1 + 0x100),uVar17 << 6,8);
          if (lVar18 == 0) {
            (**(code **)(**(long **)(param_1 + 0x100) + 0xe8))();
          }
        }
        lVar23 = lVar18 + lVar23 * 0x40;
        uVar24 = *(undefined8 *)(param_1 + 0x100);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 == 0) {
          FUN_00fa6724(lVar23,auStack_a0);
        }
        else {
          if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_00fa64b0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar24;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          FUN_00fa6724(lVar23,auStack_a0);
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        lVar16 = *(long *)(param_1 + 0xe8);
        lVar27 = *(long *)(param_1 + 0xf0);
        lVar28 = lVar23;
        if (lVar27 == lVar16) {
          lVar27 = lVar16;
        }
        else {
          do {
            uVar24 = *(undefined8 *)(param_1 + 0x100);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar25 == 0) {
              *(undefined8 *)(lVar28 + -0x38) = 0;
              *(undefined8 *)(lVar28 + -0x30) = 0;
              *(undefined8 *)(lVar28 + -0x28) = 0;
              *(undefined8 *)(lVar28 + -0x20) = 0;
              *(undefined8 *)(lVar28 + -0x18) = 0;
              *(undefined **)(lVar28 + -0x40) = puVar2;
              *(undefined8 *)(lVar28 + -0x10) = 0;
              *(undefined8 *)(lVar28 + -8) = 0;
              FUN_00fa74e8((undefined8 *)(lVar28 + -0x38),lVar27 + -0x38);
              plVar22 = *(long **)(lVar28 + -0x28);
              *(undefined8 *)(lVar28 + -0x28) = 0;
              if (plVar22 != (long *)0x0) {
                lVar25 = plVar22[6];
                psVar4 = (short *)(lVar25 + 0x1a);
                do {
                  sVar6 = *psVar4;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                  if (bVar11) {
                    *psVar4 = sVar6 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (sVar6 == 1) {
                  *(undefined8 *)(lVar25 + 0x10) = 0;
                  (**(code **)(*plVar22 + 0x50))();
                }
                else if (sVar6 == 0) goto LAB_00fa62fc;
              }
              uVar24 = *(undefined8 *)(lVar27 + -0x28);
              *(undefined8 *)(lVar27 + -0x28) = 0;
              *(undefined8 *)(lVar28 + -0x28) = uVar24;
              FUN_00ecc978(lVar28 + -0x20,lVar27 + -0x20);
              FUN_00eccc4c(lVar28 + -0x10,lVar27 + -0x10);
              *(undefined **)(lVar28 + -0x40) = puVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_00fa64b0;
              *(undefined8 *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = uVar24;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
              *(undefined8 *)(lVar28 + -0x38) = 0;
              *(undefined **)(lVar28 + -0x40) = PTR_DAT_047dd2d8 + 0x10;
              *(undefined8 *)(lVar28 + -0x30) = 0;
              *(undefined8 *)(lVar28 + -0x28) = 0;
              *(undefined8 *)(lVar28 + -0x20) = 0;
              *(undefined8 *)(lVar28 + -0x18) = 0;
              *(undefined8 *)(lVar28 + -0x10) = 0;
              *(undefined8 *)(lVar28 + -8) = 0;
              FUN_00fa74e8((undefined8 *)(lVar28 + -0x38),lVar27 + -0x38);
              plVar22 = *(long **)(lVar28 + -0x28);
              *(undefined8 *)(lVar28 + -0x28) = 0;
              if (plVar22 != (long *)0x0) {
                lVar20 = plVar22[6];
                psVar4 = (short *)(lVar20 + 0x1a);
                do {
                  sVar6 = *psVar4;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                  if (bVar11) {
                    *psVar4 = sVar6 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (sVar6 == 1) {
                  *(undefined8 *)(lVar20 + 0x10) = 0;
                  (**(code **)(*plVar22 + 0x50))();
                }
                else if (sVar6 == 0) {
LAB_00fa62fc:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              uVar24 = *(undefined8 *)(lVar27 + -0x28);
              *(undefined8 *)(lVar27 + -0x28) = 0;
              *(undefined8 *)(lVar28 + -0x28) = uVar24;
              FUN_00ecc978(lVar28 + -0x20,lVar27 + -0x20);
              FUN_00eccc4c(lVar28 + -0x10,lVar27 + -0x10);
              *(undefined **)(lVar28 + -0x40) = PTR_DAT_047dd2d0 + 0x10;
              *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
            }
            lVar27 = lVar27 + -0x40;
            lVar28 = lVar28 + -0x40;
          } while (lVar27 != lVar16);
          lVar27 = *(long *)(param_1 + 0xe8);
          lVar16 = *(long *)(param_1 + 0xf0);
        }
        lVar25 = *(long *)(param_1 + 0xf8);
        *(long *)(param_1 + 0xe8) = lVar28;
        *(long *)(param_1 + 0xf0) = lVar23 + 0x40;
        *(ulong *)(param_1 + 0xf8) = lVar18 + uVar17 * 0x40;
        if (((lVar16 != lVar27) && (FUN_00fa65c0(lVar16 + -0x40), lVar16 + -0x40 != lVar27)) &&
           (FUN_00fa65c0(lVar16 + -0x80), lVar16 + -0x80 != lVar27)) {
          do {
            FUN_00fa65c0(lVar16 + -0xc0);
            lVar16 = lVar16 + -0x40;
          } while (lVar27 + 0x80 != lVar16);
        }
        if (lVar27 != 0) {
          plVar22 = *(long **)(param_1 + 0x100);
          lVar25 = lVar25 - lVar27;
          uVar17 = (**(code **)(*plVar22 + 0xf8))(plVar22);
          if (((uVar17 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
            (**(code **)(*plVar22 + 0x18))(plVar22,lVar27,lVar25,8);
          }
          else {
            FUN_00c48fe8(plVar22,lVar27,lVar25,8);
          }
        }
      }
      else {
        FUN_00faded4(param_1 + 0xe8,auStack_a0);
      }
      FUN_00fa65c0(auStack_a0);
      lVar15 = lVar15 + 0x40;
    } while (lVar15 != lVar9);
  }
  *(undefined8 *)(lVar26 + 0xb8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0xc0));
  return;
}


