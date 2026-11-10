/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00531cb4; name: FUN_00531cb4
 */


void FUN_00531cb4(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
  uVar4 = -(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
  uVar3 = *(undefined8 *)(lVar1 + uVar2);
  *(undefined8 *)(lVar1 + uVar2) = *(undefined8 *)(lVar1 + uVar4);
  *(undefined8 *)(lVar1 + uVar4) = uVar3;
  return;
}


