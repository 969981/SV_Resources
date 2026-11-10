/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f9594; name: FUN_007f9594
 */


void FUN_007f9594(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x30;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined1 *)((long)puVar1 + 0x2c) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (lVar2 != 0x480);
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


