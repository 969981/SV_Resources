/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b8ba4; name: FUN_016b8ba4
 */


void FUN_016b8ba4(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_48;
  
  puVar6 = PTR_DAT_047d8b70;
  plVar8 = (long *)(param_1 + 0x7e8);
  do {
    for (lVar9 = *plVar8; lVar9 != plVar8[1]; lVar9 = lVar9 + 0xa0) {
      plVar2 = (long *)puVar6;
      if (*(long *)(lVar9 + 0x18) != 0) {
        plVar2 = (long *)(*(long *)(lVar9 + 0x18) + 0x30);
      }
      if ((*plVar2 == *param_2) && (*(long *)(lVar9 + 0x70) != 0)) {
        FUN_016b8cc0(&local_48);
        if (local_48 != (long *)0x0) {
          lVar7 = local_48[6];
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
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          *(undefined1 *)(*(long *)(lVar9 + 0x70) + 0xd1) = 1;
        }
      }
    }
    plVar8 = plVar8 + 7;
    if (plVar8 == (long *)(param_1 + 0xcf0)) {
      return;
    }
  } while( true );
}


