/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118a890; name: FUN_0118a890
 */


void FUN_0118a890(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined8 uStack_228;
  long *local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [112];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  long *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_220 = (long *)0x0;
  local_218 = 0;
  local_240 = (long *)0x0;
  puStack_238 = &DAT_cbf29ce484222645;
  local_210 = 0x101;
  local_230 = &DAT_03c886bc;
  uStack_228 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  memset(&local_200,0,0x88);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_60 = &DAT_cbf29ce484222645;
  puStack_58 = &DAT_03c886bc;
  local_50 = 0;
  local_48 = (long *)0x0;
  FUN_01027bbc(param_1,&local_240);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar6)(auStack_150);
  }
  pcVar6 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar6)(auStack_1e0);
  }
  if (local_220 != (long *)0x0) {
    (**(code **)(*local_220 + 0x20))();
  }
  if (local_240 != (long *)0x0) {
    (**(code **)(*local_240 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x130) = 3;
  return;
}


