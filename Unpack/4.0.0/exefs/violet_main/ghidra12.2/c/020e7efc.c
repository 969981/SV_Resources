/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e7efc; name: FUN_020e7efc
 */


void FUN_020e7efc(long param_1,ulong param_2)

{
  if (((uint)param_2 & 0xff) < 4) {
    FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),param_2,0);
    FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_2 & 0xffffffff,0);
    FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),param_2 & 0xffffffff,0);
    return;
  }
  return;
}


