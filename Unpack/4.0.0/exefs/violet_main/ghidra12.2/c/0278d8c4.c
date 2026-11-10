/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278d8c4; name: FUN_0278d8c4
 */


void FUN_0278d8c4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_8;
  
  local_8 = 0;
  if ((*param_1 != 0) && ((param_1[1] & 0x1fffffffffffffffU) != 0)) {
    FUN_0278da48(*param_1,&local_8,param_2);
    uVar1 = (ulong)param_1[4] >> 3;
    *(byte *)(param_1[3] + uVar1) = (byte)(1 << (param_1[4] & 7U)) | *(byte *)(param_1[3] + uVar1);
  }
  return;
}


