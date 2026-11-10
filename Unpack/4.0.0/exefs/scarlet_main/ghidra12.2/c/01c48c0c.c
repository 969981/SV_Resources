/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c48c0c; name: FUN_01c48c0c
 */


undefined8 * FUN_01c48c0c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04812d80 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04812d80);
      if (iVar1 != 0) {
        DAT_04812c5e = 0;
        DAT_04812c5c = 0x100;
        DAT_04812c40 = 0;
        DAT_04812c48 = 0;
        DAT_04812c50 = 0;
        DAT_04812c58 = 0x3f800000;
        DAT_04812c7c = 0x100;
        DAT_04812c7e = 0;
        DAT_04812c70 = 0;
        DAT_04812c78 = 0x3f800000;
        DAT_04812c9c = 0x100;
        DAT_04812c9e = 0;
        DAT_04812c80 = 0;
        DAT_04812c98 = 0x3f800000;
        DAT_04812cbc = 0x100;
        DAT_04812cbe = 0;
        DAT_04812cb0 = 0;
        DAT_04812cb8 = 0x3f800000;
        DAT_04812cdc = 0x100;
        DAT_04812cde = 0;
        DAT_04812cd0 = 0;
        DAT_04812cd8 = 0x3f800000;
        DAT_04812cfc = 0x100;
        DAT_04812cfe = 0;
        DAT_04812cf0 = 0;
        DAT_04812cf8 = 0x3f800000;
        DAT_04812d1c = 0x100;
        DAT_04812d1e = 0;
        DAT_04812d00 = 0;
        DAT_04812d18 = 0x3f800000;
        DAT_04812d3c = 0x100;
        DAT_04812d3e = 0;
        DAT_04812d20 = 0;
        DAT_04812d38 = 0x3f800000;
        DAT_04812c60 = 0;
        DAT_04812c68 = 0;
        DAT_04812c88 = 0;
        DAT_04812c90 = 0;
        DAT_04812ca0 = 0;
        DAT_04812ca8 = 0;
        DAT_04812cc0 = 0;
        DAT_04812cc8 = 0;
        DAT_04812ce0 = 0;
        DAT_04812ce8 = 0;
        DAT_04812d08 = 0;
        DAT_04812d10 = 0;
        DAT_04812d28 = 0;
        DAT_04812d30 = 0;
        DAT_04812d5c = 0x100;
        DAT_04812d5e = 0;
        DAT_04812d50 = 0;
        DAT_04812d58 = 0x3f800000;
        DAT_04812d40 = 0;
        DAT_04812d48 = 0;
        DAT_04812d7c = 0x100;
        DAT_04812d7e = 0;
        DAT_04812d60 = 0;
        DAT_04812d78 = 0x3f800000;
        DAT_04812d68 = 0;
        DAT_04812d70 = 0;
        __cxa_guard_release(&DAT_04812d80);
      }
      puVar2 = &DAT_04812c40;
    }
    else {
      puVar2 = &DAT_04812c40;
    }
  }
  return puVar2;
}


