/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014585f0; name: FUN_014585f0
 */


void FUN_014585f0(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  
  local_68 = 0xa004f7da31286203;
  pcStack_60 = "Trigger";
  local_58 = 7;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_48,param_2,&local_68);
  FUN_010657f0(param_1,auStack_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x32b40b780efaebcf;
  pcStack_60 = "ComboAction_1";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_80,param_2,&local_68);
  FUN_011815e0(param_1 + 8,auStack_80);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x32b40c780efaed82;
  pcStack_60 = "ComboAction_2";
  local_58 = 0xd;
  local_50 = (long *)0x0;
  FUN_00d996a8(auStack_98,param_2,&local_68);
  FUN_00d99870(param_1 + 0x18,auStack_98);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


