/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01766e5c; name: FUN_01766e5c
 */


void FUN_01766e5c(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  FUN_01766fb8();
  local_30 = 0x337918320cf68588;
  pcStack_28 = "FullgcExecutionCountAuto";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_01766f10(&local_30,FUN_02a405d4);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x6aebb373bbaa69ce;
  pcStack_28 = "FullgcExecutionCountForced";
  local_20 = 0x1a;
  local_18 = (long *)0x0;
  FUN_01766f10(&local_30,FUN_02a40644);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


