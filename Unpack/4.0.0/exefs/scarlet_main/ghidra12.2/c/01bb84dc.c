/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb84dc; name: FUN_01bb84dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_01bb84dc(byte *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined1 **)(param_1 + 8), puVar2 == (undefined1 *)0x0)) {
    if ((DAT_0480cd30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480cd30);
      if (iVar1 != 0) {
        DAT_0480cbd0 = 0;
        DAT_0480cc80 = PTR_DAT_047d5400 + 0x10;
        DAT_0480cc70 = 0;
        uRam000000000480cc98 = 0;
        _DAT_0480cc90 = 0;
        DAT_0480ccb0 = 0;
        uRam000000000480ccc8 = 0;
        _DAT_0480ccc0 = 0;
        DAT_0480cca0 = PTR_DAT_047d53f0 + 0x10;
        DAT_0480cca8 = 0;
        DAT_0480cd20 = 0;
        DAT_0480cce0 = 0;
        DAT_0480cce8 = 0;
        DAT_0480ccd0 = PTR_DAT_047d53f8 + 0x10;
        DAT_0480ccf0 = 0;
        DAT_0480ccf8 = 0;
        DAT_0480ccd8 = 0;
        DAT_0480cd00 = 0x33f4ccccd;
        DAT_0480cd08 = 0x3f000000;
        DAT_0480cd24 = 1;
        uRam000000000480cd18 = _UNK_03caaf48;
        _DAT_0480cd10 = _DAT_03caaf40;
        FUN_00100190(FUN_01bb5e2c,&DAT_0480cbd0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480cd30);
      }
      puVar2 = &DAT_0480cbd0;
    }
    else {
      puVar2 = &DAT_0480cbd0;
    }
  }
  return puVar2;
}


