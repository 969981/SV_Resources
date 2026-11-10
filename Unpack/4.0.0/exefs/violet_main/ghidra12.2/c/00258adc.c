/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00258adc; name: FUN_00258adc
 */


long * FUN_00258adc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_0026a1cc(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
      *param_1 = 0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
  return param_1;
}


