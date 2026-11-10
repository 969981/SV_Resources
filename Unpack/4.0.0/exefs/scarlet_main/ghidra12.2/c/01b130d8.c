/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b130d8; name: FUN_01b130d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01b130d8(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04803150 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04803150);
      if (iVar1 == 0) {
        puVar2 = &DAT_04803138;
      }
      else {
        DAT_04803138 = 0;
        DAT_04803140 = 0xa0a0a0a000a0000;
        _DAT_04803148 = 10;
        __cxa_guard_release(&DAT_04803150);
        puVar2 = &DAT_04803138;
      }
    }
    else {
      puVar2 = &DAT_04803138;
    }
  }
  return puVar2;
}


