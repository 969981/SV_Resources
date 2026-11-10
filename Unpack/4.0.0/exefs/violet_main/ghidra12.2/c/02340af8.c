/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02340af8; name: FUN_02340af8
 */


void FUN_02340af8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    FUN_02340e8c(param_1 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_02340e14(param_1 + 8);
    return;
  }
  return;
}


