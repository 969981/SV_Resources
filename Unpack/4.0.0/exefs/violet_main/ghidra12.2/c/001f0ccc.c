/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0ccc; name: FUN_001f0ccc
 */


undefined8 FUN_001f0ccc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = FUN_001f0268(param_1,param_2,0xfffffe07,"PING: stream_id != 0");
    return uVar2;
  }
  if (((((*(byte *)(param_1 + 0x99c) >> 3 & 1) != 0) || ((*(byte *)(param_2 + 0xd) & 1) != 0)) ||
      (iVar1 = FUN_001eed50(param_1), iVar1 != 0)) ||
     (uVar2 = FUN_001f0d6c(param_1,1,param_2 + 0x10), (int)uVar2 == 0)) {
    if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
       iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffc7a;
    }
  }
  return uVar2;
}


