/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ff278; name: FUN_026ff278
 */


void FUN_026ff278(long param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar2 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20;
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + *(long *)(lVar2 + 0x18) * 8);
  if (*(char *)(lVar6 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Remove",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/haxe_lua.bindings/script_execution_manager.cpp"
               ,0x59e);
  }
  puVar7 = (undefined8 *)FUN_00e8a830(lVar6,*(undefined8 *)(lVar2 + 8));
  uStack_80 = puVar7[1];
  local_78 = puVar7[2];
  local_88 = *puVar7;
  lStack_70 = puVar7[3];
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_026ff390;
  }
  local_68 = puVar7[4];
  if (local_68 != 0) {
    piVar1 = (int *)(local_68 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_026ff390:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_60 = *(undefined1 *)(puVar7 + 5);
  local_58 = 0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,puVar7 + 6);
  local_48 = puVar7[8];
  local_60 = 0;
  FUN_01096d3c(*(undefined8 *)(*(long *)(param_1 + 0x28) + param_3 * 8),&local_58,local_48,
               *(long *)(param_1 + 0x1e8) + param_2 * 0x20);
  *(long *)(*(long *)(param_1 + 0x1e8) + param_2 * 0x20 + 0x18) = param_3;
  FUN_01096f44(&local_88);
  return;
}


