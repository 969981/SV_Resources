/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfc594; name: FUN_01dfc594
 */


undefined8 FUN_01dfc594(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  
  plVar6 = *(long **)(param_1 + 0x688);
  plVar7 = *(long **)(param_1 + 0x690);
  do {
    if (plVar6 == plVar7) {
      return 0;
    }
    lVar8 = *plVar6;
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01dfc614;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dfc614:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 != 0) {
            plVar10 = (long *)(lVar8 + -0x28);
            uVar5 = FUN_00e9d698(plVar10);
            lVar8 = *(long *)(lVar8 + 8);
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            if ((uVar5 & 1) != 0) {
              return 1;
            }
          }
          break;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    plVar6 = plVar6 + 2;
  } while( true );
}


