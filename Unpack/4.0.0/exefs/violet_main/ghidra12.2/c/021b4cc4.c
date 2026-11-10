/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b4cc4; name: FUN_021b4cc4
 */


undefined8 FUN_021b4cc4(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  short sVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00ca1ea4(&local_78,param_1);
  lVar8 = *(long *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_50 = *(undefined4 *)(param_1 + 0x28);
  lVar15 = *(long *)(param_1 + 0x30);
  local_68 = lVar8;
  if ((local_78 != (undefined8 *)0x0) && (*(short *)((long)local_78 + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_78 + 0x1a);
    sVar14 = *(short *)((long)local_78 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar14) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_021b4fb8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021b4fb8:
        bVar6 = false;
      }
      if (bVar6) {
        lVar19 = local_78[2];
        if (lVar19 != 0) {
          if (*(long *)(lVar8 + 8) == 0) goto LAB_021b5064;
          plVar10 = (long *)(lVar8 + 0x48);
          lVar9 = nn::os::GetCurrentThread();
          goto LAB_021b4fec;
        }
        break;
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
LAB_021b4d14:
  if ((*(byte *)(lVar15 + 0x61) & 1) != 0) {
LAB_021b4d84:
    puVar16 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_78 + 3);
      do {
        sVar14 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar1 = (int *)((long)local_78 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar16;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
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
    return 1;
  }
  plVar10 = (long *)(lVar15 + 0x68);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021b4d3c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x70));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x70));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021b4d3c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021b4d3c:
  puVar16 = *(undefined8 **)(lVar15 + 0x80);
  puVar3 = *(undefined8 **)(lVar15 + 0x88);
  if (puVar16 != puVar3) {
    if ((*(byte *)(lVar15 + 0x61) & 1) == 0) {
      (*(code *)*puVar16)(puVar16 + 4);
    }
    if ((*(byte *)(lVar15 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar16[0x10])();
      *(int *)(lVar15 + 100) = *(int *)(lVar15 + 100) + 1;
    }
    while (puVar16 = puVar16 + 0x12, puVar16 != puVar3) {
      if ((*(byte *)(lVar15 + 0x61) & 1) == 0) {
        (*(code *)*puVar16)(puVar16 + 4);
      }
      if ((*(byte *)(lVar15 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar16[0x10])();
        *(int *)(lVar15 + 100) = *(int *)(lVar15 + 100) + 1;
      }
    }
    puVar16 = *(undefined8 **)(lVar15 + 0x80);
    puVar3 = *(undefined8 **)(lVar15 + 0x88);
    if (puVar3 != puVar16) {
      pcVar13 = (code *)puVar3[-0x11];
      puVar17 = puVar3 + -0x12;
      if (pcVar13 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar17 = 0;
        puVar3[-0x11] = 0;
        (*pcVar13)(puVar3 + -0xe);
      }
      while (puVar3 = puVar17, puVar3 != puVar16) {
        pcVar13 = (code *)puVar3[-0x11];
        puVar17 = puVar3 + -0x12;
        if (pcVar13 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar13)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar15 + 0x88) = puVar16;
  *(undefined1 *)(lVar15 + 0x60) = 1;
  if ((*(byte *)(lVar15 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar15 + 0x40),lVar15);
    *(byte *)(lVar15 + 0x50) = 1;
  }
  *(undefined8 *)(lVar15 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x70));
  goto LAB_021b4d84;
LAB_021b4fec:
  if (*plVar10 == 0) goto code_r0x021b4ff4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x50));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x50));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021b4ffc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021b4ffc:
  lVar9 = FUN_0118766c(&local_48,uStack_60,local_68);
  if (lVar9 != 0) {
    lVar18 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar18 + 0x1a);
    do {
      sVar14 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar11;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar18 = local_68;
  plVar10 = *(long **)(local_68 + 0x40);
  *(undefined8 *)(local_68 + 0x40) = 0;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar14 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_021b508c;
  }
  *(long *)(lVar18 + 0x40) = lVar9;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x50));
LAB_021b5064:
  lVar8 = *(long *)(lVar19 + 8);
  psVar2 = (short *)(lVar8 + 0x1a);
  do {
    sVar14 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*(long *)(lVar19 + -0x28) + 0x50))();
  }
  else if (sVar14 == 0) {
LAB_021b508c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_021b4d14;
code_r0x021b4ff4:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021b4ffc;
  goto LAB_021b4fec;
}


