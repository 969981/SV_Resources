/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d60d28; name: FUN_00d60d28
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d60d28(long param_1,undefined8 *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  short sVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  int iVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  undefined1 uVar31;
  long *plVar32;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long *local_68;
  
  FUN_00d65110(*(undefined8 *)(param_1 + 0x1f0));
  FUN_00d620a0(*(undefined8 *)(param_1 + 0x1e8));
  if ((*(char *)(param_1 + 0x143) == '\0') && (*(char *)(param_1 + 0x250) != '\0')) {
    lVar24 = *(long *)(param_1 + 0x200);
    lVar13 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    lVar13 = *(long *)(lVar13 + 8);
    if (*(char *)(lVar24 + 0x40) == '\0') {
      if (*(char *)(lVar24 + 0x41) == '\0') {
        bVar9 = FUN_00d62818(*(undefined8 *)(lVar24 + 0x78));
        *(byte *)(lVar24 + 0x40) = bVar9 & 1;
        if ((bVar9 & 1) != 0) goto LAB_00d60ff0;
      }
    }
    else {
LAB_00d60ff0:
      FUN_00d6606c((float)((double)lVar13 / 1000000000.0),*(undefined8 *)(lVar24 + 0x78));
    }
  }
  uVar25 = *(undefined8 *)(param_1 + 0x1f8);
  lVar13 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  FUN_00d62bb4((float)((double)*(long *)(lVar13 + 8) / 1000000000.0),uVar25);
  if (*(long *)(param_1 + 0x230) == 0) {
    plVar26 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00d61ef0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar26;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar24 = (**(code **)(*plVar26 + 0x10))(plVar26,0x38,8);
    if (lVar24 == 0) {
      (**(code **)(*plVar26 + 0xe8))(plVar26);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00d6cdf8();
    *(undefined4 *)(lVar24 + 0x18) = 0x80038;
    *(long **)(lVar24 + 8) = plVar26;
    *(long *)(lVar24 + 0x10) = lVar24;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    piVar1 = (int *)(lVar24 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == -1) {
LAB_00d61ef4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar26 = *(long **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = 0;
    if (plVar26 != (long *)0x0) {
      plVar14 = plVar26 + 5;
      do {
        lVar13 = *plVar14;
        iVar10 = (int)lVar13 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar26 + 0x10))();
      }
      else if ((int)lVar13 == 0) goto LAB_00d61348;
    }
    *(long *)(param_1 + 0x230) = lVar24;
  }
  FUN_00c9e664(&local_b0,param_1 + 0xe8);
  (**(code **)(*(long *)local_a8[9] + 0x68))();
  if (local_a8 != (long *)0x0) {
    plVar26 = local_a8 + 5;
    do {
      lVar13 = *plVar26;
      iVar10 = (int)lVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar5) {
        *(int *)plVar26 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_00d61348:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x60))();
  }
  plVar26 = (long *)(param_1 + 0x188);
  if ((*(long *)(param_1 + 0x188) == 0) || (*(short *)(*(long *)(param_1 + 0x188) + 0x1a) == 0)) {
    plVar14 = (long *)FUN_00d62350(param_1);
    lVar13 = *plVar14;
    if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
      return;
    }
    psVar2 = (short *)(lVar13 + 0x1a);
    sVar22 = *(short *)(lVar13 + 0x1a);
LAB_00d61494:
    sVar3 = *psVar2;
    if (sVar3 == sVar22) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d614b8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d614b8:
      bVar5 = false;
    }
    if (!bVar5) goto code_r0x00d614c0;
    lVar13 = *(long *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      return;
    }
    plVar14 = (long *)(lVar13 + -0x28);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    uVar15 = FUN_015255c0(plVar14,PTR_DAT_047d3e30);
    if ((uVar15 & 1) == 0) {
      lVar13 = *(long *)(lVar13 + 0x70);
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar22 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
        return;
      }
      if (sVar22 != 0) {
        return;
      }
