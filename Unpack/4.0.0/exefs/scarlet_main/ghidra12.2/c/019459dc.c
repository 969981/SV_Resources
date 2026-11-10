/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019459dc; name: FUN_019459dc
 */


void FUN_019459dc(undefined8 param_1,long param_2)

{
  undefined8 local_50;
  undefined4 local_44;
  undefined1 auStack_40 [24];
  long *local_28;
  long *local_8;
  
  FUN_0177dbc8(&local_8,param_2 + 8,"+inner");
  FUN_0135d26c(auStack_40,&local_8);
  DAT_04839fc0 = 1;
  local_44 = 0;
  local_50 = 0;
  FUN_01945a78(param_1,auStack_40,&local_44,&local_50);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return;
}


