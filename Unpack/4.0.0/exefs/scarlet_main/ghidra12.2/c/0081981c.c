/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081981c; name: FUN_0081981c
 */


undefined8 FUN_0081981c(int *param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  if ((param_2 == (ushort *)0x0) ||
     (lVar2 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar2) < 2)) {
    return 0;
  }
  uVar3 = *(ushort *)(*(long *)(param_1 + 2) + lVar2);
  *(long *)(param_1 + 6) = lVar2 + 2;
  uVar1 = uVar3 >> 8 | uVar3 << 8;
  if (*param_1 != 0) {
    uVar1 = uVar3;
  }
  *param_2 = uVar1;
  return 1;
}


