/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2ecc; name: FUN_034f2ecc
 */


undefined8 FUN_034f2ecc(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  uVar2 = (**(code **)(*(long *)param_1[0x2e] + 0x128))((long *)param_1[0x2e],1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    lVar4 = param_1[0x2e];
    local_28 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar4 != 0) {
      FUN_034af64c(lVar4,param_1,&local_28,uVar1 & 1);
      FUN_034be3a4(param_1,lVar4);
    }
    lVar4 = FUN_034cce5c(param_1);
    param_1[0x2f] = lVar4;
    uVar3 = FUN_0346dff0(param_1);
  }
  return uVar3;
}


