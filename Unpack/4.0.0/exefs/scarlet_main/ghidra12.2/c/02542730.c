/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02542730; name: FUN_02542730
 */


void FUN_02542730(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
LAB_02542894:
      if (*(long *)puVar2 == 0) goto code_r0x0254289c;
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
              if (cVar1 == '\0') goto LAB_025428a4;
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
LAB_025428a4:
      bVar7 = false;
      goto LAB_02542794;
    }
    bVar7 = true;
LAB_02542794:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      FUN_0253bdc0(param_1,*param_3);
      FUN_0253f2f0(param_1,*param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                   param_12,param_13,param_14,param_15);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_025384e0,0);
      FUN_00c5dcd0(param_1,iVar4 + -0xd,1);
      iVar4 = FUN_00c5ddd0(param_1,0xd,0,iVar4 + -0xd,0,0);
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
code_r0x0254289c:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_025428a4;
  goto LAB_02542894;
}


