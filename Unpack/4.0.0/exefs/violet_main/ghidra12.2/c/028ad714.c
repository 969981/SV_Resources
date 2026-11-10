/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ad714; name: FUN_028ad714
 */


void FUN_028ad714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  FUN_028ad770(8,param_2,param_3,param_4,9,0,0,0,lVar1 + 0x800b8,0x80000);
  return;
}


