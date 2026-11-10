/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002525b8; name: FUN_002525b8
 */


void FUN_002525b8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*param_2 + 0x238);
                    /* try { // try from 002525d8 to 002525e3 has its CatchHandler @ 00252600 */
  FUN_002529e8(&local_30,&local_18,param_2,param_3);
  FUN_00252604(local_30);
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


