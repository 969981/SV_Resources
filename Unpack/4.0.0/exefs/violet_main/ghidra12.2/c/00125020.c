/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00125020; name: FUN_00125020
 */


void FUN_00125020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [1024];
  
  local_450 = 0;
  uStack_458 = 0x400;
  local_460 = auStack_440;
  uStack_448 = param_1;
  FUN_00122800(param_1,&local_460);
  FUN_00124ef0(&local_460,param_2,param_3,param_4);
  uVar1 = uStack_448;
  FUN_00122720(uStack_448,local_460,local_450);
  if (local_460 != auStack_440) {
    FUN_00121bc0(uVar1,0xfffffffe);
  }
  FUN_00c5dcd0(uVar1,0xfffffffe,0xffffffff);
  FUN_00c5db00(uVar1,0xfffffffe);
  FUN_00c646d0(param_1,0xffffffff,0);
  return;
}


