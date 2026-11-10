/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf9884; name: FUN_00cf9884
 */


void FUN_00cf9884(long *param_1,long param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  undefined1 *local_38;
  
  local_38 = &DAT_cbf29ce484222645;
  bVar1 = *param_3;
  pbVar8 = param_3;
  while (bVar1 != 0) {
    pbVar8 = pbVar8 + 1;
    local_38 = (undefined1 *)(((ulong)local_38 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar8;
  }
  plVar6 = (long *)(param_2 + 0x28);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00cf9900;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x30));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00cf9900;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00cf9900:
  plVar6 = (long *)FUN_00cf9ae0(param_2 + 0x40,&local_38);
  plVar6 = (long *)*plVar6;
  *param_1 = (long)plVar6;
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_2 + 8);
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
    plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x50,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*plVar6 + 0xe8))(plVar6);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00cf9dd8(plVar7,param_3);
    *(undefined4 *)(plVar7 + 3) = 0x80050;
    plVar7[1] = (long)plVar6;
    plVar7[2] = (long)plVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar6 = (long *)*param_1;
    *param_1 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    *param_1 = (long)plVar7;
    plVar6 = (long *)FUN_00cf9ae0(param_2 + 0x40,&local_38);
    *plVar6 = (long)plVar7;
  }
  else {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x30));
  return;
}


