/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ad998; name: FUN_010ad998
 */


void FUN_010ad998(long *param_1)

{
  undefined *puVar1;
  
  FUN_010ace64();
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_047e2f60;
  param_1[0x16] = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x1212;
  *(undefined2 *)((long)param_1 + 0xac) = 0x1212;
  *(undefined2 *)((long)param_1 + 0xc4) = 0x1212;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = (long)(puVar1 + 0x50);
  *(undefined2 *)(param_1 + 0x17) = 0x1212;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  return;
}


