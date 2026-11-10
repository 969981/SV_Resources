/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011322f8; name: FUN_011322f8
 */


long * FUN_011322f8(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
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
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2f0,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  local_60 = 0xc45e9e1b75de688d;
  pcStack_58 = "AttachEffect";
  local_50 = 0xc;
  local_48 = (long *)0x0;
  FUN_011329a0(plVar6,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined4 *)(plVar6 + 3) = 0x1002f0;
  plVar6[1] = (long)param_2;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  plVar7 = plVar6 + 4;
  (**(code **)(*plVar7 + 0xe8))(plVar7,param_1);
  (**(code **)(*plVar7 + 0x68))(plVar7);
  local_68 = plVar6;
  FUN_00df8c30(param_1 + 0x21,&local_68);
  if (local_68 != (long *)0x0) {
    lVar5 = local_68[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar7);
  plVar10 = param_1 + 0x88;
  lVar9 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_01132458:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar7 + 0xf8))(plVar7);
    }
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return plVar6;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01132454;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01132454;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01132454:
  bVar8 = false;
  goto LAB_01132458;
}


