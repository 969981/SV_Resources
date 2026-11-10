/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edc83c; name: FUN_01edc83c
 */


void FUN_01edc83c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  
  FUN_00cf4cfc(*(undefined8 *)(param_1 + 0x70));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) {
    return;
  }
  FUN_021f712c(*(long *)(param_1 + 0x70),1);
  local_4c = 0xd;
  plVar7 = (long *)FUN_0152bfac(auStack_48,param_2,&local_4c);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar9 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(lVar9 + 0x20);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01edc8d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01edc8d8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01edc8d8:
  uVar5 = FUN_0100bd94(lVar9);
  *(undefined8 *)(lVar9 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
  FUN_010549ec(plVar7,0,uVar5);
  FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),plVar7[6]);
  FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
  uVar5 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_021ebf50(uVar5,uVar6);
  FUN_021f6de0(*(undefined8 *)(param_1 + 0x70),uVar5);
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar1 = plVar7 + 5;
  do {
    lVar8 = *plVar1;
    iVar4 = (int)lVar8 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    return;
  }
  if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


