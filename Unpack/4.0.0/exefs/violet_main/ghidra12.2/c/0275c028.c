/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275c028; name: FUN_0275c028
 */


long FUN_0275c028(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (((code *)*param_2 == (code *)0x0) ||
     (lVar1 = (*(code *)*param_2)(3,param_2,0,0,&DAT_03d688dc), lVar1 == 0)) {
    lVar1 = FUN_0275f9a4(param_1,param_2);
    return lVar1;
  }
  return param_1 + 0x120;
}


