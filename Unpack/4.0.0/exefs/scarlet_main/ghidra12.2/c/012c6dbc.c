/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c6dbc; name: FUN_012c6dbc
 */


void FUN_012c6dbc(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  FUN_012c6e90(param_1 + 3);
  uVar2 = param_1[4];
  if (uVar2 < 8) {
    uVar1 = 8;
LAB_012c6e08:
    FUN_00dfca34(param_1 + 3,uVar1);
    return;
  }
  if (uVar2 != 8) {
    uVar1 = (ulong)((float)(ulong)param_1[8] / *(float *)(param_1 + 9));
    if ((uVar2 & uVar2 - 1) == 0) {
      if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
    }
    else {
      uVar1 = std::__next_prime(uVar1);
    }
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    if (uVar1 < uVar2) goto LAB_012c6e08;
  }
  return;
}


