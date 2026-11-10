/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376c90; name: FUN_00376c90
 */


long FUN_00376c90(ulong param_1,code *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    (*param_2)(param_3);
    return 0;
  case 1:
    (*param_2)(param_3);
    return *(long *)(PTR_DAT_047ccf70 +
                    ((long)((param_1 & 0xfffffffffffffffc) - *(long *)PTR_DAT_047ccb88) >> 4) *
                    0x6666666666666668);
  case 2:
    if ((param_2 == (code *)0x0) != (param_3 == 0)) {
LAB_00376dcc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = param_1 & 0xfffffffffffffffc;
    lVar1 = uVar2 + 0x50;
    FUN_0038db40(lVar1);
    if (*(long *)(uVar2 + 0x70) == 0) {
      *(long *)(uVar2 + 0x78) = param_3;
      *(code **)(uVar2 + 0x70) = param_2;
                    /* try { // try from 00376d10 to 00376d17 has its CatchHandler @ 00376dd4 */
      FUN_0038db60(lVar1);
      return param_3;
    }
    break;
  case 3:
    if ((param_2 == (code *)0x0) != (param_3 == 0)) goto LAB_00376dcc;
    uVar2 = param_1 & 0xfffffffffffffffc;
    lVar1 = uVar2 + 0x50;
    FUN_0038db40(lVar1);
    if (*(long *)(uVar2 + 0x70) == 0) {
      *(long *)(uVar2 + 0x78) = param_3;
      *(code **)(uVar2 + 0x70) = param_2;
                    /* try { // try from 00376db0 to 00376db7 has its CatchHandler @ 00376dd0 */
      FUN_0038db60(lVar1);
      return param_3;
    }
  }
  FUN_0038db60(lVar1);
  if (param_2 != (code *)0x0) {
    (*param_2)(param_3);
  }
  return *(long *)((param_1 & 0xfffffffffffffffc) + 0x78);
}


