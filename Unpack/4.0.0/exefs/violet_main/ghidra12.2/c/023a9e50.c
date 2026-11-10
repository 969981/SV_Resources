/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023a9e50; name: FUN_023a9e50
 */


void FUN_023a9e50(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_023a9fb8((int)param_1[0xe],*(undefined8 *)(param_1[2] + 0x1f8),param_1 + 3,
                       param_1[0xf]);
  *(undefined8 *)(*(long *)(lVar2 + 0xe8) + param_1[1] * 0x10 + 8) = uVar1;
  return;
}


