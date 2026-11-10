/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d11630; name: FUN_01d11630
 */


void FUN_01d11630(undefined8 param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  long local_18;
  
  FUN_01d112ac(&local_18);
  if (local_18 == 0) {
    FUN_01d00088(&local_18);
    FUN_01d116a8(param_1);
    return;
  }
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
  }
  (*param_3)(param_1);
  FUN_01d00088(&local_18);
  return;
}


