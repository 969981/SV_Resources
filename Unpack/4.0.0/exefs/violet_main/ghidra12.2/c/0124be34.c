/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124be34; name: FUN_0124be34
 */


void FUN_0124be34(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01243584();
  FUN_0124beb0(uVar1,0);
  uVar1 = FUN_01243584(param_1);
  FUN_0124bf8c(uVar1,0,*param_3);
  uVar1 = FUN_01243584(param_1);
  FUN_0124c164(uVar1,*param_3,param_3[1],param_3[2],*(undefined4 *)(param_3 + 4),param_3[8],
               param_3[9]);
  FUN_0124beec(param_1,*param_3);
  FUN_0124bf48(param_1,*(undefined4 *)(param_3 + 4),*param_3);
  return;
}


