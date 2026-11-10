/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea9598; name: FUN_01ea9598
 */


bool FUN_01ea9598(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  short sVar8;
  
  if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0)) {
    bVar4 = false;
  }
  else {
    lVar5 = *(long *)(param_2 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar8 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01ea961c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01ea961c:
          bVar4 = false;
        }
        if (bVar4) {
          lVar5 = *(long *)(lVar5 + 0x10);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + -0x28);
            lVar5 = *(long *)(lVar5 + 8);
            psVar1 = (short *)(lVar5 + 0x1a);
            plVar7 = *(long **)*param_1;
            do {
              sVar8 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))(plVar6);
              return plVar7 == plVar6;
            }
            if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return plVar7 == plVar6;
          }
          break;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
    bVar4 = *(long *)*param_1 == 0;
  }
  return bVar4;
}


