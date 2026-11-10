/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018b7d08; name: FUN_018b7d08
 */


undefined4 FUN_018b7d08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d8fb98(auStack_40,PTR_DAT_047de378);
  uVar1 = FUN_018b7d70(param_1,auStack_40,param_2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1;
}


