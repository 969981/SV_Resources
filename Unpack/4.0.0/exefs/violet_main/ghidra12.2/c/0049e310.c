/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e310; name: FUN_0049e310
 */


void FUN_0049e310(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0049e310(param_1,*param_2);
  FUN_0049e310(param_1,param_2[1]);
  nn::lmem::FreeToExpHeap(DAT_047f4470,param_2);
  return;
}


