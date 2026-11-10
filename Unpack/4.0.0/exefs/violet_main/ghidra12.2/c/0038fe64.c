/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038fe64; name: FUN_0038fe64
 */


uint FUN_0038fe64(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if ((param_2 & 0xff) == 0x14) {
    *param_4 = (int)param_1;
    return 1;
  }
  uVar1 = FUN_0038fea0(param_1,param_2,param_3);
  return uVar1 & 1;
}


