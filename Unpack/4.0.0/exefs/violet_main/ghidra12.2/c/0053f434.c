/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


