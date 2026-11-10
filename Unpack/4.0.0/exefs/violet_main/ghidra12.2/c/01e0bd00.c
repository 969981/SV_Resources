/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0bd00; name: FUN_01e0bd00
 */


undefined8
FUN_01e0bd00(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int *param_5,
            float *param_6)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_047d38f8;
  iVar5 = 2;
  if (param_3 == 0) {
    iVar5 = 3;
  }
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar9 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar9) {
      uVar7 = nn::os::GetCurrentThread();
LAB_01e0bf14:
      if (*(long *)puVar2 == 0) goto code_r0x01e0bf1c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar8) {
                *(undefined8 *)puVar2 = uVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01e0bf24;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *(undefined8 *)puVar2 = uVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01e0bf24:
      bVar8 = false;
      goto LAB_01e0bd6c;
    }
    bVar8 = true;
LAB_01e0bd6c:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      if (param_3 == 0) {
        iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
        if (iVar4 != 6) {
          return 0;
        }
        if (*(int *)(param_2 + 0x58) < 0) {
          return 0;
        }
        lVar9 = *(long *)puVar2;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar9) {
          uVar7 = nn::os::GetCurrentThread();
LAB_01e0bf78:
          if (*(long *)puVar2 == 0) goto code_r0x01e0bf80;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          do {
            if (*(long *)puVar2 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
                while (*(long *)puVar2 == 0) {
                  cVar1 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar8) {
                    *(undefined8 *)puVar2 = uVar7;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_01e0bf88;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_01e0bf88:
          bVar8 = false;
          goto LAB_01e0bec0;
        }
        bVar8 = true;
LAB_01e0bec0:
        iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar4 = *(int *)(param_2 + 0x58);
        if (!bVar8) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar3 == iVar4) goto LAB_01e0bdcc;
      }
      else {
        iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar4 == 5) && (iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar4 == 6)) {
LAB_01e0bdcc:
          FUN_00c5d960(param_1,(long)*param_5);
          FUN_00c46da0((double)*param_6,param_1);
          iVar4 = FUN_00c5d980(param_1);
          FUN_00c5dbe0(param_1,FUN_01e0a300,0);
          FUN_00c5dcd0(param_1,iVar4 - iVar5,1);
          iVar5 = FUN_00c5ddd0(param_1,iVar5,0,iVar4 - iVar5,0,0);
          if (iVar5 != 0) {
            uVar7 = FUN_00c646d0(param_1,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar7;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar7);
          }
          return 1;
        }
      }
    }
  }
  return 0;
code_r0x01e0bf1c:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01e0bf24;
  goto LAB_01e0bf14;
code_r0x01e0bf80:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01e0bf88;
  goto LAB_01e0bf78;
}


