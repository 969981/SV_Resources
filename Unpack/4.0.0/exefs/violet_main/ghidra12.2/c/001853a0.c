/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001853a0; name: FUN_001853a0
 */


void FUN_001853a0(float param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(param_3 + 0x48))(0x40c00000,0,0x80,0x14);
  FUN_00184bd0(fVar1 * param_1,0,param_2,param_4,PTR_LAB_047cb930,param_5);
  return;
}


