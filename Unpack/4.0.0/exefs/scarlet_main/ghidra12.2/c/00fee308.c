/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fee308; name: FUN_00fee308
 */


void FUN_00fee308(undefined1 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  if (*(char *)(*param_4 + (ulong)*(uint *)(param_3 + 0x14)) == '\0') {
    FUN_00c91c88(param_3,param_4[2]);
  }
  FUN_00fee37c(param_1,param_3,param_2,param_4);
  *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_3 + 0xc)) = *param_1;
  return;
}


