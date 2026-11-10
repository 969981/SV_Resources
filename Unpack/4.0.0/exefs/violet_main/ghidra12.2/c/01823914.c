/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01823914; name: FUN_01823914
 */


undefined8 FUN_01823914(long param_1,byte param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 4) && ((int)param_3 < 5)) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_2 * 0x28 + (ulong)param_3 * 8 + 0x30);
  }
  return uVar1;
}


