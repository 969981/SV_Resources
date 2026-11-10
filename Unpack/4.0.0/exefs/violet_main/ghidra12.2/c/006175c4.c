/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006175c4; name: FUN_006175c4
 */


void FUN_006175c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_047cee70;
  if (PTR_DAT_047cee70[4] != '\0') {
    PTR_DAT_047cee70[4] = 0;
  }
  *(undefined4 *)puVar1 = 0xc355;
  puVar1[4] = 1;
  if (puVar1[9] != '\0') {
    puVar1[9] = 0;
  }
  *(undefined2 *)(puVar1 + 8) = 0x100;
  uVar2 = FUN_004db400();
  FUN_00520e78(uVar2,0xc355,8,0,0);
  return;
}


