/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048dd60; name: FUN_0048dd60
 */


undefined8 FUN_0048dd60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0x20;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      lVar1 = 0x18;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  return uVar2;
}


