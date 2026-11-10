/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026eac80; name: FUN_026eac80
 */


long FUN_026eac80(long param_1,int *param_2)

{
  ulong uVar1;
  undefined4 local_4;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_4 = 0;
  }
  else {
    uVar1 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_4 = 0;
    if (uVar1 != 0) {
      local_4 = *(undefined4 *)((long)param_2 + uVar1);
    }
  }
  FUN_026eacdc(param_1,*(undefined8 *)(param_1 + 8),&local_4);
  return param_1;
}


