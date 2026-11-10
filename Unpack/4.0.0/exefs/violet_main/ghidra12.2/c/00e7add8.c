/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7add8; name: FUN_00e7add8
 */


bool FUN_00e7add8(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_38;
  char local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar7 = *param_1;
  if ((*(byte *)(lVar7 + 0x248) & 1) == 0) {
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x3f0));
    FUN_00e7af0c(&local_38,*(undefined8 *)(lVar7 + 0x360),*(undefined4 *)(lVar7 + 0x418));
    nn::os::LockMutex((MutexType *)(lVar7 + 0x3f0));
    plVar5 = *(long **)(lVar7 + 0x3d8);
    *(undefined8 *)(lVar7 + 0x3d8) = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(lVar7 + 0x3d8) = local_38;
    if (*(char *)(lVar7 + 0x3e0) == '\0') {
      if (local_30 != '\0') {
        *(undefined4 *)(lVar7 + 0x3ec) = local_24;
        *(undefined8 *)(lVar7 + 0x3e4) = local_2c;
        *(undefined1 *)(lVar7 + 0x3e0) = 1;
      }
    }
    else if (local_30 == '\0') {
      *(undefined1 *)(lVar7 + 0x3e0) = 0;
    }
    else {
      *(undefined4 *)(lVar7 + 0x3ec) = local_24;
      *(undefined8 *)(lVar7 + 0x3e4) = local_2c;
    }
    bVar4 = local_38 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


