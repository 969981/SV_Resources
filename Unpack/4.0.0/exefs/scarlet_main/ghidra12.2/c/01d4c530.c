/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4c530; name: FUN_01d4c530
 */


undefined8 * FUN_01d4c530(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0482fbf0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0482fbf0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0482fbd0;
      }
      else {
        DAT_0482fbe0 = 0;
        DAT_0482fbe8 = 0;
        DAT_0482fbd0 = 0;
        DAT_0482fbd8 = 0;
        __cxa_guard_release(&DAT_0482fbf0);
        puVar2 = &DAT_0482fbd0;
      }
    }
    else {
      puVar2 = &DAT_0482fbd0;
    }
  }
  return puVar2;
}


