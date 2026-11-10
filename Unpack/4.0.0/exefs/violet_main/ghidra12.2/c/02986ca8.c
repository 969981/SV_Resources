/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02986ca8; name: FUN_02986ca8
 */


void FUN_02986ca8(long param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  if ((byte)(param_4 - 1U) < 7) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,
                 *(undefined4 *)(&DAT_03d6a7d0 + (ulong)(byte)(param_4 - 1U) * 8),param_3,0xffff0000
                );
    return;
  }
  return;
}


