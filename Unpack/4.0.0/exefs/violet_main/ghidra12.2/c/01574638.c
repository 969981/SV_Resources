/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01574638; name: FUN_01574638
 */


undefined8 * FUN_01574638(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = 0x2000000;
  puVar1[1] = 0x30000000;
  puVar1[2] = 0x6000000;
  puVar1[3] = 0x4000000;
  puVar1[4] = 0x4000000;
  puVar1[5] = 0x40000000;
  puVar1[6] = 0x6000000;
  puVar1[7] = 0x4000000;
  puVar1[8] = 0x4000000;
  puVar1[9] = 0;
  FUN_01574bf0(param_1,puVar1);
  return puVar1;
}


