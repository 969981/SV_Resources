/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ab771c; name: FUN_01ab771c
 */


void FUN_01ab771c(long param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
  }
  (*param_2)(*param_4,param_4[2],param_4[4],param_4[6]);
  return;
}


