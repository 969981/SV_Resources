/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fe5608; name: FUN_01fe5608
 */


ulong FUN_01fe5608(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_01fe56c8(param_1,*param_2);
  if ((((*(long *)(lVar2 + 0xd8) != 0) && (*(short *)(*(long *)(lVar2 + 0xd8) + 0x1a) != 0)) ||
      (uVar3 = FUN_01473a8c(lVar2 + 0xc0), (uVar3 & 1) != 0)) && (*(long *)(lVar2 + 0xd0) != 0)) {
    lVar2 = *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60));
    if (lVar2 == 0x133a8707be4aa423) {
      uVar1 = FUN_01fe57a4();
      uVar1 = uVar1 ^ 1;
      goto LAB_01fe56b4;
    }
    if (lVar2 == 0x137e8707be8470ef) {
      uVar3 = FUN_01fe57a4();
      return uVar3;
    }
  }
  uVar1 = 0;
LAB_01fe56b4:
  return (ulong)(uVar1 & 1);
}


