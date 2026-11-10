/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01799220; name: FUN_01799220
 */


undefined1 * FUN_01799220(byte *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined1 **)(param_1 + 8), puVar2 == (undefined1 *)0x0)) {
    if ((DAT_04803688 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04803688);
      if (iVar1 == 0) {
        puVar2 = &DAT_04803668;
      }
      else {
        DAT_04803668 = 0;
        DAT_0480366a = 0;
        DAT_0480366c = 0x1000000;
        DAT_04803670 = 0;
        DAT_04803672 = 0;
        DAT_04803674._0_5_ = 0;
        DAT_04803674._5_3_ = 0;
        uRam000000000480367c = 0;
        __cxa_guard_release(&DAT_04803688);
        puVar2 = &DAT_04803668;
      }
    }
    else {
      puVar2 = &DAT_04803668;
    }
  }
  return puVar2;
}


