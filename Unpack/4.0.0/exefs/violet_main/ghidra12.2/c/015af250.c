/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015af250; name: FUN_015af250
 */


void FUN_015af250(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  
  FUN_015af348();
  uVar1 = FUN_015af3fc(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68));
  if ((uVar1 & 1) == 0) {
    *param_2 = 2;
  }
  else {
    *(code **)(param_1 + 0x308) = FUN_01697fb8;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  return;
}


