/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e37d0; name: FUN_003e37d0
 */


bool FUN_003e37d0(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  bVar2 = false;
  if (param_1 != (int *)0x0) {
    if ((*param_1 <= (int)uVar1 >> 3) || (*(long *)(param_1 + 2) == 0)) {
      return false;
    }
    bVar2 = (1 << (ulong)(~param_2 & 7) &
            (uint)*(byte *)(*(long *)(param_1 + 2) + (long)((int)uVar1 >> 3))) != 0;
  }
  return bVar2;
}


