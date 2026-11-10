/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ed278; name: FUN_007ed278
 */


void FUN_007ed278(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d14f0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[4] = puVar1 + 0x10;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  FUN_00796584(param_1 + 8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  memset((void *)((long)param_1 + 100),0,4);
  *(undefined4 *)((long)param_1 + 100) = 0;
  return;
}


