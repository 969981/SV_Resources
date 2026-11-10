/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02624744; name: FUN_02624744
 */


undefined8 * FUN_02624744(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04854bf8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04854bf8);
      if (iVar1 == 0) {
        puVar2 = &DAT_04854be8;
      }
      else {
        DAT_04854be8 = 0;
        DAT_04854bf0 = 0;
        __cxa_guard_release(&DAT_04854bf8);
        puVar2 = &DAT_04854be8;
      }
    }
    else {
      puVar2 = &DAT_04854be8;
    }
  }
  return puVar2;
}


