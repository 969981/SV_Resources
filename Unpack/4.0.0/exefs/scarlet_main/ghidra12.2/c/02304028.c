/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02304028; name: FUN_02304028
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_02304028(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if ((DAT_048454f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048454f0);
      if (iVar1 != 0) {
        memset(&DAT_04845490,0,0x60);
        uRam00000000048454a8 = _UNK_03cabe68;
        _DAT_048454a0 = _DAT_03cabe60;
        uRam00000000048454b8 = DAT_03cab628;
        _DAT_048454b0 = DAT_03cab620;
        DAT_048454d0 = 0;
        DAT_048454d4 = 0x40490fdb40490fdb;
        DAT_048454dc = 0x40490fdb40490fdb;
        DAT_04845494 = 0x3f800000;
        uRam00000000048454c8 = _UNK_03caa5b8;
        _DAT_048454c0 = _DAT_03caa5b0;
        __cxa_guard_release(&DAT_048454f0);
      }
      puVar2 = &DAT_04845490;
    }
    else {
      puVar2 = &DAT_04845490;
    }
  }
  return puVar2;
}


