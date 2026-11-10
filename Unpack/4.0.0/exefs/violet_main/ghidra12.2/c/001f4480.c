/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4480; name: FUN_001f4480
 */


undefined8 FUN_001f4480(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) {
    uVar1 = FUN_001f4394();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  }
  *puVar2 = param_2;
  return 0;
}


