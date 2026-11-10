/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c5e1fc; name: FUN_01c5e1fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01c5e1fc(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04813a30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04813a30);
      if (iVar1 == 0) {
        puVar2 = &DAT_048139d0;
      }
      else {
        DAT_048139d0 = 0;
        DAT_048139d8 = 0;
        FUN_01667884(&DAT_048139e0);
        DAT_04813a20 = 0x33000000;
        uRam0000000004813a18 = _UNK_03cabe58;
        _DAT_04813a10 = _DAT_03cabe50;
        __cxa_guard_release(&DAT_04813a30);
        puVar2 = &DAT_048139d0;
      }
    }
    else {
      puVar2 = &DAT_048139d0;
    }
  }
  return puVar2;
}


