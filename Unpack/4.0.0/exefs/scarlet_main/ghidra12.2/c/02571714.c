/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02571714; name: FUN_02571714
 */


void FUN_02571714(undefined8 param_1,code *param_2,ulong param_3)

{
  long local_28;
  
  FUN_02571768(&local_28);
  if (local_28 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    (*param_2)();
  }
  FUN_018d3d60(&local_28);
  return;
}


