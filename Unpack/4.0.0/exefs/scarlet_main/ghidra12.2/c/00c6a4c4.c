/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6a4c4; name: FUN_00c6a4c4
 */


void FUN_00c6a4c4(long param_1,void *param_2)

{
  *(undefined4 *)(param_1 + 300) = 7;
  memcpy((void *)(param_1 + 0x1b0),param_2,0x30);
  FUN_0116fc5c(param_2,param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x129) = 1;
  FUN_00c6a514(param_1 + 0x38,0);
  return;
}


