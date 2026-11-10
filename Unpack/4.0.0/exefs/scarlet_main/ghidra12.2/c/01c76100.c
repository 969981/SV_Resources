/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c76100; name: FUN_01c76100
 */


void FUN_01c76100(undefined8 param_1,long param_2,int *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  char local_60 [8];
  long *local_58;
  
  puVar3 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar8) {
      uVar7 = nn::os::GetCurrentThread();
LAB_01c76264:
      if (*(long *)puVar3 == 0) goto code_r0x01c7626c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *(undefined8 *)puVar3 = uVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01c76274;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar9) {
          *(undefined8 *)puVar3 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01c76274:
      bVar9 = false;
      goto LAB_01c76150;
    }
    bVar9 = true;
LAB_01c76150:
    iVar4 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar5 = *(int *)(param_2 + 0x58);
    if (!bVar9) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      FUN_00c5d960(param_1,(long)*param_3);
      local_58 = (long *)*param_4;
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 5;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_60[0] = '\x01';
      FUN_00d601a0(param_1,local_60);
      if ((local_60[0] == '\x01') && (local_58 != (long *)0x0)) {
        plVar1 = local_58 + 5;
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar5 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_01c62880,0);
      FUN_00c5dcd0(param_1,iVar5 + -2,1);
      iVar5 = FUN_00c5ddd0(param_1,2,0,iVar5 + -2,0,0);
      if (iVar5 != 0) {
        uVar7 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar7;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar7);
      }
    }
  }
  return;
code_r0x01c7626c:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar9) {
    *(undefined8 *)puVar3 = uVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01c76274;
  goto LAB_01c76264;
}


