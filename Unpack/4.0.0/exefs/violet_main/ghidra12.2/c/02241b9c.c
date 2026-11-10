/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02241b9c; name: FUN_02241b9c
 */


void FUN_02241b9c(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  long **pplVar4;
  short sVar5;
  char cVar6;
  ulong *puVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  code *local_138;
  undefined1 auStack_120 [96];
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  ulong *local_78;
  undefined8 uStack_70;
  long ***local_68;
  long **local_58;
  
  local_138 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_120);
    local_138 = *(code **)(param_3 + 8);
  }
  local_98 = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = *(undefined8 *)(param_2 + 0x118);
  local_88 = *(undefined8 *)(param_2 + 0x120);
  local_80 = *(long **)(param_2 + 0x128);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_78 = (ulong *)0x0;
    uStack_70 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_78,param_2 + 0x30,&local_98);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 == (ulong *)0x0) goto LAB_02241c4c;
  if (*(short *)((long)local_78 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_78 + 0x1a);
    sVar14 = *(short *)((long)local_78 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar14) {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_02241cd8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02241cd8:
        bVar8 = false;
      }
      if (bVar8) {
        uVar12 = local_78[2];
        if (uVar12 == 0) goto LAB_02241ed8;
        FUN_01340a44(&local_c0,param_2,0x100000001);
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        bVar8 = (char)local_c0 != '\0';
        pplVar4 = (long **)PTR_DAT_047d3e30;
        if (bVar8) {
          pplVar4 = &plStack_b8;
        }
        plVar16 = *pplVar4;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 8);
        if (bVar8) {
          pplVar4 = &local_b0;
        }
        plVar18 = *pplVar4;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
        if (bVar8) {
          pplVar4 = &local_a8;
        }
        plVar19 = *pplVar4;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar8) {
          pplVar4 = &local_a0;
        }
        plVar15 = *pplVar4;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        if ((char)local_c0 != '\0') {
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          local_c0 = (long *)((ulong)local_c0 & 0xffffffffffffff00);
        }
        if ((char)*plVar18 == '\0') {
          lVar13 = FUN_00e641c0(uVar12 + 0xe0,&local_c0);
          if ((lVar13 == 0) || (uVar9 = FUN_012595d8(param_2,1), (uVar9 & 0xff) == 0))
          goto LAB_02241ebc;
          plVar16 = (long *)(lVar13 + 0x240);
          lVar20 = *plVar16;
          lVar17 = nn::os::GetCurrentThread();
          if (lVar17 != lVar20) {
            lVar17 = nn::os::GetCurrentThread();
            goto LAB_02242188;
          }
          bVar8 = true;
          plVar18 = (long *)0x0;
          goto LAB_02241fac;
        }
        local_c0 = plVar16;
        plStack_b8 = plVar18;
        local_b0 = plVar19;
        local_a8 = plVar15;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
        local_58 = &local_c0;
        local_68 = &local_58;
        plVar16 = (long *)(uVar12 + 0xe8);
        lVar17 = *plVar16;
        lVar13 = nn::os::GetCurrentThread();
        if (lVar13 == lVar17) {
          bVar8 = true;
          goto LAB_02241dfc;
        }
        lVar13 = nn::os::GetCurrentThread();
        goto LAB_02241de8;
      }
      sVar14 = sVar5;
    } while (sVar5 != 0);
    goto LAB_02241ed4;
  }
  goto LAB_02241ed8;
LAB_02241de8:
  if (*plVar16 == 0) goto code_r0x02241df0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
        while (*plVar16 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar8) {
            *plVar16 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02241df8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02241df8:
  bVar8 = false;
LAB_02241dfc:
  lVar13 = FUN_014be508(&local_68,uVar12 + 0x100);
  if (lVar13 == 0) {
    lVar13 = FUN_014be508(&local_68,uVar12 + 0x138);
  }
  if (!bVar8) {
    *(undefined8 *)(uVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(uVar12 + 0xf0));
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if ((lVar13 == 0) || (uVar9 = FUN_012595d8(param_2,1), (uVar9 & 0xff) == 0)) goto LAB_02241ebc;
  plVar16 = (long *)(lVar13 + 0x240);
  lVar20 = *plVar16;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar20) {
    lVar17 = nn::os::GetCurrentThread();
LAB_022420ac:
    if (*plVar16 == 0) goto code_r0x022420b4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
          while (*plVar16 == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar8) {
              *plVar16 = lVar17;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_022420bc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar17;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_022420bc:
    bVar8 = false;
    plVar18 = plVar16;
    goto LAB_02241e70;
  }
  bVar8 = true;
  plVar18 = (long *)0x0;
LAB_02241e70:
  puVar11 = (uint *)FUN_02241b8c(lVar13 + 0x130);
  *puVar11 = (uint)(0xff < uVar9);
  if (!bVar8) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  lVar20 = *plVar16;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 == lVar20) goto LAB_02241ea8;
  lVar17 = nn::os::GetCurrentThread();
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
      do {
        if (*plVar16 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
            while (*plVar16 == 0) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar8) {
                *plVar16 = lVar17;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_022420e0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar17;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      break;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  goto LAB_022420e0;
code_r0x02241df0:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar8) {
    *plVar16 = lVar13;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02241df8;
  goto LAB_02241de8;
code_r0x022420b4:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar8) {
    *plVar16 = lVar17;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_022420bc;
  goto LAB_022420ac;
code_r0x02242190:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar8) {
    *plVar16 = lVar17;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02242198;
LAB_02242188:
  if (*plVar16 == 0) goto code_r0x02242190;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
  do {
    if (*plVar16 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
        while (*plVar16 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar8) {
            *plVar16 = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02242198;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02242198:
  bVar8 = false;
  plVar18 = plVar16;
LAB_02241fac:
  puVar11 = (uint *)FUN_02241b8c(lVar13 + 0x130);
  *puVar11 = (uint)(0xff < uVar9);
  if (!bVar8) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  lVar20 = *plVar16;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 == lVar20) {
LAB_02241ea8:
    fVar21 = *(float *)(lVar13 + 0x180);
    goto LAB_02241eac;
  }
  lVar17 = nn::os::GetCurrentThread();
  do {
    if (*plVar16 != 0) {
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
      do {
        if (*plVar16 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x248));
            while (*plVar16 == 0) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar8) {
                *plVar16 = lVar17;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_022420e0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar17;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      break;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_022420e0:
  fVar21 = *(float *)(lVar13 + 0x180);
  *(undefined8 *)(lVar13 + 0x240) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x248));
LAB_02241eac:
  if (fVar21 == 0.0) {
    FUN_015d38b0(lVar13);
  }
  else {
    FUN_015d3338();
  }
LAB_02241ebc:
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  (**(code **)(*(long *)(uVar12 - 0x28) + 0x60))((long *)(uVar12 - 0x28));
LAB_02241ed4:
  if (local_78 != (ulong *)0x0) {
LAB_02241ed8:
    puVar7 = local_78;
    puVar2 = local_78 + 3;
    do {
      sVar14 = (short)*puVar2;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c0 = (long *)*puVar7;
        FUN_00c44438(lVar13 + 0x8040,&local_c0);
      }
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02241c4c:
  if (local_138 != (code *)0x0) {
    (*local_138)(auStack_120);
  }
  return;
}


