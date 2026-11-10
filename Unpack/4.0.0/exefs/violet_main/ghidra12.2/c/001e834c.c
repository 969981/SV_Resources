/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e834c; name: FUN_001e834c
 */


undefined8 FUN_001e834c(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((param_1[0x98] + param_1[0x9c] == 0) && (*param_1 == 0)) {
    if (*(long *)(param_1[0x84] + 0x70) == 0) {
      uVar1 = FUN_001db41c((int)param_1[0x4b],0xffffffff,0xffffffff,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else {
      *param_1 = param_2;
      uVar2 = (**(code **)(param_1[0x84] + 0x70))(param_1,1);
      *param_1 = 0;
      if ((uVar2 & 1) == 0) goto LAB_001e8374;
    }
    FUN_001db818(param_2,"Connection %ld seems to be dead!\n",param_1[0xc]);
    FUN_001c70d8(param_2,param_1,0);
    uVar1 = 1;
  }
  else {
LAB_001e8374:
    uVar1 = 0;
  }
  return uVar1;
}


