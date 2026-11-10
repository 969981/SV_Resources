/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c41d4; name: FUN_034c41d4
 */


undefined4 FUN_034c41d4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  uVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,auStack_18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,auStack_14);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


