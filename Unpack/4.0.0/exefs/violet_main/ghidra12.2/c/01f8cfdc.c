/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8cfdc; name: FUN_01f8cfdc
 */


void FUN_01f8cfdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00da75d8();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}


