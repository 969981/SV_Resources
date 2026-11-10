/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00819868; name: FUN_00819868
 */


undefined8 FUN_00819868(int *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 == (uint *)0x0) ||
     (lVar1 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar1) < 4)) {
    return 0;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar1);
  *(long *)(param_1 + 6) = lVar1 + 4;
  uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (*param_1 != 0) {
    uVar3 = uVar2;
  }
  *param_2 = uVar3;
  return 1;
}


