/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c7028; name: FUN_012c7028
 */


void FUN_012c7028(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  FUN_012c70fc(param_1 + 3);
  uVar2 = param_1[4];
  if (uVar2 < 8) {
    uVar1 = 8;
LAB_012c7074:
    FUN_00f80d60(param_1 + 3,uVar1);
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
    if (uVar1 < uVar2) goto LAB_012c7074;
  }
  return;
}


