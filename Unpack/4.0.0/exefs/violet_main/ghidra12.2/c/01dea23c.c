/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dea23c; name: FUN_01dea23c
 */


void FUN_01dea23c(undefined1 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_28;
  
  *param_1 = 0;
  uVar1 = FUN_01dea2a0();
  if ((uVar1 & 1) != 0) {
    FUN_01dea410(&local_28,param_2);
    *(undefined8 *)(param_1 + 8) = local_28;
    *param_1 = 1;
  }
  FUN_00c5db00(param_2,0);
  return;
}


