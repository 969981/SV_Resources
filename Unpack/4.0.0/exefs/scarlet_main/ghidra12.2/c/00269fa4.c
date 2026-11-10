/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00269fa4; name: FUN_00269fa4
 */


void FUN_00269fa4(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_047cc2f8 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_0026c014();
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_047cc2d0 == 0) {
    return;
  }
  FUN_0052b230(PTR_DAT_047cc2d0);
  return;
}


