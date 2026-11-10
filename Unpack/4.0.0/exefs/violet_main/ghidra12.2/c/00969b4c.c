/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00969b4c; name: FUN_00969b4c
 */


bool FUN_00969b4c(long *param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  bool bVar16;
  
  lVar11 = *param_1;
  if (lVar11 != 0) {
    uVar2 = *param_2;
    if (*(short *)(lVar11 + 0x1a) != 0) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar12 = *(short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00969bc4;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00969bc4:
          bVar16 = false;
        }
        puVar5 = PTR_DAT_047d38f8;
        if (bVar16) {
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) {
            return false;
          }
          lVar13 = *(long *)PTR_DAT_047d38f8;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 == lVar13) {
            bVar16 = true;
          }
          else {
            uVar14 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar5 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                  while (*(long *)puVar5 == 0) {
                    cVar4 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                    if (bVar16) {
                      *(undefined8 *)puVar5 = uVar14;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_00969d80;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar16) {
                *(undefined8 *)puVar5 = uVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_00969d80:
            bVar16 = false;
          }
          lVar9 = param_1[2];
          uVar14 = *(undefined8 *)(lVar11 + 0x48);
          if (-1 < *(int *)(lVar9 + 0x58)) {
            lVar15 = *(long *)puVar5;
            lVar13 = nn::os::GetCurrentThread();
            if (lVar13 == lVar15) {
              bVar6 = true;
            }
            else {
              uVar10 = nn::os::GetCurrentThread();
              do {
                if (*(long *)puVar5 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                    while (*(long *)puVar5 == 0) {
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                      if (bVar6) {
                        *(undefined8 *)puVar5 = uVar10;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      if (cVar4 == '\0') goto LAB_00969da8;
                    }
                  } while( true );
                }
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar6) {
                  *(undefined8 *)puVar5 = uVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
LAB_00969da8:
              bVar6 = false;
            }
            iVar7 = FUN_00c5fc50(uVar14,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
            iVar8 = *(int *)(lVar9 + 0x58);
            if (!bVar6) {
              *(undefined8 *)puVar5 = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
            }
            if (iVar7 == iVar8) {
              FUN_00c5d960(uVar14,uVar2);
              iVar8 = FUN_00c5d980(uVar14);
              FUN_00c5dbe0(uVar14,&LAB_01c62880,0);
              FUN_00c5dcd0(uVar14,iVar8 + -1,1);
              iVar8 = FUN_00c5ddd0(uVar14,1,1,iVar8 + -1,0,0);
              if (iVar8 != 0) {
                uVar14 = FUN_00c646d0(uVar14,0xffffffff,0);
                *(undefined8 *)PTR_DAT_047d4238 = uVar14;
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("0","CallImpl",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                           ,0xa8,"Lua panic: function error: %s",uVar14);
              }
              iVar8 = FUN_00cc4dc0(uVar14);
              bVar6 = iVar8 != 0;
              goto LAB_00969cc4;
            }
          }
          bVar6 = false;
LAB_00969cc4:
          FUN_00c5db00(uVar14,0);
          if (!bVar16) {
            *(undefined8 *)puVar5 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
          }
          lVar9 = *(long *)(lVar11 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
            return bVar6;
          }
          if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return bVar6;
        }
        sVar12 = sVar3;
        if (sVar3 == 0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}


