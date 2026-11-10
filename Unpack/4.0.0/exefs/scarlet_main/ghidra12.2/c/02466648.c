/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02466648; name: FUN_02466648
 */


void FUN_02466648(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  if ((param_2 == 0) || (param_4 != 0xc)) {
    *param_1 = 0;
    return;
  }
  FUN_00ddaef8(param_1,param_2 + (param_3 & 0xffffffff) * 4 + 8,0);
  return;
}


