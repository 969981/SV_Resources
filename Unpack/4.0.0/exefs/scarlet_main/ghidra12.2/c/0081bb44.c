/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081bb44; name: FUN_0081bb44
 */


void FUN_0081bb44(long *param_1,undefined2 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 4;
  puVar1 = PTR_DAT_047d1948;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


