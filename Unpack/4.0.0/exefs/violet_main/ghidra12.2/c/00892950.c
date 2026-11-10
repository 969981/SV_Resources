/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


