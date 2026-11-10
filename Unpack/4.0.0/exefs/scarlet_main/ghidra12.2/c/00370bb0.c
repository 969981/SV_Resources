/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00370bb0; name: FUN_00370bb0
 */


undefined8 FUN_00370bb0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_047f0f30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_00370c90(param_2);
  FUN_00344920(param_1,uVar1);
  if ((&DAT_047f0f40)[(ulong)param_2 * 3] != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (**(code **)((&DAT_047f0f38)[(ulong)param_2 * 3] + lVar3))
                        (param_1,((undefined8 *)((&DAT_047f0f38)[(ulong)param_2 * 3] + lVar3))[1]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < (ulong)(&DAT_047f0f40)[(ulong)param_2 * 3]);
  }
  return 1;
}


