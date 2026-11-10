/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02306548; name: FUN_02306548
 */


undefined8 FUN_02306548(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  undefined4 local_4;
  
  puVar1 = PTR_FUN_047de338;
  if (DAT_04846520 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_2;
  FUN_02307e24(auStack_40,param_1,puVar1,0,&local_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


