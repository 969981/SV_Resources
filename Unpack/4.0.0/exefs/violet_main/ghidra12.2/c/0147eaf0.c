/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147eaf0; name: FUN_0147eaf0
 */


void FUN_0147eaf0(undefined1 param_1)

{
  undefined1 local_14 [4];
  
  if (DAT_0483b000 != (code *)0x0) {
    local_14[0] = param_1;
    (*DAT_0483b000)(&DAT_0483b020,local_14);
  }
  return;
}


