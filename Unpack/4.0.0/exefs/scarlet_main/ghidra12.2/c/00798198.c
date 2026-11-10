/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00798198; name: FUN_00798198
 */


void FUN_00798198(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 2) = 0xffff;
  puVar1 = PTR_DAT_047d0a00;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = -1;
  memset((void *)((long)param_1 + 0x25),0,0x10);
  return;
}


