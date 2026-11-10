/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892950; name: FUN_00892950
 */


void FUN_00892950(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = -(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1) = *param_3;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 8) = param_3[1];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x10) = param_3[2];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x18) = param_3[3];
  return;
}


