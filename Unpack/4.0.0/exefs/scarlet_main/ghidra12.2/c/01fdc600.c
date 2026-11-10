/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fdc600; name: FUN_01fdc600
 */


void FUN_01fdc600(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = 0;
  local_60 = 0x4a97b6557f26285c;
  pcStack_58 = "BeginHour";
  local_50 = 9;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar2;
  }
  local_60 = 0x429624491f37772b;
  pcStack_58 = "BeginMinutes";
  local_50 = 0xc;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar2;
  }
  local_60 = 0xff98d74f8c3107f8;
  pcStack_58 = "EndHour";
  local_50 = 7;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar2;
  }
  local_60 = 0x48c31337a400a47;
  pcStack_58 = "EndMinutes";
  local_50 = 10;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0116610c(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_01466a3c();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar2;
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
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  return;
}


