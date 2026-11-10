/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0265cb18; name: FUN_0265cb18
 */


void FUN_0265cb18(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    FUN_0265cca0(param_1 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_0265cc28(param_1 + 8);
    return;
  }
  return;
}


