/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be5e38; name: FUN_01be5e38
 */


void FUN_01be5e38(undefined8 param_1,char *param_2)

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
      FUN_01be66f0(param_2 + 0x10);
    }
  }
  FUN_01be6aa4(param_1,param_2);
  return;
}


