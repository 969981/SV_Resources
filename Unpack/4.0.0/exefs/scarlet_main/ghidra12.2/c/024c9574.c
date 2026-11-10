/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c9574; name: FUN_024c9574
 */


undefined8 * FUN_024c9574(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484cd20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484cd20);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484ccf0;
      }
      else {
        DAT_0484cd10 = 0;
        DAT_0484cd18 = 0;
        DAT_0484cd00 = 0;
        DAT_0484cd08 = 0;
        DAT_0484ccf0 = 0;
        DAT_0484ccf8 = 0;
        __cxa_guard_release(&DAT_0484cd20);
        puVar2 = &DAT_0484ccf0;
      }
    }
    else {
      puVar2 = &DAT_0484ccf0;
    }
  }
  return puVar2;
}


