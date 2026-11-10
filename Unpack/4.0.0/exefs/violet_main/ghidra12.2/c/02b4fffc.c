/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4fffc; name: FUN_02b4fffc
 */


long FUN_02b4fffc(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (((code *)*param_2 == (code *)0x0) ||
     (lVar1 = (*(code *)*param_2)(3,param_2,0,0,PTR_DAT_047dd5b0), lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x40;
  }
  return param_1;
}


