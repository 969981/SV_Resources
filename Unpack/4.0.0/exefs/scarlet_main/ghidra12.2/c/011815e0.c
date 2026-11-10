/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011815e0; name: FUN_011815e0
 */


void FUN_011815e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [24];
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [24];
  
  local_58 = 0xdcedcd940a38d88a;
  pcStack_50 = "SuccessAction";
  local_48 = 0xd;
  local_40 = (long *)0x0;
  FUN_00d996a8(auStack_38,param_2,&local_58);
  FUN_00d99870(param_1,auStack_38);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = 0x174825e2442f1fc3;
  pcStack_50 = "FailureAction";
  local_48 = 0xd;
  local_40 = (long *)0x0;
  FUN_00d996a8(auStack_70,param_2,&local_58);
  FUN_00d99870(param_1 + 8,auStack_70);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


