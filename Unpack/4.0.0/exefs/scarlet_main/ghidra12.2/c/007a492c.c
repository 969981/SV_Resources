/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a492c; name: FUN_007a492c
 */


void FUN_007a492c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  undefined *puVar1;
  
  FUN_007a3e24();
  puVar1 = PTR_DAT_047d0b10;
  *(undefined1 *)(param_1 + 0xb) = param_4;
  *(undefined2 *)((long)param_1 + 0x5a) = param_5;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


