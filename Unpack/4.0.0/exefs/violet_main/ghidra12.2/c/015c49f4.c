/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c49f4; name: FUN_015c49f4
 */


void FUN_015c49f4(ulong *param_1,long *param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_015c4ad4();
  if (((((char)param_2[3] == '\0') && ((*param_2 == 0 || (*(short *)(*param_2 + 0x1a) == 0)))) ||
      (param_2[2] == 0)) || (*param_1 <= param_1[6])) {
    return;
  }
  if (param_1[6] < param_1[7]) {
    FUN_015c4b70(param_1 + 1,param_1[5] + param_1[6] * 0x20);
    param_1[6] = param_1[6] + 1;
  }
  else {
    FUN_0289e864(auStack_28,param_1 + 1,auStack_28 + 0x20,param_2);
  }
  return;
}


