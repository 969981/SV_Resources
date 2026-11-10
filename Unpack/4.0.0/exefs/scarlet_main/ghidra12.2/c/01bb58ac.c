/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb58ac; name: FUN_01bb58ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01bb58ac(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if ((DAT_0480cb30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480cb30);
      if (iVar1 != 0) {
        memset(&DAT_0480c9c0,0,0x170);
        uRam000000000480ca88 = 0;
        _DAT_0480ca80 = 0;
        DAT_0480ca70 = PTR_DAT_047d5400 + 0x10;
        uRam000000000480cab8 = 0;
        _DAT_0480cab0 = 0;
        DAT_0480caa0 = 0;
        DAT_0480cb10 = 0;
        DAT_0480cad0 = 0;
        DAT_0480cad8 = 0;
        DAT_0480cac0 = PTR_DAT_047d53f8 + 0x10;
        DAT_0480cae0 = 0;
        DAT_0480cae8 = 0;
        DAT_0480ca90 = PTR_DAT_047d53f0 + 0x10;
        DAT_0480cac8 = 0;
        DAT_0480caf0 = 0x33f4ccccd;
        DAT_0480caf8 = 0x3f000000;
        DAT_0480ca98 = 0;
        DAT_0480cb14 = 1;
        DAT_0480cb20 = 0x3f80000040000000;
        DAT_0480cb28 = 3;
        uRam000000000480cb08 = _UNK_03caaf48;
        _DAT_0480cb00 = _DAT_03caaf40;
        FUN_00100190(&LAB_0095732c,&DAT_0480c9c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480cb30);
      }
      puVar2 = &DAT_0480c9c0;
    }
    else {
      puVar2 = &DAT_0480c9c0;
    }
  }
  return puVar2;
}


