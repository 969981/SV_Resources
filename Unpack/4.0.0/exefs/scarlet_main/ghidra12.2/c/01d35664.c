/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d35664; name: FUN_01d35664
 */


undefined8 * FUN_01d35664(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0482dbc0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0482dbc0);
      if (iVar1 == 0) {
        puVar2 = &DAT_0482dba0;
      }
      else {
        DAT_0482dbb0 = 0;
        DAT_0482dbb8 = 0;
        DAT_0482dba0 = 0;
        DAT_0482dba8 = 0;
        __cxa_guard_release(&DAT_0482dbc0);
        puVar2 = &DAT_0482dba0;
      }
    }
    else {
      puVar2 = &DAT_0482dba0;
    }
  }
  return puVar2;
}


