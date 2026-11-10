/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278ea78; name: FUN_0278ea78
 */


void FUN_0278ea78(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_LAB_045e0ef8;
  param_1[1] = param_2;
  if (*param_3 != '\0') {
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


