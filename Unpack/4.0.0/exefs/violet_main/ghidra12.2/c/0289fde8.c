/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289fde8; name: FUN_0289fde8
 */


void FUN_0289fde8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    local_28[0] = 0x10407;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
    FUN_00cbd7c0(param_1,local_28);
    return;
  }
  FUN_007fb300(param_1);
  return;
}


