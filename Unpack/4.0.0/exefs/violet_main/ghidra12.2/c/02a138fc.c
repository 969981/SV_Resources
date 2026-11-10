/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a138fc; name: FUN_02a138fc
 */


void FUN_02a138fc(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *local_48;
  
  lVar11 = *param_1;
  plVar6 = (long *)(lVar11 + 0x110);
  lVar10 = *plVar6;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar10) {
    bVar9 = true;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar9) {
              *plVar6 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02a1394c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar9) {
        *plVar6 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02a1394c:
    bVar9 = false;
  }
  plVar6 = (long *)FUN_010f5b40(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
  if ((*(long **)(lVar11 + 0x130) == plVar6) || (*plVar6 == 0)) {
    plVar6 = (long *)FUN_010f5b40(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168));
    if (*(long **)(lVar11 + 0x168) == plVar6) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (*plVar6 != 0) {
        lVar5 = *plVar6 + -0x20;
      }
    }
  }
  else {
    lVar5 = *plVar6 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if (lVar5 == 0) {
    param_1 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x270,0x10);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*plVar6 + 0xe8))(plVar6);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    FUN_010f5fdc();
    lVar10 = param_2[3];
    plVar7[0x3d] = param_2[1];
    plVar7[0x3f] = lVar10;
    lVar10 = param_2[2];
    plVar7[0x3c] = *param_2;
    plVar7[0x3e] = lVar10;
    plVar7[1] = (long)plVar6;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x100270;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    lVar5 = plVar7[0x13];
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      *(undefined8 *)(lVar5 + 8) = uVar8;
      *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar6 = plVar7 + 4;
    (**(code **)(*plVar6 + 0xe8))(plVar6,param_1);
    (**(code **)(*plVar6 + 0x68))(plVar6);
    local_48 = plVar7;
    FUN_00df8c30(param_1 + 0x21,&local_48);
    if (local_48 != (long *)0x0) {
      lVar5 = local_48[0x13];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*param_1 + 0x100))(param_1,plVar6);
    plVar7 = param_1 + 0x88;
    lVar10 = *plVar7;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar10) {
      plVar7 = (long *)0x0;
      bVar9 = true;
    }
    else {
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
            while (*plVar7 == 0) {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar9) {
                *plVar7 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02a13ae8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar9) {
          *plVar7 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02a13ae8:
      bVar9 = false;
    }
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar6 + 0xf8))(plVar6);
    }
    if (!bVar9) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
  }
  return;
}


