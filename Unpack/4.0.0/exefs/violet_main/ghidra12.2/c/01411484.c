/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01411484; name: FUN_01411484
 */


void FUN_01411484(long param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  long *local_28;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    plVar9 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_014117f4;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014117f4:
        bVar10 = false;
      }
      if (bVar10) {
        plVar9 = (long *)0x0;
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
        }
        break;
      }
      plVar9 = (long *)0x0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  fVar13 = *(float *)(*(long *)(param_1 + 0xf8) + 0x74);
  fVar14 = *(float *)(*(long *)(param_1 + 0xf8) + 0xc4);
  plVar11 = (long *)plVar9[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x270,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_0141189c(fVar13 + fVar14 + fVar14,0x447a0000,0x3dcccccd,plVar5,param_2 & 1);
  *(undefined4 *)(plVar5 + 3) = 0x100270;
  plVar5[1] = (long)plVar11;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar5[0x13];
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar8 = *psVar1;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar8 == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar6;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar11 = plVar5 + 4;
  (**(code **)(*plVar11 + 0xe8))(plVar11,plVar9);
  (**(code **)(*plVar11 + 0x68))(plVar11);
  local_28 = plVar5;
  FUN_00df8c30(plVar9 + 0x21,&local_28);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar8 == 0) goto LAB_014116d8;
  }
  (**(code **)(*plVar9 + 0x100))(plVar9,plVar11);
  plVar5 = plVar9 + 0x88;
  lVar12 = *plVar5;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar12) {
    lVar7 = nn::os::GetCurrentThread();
LAB_014115f8:
    if (*plVar5 == 0) goto code_r0x01411600;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
          while (*plVar5 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar10) {
              *plVar5 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01411608;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar10) {
        *plVar5 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01411608:
    bVar10 = false;
    goto LAB_0141160c;
  }
  plVar5 = (long *)0x0;
  bVar10 = true;
LAB_0141160c:
  if ((*(byte *)(plVar9 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(plVar9,0,0);
  }
  else {
    (**(code **)(*plVar11 + 0xf8))(plVar11);
  }
  if (!bVar10) {
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
  }
  lVar7 = plVar9[6];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar8 = *psVar1;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar8 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar8 == 0) {
LAB_014116d8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
code_r0x01411600:
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar10) {
    *plVar5 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01411608;
  goto LAB_014115f8;
}


