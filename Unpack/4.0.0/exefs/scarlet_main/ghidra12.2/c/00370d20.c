/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00370d20; name: FUN_00370d20
 */


void FUN_00370d20(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_00354f70();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_003547a0(), (uVar1 & 1) == 0)) {
    FUN_0038db00(&DAT_047f10e0);
    DAT_044967e0 = 2;
    DAT_044967e8 = 0x20;
    PTR_LAB_044967f0 = FUN_00370da0;
    PTR_LAB_044967f8 = &LAB_00370ee0;
    PTR_LAB_04496800 = &LAB_00371020;
    PTR_LAB_04496808 = &LAB_00371030;
    PTR_LAB_04496810 = &LAB_003710b0;
    DAT_04496828 = &LAB_003711f0;
    DAT_04496818 = 0;
    DAT_04496820 = 0;
  }
  return;
}


