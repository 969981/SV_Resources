/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ecbbfc; name: FUN_00ecbbfc
 */


void FUN_00ecbbfc(long *param_1,ulong param_2,int *param_3,undefined8 param_4)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8 [4];
  long *local_88;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  lVar22 = (long)*param_3;
  lVar25 = param_1[0x12];
  iVar11 = param_3[2];
  if (param_3[1] != -1) {
    lVar27 = param_1[0x1a];
    lVar13 = *(long *)(lVar27 + (long)param_3[1] * 8);
    if (lVar13 != 0) {
      piVar4 = (int *)(lVar13 + 0x28);
      do {
        iVar5 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = iVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 == -1) goto LAB_00ecc420;
    }
    plVar14 = *(long **)(lVar27 + lVar22 * 8);
    *(long *)(lVar27 + lVar22 * 8) = lVar13;
    if (plVar14 == (long *)0x0) goto LAB_00ecbc38;
    plVar26 = plVar14 + 5;
    do {
      lVar27 = *plVar26;
      iVar5 = (int)lVar27 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(int *)plVar26 = iVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      goto LAB_00ecbc38;
    }
    if ((int)lVar27 != 0) goto LAB_00ecbc38;
LAB_00ecc204:
    pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar16 = "DecrementReferenceInternal";
    pcVar17 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar18 = "Reference counter underflows.";
LAB_00ecc468:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
  }
