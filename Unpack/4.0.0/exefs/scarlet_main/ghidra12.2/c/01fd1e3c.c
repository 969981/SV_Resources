/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fd1e3c; name: FUN_01fd1e3c
 */


void FUN_01fd1e3c(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = 0;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = &DAT_cbf29ce484222645;
  local_60 = 0x911a41ea0ea4b8f6;
  pcStack_58 = "LocationType";
  local_50 = 0xc;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  local_60 = 0x36f29fa06b41c754;
  pcStack_58 = "PokeType";
  local_50 = 8;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar1;
  }
  local_60 = 0xeaa848c4107edb9d;
  pcStack_58 = "Operator";
  local_50 = 8;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar2;
  }
  return;
}


