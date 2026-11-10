/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a364c8; name: FUN_02a364c8
 */


void FUN_02a364c8(long param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *local_48;
  
  if (*(uint *)(param_1 + 0x16ac) != param_2) {
    plVar6 = (long *)(param_1 + 0x7e8);
    do {
      for (lVar7 = *plVar6; lVar7 != plVar6[1]; lVar7 = lVar7 + 0xa0) {
        if (*(long *)(lVar7 + 0x70) != 0) {
          FUN_016b8cc0(&local_48);
          if (local_48 != (long *)0x0) {
            lVar5 = local_48[6];
            psVar1 = (short *)(lVar5 + 0x1a);
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
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*local_48 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xd1) = 1;
          }
        }
      }
      plVar6 = plVar6 + 7;
    } while (plVar6 != (long *)(param_1 + 0xcf0));
  }
  if (2 < param_2) {
    param_2 = 0;
  }
  *(uint *)(param_1 + 0x16ac) = param_2;
  return;
}


