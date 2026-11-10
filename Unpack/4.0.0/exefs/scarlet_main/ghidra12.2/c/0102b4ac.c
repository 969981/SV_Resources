/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102b4ac; name: FUN_0102b4ac
 */


void FUN_0102b4ac(long *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  plVar26 = (long *)*param_2;
  plVar22 = param_1 + 7;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  plVar10 = (long *)*plVar22;
  *plVar22 = (long)plVar26;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  param_1[8] = param_2[1];
  param_1[9] = param_2[2];
  param_1[10] = param_2[3];
  plVar26 = (long *)param_2[4];
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x18))(plVar26);
  }
  plVar10 = (long *)param_1[0xb];
  param_1[0xb] = (long)plVar26;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 5);
  if ((param_3 & 1) == 0) {
    uVar11 = FUN_0102bf9c(param_1 + 0x11,0,plVar22,0,param_4);
    uVar21 = 1;
    if ((uVar11 & 1) == 0) {
      uVar21 = 2;
    }
    *(undefined4 *)((long)param_1 + 0x15c) = uVar21;
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x2b) = 0;
      return;
    }
    return;
  }
  uVar11 = FUN_0102bf9c(param_1 + 0x11,1,plVar22,0,param_4);
  if ((uVar11 & 1) != 0) {
    plVar22 = (long *)param_1[0x15];
    if (plVar22 == (long *)0x0) goto LAB_0102b54c;
    lVar23 = plVar22[6];
    if (*(long *)(lVar23 + 0x10) == 0) goto LAB_0102bcd0;
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar12;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
      goto LAB_0102b54c;
    }
    if (sVar4 != -1) goto LAB_0102b54c;
LAB_0102b9ec:
    pcVar14 = "count != 0";
    pcVar15 = "AddReference";
    pcVar16 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar17 = "Reference counter overflows.";
LAB_0102ba0c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
  }
  plVar22 = (long *)0x0;
