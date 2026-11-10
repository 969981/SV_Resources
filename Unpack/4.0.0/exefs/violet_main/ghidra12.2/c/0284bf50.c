/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284bf50; name: FUN_0284bf50
 */


void FUN_0284bf50(undefined8 param_1,undefined8 param_2,ushort param_3,ushort param_4)

{
  undefined4 local_30 [4];
  undefined4 local_8 [2];
  
  if ((param_3 < 9) && (param_4 < 9)) {
    FUN_0284bfcc(param_1);
    return;
  }
  local_30[0] = 0x10407;
  local_8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_8);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


