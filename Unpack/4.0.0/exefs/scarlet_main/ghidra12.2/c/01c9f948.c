/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9f948; name: FUN_01c9f948
 */


void FUN_01c9f948(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  long local_18;
  
  FUN_01c9f3e8(&local_18);
  if (local_18 == 0) {
    FUN_018b3450(&local_18);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
    }
    (*param_3)(param_1);
    FUN_018b3450(&local_18);
  }
  return;
}


