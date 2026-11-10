/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00683a20; name: FUN_00683a20
 */


ulong FUN_00683a20(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 3) {
    return *(ulong *)(param_1 + 0x14);
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      return 0;
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      return (ulong)(*(byte *)(param_1 + 4) >> 1);
    }
  }
  return *(ulong *)(param_1 + 6);
}


