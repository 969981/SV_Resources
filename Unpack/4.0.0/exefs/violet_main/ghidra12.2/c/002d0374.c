/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d0374; name: FUN_002d0374
 */


void FUN_002d0374(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & 0xfffffff8 | 5;
  param_1[1] = param_2;
  return;
}


