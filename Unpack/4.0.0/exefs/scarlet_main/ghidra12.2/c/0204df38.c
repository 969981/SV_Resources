/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0204df38; name: FUN_0204df38
 */


void FUN_0204df38(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = 0xffffffff;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = 0;
  local_60 = 0x2da359a959b579f6;
  pcStack_58 = "PseudoDamageType";
  local_50 = 0x10;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar1;
  }
  local_60 = 0x21818332211748e;
  pcStack_58 = "ActionTime";
  local_50 = 10;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = uVar1;
  }
  local_60 = 0x1531491f9bf0a433;
  pcStack_58 = "BaseDistance";
  local_50 = 0xc;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = uVar1;
  }
  return;
}


