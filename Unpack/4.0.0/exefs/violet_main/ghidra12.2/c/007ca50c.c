/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca50c; name: FUN_007ca50c
 */


undefined8 * FUN_007ca50c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_047d08a0;
  puVar2 = *(undefined8 **)PTR_DAT_047d08a0;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_007bf9f0(0x90,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
    }
    FUN_007c3aac(puVar2 + 1,param_1,3);
    puVar2[1] = PTR_DAT_047d1138 + 0x10;
    *(undefined8 **)PTR_DAT_047d1140 = puVar2 + 1;
    FUN_007caaec(puVar2);
    *(undefined8 **)puVar1 = puVar2;
  }
  return puVar2;
}


