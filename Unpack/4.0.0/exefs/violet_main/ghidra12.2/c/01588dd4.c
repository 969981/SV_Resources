/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01588dd4; name: FUN_01588dd4
 */


void FUN_01588dd4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_2 < 3000) {
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
  }
  return;
}


