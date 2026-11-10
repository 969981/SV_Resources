/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131604c; name: FUN_0131604c
 */


void FUN_0131604c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar8 = *(long *)(param_1 + 0x15e8);
  if (lVar8 == 0) {
    lVar8 = FUN_01280bc0(&local_80,*(undefined8 *)(param_1 + 8));
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar5 = *(long **)(param_1 + 0x15e8);
    *(undefined8 *)(param_1 + 0x15e8) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[6];
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
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x15e8) = lVar8;
  }
  if (((*(long *)(param_1 + 0xab0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0xab0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0xa70) == 0 || ((*(byte *)(*(long *)(param_1 + 0xa70) + 0x1e8) & 1) != 0)
      ))) {
    local_60 = *(undefined8 *)(param_1 + 0xa50);
    local_58 = *(undefined8 *)(param_1 + 0xa58);
    uStack_50 = *(undefined8 *)(param_1 + 0xa60);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
  }
  local_80 = 0xebb230a179296d18;
  pcStack_78 = "Movement";
  local_70 = 8;
  local_68 = (long *)0x0;
  FUN_00d996a8(auStack_48,&local_60,&local_80);
  FUN_01316248(lVar8,auStack_48);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


