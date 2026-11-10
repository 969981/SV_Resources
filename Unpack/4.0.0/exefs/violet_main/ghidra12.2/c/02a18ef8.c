/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a18ef8; name: FUN_02a18ef8
 */


void FUN_02a18ef8(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  uVar3 = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined2 *)(param_1 + 0x32) = 0x100;
  *(undefined1 *)(param_1 + 0x160) = uVar3;
  local_58 = (long *)0x0;
  if (param_2 != 0) {
    plVar9 = (long *)(param_2 + 0x110);
    lVar12 = *plVar9;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar12) {
      bVar14 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar9 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
            while (*plVar9 == 0) {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar14) {
                *plVar9 = lVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02a18f68;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar14) {
          *plVar9 = lVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a18f68:
      bVar14 = false;
    }
    lVar7 = FUN_02a19c0c(param_2 + 0x128);
    if (lVar7 == 0) {
      lVar7 = FUN_02a19c0c(param_2 + 0x160);
    }
    if (!bVar14) {
      *(undefined8 *)(param_2 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
    }
    if (lVar7 != 0) {
      plVar11 = *(long **)(lVar7 + 0x338);
      (**(code **)(*plVar11 + 0x18))(local_50,plVar11);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      plVar9 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar9 = plVar11 + 5;
      }
      if ((long *)local_50[0][2] == plVar9) {
        FUN_00cfd544(&local_68,local_50);
      }
      puVar13 = local_50[0];
      if (local_50[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50[0] + 3);
        do {
          sVar10 = *psVar1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar10 == 1) {
          piVar2 = (int *)((long)local_50[0] + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_28 = *puVar13;
            FUN_00c44438(lVar7 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) goto LAB_02a19364;
      }
      if (local_68 != (undefined8 *)0x0) {
        if (*(short *)((long)local_68 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_68 + 0x1a);
          sVar10 = *(short *)((long)local_68 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar10) {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar14) {
                *psVar1 = sVar10 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_02a192a4;
              bVar14 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_02a192a4:
              bVar14 = false;
            }
            if (bVar14) {
              puVar13 = (undefined8 *)local_68[2];
              if (puVar13 != (undefined8 *)0x0) {
                plVar11 = puVar13 + -5;
                plVar9 = (long *)(**(code **)*puVar13)(puVar13);
                if (((*PTR_DAT_047d5320 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d5320), iVar6 != 0)) {
                  uVar8 = FUN_00ff17b4();
                  *(undefined8 *)PTR_DAT_047d5328 = uVar8;
                  __cxa_guard_release(PTR_DAT_047d5320);
                }
                goto joined_r0x02a192e8;
              }
              break;
            }
            sVar10 = sVar4;
          } while (sVar4 != 0);
        }
        goto LAB_02a1933c;
      }
      goto LAB_02a1901c;
    }
  }
  local_70 = (long *)0x0;
  goto LAB_02a19068;
joined_r0x02a192e8:
  if (plVar9 == (long *)0x0) goto LAB_02a19304;
  if (plVar9 == (long *)PTR_DAT_047d5328) {
    plVar9 = plVar11;
    goto LAB_02a19310;
  }
  plVar9 = (long *)*plVar9;
  goto joined_r0x02a192e8;
LAB_02a19304:
  plVar9 = (long *)0x0;
LAB_02a19310:
  FUN_02a19db4(&local_58,plVar9);
  lVar7 = puVar13[1];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar10 == 0) goto LAB_02a1938c;
LAB_02a1933c:
  puVar13 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_50[0] = (undefined8 *)*puVar13;
        FUN_00c44438(lVar7 + 0x8040,local_50);
      }
    }
    else if (sVar10 == 0) {
LAB_02a19364:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_02a1901c:
  local_70 = local_58;
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[6];
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_02a193f0;
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) goto LAB_02a19410;
  }
LAB_02a19068:
  FUN_02a1951c(param_1,param_1 + 0xd0,&local_70);
  if (local_70 != (long *)0x0) {
    lVar7 = local_70[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_02a1938c;
  }
  local_70 = local_58;
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_02a193f0:
      local_70 = local_58;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) {
LAB_02a19410:
      local_70 = local_58;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_02a1951c(param_1,param_1 + 0x118,&local_70);
  if (local_70 != (long *)0x0) {
    lVar7 = local_70[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_02a1938c;
  }
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar10 == 0) {
LAB_02a1938c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


