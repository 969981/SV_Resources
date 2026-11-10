/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ad224; name: FUN_025ad224
 */


void FUN_025ad224(undefined8 param_1,long param_2,int *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined1 local_68 [8];
  undefined8 local_60;
  
  puVar2 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar7 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      uVar6 = nn::os::GetCurrentThread();
LAB_025ad348:
      if (*(long *)puVar2 == 0) goto code_r0x025ad350;
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
                *(undefined8 *)puVar2 = uVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_025ad358;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar8) {
          *(undefined8 *)puVar2 = uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_025ad358:
      bVar8 = false;
      goto LAB_025ad274;
    }
    bVar8 = true;
LAB_025ad274:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      FUN_00c5d960(param_1,(long)*param_3);
      local_60 = *param_4;
      local_68[0] = 0;
      FUN_00fa4220(param_1,local_68);
      FUN_00f5aff8(local_68);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_02579550,0);
      FUN_00c5dcd0(param_1,iVar4 + -2,1);
      iVar4 = FUN_00c5ddd0(param_1,2,0,iVar4 + -2,0,0);
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
  FUN_00c5db00(param_1,0);
  return;
code_r0x025ad350:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_025ad358;
  goto LAB_025ad348;
}


