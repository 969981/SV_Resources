/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250144; name: FUN_01250144
 */


void FUN_01250144(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  FUN_02988ad0(uVar2,param_2);
  FUN_01243584(param_1);
  FUN_02983060();
  uVar2 = FUN_01243584(param_1);
  FUN_0124beb0(uVar2,0);
  FUN_02988ae0(param_1);
  FUN_0124e480(param_1);
  uVar1 = FUN_0123e058();
  if ((uVar1 & 0xff) == 0) {
    return;
  }
  FUN_02988b10(param_1,uVar1);
  return;
}


