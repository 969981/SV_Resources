/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6f044; name: FUN_01f6f044
 */


void FUN_01f6f044(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined **local_90;
  undefined8 uStack_88;
  long *local_70;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  
  uStack_58 = FUN_01f70668(param_2);
  local_40 = &local_60;
  local_60 = &PTR_LAB_0455ca20;
  local_50 = *param_3;
  uStack_88 = FUN_01f70668(param_2);
  local_90 = &PTR_LAB_0455ca78;
  local_70 = (long *)&local_90;
  FUN_01f7067c(param_1,param_2,&local_60,&local_90);
  if (local_70 != (long *)0x0) {
    if ((undefined ***)local_70 == &local_90) {
      pcVar1 = *(code **)(*local_70 + 0x10);
    }
    else {
      pcVar1 = *(code **)(*local_70 + 0x18);
    }
    (*pcVar1)();
  }
  if (local_40 != (undefined ***)0x0) {
    if (local_40 == &local_60) {
      pcVar1 = (code *)(*local_40)[2];
    }
    else {
      pcVar1 = (code *)(*local_40)[3];
    }
    (*pcVar1)();
  }
  return;
}


