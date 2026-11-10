/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b95f0; name: FUN_017b95f0
 */


void FUN_017b95f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  
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
LAB_017b9758:
      if (*(long *)puVar3 == 0) goto code_r0x017b9760;
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
              if (cVar2 == '\0') goto LAB_017b9768;
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
LAB_017b9768:
      bVar10 = false;
      goto LAB_017b9654;
    }
    bVar10 = true;
LAB_017b9654:
    iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar5 = *(int *)(param_2 + 0x58);
    if (!bVar10) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      if (param_3 == 0) {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
        if ((iVar5 != 6) || (*(int *)(param_2 + 0x58) < 0)) goto LAB_017b9728;
        lVar9 = *(long *)puVar3;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar9) {
          uVar8 = nn::os::GetCurrentThread();
LAB_017b9810:
          if (*(long *)puVar3 == 0) goto code_r0x017b9818;
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
                  if (cVar2 == '\0') goto LAB_017b9820;
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
LAB_017b9820:
          bVar10 = false;
          goto LAB_017b97e0;
        }
        bVar10 = true;
LAB_017b97e0:
        iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar5 = *(int *)(param_2 + 0x58);
        if (!bVar10) {
          *(undefined8 *)puVar3 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
        }
        if (iVar4 != iVar5) goto LAB_017b9728;
      }
      else {
        iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar5 != 5) || (iVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar5 != 6))
        goto LAB_017b9728;
      }
      puVar1 = (undefined8 *)PTR_PTR_047d4508;
      if (*param_5 != 0) {
        puVar1 = (undefined8 *)(*param_5 + 0x38);
      }
      FUN_00c85bd0(param_1,*puVar1);
      iVar5 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_01fab0d0,0);
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
    }
  }
LAB_017b9728:
  FUN_00c5db00(param_1,0);
  return;
code_r0x017b9760:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar10) {
    *(undefined8 *)puVar3 = uVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_017b9768;
  goto LAB_017b9758;
code_r0x017b9818:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar10) {
    *(undefined8 *)puVar3 = uVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_017b9820;
  goto LAB_017b9810;
}


