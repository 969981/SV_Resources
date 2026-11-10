/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024cbf58; name: FUN_024cbf58
 */


undefined8 * FUN_024cbf58(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484ce10 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484ce10);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484cdf0;
      }
      else {
        DAT_0484ce00 = 0;
        DAT_0484ce08 = 0;
        DAT_0484cdf0 = 0;
        DAT_0484cdf8 = 0;
        __cxa_guard_release(&DAT_0484ce10);
        puVar2 = &DAT_0484cdf0;
      }
    }
    else {
      puVar2 = &DAT_0484cdf0;
    }
  }
  return puVar2;
}


