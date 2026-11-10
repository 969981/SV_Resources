/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dec960; name: FUN_01dec960
 */


void FUN_01dec960(long param_1)

{
  undefined8 uVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),5,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),5,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_014fa9b4(&local_50);
  FUN_015d8984(uVar1,5,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),4,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),4,1);
  FUN_015d8984(*(undefined8 *)(param_1 + 0x30),4,PTR_DAT_047d90b8);
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),8,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),8,0);
  local_50 = 0x7aee18080d2405b4;
  pcStack_48 = "PLAY_UI_BOX_MOVEMENT";
  local_40 = 0x14;
  local_38 = (long *)0x0;
  FUN_015d8984(*(undefined8 *)(param_1 + 0x30),8,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),9,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),9,0);
  local_50 = 0x7aee18080d2405b4;
  pcStack_48 = "PLAY_UI_BOX_MOVEMENT";
  local_40 = 0x14;
  local_38 = (long *)0x0;
  FUN_015d8984(*(undefined8 *)(param_1 + 0x30),9,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),0xc,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),0xc,1);
  local_50 = 0x432c61c46985c962;
  pcStack_48 = "PLAY_UI_BOX_WINDOW_SWITCH";
  local_40 = 0x19;
  local_38 = (long *)0x0;
  FUN_015d8984(*(undefined8 *)(param_1 + 0x30),0xc,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x30),0xd,1);
  FUN_015d8880(*(undefined8 *)(param_1 + 0x30),0xd,1);
  local_50 = 0xc1a949029450238f;
  pcStack_48 = "PLAY_UI_COMMON_DECIDE";
  local_40 = 0x15;
  local_38 = (long *)0x0;
  FUN_015d8984(*(undefined8 *)(param_1 + 0x30),0xd,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


