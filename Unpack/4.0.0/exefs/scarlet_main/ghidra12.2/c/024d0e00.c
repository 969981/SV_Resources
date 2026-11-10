/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d0e00; name: FUN_024d0e00
 */


undefined8 * FUN_024d0e00(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484d040 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484d040);
      if (iVar1 == 0) {
        puVar2 = &DAT_0484d000;
      }
      else {
        DAT_0484d030 = 0;
        DAT_0484d038 = 0;
        DAT_0484d020 = 0;
        DAT_0484d028 = 0;
        DAT_0484d010 = 0;
        DAT_0484d018 = 0;
        DAT_0484d000 = 0;
        DAT_0484d008 = 0;
        __cxa_guard_release(&DAT_0484d040);
        puVar2 = &DAT_0484d000;
      }
    }
    else {
      puVar2 = &DAT_0484d000;
    }
  }
  return puVar2;
}


