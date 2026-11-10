/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a4bd4; name: FUN_007a4bd4
 */


void FUN_007a4bd4(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_3 + 0x26);
    *(ushort *)(param_2 + 0x36) =
         *(ushort *)(param_3 + 0x27) >> 8 | *(ushort *)(param_3 + 0x27) << 8;
    if (0x28 < param_4) {
      local_28[0] = 0;
      goto LAB_007a4c18;
    }
  }
  local_28[0] = 0x10407;
LAB_007a4c18:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


