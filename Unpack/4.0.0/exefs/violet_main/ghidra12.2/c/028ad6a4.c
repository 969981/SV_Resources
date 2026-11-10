/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ad6a4; name: FUN_028ad6a4
 */


void FUN_028ad6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  FUN_00dc8750(param_2,param_3,param_4,param_5,1,0,0,0,0,0,0,lVar1 + 0xb8,0x80000,3);
  return;
}


