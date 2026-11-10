/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccc10c; name: FUN_00ccc10c
 */


undefined1  [16] FUN_00ccc10c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long local_50;
  undefined1 auStack_48 [24];
  
  FUN_00ccc1c0(&local_50,*param_2,param_2 + 2);
  auVar2 = FUN_00ccc308(param_1,&local_50);
  lVar1 = local_50;
  local_50 = 0;
  if (lVar1 != 0) {
    FUN_02754328(auStack_48);
  }
  return auVar2;
}


