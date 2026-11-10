/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02665024; name: FUN_02665024
 */


undefined1  [16] FUN_02665024(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long local_28;
  
  FUN_02663d68(&local_28);
  if (local_28 == 0) {
    auVar1 = ZEXT816(0);
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)();
  }
  FUN_01751d6c(&local_28);
  return auVar1;
}


