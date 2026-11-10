/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de213c; name: FUN_00de213c
 */


void FUN_00de213c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auStack_90 [96];
  
  if (((*PTR_DAT_047d91f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar5 != 0))
  {
    FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91f8);
  }
  lVar6 = *(long *)PTR_DAT_047d9200;
  *(long *)PTR_DAT_047d9208 = lVar6;
  FUN_00de92f8((long *)(param_1 + 0x60),lVar6 + 0x50);
  if ((((*(long *)(param_1 + 0x60) != 0) && (*(short *)(*(long *)(param_1 + 0x60) + 0x1a) != 0)) &&
      (lVar6 = *(long *)(param_1 + 0x60), lVar6 != 0)) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00de2230;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00de2230:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar8 = (long *)(lVar6 + -0x28);
        FUN_01acb394(auStack_90,plVar8,*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
        memcpy((void *)(param_1 + 0x70),auStack_90,0x60);
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


