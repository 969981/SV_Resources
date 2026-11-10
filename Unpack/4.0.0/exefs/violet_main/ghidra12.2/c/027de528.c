/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027de528; name: FUN_027de528
 */


void FUN_027de528(long *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_027de574();
                    /* WARNING: Could not recover jumptable at 0x027de564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],*param_1,param_1[2] - *param_1,8);
  return;
}


