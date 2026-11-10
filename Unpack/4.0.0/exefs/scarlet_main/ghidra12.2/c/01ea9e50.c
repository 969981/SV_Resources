/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea9e50; name: FUN_01ea9e50
 */


char * FUN_01ea9e50(undefined2 *param_1,undefined2 *param_2,char *param_3)

{
  undefined2 *puVar1;
  
  if (param_1 != param_2) {
    param_1 = param_1 + 1;
    do {
      if (*param_3 == '\0') {
        if (*(char *)(param_1 + -1) != '\0') {
          *(undefined2 *)(param_3 + 2) = *param_1;
          *param_3 = '\x01';
        }
      }
      else if (*(char *)(param_1 + -1) == '\0') {
        *param_3 = '\0';
      }
      else {
        *(undefined2 *)(param_3 + 2) = *param_1;
      }
      FUN_00ca1ea4(param_3 + 8,param_1 + 3);
      *(undefined2 *)(param_3 + 0x18) = param_1[0xb];
      puVar1 = param_1 + 0xf;
      param_3 = param_3 + 0x20;
      param_1 = param_1 + 0x10;
    } while (puVar1 != param_2);
  }
  return param_3;
}


