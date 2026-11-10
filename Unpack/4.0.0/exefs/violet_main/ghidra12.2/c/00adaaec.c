/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00adaaec; name: FUN_00adaaec
 */


void FUN_00adaaec(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    param_1[4] = '\0';
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
      param_1[4] = '\x01';
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
    *param_1 = '\x01';
    return;
  }
  if (param_1[4] == '\0') {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
      param_1[4] = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    param_1[4] = '\0';
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  return;
}


