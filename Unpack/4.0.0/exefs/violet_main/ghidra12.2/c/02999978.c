/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999978; name: FUN_02999978
 */


undefined8 FUN_02999978(undefined8 param_1,int *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_017da764();
  if (((uVar2 & 1) == 0) ||
     (((8 < *(ushort *)((long)param_2 - (long)*param_2) &&
       (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar2 != 0)) &&
      (uVar1 = *(uint *)((long)param_2 + uVar2), uVar1 != 0 && uVar1 != (param_4 & 0xffff))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


