/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244c4c4; name: FUN_0244c4c4
 */


void FUN_0244c4c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  uVar2 = FUN_0244c520(param_2,param_3,1);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_0244c600(param_2);
    *(undefined2 *)(param_1 + 1) = uVar1;
    *param_1 = 1;
  }
  FUN_00c5db00(param_2,0);
  return;
}


