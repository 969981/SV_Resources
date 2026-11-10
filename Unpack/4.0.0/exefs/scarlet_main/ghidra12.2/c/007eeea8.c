/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eeea8; name: FUN_007eeea8
 */


void FUN_007eeea8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 2) = 0xfd;
  *(undefined2 *)(param_1 + 5) = 0;
  puVar1 = PTR_DAT_047d1500;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  puVar2 = PTR_DAT_047d1508;
  param_1[6] = 1;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[3] = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)PTR_DAT_047d0e88;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  memset((void *)((long)param_1 + 0x74),0,4);
  memset(param_1 + 0xf,0,4);
  puVar1 = PTR_DAT_047d0970;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = (*(long *)puVar1 * 0x21) / 1000;
  memset(param_1 + 0x14,0,4);
  *(undefined1 *)((long)param_1 + 0xa4) = 1;
  return;
}


