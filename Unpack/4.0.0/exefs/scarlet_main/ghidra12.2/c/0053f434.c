/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053f434; name: FUN_0053f434
 */


void FUN_0053f434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)*param_2 + 0x238);
                    /* try { // try from 0053f454 to 0053f45f has its CatchHandler @ 0053f474 */
  FUN_00540564(&local_30,&local_18,param_2);
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


