/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd1030; name: FUN_01bd1030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_01bd1030(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if ((DAT_0480e1b0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e1b0);
      if (iVar1 != 0) {
        uRam000000000480e148 = 0;
        _DAT_0480e140 = 0;
        DAT_0480e120 = 0;
        DAT_0480e160 = 0;
        DAT_0480e130 = PTR_DAT_047d5400 + 0x10;
        DAT_0480e150 = PTR_DAT_047d53f0 + 0x10;
        DAT_0480e158 = 0;
        DAT_0480e180 = PTR_DAT_047d53f8 + 0x10;
        DAT_0480e188 = 0;
        DAT_0480e190 = 0;
        DAT_0480e198 = 0;
        DAT_0480e1a0 = 0;
        DAT_0480e1a8 = 0;
        uRam000000000480e178 = 0;
        _DAT_0480e170 = 0;
        FUN_00100190(&LAB_00957330,&DAT_0480e120,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480e1b0);
      }
      puVar2 = &DAT_0480e120;
    }
    else {
      puVar2 = &DAT_0480e120;
    }
  }
  return puVar2;
}


