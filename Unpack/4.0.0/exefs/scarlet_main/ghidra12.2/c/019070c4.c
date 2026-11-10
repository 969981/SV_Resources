/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019070c4; name: FUN_019070c4
 */


void FUN_019070c4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  (**(code **)(*DAT_0485a020 + 0x108))(auStack_40);
  puVar1 = (undefined8 *)FUN_00e514cc(*(undefined8 *)(param_2 + 0x208));
  FUN_00fff044(param_1,*puVar1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


