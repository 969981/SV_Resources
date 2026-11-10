/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01585ce4; name: FUN_01585ce4
 */


void FUN_01585ce4(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  plVar3 = *(long **)(param_2 + 0x120);
  plVar4 = *(long **)(param_2 + 0x128);
  do {
    if (plVar3 == plVar4) {
      *param_1 = 0;
      return;
    }
    lVar10 = *plVar3;
    if (*(long *)(lVar10 + 0x40) == *param_3) {
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
      lVar8 = FUN_00d52ff0();
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)lVar8) {
          *param_1 = lVar10;
          lVar10 = *(long *)(lVar10 + 0x30);
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar2 == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            *(undefined8 *)(lVar10 + 8) = uVar9;
            *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
            return;
          }
          if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          return;
        }
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