LAB_00d61af8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    local_b0 = (long *)&DAT_afc4d6c05abef19e;
    local_a8 = (long *)0x3c7b602;
    local_a0 = 7;
    local_98 = (long *)0x0;
    lVar24 = FUN_01132f14(plVar14,&local_b0);
    if (lVar24 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_01f83538(&local_68,lVar24,&local_80);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      plVar29 = local_68 + 5;
      (**(code **)(*local_68 + 0x18))(&local_b0);
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      if ((long *)local_b0[2] == plVar29) {
        FUN_00e14860(&local_80,&local_b0);
      }
      plVar29 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar32 = local_b0 + 3;
        do {
          sVar22 = (short)*plVar32;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar5) {
            *(short *)plVar32 = sVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar22 == 1) {
          piVar1 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar24 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar24;
            local_90 = (undefined8 *)*plVar29;
            FUN_00c44438(lVar24 + 0x8040,&local_90);
          }
        }
        else if (sVar22 == 0) goto LAB_00d610b8;
      }
      FUN_0136345c(plVar26,&local_80);
      plVar29 = local_80;
      if (local_80 != (long *)0x0) {
        plVar32 = local_80 + 3;
        do {
          sVar22 = (short)*plVar32;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar5) {
            *(short *)plVar32 = sVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar22 == 1) {
          piVar1 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar24 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar24;
            local_b0 = (long *)*plVar29;
            FUN_00c44438(lVar24 + 0x8040,&local_b0);
          }
        }
        else if (sVar22 == 0) goto LAB_00d610b8;
      }
      if (local_68 != (long *)0x0) {
        lVar24 = local_68[6];
        psVar2 = (short *)(lVar24 + 0x1a);
        do {
          sVar22 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar22 == 1) {
          *(undefined8 *)(lVar24 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar22 == 0) goto LAB_00d61af8;
      }
    }
    if ((*plVar26 == 0) || (lVar24 = *(long *)(*plVar26 + 0x10), lVar24 == 0)) {
      iVar10 = 0;
    }
    else {
      lVar24 = lVar24 + -0x28;
      uVar12 = FUN_01f9da20(lVar24);
      local_b0 = (long *)0x3565f88648ab40b8;
      local_a8 = (long *)&DAT_03c99248;
      local_a0 = 4;
      local_98 = (long *)0x0;
      uVar15 = FUN_00e13858(lVar24,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (((uVar15 & 0xff) != 0) && (uVar19 = (uint)(uVar15 >> 0x20), uVar19 < uVar12)) {
        *(uint *)(param_1 + 0x1a8) = uVar19;
      }
      iVar10 = 0;
      bVar5 = true;
      do {
        bVar6 = bVar5;
        local_b0 = (long *)&DAT_afc4d6c05abef19e;
        local_98 = (long *)0x0;
        local_a8 = (long *)0x3c7b602;
        local_a0 = 7;
        lVar24 = FUN_01132f14(plVar14,&local_b0);
        if (lVar24 != 0) {
          plVar29 = (long *)(lVar24 + 0x48);
          lVar16 = nn::os::GetCurrentThread();
LAB_00d61620:
          if (*plVar29 == 0) goto code_r0x00d61628;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x50));
          do {
            if (*plVar29 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x50));
                while (*plVar29 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar5) {
                    *plVar29 = lVar16;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00d61630;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar5) {
              *plVar29 = lVar16;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00d61630:
          plVar29 = *(long **)(lVar24 + 0xb0);
          plVar32 = *(long **)(lVar24 + 0xb8);
          if (plVar29 == plVar32) {
LAB_00d61680:
            plVar29 = *(long **)(lVar24 + 0x78);
            plVar32 = *(long **)(lVar24 + 0x80);
            if (plVar29 != plVar32) {
              do {
                lVar16 = *plVar29;
                uVar15 = FUN_01f9dac4(lVar16 + 8);
                if (((uVar15 & 1) != 0) && (*(int *)(lVar16 + 0x25e4) == iVar10)) goto LAB_00d616c4;
                plVar29 = plVar29 + 1;
              } while (plVar32 != plVar29);
              plVar29 = plVar32;
LAB_00d616c4:
              if (plVar29 != *(long **)(lVar24 + 0x80)) {
                lVar16 = *plVar29;
                local_80 = (long *)0x0;
                if (lVar16 != 0) {
                  lVar30 = *(long *)(lVar16 + 0x10);
                  local_80 = (long *)(lVar16 + -0x20);
                  if (*(long *)(lVar30 + 0x10) == 0) {
LAB_00d62070:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("m_object != nullptr","AddReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x3d);
                  }
                  psVar2 = (short *)(lVar30 + 0x1a);
                  do {
                    sVar22 = *psVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar5) {
                      *psVar2 = sVar22 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_00d618ac;
                }
                goto LAB_00d616d4;
              }
            }
            local_80 = (long *)0x0;
          }
          else {
            do {
              lVar16 = *plVar29;
              uVar15 = FUN_01f9dac4(lVar16 + 8);
              if (((uVar15 & 1) != 0) && (*(int *)(lVar16 + 0x25e4) == iVar10)) goto LAB_00d61674;
              plVar29 = plVar29 + 1;
            } while (plVar32 != plVar29);
            plVar29 = plVar32;
LAB_00d61674:
            if (plVar29 == *(long **)(lVar24 + 0xb8)) goto LAB_00d61680;
            lVar16 = *plVar29;
            local_80 = (long *)0x0;
            if (lVar16 != 0) {
              lVar30 = *(long *)(lVar16 + 0x10);
              local_80 = (long *)(lVar16 + -0x20);
              if (*(long *)(lVar30 + 0x10) == 0) goto LAB_00d62070;
              psVar2 = (short *)(lVar30 + 0x1a);
              do {
                sVar22 = *psVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar5) {
                  *psVar2 = sVar22 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_00d618ac:
              if (sVar22 == 0) {
                uVar25 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
                *(undefined8 *)(lVar30 + 8) = uVar25;
                *(undefined4 *)(lVar30 + 0x1c) = 0xfffffffe;
              }
              else if (sVar22 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
            }
          }
LAB_00d616d4:
          *(undefined8 *)(lVar24 + 0x48) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x50));
          goto LAB_00d616e4;
        }
        local_80 = (long *)0x0;
LAB_00d616e4:
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          puVar18 = (undefined8 *)(param_1 + 0x1c8);
          lVar24 = *(long *)(param_1 + 0x1b8);
          if (lVar24 == *(long *)(param_1 + 0x1c0)) {
            uVar23 = *(ulong *)(param_1 + 0x1d0);
            lVar24 = lVar24 - *(long *)(param_1 + 0x1b0) >> 3;
            uVar15 = lVar24 + 1;
            if (0x7ffffffffffffffe < uVar23) {
              uVar23 = 0x7fffffffffffffff;
            }
            if (uVar23 < uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar16 = *(long *)(param_1 + 0x1c0) - *(long *)(param_1 + 0x1b0);
            uVar20 = lVar16 >> 2;
            if (uVar15 <= uVar20) {
              uVar15 = uVar20;
            }
            if (uVar23 >> 1 <= (ulong)(lVar16 >> 3)) {
              uVar15 = uVar23;
            }
            if (uVar15 == 0) {
              lVar16 = 0;
            }
            else {
              lVar16 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar15 << 3,8);
              if (lVar16 == 0) {
                (**(code **)(*(long *)*puVar18 + 0xe8))();
              }
            }
            lVar24 = lVar16 + lVar24 * 8;
            FUN_01f9db9c(puVar18,lVar24,&local_80);
            plVar29 = *(long **)(param_1 + 0x1b0);
            plVar32 = *(long **)(param_1 + 0x1b8);
            lVar30 = lVar24;
            if (plVar32 == plVar29) {
              plVar32 = plVar29;
            }
            else {
              do {
                uVar25 = *puVar18;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar28 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar28 == 0) {
                  lVar28 = plVar32[-1];
                  plVar32[-1] = 0;
                  *(long *)(lVar30 + -8) = lVar28;
                }
                else {
                  if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_00d61ef0;
                  *(undefined8 *)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = uVar25;
                  *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                  lVar21 = plVar32[-1];
                  plVar32[-1] = 0;
                  *(long *)(lVar30 + -8) = lVar21;
                  *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
                }
                plVar32 = plVar32 + -1;
                lVar30 = lVar30 + -8;
              } while (plVar29 != plVar32);
              plVar32 = *(long **)(param_1 + 0x1b0);
              plVar29 = *(long **)(param_1 + 0x1b8);
            }
            lVar28 = *(long *)(param_1 + 0x1c0);
            *(long *)(param_1 + 0x1b0) = lVar30;
            *(long *)(param_1 + 0x1b8) = lVar24 + 8;
            *(ulong *)(param_1 + 0x1c0) = lVar16 + uVar15 * 8;
            while (plVar29 != plVar32) {
              plVar29 = plVar29 + -1;
              plVar17 = (long *)*plVar29;
              if (plVar17 != (long *)0x0) {
                lVar24 = plVar17[6];
                psVar2 = (short *)(lVar24 + 0x1a);
                do {
                  sVar22 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar22 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar22 == 1) {
                  *(undefined8 *)(lVar24 + 0x10) = 0;
                  (**(code **)(*plVar17 + 0x50))();
                }
                else if (sVar22 == 0) goto LAB_00d61af8;
              }
            }
            if (plVar32 != (long *)0x0) {
              lVar28 = lVar28 - (long)plVar32;
              plVar29 = (long *)*puVar18;
              uVar15 = (**(code **)(*plVar29 + 0xf8))(plVar29);
              if (((uVar15 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                (**(code **)(*plVar29 + 0x18))(plVar29,plVar32,lVar28,8);
              }
              else {
                FUN_00c48fe8(plVar29,plVar32,lVar28,8);
              }
            }
          }
          else {
            FUN_01f9db9c(puVar18,lVar24,&local_80);
            *(long *)(param_1 + 0x1b8) = lVar24 + 8;
          }
          if (local_80 != (long *)0x0) {
            lVar24 = local_80[6];
            psVar2 = (short *)(lVar24 + 0x1a);
            do {
              sVar22 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar22 == 1) {
              *(undefined8 *)(lVar24 + 0x10) = 0;
              (**(code **)(*local_80 + 0x50))();
            }
            else if (sVar22 == 0) goto LAB_00d61af8;
          }
        }
        iVar10 = 1;
        bVar5 = false;
      } while (bVar6);
    }
    lVar13 = *(long *)(lVar13 + 0x70);
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar22 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar22 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar22 == 0) goto LAB_00d61af8;
    if (iVar10 == 0) {
      return;
    }
  }
  if (*plVar26 == 0) {
    lVar13 = 0;
  }
  else {
    lVar24 = *(long *)(*plVar26 + 0x10);
    lVar13 = 0;
    if (lVar24 != 0) {
      lVar13 = lVar24 + -0x28;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x1a8);
  plVar26 = (long *)(lVar13 + 0x40);
  lVar24 = nn::os::GetCurrentThread();
  while (*plVar26 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar5) {
      *plVar26 = lVar24;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d60edc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x48));
  do {
    if (*plVar26 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x48));
        while (*plVar26 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar5) {
            *plVar26 = lVar24;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d60edc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar5) {
      *plVar26 = lVar24;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d60edc:
  if ((ulong)(*(long *)(lVar13 + 0x80) - *(long *)(lVar13 + 0x78) >> 5) <= (ulong)uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar26 = *(long **)(*(long *)(lVar13 + 0x78) + (ulong)uVar12 * 0x20);
  *(undefined8 *)(lVar13 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x48));
  (**(code **)(*plVar26 + 0x70))(&local_b0,plVar26);
  if (((local_b0 == (long *)0x0) || (local_a8 == (long *)0x0)) ||
     (*(short *)((long)local_a8 + 0x1a) == 0)) {
LAB_00d61058:
    uVar25 = 0;
    uVar31 = 0;
  }
  else {
    iVar10 = (**(code **)(*local_b0 + 0x20))();
    puVar8 = PTR_DAT_047d3e30;
    puVar7 = PTR_DAT_047d3e28;
    if (iVar10 == 0) goto LAB_00d61058;
    uVar31 = 0;
    uVar25 = 0;
    iVar27 = 0;
    do {
      if (((local_b0 == (long *)0x0) || (local_a8 == (long *)0x0)) ||
         (*(short *)((long)local_a8 + 0x1a) == 0)) {
        plVar26 = (long *)puVar8;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
      }
      else {
        plVar26 = (long *)(**(code **)(*local_b0 + 0x28))(local_b0,iVar27);
      }
      if (*plVar26 == 0x7da8f25f3b107c53) {
        uVar25 = 1;
      }
      else if (*plVar26 == 0x8c2091a3a8687b0) {
        uVar31 = 1;
      }
      iVar27 = iVar27 + 1;
    } while (iVar10 != iVar27);
  }
  plVar26 = *(long **)(param_1 + 0x1b0);
  plVar14 = *(long **)(param_1 + 0x1b8);
  if (plVar26 != plVar14) {
    *(undefined1 *)(*plVar26 + 0x65) = uVar31;
    while (plVar26 = plVar26 + 1, plVar26 != plVar14) {
      *(undefined1 *)(*plVar26 + 0x65) = uVar31;
    }
  }
  if ((*(long *)(param_1 + 0x198) == 0) || (*(short *)(*(long *)(param_1 + 0x198) + 0x1a) == 0)) {
    FUN_00c9e664(&local_80,param_1 + 0xe8);
    lVar13 = 0;
    if (local_78 != (long *)0x0) {
      lVar13 = local_78[9];
    }
    lVar13 = FUN_01104bd8(lVar13 + 0x108,&local_90);
    if (local_78 != (long *)0x0) {
      plVar26 = local_78 + 5;
      do {
        lVar24 = *plVar26;
        iVar10 = (int)lVar24 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar5) {
          *(int *)plVar26 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      else if ((int)lVar24 == 0) goto LAB_00d61348;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x60))();
    }
    if (lVar13 != 0) {
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      FUN_00c43ef0(&local_80,lVar13 + 0x98);
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      if (local_80[2] == lVar13 + 0x28) {
        FUN_00d6ca28(&local_90,&local_80);
      }
      plVar26 = local_80;
      if (local_80 != (long *)0x0) {
        plVar14 = local_80 + 3;
        do {
          sVar22 = (short)*plVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(short *)plVar14 = sVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar22 == 1) {
          piVar1 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = (long *)*plVar26;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar22 == 0) goto LAB_00d610b8;
      }
      FUN_00d6c658((long *)(param_1 + 0x198),&local_90);
      puVar18 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_90 + 3);
        do {
          sVar22 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar22 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar22 == 1) {
          piVar1 = (int *)((long)local_90 + 0x1c);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_80 = (long *)*puVar18;
            FUN_00c44438(lVar13 + 0x8040,&local_80);
          }
        }
        else if (sVar22 == 0) goto LAB_00d610b8;
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x198);
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar13 + 0x1a);
    sVar22 = *(short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar22) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar22 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d619c8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d619c8:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar13 + 0x10) != 0) {
          plVar26 = (long *)(*(long *)(lVar13 + 0x10) + -0x28);
          (**(code **)(*plVar26 + 0x60))(plVar26);
          puVar18 = (undefined8 *)FUN_01df7f84(plVar26);
          plVar26 = (long *)*puVar18;
          if (plVar26 != (long *)0x0) {
            plVar14 = plVar26 + 5;
            do {
              lVar13 = *plVar14;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *(int *)plVar14 = (int)lVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar13 == -1) goto LAB_00d61ef4;
            FUN_01f9dd14(plVar26,uVar25);
            do {
              lVar13 = *plVar14;
              iVar10 = (int)lVar13 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *(int *)plVar14 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
            else if ((int)lVar13 == 0) goto LAB_00d61348;
          }
        }
        break;
      }
      sVar22 = sVar3;
    } while (sVar3 != 0);
  }
  plVar26 = local_a8;
  if (local_a8 == (long *)0x0) {
    return;
  }
  plVar14 = local_a8 + 3;
  do {
    sVar22 = (short)*plVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *(short *)plVar14 = sVar22 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar22 == 1) {
    piVar1 = (int *)((long)local_a8 + 0x1c);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar13 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar13;
    local_80 = (long *)*plVar26;
    FUN_00c44438(lVar13 + 0x8040,&local_80);
    return;
  }
  if (sVar22 != 0) {
    return;
  }
LAB_00d610b8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
code_r0x00d614c0:
  sVar22 = sVar3;
  if (sVar3 == 0) {
    return;
  }
  goto LAB_00d61494;
code_r0x00d61628:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar5) {
    *plVar29 = lVar16;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d61630;
  goto LAB_00d61620;
}


