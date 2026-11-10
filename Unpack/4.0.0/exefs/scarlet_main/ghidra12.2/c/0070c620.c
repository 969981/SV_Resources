/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0070c620; name: FUN_0070c620
 */


void FUN_0070c620(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_047d0200 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_0071ece8();
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_0071ece8(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = param_2;
  param_1[0xc] = param_2;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_047d0208;
  param_1[0xf] = param_2;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  if (*(int *)puVar1 != 0) {
    FUN_0052b230(PTR_DAT_047d0208);
  }
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_047cba80;
  param_1[0x11] = (long)PTR_DAT_047cba80;
  param_1[0x12] = (long)puVar1;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x13] = (long)puVar1;
  param_1[0x14] = (long)puVar1;
  param_1[0x15] = (long)puVar1;
  param_1[0x16] = (long)puVar1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  return;
}


