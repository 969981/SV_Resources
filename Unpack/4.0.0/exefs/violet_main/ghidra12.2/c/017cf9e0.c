/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cf9e0; name: FUN_017cf9e0
 */


void FUN_017cf9e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar7 = true;
  }
  else {
    uVar5 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
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
                  *(undefined8 *)puVar2 = uVar5;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                if (cVar1 == '\0') goto LAB_017cfaec;
              }
            } while( true );
          }
          cVar1 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *(undefined8 *)puVar2 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        bVar7 = false;
        goto LAB_017cfa44;
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *(undefined8 *)puVar2 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_017cfaec:
    bVar7 = false;
  }
LAB_017cfa44:
  puVar3 = PTR_DAT_047d3920;
  FUN_017cfbd0(&local_80,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_9);
  if (local_80 == 0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    FUN_017cfbd0(&local_a0,*(undefined8 *)(*(long *)puVar3 + 8),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,param_9);
    local_80 = local_a0;
    local_78 = lStack_98;
    local_70 = local_90;
    local_68 = lStack_88;
    if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  param_1[2] = local_70;
  param_1[3] = local_68;
  *param_1 = local_80;
  param_1[1] = local_78;
  if (!bVar7) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    return;
  }
  return;
}


