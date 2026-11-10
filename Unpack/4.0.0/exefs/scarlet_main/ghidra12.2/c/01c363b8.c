/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c363b8; name: FUN_01c363b8
 */


void FUN_01c363b8(undefined1 *param_1,char *param_2)

{
  undefined1 local_20 [4];
  undefined8 local_1c;
  
  *param_1 = 1;
  local_20[0] = 0;
  if (*param_2 == '\0') {
    FUN_01c364a8(param_1 + 8,local_20);
  }
  else {
    local_1c = *(undefined8 *)(param_2 + 4);
    local_20[0] = 1;
    FUN_01c364a8(param_1 + 8,local_20);
  }
  return;
}


