/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026933e8; name: FUN_026933e8
 */


void FUN_026933e8(undefined1 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  uVar1 = FUN_02693430();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_02693600(param_2);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *param_1 = 1;
  }
  FUN_00c5db00(param_2,0);
  return;
}


