/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943a10; name: FUN_02943a10
 */


void FUN_02943a10(long param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar1 = 0;
    }
  }
  FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),uVar1);
  return;
}


