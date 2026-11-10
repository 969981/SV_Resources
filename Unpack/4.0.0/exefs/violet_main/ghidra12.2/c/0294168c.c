/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294168c; name: FUN_0294168c
 */


void FUN_0294168c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_01249340();
  uVar2 = FUN_0291c698(uVar1,*param_3,*(undefined2 *)(param_3 + 1));
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_01243584(param_1);
    FUN_0124b0ac(uVar1,*param_3,param_3 + 2);
    *param_2 = 1;
  }
  return;
}


