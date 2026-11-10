/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02053964; name: FUN_02053964
 */


void FUN_02053964(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = &DAT_cbf29ce484222645;
  local_60 = 0x83cc84b73e1b20a9;
  pcStack_58 = "InstinctValueKey";
  local_50 = 0x10;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar1;
  }
  return;
}


