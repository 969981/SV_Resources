/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291b8f4; name: FUN_0291b8f4
 */


undefined4 FUN_0291b8f4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0291beec();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)FUN_01021c74(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x46);
    uVar3 = 0x14;
    if ((uVar1 & 1) == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


