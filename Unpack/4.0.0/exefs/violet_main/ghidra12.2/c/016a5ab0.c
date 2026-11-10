/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a5ab0; name: FUN_016a5ab0
 */


void FUN_016a5ab0(char *param_1,char *param_2)

{
  char cVar1;
  
  *param_1 = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    FUN_0177a508(param_1 + 8,param_2 + 8);
  }
  else if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  return;
}