LAB_0102b54c:
  plVar26 = param_1 + 5;
  do {
    lVar23 = *plVar26;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *(int *)plVar26 = (int)lVar23 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)lVar23 == -1) {
LAB_0102bcf0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar12;
  FUN_00cbf5d4(&local_80,uVar12,plVar22[1]);
  local_70 = local_80;
  local_78 = param_1;
  if (local_80 != (long *)0x0) {
    lVar23 = local_80[6];
    if (*(long *)(lVar23 + 0x10) == 0) {
LAB_0102bcd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar12;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0102b9ec;
  }
  plVar26 = (long *)0x0;
  if (local_80 != (long *)0x0) {
    plVar26 = local_80 + 0xb;
  }
  if ((*(byte *)((long)plVar22 + 0x6d) & 1) == 0) {
    if ((*(byte *)((long)plVar22 + 0x6c) & 1) == 0) {
      plVar10 = plVar22 + 0xf;
      lVar23 = nn::os::GetCurrentThread();
LAB_0102b6d8:
      if (*plVar10 == 0) goto code_r0x0102b6e0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
            while (*plVar10 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = lVar23;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0102b6e8;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar23;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0102b6e8:
      if ((*(byte *)((long)plVar22 + 0x6c) & 1) != 0) {
        FUN_0102bd44(&local_78,plVar22[0xc],(int)plVar22[0xd]);
        goto LAB_0102b934;
      }
      local_68 = local_78;
      if (local_78 != (long *)0x0) {
        plVar10 = local_78 + 5;
        do {
          lVar23 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar23 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar23 == -1) goto LAB_0102bcf0;
      }
      local_60 = local_70;
      if (local_70 == (long *)0x0) goto LAB_0102b758;
      lVar23 = local_70[6];
      if (*(long *)(lVar23 + 0x10) == 0) goto LAB_0102bcd0;
      psVar1 = (short *)(lVar23 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 != 0) {
        if (sVar4 != -1) goto LAB_0102b758;
        goto LAB_0102b9ec;
      }
      uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar12;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
LAB_0102b758:
      local_58 = plVar26;
      if ((ulong)plVar22[0x1a] < (ulong)plVar22[0x1b]) {
        FUN_010307a0(plVar22 + 0x19,&local_68);
        if (local_60 != (long *)0x0) {
          lVar23 = local_60[6];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_0102bb88;
        }
      }
      else {
        uVar11 = plVar22[0x1d];
        lVar23 = plVar22[0x1a] - plVar22[0x19] >> 4;
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        uVar2 = lVar23 * -0x71c71c71c71c71c7 + 1;
        if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = plVar22[0x1b] - plVar22[0x19] >> 4;
        uVar20 = lVar18 * 0x1c71c71c71c71c72;
        if (uVar2 <= uVar20) {
          uVar2 = uVar20;
        }
        plVar10 = plVar22 + 0x1c;
        if (uVar11 >> 1 <= (ulong)(lVar18 * -0x71c71c71c71c71c7)) {
          uVar2 = uVar11;
        }
        if (uVar2 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar2 * 0x90,0x10);
          if (lVar18 == 0) {
            (**(code **)(*(long *)*plVar10 + 0xe8))();
          }
        }
        lVar24 = *plVar10;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        plVar8 = local_60;
        plVar7 = local_68;
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar26 = local_58;
        }
        lVar24 = lVar18 + lVar23 * 0x10;
        *(undefined8 *)(lVar24 + 0x10) = 0;
        *(undefined8 *)(lVar24 + 0x18) = 0;
        puVar25 = (undefined8 *)(lVar18 + lVar23 * 0x10);
        local_68 = (long *)0x0;
        local_60 = (long *)0x0;
        *(long **)(lVar24 + 0x20) = plVar7;
        *(long **)(lVar24 + 0x28) = plVar8;
        *puVar25 = &LAB_02715478;
        *(undefined1 **)(lVar24 + 8) = &LAB_02bb15b8;
        *(undefined1 **)(lVar24 + 0x10) = &LAB_02bb169c;
        *(undefined1 **)(lVar24 + 0x18) = &LAB_02bb17ac;
        *(long **)(lVar24 + 0x80) = plVar26;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar23 = plVar22[0x19];
        lVar24 = plVar22[0x1a];
        puVar3 = puVar25 + 0x12;
        if (lVar24 == lVar23) {
          lVar24 = lVar23;
        }
        else {
          do {
            puVar25 = puVar25 + -0x12;
            lVar24 = lVar24 + -0x90;
            FUN_00cbf394(plVar10,puVar25,lVar24);
          } while (lVar23 != lVar24);
          lVar23 = plVar22[0x19];
          lVar24 = plVar22[0x1a];
        }
        plVar22[0x19] = (long)puVar25;
        plVar22[0x1a] = (long)puVar3;
        lVar13 = plVar22[0x1b];
        plVar22[0x1b] = lVar18 + uVar2 * 0x90;
        while (lVar18 = lVar24, lVar18 != lVar23) {
          pcVar19 = *(code **)(lVar18 + -0x88);
          lVar24 = lVar18 + -0x90;
          if (pcVar19 != (code *)0x0) {
            *(undefined8 *)(lVar18 + -0x80) = 0;
            *(undefined8 *)(lVar18 + -0x78) = 0;
            *(undefined8 *)(lVar18 + -0x90) = 0;
            *(undefined8 *)(lVar18 + -0x88) = 0;
            (*pcVar19)(lVar18 + -0x70);
          }
        }
        if (lVar23 != 0) {
          plVar10 = (long *)*plVar10;
          uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
          if (((uVar11 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar23,lVar13 - lVar23,0x10);
          }
          else {
            FUN_00c48fe8(plVar10,lVar23,lVar13 - lVar23,0x10);
          }
        }
      }
      if (local_68 == (long *)0x0) {
LAB_0102b934:
        plVar22[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar22 + 0x10));
        goto LAB_0102b610;
      }
      plVar26 = local_68 + 5;
      do {
        lVar23 = *plVar26;
        iVar9 = (int)lVar23 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_68 + 0x10))();
        goto LAB_0102b934;
      }
      if ((int)lVar23 != 0) goto LAB_0102b934;
      goto LAB_0102bd18;
    }
    FUN_0102bd44(&local_78,plVar22[0xc],(int)plVar22[0xd]);
  }
LAB_0102b610:
  if (local_70 != (long *)0x0) {
    lVar23 = local_70[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0102bb88;
  }
  if (local_78 != (long *)0x0) {
    plVar26 = local_78 + 5;
    do {
      lVar23 = *plVar26;
      iVar9 = (int)lVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar23 == 0) {
LAB_0102bd18:
      pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar15 = "DecrementReferenceInternal";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar17 = "Reference counter underflows.";
      goto LAB_0102ba0c;
    }
  }
  if (local_80 != (long *)0x0) {
    lVar23 = local_80[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_80 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0102bb88;
  }
  lVar23 = plVar22[6];
  psVar1 = (short *)(lVar23 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar23 + 0x10) = 0;
    (**(code **)(*plVar22 + 0x50))(plVar22);
  }
  else if (sVar4 == 0) {
LAB_0102bb88:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
code_r0x0102b6e0:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar23;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0102b6e8;
  goto LAB_0102b6d8;
}


