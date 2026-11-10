/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0253bbb0; name: FUN_0253bbb0
 */


void FUN_0253bbb0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,char *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      uVar6 = nn::os::GetCurrentThread();
LAB_0253bd08:
      if (*(long *)puVar2 == 0) goto code_r0x0253bd10;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_0253bd18;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(undefined8 *)puVar2 = uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_0253bd18:
      bVar7 = false;
      goto LAB_0253bc14;
    }
    bVar7 = true;
LAB_0253bc14:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      FUN_0253bdc0(param_1,*param_3);
      FUN_0111edb0(param_1,*param_4);
      FUN_0111edb0(param_1,*param_5);
      FUN_00c419e0(param_1,*param_6 != '\0');
      FUN_00c5d960(param_1,*param_7);
      FUN_00c5d960(param_1,*param_8);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_025384e0,0);
      FUN_00c5dcd0(param_1,iVar4 + -6,1);
      iVar4 = FUN_00c5ddd0(param_1,6,0,iVar4 + -6,0,0);
      if (iVar4 != 0) {
        uVar6 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar6;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar6);
      }
    }
  }
  return;
code_r0x0253bd10:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0253bd18;
  goto LAB_0253bd08;
}


