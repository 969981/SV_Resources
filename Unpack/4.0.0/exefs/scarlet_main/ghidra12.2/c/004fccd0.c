/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fccd0; name: FUN_004fccd0
 */


undefined8 FUN_004fccd0(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  if (param_1[0x2a] == 1) {
    if (*(char *)(param_1 + 0x1c) != '#') {
      return 3;
    }
  }
  else {
    if ((param_1[0x2a] != 0) || (*(char *)(param_1 + 0x1c) != '/')) {
      return 3;
    }
    FUN_004fbbcc(param_1);
    if (*(char *)(param_1 + 0x1c) == '*') {
      FUN_004fbbcc(param_1);
      return 1;
    }
    if (*(char *)(param_1 + 0x1c) != '/') {
      *param_1 = 6;
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        puVar1 = (undefined2 *)((long)param_1 + 9);
        *(byte *)(param_1 + 2) = 2;
      }
      else {
        *(undefined8 *)(param_1 + 4) = 1;
        puVar1 = *(undefined2 **)(param_1 + 6);
      }
      *puVar1 = 0x2f;
      param_1[8] = param_1[0x23];
      param_1[9] = param_1[0x24] + -1;
      param_1[10] = param_1[0x24];
      return 2;
    }
  }
  FUN_004fbbcc(param_1);
  return 0;
}


