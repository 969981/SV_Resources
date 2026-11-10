/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987740; name: FUN_02987740
 */


void FUN_02987740(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_0123de68();
  uVar1 = FUN_0123de70();
  FUN_0123fa5c(uVar1,8);
  uVar2 = FUN_02987790(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_02987800(param_1);
    *param_2 = 1;
  }
  return;
}


