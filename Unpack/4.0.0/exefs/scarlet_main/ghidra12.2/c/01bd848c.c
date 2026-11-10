/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd848c; name: FUN_01bd848c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01bd848c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if ((DAT_0480e410 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e410);
      if (iVar1 != 0) {
        memset(&DAT_0480e3a0,0,0x50);
        uRam000000000480e3f8 = _UNK_03cabe58;
        _DAT_0480e3f0 = _DAT_03cabe50;
        uRam000000000480e408 = _UNK_03cabe58;
        _DAT_0480e400 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_0480e410);
      }
      puVar2 = &DAT_0480e3a0;
    }
    else {
      puVar2 = &DAT_0480e3a0;
    }
  }
  return puVar2;
}


