/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983948; name: FUN_02983948
 */


void FUN_02983948(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01246e90();
  FUN_02934974(uVar1,*param_3,*(undefined4 *)(param_3 + 1));
  uVar1 = FUN_01243584(param_1);
  FUN_02984a1c(uVar1,*param_3,*(undefined4 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 0xc),0);
  if (*(char *)(param_3 + 3) == '\0') {
    return;
  }
  FUN_02984adc(param_1,*param_3,param_3[2]);
  return;
}


