/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de8820; name: FUN_01de8820
 */


undefined8
FUN_01de8820(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  char local_70 [8];
  long *local_68;
  
  puVar3 = PTR_DAT_047d38f8;
  iVar6 = 1;
  if (param_3 == 0) {
    iVar6 = 2;
  }
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar9) {
      uVar8 = nn::os::GetCurrentThread();
LAB_01de8a5c:
      if (*(long *)puVar3 == 0) goto code_r0x01de8a64;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar10) {
                *(undefined8 *)puVar3 = uVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01de8a6c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar10) {
          *(undefined8 *)puVar3 = uVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01de8a6c:
      bVar10 = false;
      goto LAB_01de8884;
    }
    bVar10 = true;
LAB_01de8884:
    iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar5 = *(int *)(param_2 + 0x58);
    if (!bVar10) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      if (param_3 == 0) {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
        if (iVar5 != 6) {
          return 0;
        }
        if (*(int *)(param_2 + 0x58) < 0) {
          return 0;
        }
        lVar9 = *(long *)puVar3;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar9) {
          uVar8 = nn::os::GetCurrentThread();
LAB_01de8b04:
          if (*(long *)puVar3 == 0) goto code_r0x01de8b0c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          do {
            if (*(long *)puVar3 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
                while (*(long *)puVar3 == 0) {
                  cVar2 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar10) {
                    *(undefined8 *)puVar3 = uVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_01de8b14;
                }
              } while( true );
            }
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar10) {
              *(undefined8 *)puVar3 = uVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_01de8b14:
          bVar10 = false;
          goto LAB_01de8a08;
        }
        bVar10 = true;
LAB_01de8a08:
        iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar5 = *(int *)(param_2 + 0x58);
        if (!bVar10) {
          *(undefined8 *)puVar3 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
        }
        if (iVar4 == iVar5) goto LAB_01de88e4;
      }
      else {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar5 == 5) && (iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar5 == 6)) {
LAB_01de88e4:
          local_68 = (long *)*param_5;
          if (local_68 != (long *)0x0) {
            plVar1 = local_68 + 5;
            do {
              lVar7 = *plVar1;
              cVar2 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *(int *)plVar1 = (int)lVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          local_70[0] = '\x01';
          FUN_00f11c60(param_1,local_70);
          if ((local_70[0] == '\x01') && (local_68 != (long *)0x0)) {
            plVar1 = local_68 + 5;
            do {
              lVar7 = *plVar1;
              iVar5 = (int)lVar7 + -1;
              cVar2 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *(int *)plVar1 = iVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
            else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          iVar5 = FUN_00c5d980(param_1);
          FUN_00c5dbe0(param_1,&LAB_01de3470,0);
          FUN_00c5dcd0(param_1,iVar5 - iVar6,1);
          iVar6 = FUN_00c5ddd0(param_1,iVar6,0,iVar5 - iVar6,0,0);
          if (iVar6 != 0) {
            uVar8 = FUN_00c646d0(param_1,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar8;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar8);
          }
          return 1;
        }
      }
    }
  }
  return 0;
code_r0x01de8a64:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar10) {
    *(undefined8 *)puVar3 = uVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01de8a6c;
  goto LAB_01de8a5c;
code_r0x01de8b0c:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar10) {
    *(undefined8 *)puVar3 = uVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01de8b14;
  goto LAB_01de8b04;
}


