/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a73d8; name: FUN_024a73d8
 */


void FUN_024a73d8(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = *param_1;
  FUN_024a7540(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,param_2,param_1 + 2,param_5,param_6,0,0);
  return;
}