LAB_00ecbc38:
  FUN_00f2b7b8(local_a8,param_1 + 7,*(long *)(lVar25 + 0x210) + (long)iVar11 * 0x20,&DAT_03c886bc);
  if ((param_2 & 1) == 0) {
    FUN_00ecc478(&local_c0,*(undefined8 *)(param_1[0x1a] + lVar22 * 8),local_a8,0,param_4);
    if (local_c0 == (long *)0x0) goto LAB_00ecc034;
    lVar22 = local_c0[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      local_b0 = local_c0;
    } while (cVar7 != '\0');
  }
  else {
    FUN_00ecc478(&local_b0,*(undefined8 *)(param_1[0x1a] + lVar22 * 8),local_a8,1,param_4);
    plVar14 = local_b0;
    if (local_b0 == (long *)0x0) goto LAB_00ecc034;
    if (param_1[0x2d] != 0) {
      plVar26 = param_1 + 5;
      do {
        lVar22 = *plVar26;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *(int *)plVar26 = (int)lVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar22 == -1) {
LAB_00ecc420:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if (((*PTR_DAT_047d8c58 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c58);
      }
      uVar12 = *(undefined8 *)PTR_DAT_047d8c60;
      *(undefined8 *)PTR_DAT_047d8c68 = uVar12;
      FUN_00cbf5d4(&local_b8,uVar12,plVar14[1]);
      local_70 = local_b8;
      local_78 = param_1;
      if (local_b8 != (long *)0x0) {
        lVar22 = local_b8[6];
        if (*(long *)(lVar22 + 0x10) == 0) {
LAB_00ecc400:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar12;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) {
LAB_00ecc448:
          pcVar15 = "count != 0";
          pcVar16 = "AddReference";
          pcVar17 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar18 = "Reference counter overflows.";
          goto LAB_00ecc468;
        }
      }
      plVar26 = (long *)0x0;
      if (local_b8 != (long *)0x0) {
        plVar26 = local_b8 + 0xb;
      }
      if ((*(byte *)((long)plVar14 + 0x6d) & 1) == 0) {
        if ((*(byte *)((long)plVar14 + 0x6c) & 1) == 0) {
          plVar23 = plVar14 + 0xf;
          lVar22 = nn::os::GetCurrentThread();
LAB_00ecbd44:
          if (*plVar23 == 0) goto code_r0x00ecbd4c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x10));
          do {
            if (*plVar23 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x10));
                while (*plVar23 == 0) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar8) {
                    *plVar23 = lVar22;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00ecbd54;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar8) {
              *plVar23 = lVar22;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ecbd54:
          if ((*(byte *)((long)plVar14 + 0x6c) & 1) != 0) {
            FUN_00f3bf40(&local_78,plVar14[0xc],(int)plVar14[0xd]);
            goto LAB_00ecbfa0;
          }
          local_68 = local_78;
          if (local_78 != (long *)0x0) {
            plVar23 = local_78 + 5;
            do {
              lVar22 = *plVar23;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar8) {
                *(int *)plVar23 = (int)lVar22 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((int)lVar22 == -1) goto LAB_00ecc420;
          }
          local_60 = local_70;
          if (local_70 == (long *)0x0) goto LAB_00ecbdc4;
          lVar22 = local_70[6];
          if (*(long *)(lVar22 + 0x10) == 0) goto LAB_00ecc400;
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 != 0) {
            if (sVar6 != -1) goto LAB_00ecbdc4;
            goto LAB_00ecc448;
          }
          uVar12 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar12;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
LAB_00ecbdc4:
          local_58 = plVar26;
          if ((ulong)plVar14[0x1a] < (ulong)plVar14[0x1b]) {
            FUN_00ee517c(plVar14 + 0x19,&local_68);
            if (local_60 != (long *)0x0) {
              lVar22 = local_60[6];
              psVar1 = (short *)(lVar22 + 0x1a);
              do {
                sVar6 = *psVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                *(undefined8 *)(lVar22 + 0x10) = 0;
                (**(code **)(*local_60 + 0x50))();
              }
              else if (sVar6 == 0) goto LAB_00ecc2b0;
            }
          }
          else {
            uVar21 = plVar14[0x1d];
            lVar22 = plVar14[0x1a] - plVar14[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar21) {
              uVar21 = 0x7fffffffffffffff;
            }
            uVar2 = lVar22 * -0x71c71c71c71c71c7 + 1;
            if (uVar21 < uVar2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar25 = plVar14[0x1b] - plVar14[0x19] >> 4;
            uVar20 = lVar25 * 0x1c71c71c71c71c72;
            if (uVar2 <= uVar20) {
              uVar2 = uVar20;
            }
            plVar23 = plVar14 + 0x1c;
            if (uVar21 >> 1 <= (ulong)(lVar25 * -0x71c71c71c71c71c7)) {
              uVar2 = uVar21;
            }
            if (uVar2 == 0) {
              lVar25 = 0;
            }
            else {
              lVar25 = (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar2 * 0x90,0x10);
              if (lVar25 == 0) {
                (**(code **)(*(long *)*plVar23 + 0xe8))();
              }
            }
            lVar27 = *plVar23;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            plVar10 = local_60;
            plVar9 = local_68;
            if (lVar13 != 0) {
              if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar27;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              plVar26 = local_58;
            }
            lVar27 = lVar25 + lVar22 * 0x10;
            *(undefined8 *)(lVar27 + 0x10) = 0;
            *(undefined8 *)(lVar27 + 0x18) = 0;
            puVar24 = (undefined8 *)(lVar25 + lVar22 * 0x10);
            local_68 = (long *)0x0;
            local_60 = (long *)0x0;
            *(long **)(lVar27 + 0x20) = plVar9;
            *(long **)(lVar27 + 0x28) = plVar10;
            *puVar24 = &LAB_00f3bf30;
            *(undefined1 **)(lVar27 + 8) = &LAB_02bb17c8;
            *(undefined1 **)(lVar27 + 0x10) = &LAB_02bb18ac;
            *(undefined1 **)(lVar27 + 0x18) = &LAB_02bb19bc;
            *(long **)(lVar27 + 0x80) = plVar26;
            if (lVar13 != 0) {
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            lVar22 = plVar14[0x19];
            lVar27 = plVar14[0x1a];
            puVar3 = puVar24 + 0x12;
            if (lVar27 == lVar22) {
              lVar27 = lVar22;
            }
            else {
              do {
                puVar24 = puVar24 + -0x12;
                lVar27 = lVar27 + -0x90;
                FUN_00cbf394(plVar23,puVar24,lVar27);
              } while (lVar22 != lVar27);
              lVar22 = plVar14[0x19];
              lVar27 = plVar14[0x1a];
            }
            plVar14[0x19] = (long)puVar24;
            plVar14[0x1a] = (long)puVar3;
            lVar13 = plVar14[0x1b];
            plVar14[0x1b] = lVar25 + uVar2 * 0x90;
            while (lVar25 = lVar27, lVar25 != lVar22) {
              pcVar19 = *(code **)(lVar25 + -0x88);
              lVar27 = lVar25 + -0x90;
              if (pcVar19 != (code *)0x0) {
                *(undefined8 *)(lVar25 + -0x80) = 0;
                *(undefined8 *)(lVar25 + -0x78) = 0;
                *(undefined8 *)(lVar25 + -0x90) = 0;
                *(undefined8 *)(lVar25 + -0x88) = 0;
                (*pcVar19)(lVar25 + -0x70);
              }
            }
            if (lVar22 != 0) {
              plVar23 = (long *)*plVar23;
              uVar21 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar21 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,lVar22,lVar13 - lVar22,0x10);
              }
              else {
                FUN_00c48fe8(plVar23,lVar22,lVar13 - lVar22,0x10);
              }
            }
          }
          if (local_68 == (long *)0x0) {
LAB_00ecbfa0:
            plVar14[0xf] = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0x10));
            goto LAB_00ecbfb0;
          }
          plVar26 = local_68 + 5;
          do {
            lVar22 = *plVar26;
            iVar11 = (int)lVar22 + -1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar8) {
              *(int *)plVar26 = iVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*local_68 + 0x10))();
            goto LAB_00ecbfa0;
          }
          if ((int)lVar22 != 0) goto LAB_00ecbfa0;
          goto LAB_00ecc204;
        }
        FUN_00f3bf40(&local_78,plVar14[0xc],(int)plVar14[0xd]);
      }
LAB_00ecbfb0:
      if (local_70 != (long *)0x0) {
        lVar22 = local_70[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_00ecc2b0;
      }
      if (local_78 != (long *)0x0) {
        plVar14 = local_78 + 5;
        do {
          lVar22 = *plVar14;
          iVar11 = (int)lVar22 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *(int *)plVar14 = iVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
        else if ((int)lVar22 == 0) goto LAB_00ecc204;
      }
      if (local_b8 != (long *)0x0) {
        lVar22 = local_b8[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_b8 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_00ecc2b0;
      }
    }
    if (local_b0 == (long *)0x0) goto LAB_00ecc034;
    lVar22 = local_b0[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (sVar6 == 1) {
    *(undefined8 *)(lVar22 + 0x10) = 0;
    (**(code **)(*local_b0 + 0x50))();
  }
  else if (sVar6 == 0) {
LAB_00ecc2b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00ecc034:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8[0] != (long *)0x0) {
    (**(code **)(*local_a8[0] + 0x20))();
  }
  return;
code_r0x00ecbd4c:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar8) {
    *plVar23 = lVar22;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ecbd54;
  goto LAB_00ecbd44;
}


