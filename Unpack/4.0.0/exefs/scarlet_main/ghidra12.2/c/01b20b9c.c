/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b20b9c; name: FUN_01b20b9c
 */


void FUN_01b20b9c(undefined8 param_1,long param_2,int *param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  
  puVar2 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar7 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      uVar6 = nn::os::GetCurrentThread();
LAB_01b20c88:
      if (*(long *)puVar2 == 0) goto code_r0x01b20c90;
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
              if (cVar1 == '\0') goto LAB_01b20c98;
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
LAB_01b20c98:
      bVar8 = false;
      goto LAB_01b20be0;
    }
    bVar8 = true;
LAB_01b20be0:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    if (iVar3 == iVar4) {
      FUN_00c5d960(param_1,(long)*param_3);
      iVar4 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_00901a30,0);
      FUN_00c5dcd0(param_1,iVar4 + -1,1);
      iVar4 = FUN_00c5ddd0(param_1,1,0,iVar4 + -1,0,0);
      if (iVar4 != 0) {
        uVar6 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar6;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar6);
      }
    }
  }
  FUN_00c5db00(param_1,0);
  return;
code_r0x01b20c90:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar8) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01b20c98;
  goto LAB_01b20c88;
}


