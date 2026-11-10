/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0288db40; name: FUN_0288db40
 */


void FUN_0288db40(undefined8 param_1,long *param_2)

{
  undefined4 local_5c;
  long *local_58;
  undefined1 auStack_50 [24];
  long *local_38;
  undefined8 local_30 [2];
  
  FUN_0177dbc8(&local_58,param_2 + 1,"+inner");
  FUN_0135d26c(auStack_50,&local_58);
  local_5c = 0;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    FUN_019e7d68(local_30,*(long *)PTR_DAT_047d0a08,*param_2 + 0x78);
  }
  local_30[0] = 0;
  FUN_01945a78(param_1,auStack_50,&local_5c,local_30);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


