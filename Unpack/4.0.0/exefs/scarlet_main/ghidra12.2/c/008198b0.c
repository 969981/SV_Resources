/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008198b0; name: FUN_008198b0
 */


undefined8 FUN_008198b0(int *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_2 == (ulong *)0x0) ||
     (lVar1 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar1) < 8)) {
    return 0;
  }
  uVar3 = *(ulong *)(*(long *)(param_1 + 2) + lVar1);
  *(long *)(param_1 + 6) = lVar1 + 8;
  uVar2 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar2 >> 0x20 | uVar2 << 0x20;
  if (*param_1 != 0) {
    uVar2 = uVar3;
  }
  *param_2 = uVar2;
  return 1;
}


