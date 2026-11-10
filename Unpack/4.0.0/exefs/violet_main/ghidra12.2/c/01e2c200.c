/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2c200; name: FUN_01e2c200
 */


void FUN_01e2c200(undefined8 param_1,long *param_2,byte param_3,undefined8 *param_4,byte param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long *local_240;
  long local_238;
  long lStack_230;
  long local_228;
  long *local_220;
  undefined4 local_218;
  byte local_210;
  byte local_20f;
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [96];
  undefined8 local_180;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  long *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_240 = (long *)*param_2;
  if (local_240 != (long *)0x0) {
    (**(code **)(*local_240 + 0x18))();
  }
  local_238 = param_2[1];
  lStack_230 = param_2[2];
  local_228 = param_2[3];
  local_220 = (long *)param_2[4];
  if (local_220 != (long *)0x0) {
    (**(code **)(*local_220 + 0x18))();
  }
  local_218 = (undefined4)param_2[5];
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_180 = *param_4;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_210 = param_3 & 1;
  local_20f = param_5 & 1;
  if ((code *)param_4[4] != (code *)0x0) {
    (*(code *)param_4[4])(param_4 + 6,auStack_150);
    local_158 = param_4[5];
    local_168 = (code *)param_4[3];
    local_170 = param_4[2];
    local_160 = param_4[4];
  }
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if ((code *)param_4[0x14] != (code *)0x0) {
    (*(code *)param_4[0x14])(param_4 + 0x16,auStack_d0);
    local_d8 = param_4[0x15];
    local_e8 = (code *)param_4[0x13];
    local_f0 = param_4[0x12];
    local_e0 = param_4[0x14];
  }
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
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
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
  return;
}


