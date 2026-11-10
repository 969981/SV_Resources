/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796534; name: FUN_00796534
 */


bool FUN_00796534(uint *param_1,uint *param_2)

{
  return (*param_2 >> 0xd & 0x1f) < (*param_1 >> 0xd & 0x1f);
}


