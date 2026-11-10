/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250088c; name: FUN_0250088c
 */


void FUN_0250088c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  
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
                if (cVar1 == '\0') goto LAB_02500a2c;
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
        goto LAB_02500918;
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *(undefined8 *)puVar2 = uVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_02500a2c:
    bVar7 = false;
  }
LAB_02500918:
  puVar3 = PTR_DAT_047d3920;
  FUN_02500ad0(&local_88,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
               param_15,param_16,param_17);
  if (local_88 == 0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    FUN_02500ad0(&local_a8,*(undefined8 *)(*(long *)puVar3 + 8),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                 param_15,param_16,param_17);
    local_88 = local_a8;
    local_80 = lStack_a0;
    local_78 = local_98;
    local_70 = lStack_90;
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  param_1[2] = local_78;
  param_1[3] = local_70;
  *param_1 = local_88;
  param_1[1] = local_80;
  if (!bVar7) {
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    return;
  }
  return;
}


