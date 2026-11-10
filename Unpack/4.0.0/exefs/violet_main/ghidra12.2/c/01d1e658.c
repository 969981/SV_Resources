/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1e658; name: FUN_01d1e658
 */


void FUN_01d1e658(undefined1 *param_1,char *param_2)

{
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = 1;
  local_20[0] = 0;
  if (*param_2 == '\0') {
    local_18 = *(undefined4 *)(param_2 + 8);
    FUN_01d1e754(param_1 + 8,local_20);
  }
  else {
    local_1c = *(undefined4 *)(param_2 + 4);
    local_20[0] = 1;
    local_18 = *(undefined4 *)(param_2 + 8);
    FUN_01d1e754(param_1 + 8,local_20);
  }
  return;
}


