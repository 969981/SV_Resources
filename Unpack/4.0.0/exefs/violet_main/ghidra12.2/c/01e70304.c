/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70304; name: FUN_01e70304
 */


uint FUN_01e70304(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *local_48;
  
  uVar12 = 0;
  uVar10 = 0;
  uVar11 = 1;
  do {
    uVar6 = FUN_01e70644(*param_1,uVar10);
    uVar7 = FUN_01e70670(*param_1,uVar10);
    if ((uVar6 & 0xffff) != 0) {
      plVar8 = (long *)*param_2;
      if ((char)plVar8[0x12] != '\0') {
        uVar11 = 0;
        do {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x60))(plVar8,uVar11);
          local_48 = plVar8;
          if (plVar8 == (long *)0x0) {
            uVar9 = FUN_01e7069c(&local_48,uVar6,uVar7);
          }
          else {
            plVar1 = plVar8 + 5;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            uVar9 = FUN_01e7069c(&local_48,uVar6,uVar7);
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar5 = *plVar1;
                iVar4 = (int)lVar5 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
              else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          if ((uVar9 & 1) != 0) {
            uVar11 = 0;
            uVar12 = 1;
            goto LAB_01e70418;
          }
          plVar8 = (long *)*param_2;
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(byte *)(plVar8 + 0x12));
      }
      uVar11 = 0;
    }
LAB_01e70418:
    uVar6 = uVar10 & 0xffff;
    uVar10 = uVar10 + 1;
    if (7 < uVar6) {
      return uVar11 | uVar12;
    }
  } while( true );
}


