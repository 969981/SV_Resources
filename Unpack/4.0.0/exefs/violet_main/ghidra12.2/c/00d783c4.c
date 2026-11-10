/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d783c4; name: FUN_00d783c4
 */


void FUN_00d783c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 *param_7)

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
  iVar5 = 3;
  if (param_3 == 0) {
    iVar5 = 4;
  }
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar8) {
      uVar7 = nn::os::GetCurrentThread();
LAB_00d78530:
      if (*(long *)puVar2 == 0) goto code_r0x00d78538;
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
              if (cVar1 == '\0') goto LAB_00d78540;
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
LAB_00d78540:
      bVar9 = false;
      goto LAB_00d7842c;
    }
    bVar9 = true;
LAB_00d7842c:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar9) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      if (param_3 == 0) {
        iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
        if ((iVar4 != 6) || (*(int *)(param_2 + 0x58) < 0)) goto LAB_00d78500;
        lVar8 = *(long *)puVar2;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar8) {
          uVar7 = nn::os::GetCurrentThread();
LAB_00d785ec:
          if (*(long *)puVar2 == 0) goto code_r0x00d785f4;
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
                  if (cVar1 == '\0') goto LAB_00d785fc;
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
LAB_00d785fc:
          bVar9 = false;
          goto LAB_00d785b8;
        }
        bVar9 = true;
LAB_00d785b8:
        iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
        iVar4 = *(int *)(param_2 + 0x58);
        if (!bVar9) {
          *(undefined8 *)puVar2 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
        }
        if (iVar3 != iVar4) goto LAB_00d78500;
      }
      else {
        iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
        if ((iVar4 != 5) || (iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_4), iVar4 != 6))
        goto LAB_00d78500;
      }
      FUN_00ca1900(param_1,param_5);
      FUN_00d78ac0(param_1,param_6);
      FUN_00d786c0(param_1,*param_7);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_022db780,0);
      FUN_00c5dcd0(param_1,iVar4 - iVar5,1);
      iVar5 = FUN_00c5ddd0(param_1,iVar5,0,iVar4 - iVar5,0,0);
      if (iVar5 != 0) {
        uVar7 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar7;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",param_3,param_4,uVar7);
      }
    }
  }
LAB_00d78500:
  FUN_00c5db00(param_1,0);
  return;
code_r0x00d78538:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar9) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d78540;
  goto LAB_00d78530;
code_r0x00d785f4:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar9) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d785fc;
  goto LAB_00d785ec;
}


