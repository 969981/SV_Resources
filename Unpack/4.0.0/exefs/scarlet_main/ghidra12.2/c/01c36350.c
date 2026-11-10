/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c36350; name: FUN_01c36350
 */


void FUN_01c36350(undefined1 *param_1,char *param_2)

{
  undefined1 local_20 [4];
  undefined8 local_1c;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    local_20[0] = 0;
    if (param_2[4] == '\0') {
      FUN_01c363b8(param_1,local_20);
    }
    else {
      local_1c = *(undefined8 *)(param_2 + 8);
      local_20[0] = 1;
      FUN_01c363b8(param_1,local_20);
    }
  }
  return;
}


