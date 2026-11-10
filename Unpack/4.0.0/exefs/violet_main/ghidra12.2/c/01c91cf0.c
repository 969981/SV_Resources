/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c91cf0; name: FUN_01c91cf0
 */


void FUN_01c91cf0(undefined1 *param_1,char *param_2)

{
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    local_20[0] = 0;
    if (param_2[4] == '\0') {
      local_18 = *(undefined4 *)(param_2 + 0xc);
      FUN_01c91d88(param_1,local_20);
    }
    else {
      local_1c = *(undefined4 *)(param_2 + 8);
      local_20[0] = 1;
      local_18 = *(undefined4 *)(param_2 + 0xc);
      FUN_01c91d88(param_1,local_20);
    }
  }
  return;
}


