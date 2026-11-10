/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff04c; name: FUN_020ff04c
 */


undefined8
FUN_020ff04c(long *param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x210))();
  if ((uVar2 & 1) == 0) {
    uVar3 = 6;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined8 *)(param_5 + 0x70));
    uVar2 = FUN_0161bb5c(param_4,0x61b10922f6ad2c68,uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_01a372f4(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar3 == 0) {
        *param_2 = 0;
        *param_3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


