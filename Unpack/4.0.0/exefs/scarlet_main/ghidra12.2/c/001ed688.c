/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed688; name: FUN_001ed688
 */


undefined8 FUN_001ed688(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_4;
  if (0x7fffffff - iVar2 < *param_1) {
    return 0xfffffdf4;
  }
  *param_1 = *param_1 + iVar2;
  iVar3 = *param_3;
  iVar1 = iVar3;
  if (iVar2 <= iVar3) {
    iVar1 = iVar2;
  }
  *param_3 = iVar3 - iVar1;
  *param_2 = *param_2 + iVar1;
  *param_4 = *param_4 - iVar1;
  return 0;
}


