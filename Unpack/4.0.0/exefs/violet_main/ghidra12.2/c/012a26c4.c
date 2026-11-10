/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a26c4; name: FUN_012a26c4
 */


void FUN_012a26c4(long param_1,undefined8 *param_2,byte param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *local_68;
  long *local_60;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar6 = (long *)(param_1 + 0x248);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_012a2704;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_012a2704;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_012a2704:
  *(byte *)(param_1 + 0x268) = param_3 & 1;
  *(undefined8 *)(param_1 + 0x198) = *param_2;
  *(undefined8 *)(param_1 + 0x1a0) = param_2[1];
  *(undefined8 *)(param_1 + 0x1a8) = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x1b0);
  *(long **)(param_1 + 0x1b0) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  FUN_00c9e664(&local_68,param_1 + 0xe8);
  lVar4 = 0;
  if (local_60 != (long *)0x0) {
    lVar4 = local_60[9];
  }
  lVar4 = FUN_01104bd8(lVar4 + 0x108,auStack_48);
  if (local_60 != (long *)0x0) {
    plVar6 = local_60 + 5;
    do {
      lVar3 = *plVar6;
      iVar7 = (int)lVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar3 == 0) goto LAB_012a2930;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  if (lVar4 == 0) goto LAB_012a2874;
  plVar6 = *(long **)(*(long *)(lVar4 + 0x138) + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 5;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if ((short)((short)((uint)((int)plVar6[0x4a] - (int)plVar6[0x49]) >> 4) * -0x5555) < 1) {
LAB_012a2928:
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  else {
    iVar7 = 0;
    while( true ) {
      FUN_00e1561c(&local_68,plVar6,iVar7);
      plVar5 = local_68;
      plVar8 = *(long **)(param_1 + 0x198);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (plVar5 == plVar8) break;
      iVar7 = (int)(short)((short)iVar7 + 1);
      if ((short)((short)((uint)((int)plVar6[0x4a] - (int)plVar6[0x49]) >> 4) * -0x5555) <= iVar7)
      goto LAB_012a2928;
    }
    *(short *)(param_1 + 0x1ba) = (short)iVar7;
    *(undefined1 *)(param_1 + 0x268) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 1;
  }
  plVar5 = plVar6 + 5;
  do {
    lVar4 = *plVar5;
    iVar7 = (int)lVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *(int *)plVar5 = iVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else if ((int)lVar4 == 0) {
LAB_012a2930:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_012a2874:
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
  return;
}


