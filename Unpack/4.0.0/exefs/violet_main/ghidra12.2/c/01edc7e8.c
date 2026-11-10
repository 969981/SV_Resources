/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edc7e8; name: FUN_01edc7e8
 */


uint FUN_01edc7e8(undefined8 param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  if (param_3 == '\0') {
    uVar1 = param_2 ^ 0x10000000;
    if (0xf < (uVar2 ^ (uint)param_1 & 0xfff0 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
      uVar1 = param_2;
    }
  }
  else {
    uVar1 = param_2 & 0xffff | (uVar2 ^ (uint)param_1 ^ param_2 ^ (uint)(param_3 == '\x01')) << 0x10
    ;
  }
  return uVar1;
}


