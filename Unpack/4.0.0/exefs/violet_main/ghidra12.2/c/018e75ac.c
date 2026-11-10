/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e75ac; name: FUN_018e75ac
 */


void FUN_018e75ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  
  local_68 = 0x32b40b780efaebcf;
  pcStack_60 = "ComboAction_1";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_48,param_2,&local_68);
  FUN_00d99870(param_1,auStack_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x32b40c780efaed82;
  pcStack_60 = "ComboAction_2";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_80,param_2,&local_68);
  FUN_010656b0(param_1 + 8,auStack_80);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x32b40d780efaef35;
  pcStack_60 = "ComboAction_3";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_98,param_2,&local_68);
  FUN_00d99870(param_1 + 0x20,auStack_98);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x32b406780efae350;
  pcStack_60 = "ComboAction_4";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_b0,param_2,&local_68);
  FUN_00d99870(param_1 + 0x28,auStack_b0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


