/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ca490; name: FUN_019ca490
 */


undefined8
FUN_019ca490(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
            undefined8 param_6)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  
  puVar2 = PTR_DAT_047d38f8;
  iVar5 = 1;
  if (param_3 == 0) {
    iVar5 = 2;
  }
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar8) {
      uVar7 = nn::os::GetCurrentThread();
LAB_019ca68c:
      if (*(long *)puVar2 == 0) goto code_r0x019ca694;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar9) {
                *(undefined8 *)puVar2 = uVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_019ca69c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *(undefined8 *)puVar2 = uVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_019ca69c:
      bVar9 = false;
      goto LAB_019ca4f8;
    }
    bVar9 = true;
LAB_019ca4f8:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar9) {
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
        lVar8 = *(long *)puVar2;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar8) {
          uVar7 = nn::os::GetCurrentThread();
LAB_019ca6f0:
          if (*(long *)puVar2 == 0) goto code_r0x019ca6f8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          do {
            if (*(long *)puVar2 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
                while (*(long *)puVar2 == 0) {
                  cVar1 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar9) {
                    *(undefined8 *)puVar2 = uVar7;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                  if (cVar1 == '\0') goto LAB_019ca700;
                }
              } while( true );
            }
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_019ca700:
          bVar9 = false;
          goto LAB_019ca638;
        }
        bVar9 = true;
LAB_019ca638:
        iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar4 = *(int *)(param_2 + 0x58);
        if (!bVar9) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar3 == iVar4) goto LAB_019ca558;
      }
      else {
        iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar4 == 5) && (iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar4 == 6)) {
LAB_019ca558:
          FUN_0135e530(param_1,param_6);
          iVar4 = FUN_00c5d980(param_1);
          FUN_00c5dbe0(param_1,&LAB_02111ea0,0);
          FUN_00c5dcd0(param_1,iVar4 - iVar5,1);
          iVar5 = FUN_00c5ddd0(param_1,iVar5,param_5,iVar4 - iVar5,0,0);
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
code_r0x019ca694:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar9) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_019ca69c;
  goto LAB_019ca68c;
code_r0x019ca6f8:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar9) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_019ca700;
  goto LAB_019ca6f0;
}


