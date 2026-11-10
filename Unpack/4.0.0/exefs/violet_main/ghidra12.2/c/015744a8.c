/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015744a8; name: FUN_015744a8
 */


undefined8 * FUN_015744a8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = 0x9000000;
  puVar1[1] = 0;
  FUN_01574580(param_1,puVar1);
  return puVar1;
}


