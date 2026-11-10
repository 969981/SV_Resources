/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fba490; name: FUN_00fba490
 */


void FUN_00fba490(long param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  
  local_68 = 0x90977f7d204013cf;
  pcStack_60 = "Morning";
  local_58 = 7;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_48,param_2,&local_68);
  FUN_00fba688(param_1,auStack_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x83da09aa5aa39eb3;
  pcStack_60 = "Noon";
  local_58 = 4;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_80,param_2,&local_68);
  FUN_00fba688(param_1 + 0x10,auStack_80);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x7e1ccc9b5b401d2f;
  pcStack_60 = "Evening";
  local_58 = 7;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_98,param_2,&local_68);
  FUN_00fba688(param_1 + 0x20,auStack_98);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x842e6b4775df6941;
  pcStack_60 = "Night";
  local_58 = 5;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_b0,param_2,&local_68);
  FUN_00fba688(param_1 + 0x30,auStack_b0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0xdbb865ffede0d681;
  pcStack_60 = "MidNight";
  local_58 = 8;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_c8,param_2,&local_68);
  FUN_00fba688(param_1 + 0x40,auStack_c8);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


