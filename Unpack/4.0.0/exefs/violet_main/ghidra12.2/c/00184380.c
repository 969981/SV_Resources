/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00184380; name: FUN_00184380
 */


float FUN_00184380(float param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = FUN_001845e0(param_2,0x100,param_3 & 0xffffffff);
  fVar2 = (float)(**(code **)(param_4 + 0x48))(0x40c00000,param_3,0x80,0x14);
  return (float)uVar1 * 0.125 + fVar2 * param_1;
}


