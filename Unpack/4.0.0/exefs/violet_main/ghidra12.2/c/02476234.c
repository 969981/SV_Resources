/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02476234; name: thunk_FUN_02476314
 */


void thunk_FUN_02476314(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long *plStack_40;
  long lStack_38;
  
  puVar5 = PTR_DAT_047d38f8;
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar10) {
    bVar9 = true;
LAB_02476348:
    puVar6 = PTR_DAT_047d3f70;
    FUN_024764d0(&lStack_38,*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x148));
    if (lStack_38 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_024764d0(&plStack_40,*(undefined8 *)(*(long *)puVar6 + 0x148));
      FUN_0247619c(&lStack_38,&plStack_40);
      if (plStack_40 != (long *)0x0) {
        lVar7 = plStack_40[0x13];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plStack_40 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    *param_1 = lStack_38;
    if (bVar9) {
      return;
    }
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar5 == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar9) {
      *(undefined8 *)puVar5 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0247642c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
  do {
    if (*(long *)puVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        while (*(long *)puVar5 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar9) {
            *(undefined8 *)puVar5 = uVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0247642c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar9) {
      *(undefined8 *)puVar5 = uVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0247642c:
  bVar9 = false;
  goto LAB_02476348;
}


