/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129fa0; name: FUN_00129fa0
 */


void FUN_00129fa0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) & 0xc0 | 4;
  *(undefined8 *)(lVar1 + 0x70) = *param_2;
  *param_2 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 **)(lVar1 + 0xb8) = param_2;
  return;
}


