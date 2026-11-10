/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a0a3b8; name: FUN_02a0a3b8
 */


undefined8 FUN_02a0a3b8(long param_1,undefined8 param_2)

{
  short *psVar1;
  ThreadType *pTVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long *local_18;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x24a) & 1) == 0) {
      return 0;
    }
    plVar9 = (long *)(param_1 + 0x50);
    if (*plVar9 != 0) {
      FUN_014ece90();
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_02a0a570;
      }
    }
  }
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(*(long *)(param_1 + 0x48) + 8) != -1)) {
    FUN_01f7ba08(&local_18,*(undefined8 *)(param_1 + 8),&DAT_03d5ef44);
    FUN_014eddf8((long *)(param_1 + 0x50),&local_18);
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_02a0a570:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      pcVar8 = *(code **)(lVar7 + 0x368);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x370) = 0;
        *(undefined8 *)(lVar7 + 0x378) = 0;
        *(undefined8 *)(lVar7 + 0x360) = 0;
        *(undefined8 *)(lVar7 + 0x368) = 0;
        (*pcVar8)(lVar7 + 0x380);
      }
      *(undefined1 **)(lVar7 + 0x360) = &LAB_02a0ac54;
      *(undefined1 **)(lVar7 + 0x368) = &LAB_02a0b030;
      *(undefined1 **)(lVar7 + 0x370) = &LAB_02a0b0a0;
      *(undefined8 *)(lVar7 + 0x380) = param_2;
      *(long *)(lVar7 + 0x388) = param_1;
      *(undefined1 **)(lVar7 + 0x378) = &LAB_02a0b0ac;
      lVar7 = *(long *)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(lVar7 + 0x248) = 0;
      *(undefined1 *)(lVar7 + 0x249) = 0;
      *(undefined1 *)(lVar7 + 0x24a) = 0;
      pTVar2 = (ThreadType *)(lVar7 + 0x40);
      nn::os::CreateThread
                (pTVar2,(_func_void_void_ptr *)&LAB_014040e8,pTVar2,*(void **)(lVar7 + 0x200),
                 *(ulong *)(lVar7 + 0x228),0x10);
      nn::os::SetThreadCoreMask(pTVar2,-1,7);
      nn::os::SetThreadName(pTVar2,"DisconnectDetectorThread");
      nn::os::StartThread(pTVar2);
      return 1;
    }
  }
  return 0;
}


