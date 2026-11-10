/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9b2dc; name: FUN_01c9b2dc
 */


bool FUN_01c9b2dc(byte *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 < 2) {
    lVar1 = *(long *)(param_1 + 8);
  }
  else {
    lVar1 = 0;
  }
  if ((*param_2 == '\x01') || (*param_2 == '\0')) {
    lVar2 = *(long *)(param_2 + 8);
  }
  else {
    lVar2 = 0;
  }
  return lVar1 == lVar2;
}


