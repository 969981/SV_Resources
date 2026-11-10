/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350660; name: FUN_00350660
 */


undefined8 * FUN_00350660(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x14] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar2 = puVar1 + 10;
    puVar1[0xb] = 0;
    *puVar2 = 0;
    puVar1[1] = puVar2;
    puVar1[9] = puVar2;
    *puVar2 = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
  }
  FUN_0038da50(puVar1 + 0x14,1);
  puVar1[0xc] = 1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x13] = 0;
  puVar1[0x11] = &LAB_003506f0;
  puVar1[0x12] = puVar1;
  return puVar1;
}


