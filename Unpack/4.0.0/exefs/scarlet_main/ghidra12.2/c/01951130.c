/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01951130; name: FUN_01951130
 */


void FUN_01951130(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [24];
  byte local_68 [16];
  void *local_58;
  undefined1 auStack_50 [24];
  long *local_38;
  long *local_18;
  
  std::to_string(1);
  FUN_00d99618(&local_18,"BranchAction_",local_68);
  FUN_0135d26c(auStack_50,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00d996a8(auStack_80,param_2,auStack_50);
  FUN_00d99870(param_1,auStack_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  std::to_string(2);
  FUN_00d99618(&local_18,"BranchAction_",local_68);
  FUN_0135d26c(auStack_50,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00d996a8(auStack_80,param_2,auStack_50);
  FUN_00d99870(param_1 + 8,auStack_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  std::to_string(3);
  FUN_00d99618(&local_18,"BranchAction_",local_68);
  FUN_0135d26c(auStack_50,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00d996a8(auStack_80,param_2,auStack_50);
  FUN_00d99870(param_1 + 0x10,auStack_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  std::to_string(4);
  FUN_00d99618(&local_18,"BranchAction_",local_68);
  FUN_0135d26c(auStack_50,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00d996a8(auStack_80,param_2,auStack_50);
  FUN_00d99870(param_1 + 0x18,auStack_80);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


