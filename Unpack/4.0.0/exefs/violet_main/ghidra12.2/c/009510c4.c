/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009510c4; name: FUN_009510c4
 */


undefined1  [16] FUN_009510c4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)(param_1 + 0x10) + (long)(int)param_2 * 2;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  if (param_2 < 5) {
    puVar2 = puVar1 + 1;
    puVar3 = puVar1;
  }
  auVar4._8_8_ = *puVar2;
  auVar4._0_8_ = *puVar3;
  return auVar4;
}


