/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b21c0; name: FUN_007b21c0
 */


void FUN_007b21c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((((*(ushort *)(param_3 + 0x10) < 9) && (*(byte *)(param_3 + 0x80) - 0x10 < 0x31)) &&
      (*(ushort *)(param_3 + 0x202) < 0x31)) &&
     ((((1L << ((ulong)*(ushort *)(param_3 + 0x202) & 0x3f) & 0x1111000000843U) != 0 &&
       (uVar1 = FUN_0284c1b8(param_3), uVar1 < 0x125)) && (*(long *)(param_3 + 0x38) != 0)))) {
    local_30[0] = 0;
  }
  else {
    local_30[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


