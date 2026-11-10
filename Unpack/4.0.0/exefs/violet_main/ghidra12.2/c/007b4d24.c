/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4d24; name: FUN_007b4d24
 */


void FUN_007b4d24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x11d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    *(undefined8 *)(param_1 + 0x11d8) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x11d0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_007bfaa0(puVar1);
    *(undefined8 *)(param_1 + 0x11d0) = 0;
  }
  FUN_0079afcc(param_1);
  return;
}


