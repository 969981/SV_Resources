/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c48420; name: FUN_01c48420
 */


void FUN_01c48420(undefined8 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_01c48668(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_01c485fc(*(undefined8 *)(param_2 + 8));
    return;
  }
  *(undefined2 *)((long)param_1 + 0x1c) = 0x100;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


