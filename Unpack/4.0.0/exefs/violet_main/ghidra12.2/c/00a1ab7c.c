/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a1ab7c; name: FUN_00a1ab7c
 */


bool FUN_00a1ab7c(long *param_1,int *param_2,int *param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  
  lVar12 = *param_1;
  if (lVar12 != 0) {
    iVar9 = *param_2;
    iVar3 = *param_3;
    if (*(short *)(lVar12 + 0x1a) != 0) {
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar13 = *(short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a1ac00;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a1ac00:
          bVar17 = false;
        }
        puVar6 = PTR_DAT_047d38f8;
        if (bVar17) {
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) {
            return false;
          }
          lVar14 = *(long *)PTR_DAT_047d38f8;
          lVar10 = nn::os::GetCurrentThread();
          if (lVar10 == lVar14) {
            bVar17 = true;
          }
          else {
            uVar15 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar6 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
                  while (*(long *)puVar6 == 0) {
                    cVar5 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                    if (bVar17) {
                      *(undefined8 *)puVar6 = uVar15;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00a1adc8;
                  }
                } while( true );
              }
              cVar5 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar17) {
                *(undefined8 *)puVar6 = uVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00a1adc8:
            bVar17 = false;
          }
          lVar10 = param_1[2];
          uVar15 = *(undefined8 *)(lVar12 + 0x48);
          if (-1 < *(int *)(lVar10 + 0x58)) {
            lVar16 = *(long *)puVar6;
            lVar14 = nn::os::GetCurrentThread();
            if (lVar14 == lVar16) {
              bVar7 = true;
            }
            else {
              uVar11 = nn::os::GetCurrentThread();
              do {
                if (*(long *)puVar6 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
                    while (*(long *)puVar6 == 0) {
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                      if (bVar7) {
                        *(undefined8 *)puVar6 = uVar11;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00a1adf0;
                    }
                  } while( true );
                }
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar7) {
                  *(undefined8 *)puVar6 = uVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00a1adf0:
              bVar7 = false;
            }
            iVar8 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar10 + 0x5c));
            iVar2 = *(int *)(lVar10 + 0x58);
            if (!bVar7) {
              *(undefined8 *)puVar6 = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
            }
            if (iVar8 == iVar2) {
              FUN_00c5d960(uVar15,(long)iVar9);
              FUN_00c5d960(uVar15,(long)iVar3);
              iVar9 = FUN_00c5d980(uVar15);
              FUN_00c5dbe0(uVar15,&LAB_00a1aff0,0);
              FUN_00c5dcd0(uVar15,iVar9 + -2,1);
              iVar9 = FUN_00c5ddd0(uVar15,2,1,iVar9 + -2,0,0);
              if (iVar9 != 0) {
                uVar15 = FUN_00c646d0(uVar15,0xffffffff,0);
                *(undefined8 *)PTR_DAT_047d4238 = uVar15;
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("0","CallImpl",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                           ,0xa8,"Lua panic: function error: %s",uVar15);
              }
              iVar9 = FUN_00cc4dc0(uVar15);
              bVar7 = iVar9 != 0;
              goto LAB_00a1ad0c;
            }
          }
          bVar7 = false;
LAB_00a1ad0c:
          FUN_00c5db00(uVar15,0);
          if (!bVar17) {
            *(undefined8 *)puVar6 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
          }
          lVar10 = *(long *)(lVar12 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar17) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))((long *)(lVar12 + -0x28));
            return bVar7;
          }
          if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return bVar7;
        }
        sVar13 = sVar4;
        if (sVar4 == 0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}


