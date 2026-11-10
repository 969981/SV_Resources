/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ca534; name: FUN_008ca534
 */


undefined8 FUN_008ca534(long param_1)

{
  undefined8 local_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_008ca450(param_1);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  FUN_008ca450(param_1,*(undefined8 *)(param_1 + 0x150));
  if (*(code **)(param_1 + 0x248) != (code *)0x0) {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    lStack_28 = param_1;
    (**(code **)(param_1 + 0x248))(&local_30);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return 1;
}


