/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049b080; name: FUN_0049b080
 */


undefined8 FUN_0049b080(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0049aca0(param_1,param_1[2]);
  if (lVar1 == 0) {
    FUN_00481380(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  *param_2 = lVar1;
  return 1;
}


