/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988b8c; name: FUN_02988b8c
 */


void FUN_02988b8c(undefined8 param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  FUN_01246154(auStack_58);
  if (param_2 == '\x04') {
    FUN_02943244(auStack_58,2,0x85);
    FUN_0294325c(auStack_58,param_3);
  }
  else {
    FUN_02980944(auStack_58);
  }
  uVar1 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar1,param_3,auStack_58);
  return;
}


