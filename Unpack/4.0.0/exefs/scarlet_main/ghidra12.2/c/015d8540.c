/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d8540; name: FUN_015d8540
 */


void FUN_015d8540(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  FUN_015d82d8(*puVar1,5,1);
  FUN_015d8880(*puVar1,5,1);
  uVar2 = *puVar1;
  FUN_014fa9b4(&local_60);
  FUN_015d8984(uVar2,5,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,4,1);
  FUN_015d8880(*puVar1,4,1);
  local_60 = 0xc1a949029450238f;
  pcStack_58 = "PLAY_UI_COMMON_DECIDE";
  local_50 = 0x15;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,4,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,6,1);
  FUN_015d8880(*puVar1,6,1);
  local_60 = 0x99ec3ab313e9662e;
  pcStack_58 = "PLAY_UI_COMMON_TAB";
  local_50 = 0x12;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,6,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,7,1);
  FUN_015d8880(*puVar1,7,1);
  local_60 = 0xc1a949029450238f;
  pcStack_58 = "PLAY_UI_COMMON_DECIDE";
  local_50 = 0x15;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,7,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,8,1);
  FUN_015d8880(*puVar1,8,0);
  local_60 = 0x7aee18080d2405b4;
  pcStack_58 = "PLAY_UI_BOX_MOVEMENT";
  local_50 = 0x14;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,8,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,9,1);
  FUN_015d8880(*puVar1,9,0);
  local_60 = 0x7aee18080d2405b4;
  pcStack_58 = "PLAY_UI_BOX_MOVEMENT";
  local_50 = 0x14;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,9,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,0xc,1);
  FUN_015d8880(*puVar1,0xc,1);
  local_60 = 0x432c61c46985c962;
  pcStack_58 = "PLAY_UI_BOX_WINDOW_SWITCH";
  local_50 = 0x19;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,0xc,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_015d82d8(*puVar1,0xd,1);
  FUN_015d8880(*puVar1,0xd,1);
  local_60 = 0xc1a949029450238f;
  pcStack_58 = "PLAY_UI_COMMON_DECIDE";
  local_50 = 0x15;
  local_48 = (long *)0x0;
  FUN_015d8984(*puVar1,0xd,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


