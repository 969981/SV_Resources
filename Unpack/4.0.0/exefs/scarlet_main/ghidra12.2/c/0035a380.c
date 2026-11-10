/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a380; name: FUN_0035a380
 */


void FUN_0035a380(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint16_t uVar1;
  
  if (0xffff < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
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
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined1 *)((long)param_2 + 1) = 2;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  uVar1 = htons((uint16_t)param_1);
  *(uint16_t *)((long)param_2 + 2) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined1 *)((long)param_3 + 1) = 0x1c;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 0;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  uVar1 = htons((uint16_t)param_1);
  *(uint16_t *)((long)param_3 + 2) = uVar1;
  *(undefined4 *)(param_3 + 0x10) = 0x1c;
  return;
}


