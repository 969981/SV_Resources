/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a0c0; name: FUN_0035a0c0
 */


undefined8 FUN_0035a0c0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(char *)((long)param_1 + 1) != '\x1c') ||
     (param_1[1] != 0 || *(int *)(param_1 + 2) != -0x10000)) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined1 *)((long)param_2 + 1) = 2;
  *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)((long)param_1 + 2);
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  return 1;
}


