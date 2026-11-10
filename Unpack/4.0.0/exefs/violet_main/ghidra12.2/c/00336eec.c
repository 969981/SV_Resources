/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00336eec; name: FUN_00336eec
 */


void FUN_00336eec(ulong *param_1)

{
  ulong *puVar1;
  
  if ((*param_1 & 1) == 0) {
    puVar1 = param_1 + 1;
  }
  else {
    puVar1 = (ulong *)param_1[1];
  }
                    /* try { // try from 00336f0c to 00336f13 has its CatchHandler @ 00336f38 */
  FUN_003384c0(param_1,puVar1,*param_1 >> 1);
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  return;
}


