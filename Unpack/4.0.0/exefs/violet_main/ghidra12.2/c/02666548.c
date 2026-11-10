/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02666548; name: FUN_02666548
 */


void FUN_02666548(undefined8 param_1,char *param_2)

{
  long lVar1;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '\x01') {
    lVar1 = *(long *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    if (lVar1 != 0) {
      FUN_02667904(param_2 + 0x10);
    }
  }
  FUN_02667cb8(param_1,param_2);
  return;
}


