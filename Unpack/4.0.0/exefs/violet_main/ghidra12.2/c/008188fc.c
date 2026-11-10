/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008188fc; name: FUN_008188fc
 */


long FUN_008188fc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_001fcec0();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return param_1;
}


