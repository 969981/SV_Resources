/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b3010; name: FUN_007b3010
 */


void FUN_007b3010(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == 0) ||
      (0x30 < *(ushort *)(param_3 + 0x20) ||
       (1L << ((ulong)*(ushort *)(param_3 + 0x20) & 0x3f) & 0x1111000000843U) == 0)) ||
     (*(long *)(param_3 + 0x18) == 0)) {
    local_28[0] = 0x10407;
  }
  else {
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


