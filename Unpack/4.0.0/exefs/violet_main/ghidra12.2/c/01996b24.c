/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01996b24; name: FUN_01996b24
 */


void FUN_01996b24(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    FUN_01996b54(param_1 + 8);
    return;
  }
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_01cb87c4(param_1 + 8);
    return;
  }
  return;
}


