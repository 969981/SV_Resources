/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026dc0f8; name: FUN_026dc0f8
 */


void FUN_026dc0f8(long param_1,long *param_2,int param_3,undefined8 param_4)

{
  long local_30;
  long local_28;
  long lStack_20;
  undefined8 local_18;
  
  if (param_3 == 0x10) {
    local_28 = *param_2;
    lStack_20 = param_2[1];
    if (local_28 == *(long *)(param_1 + 0x48)) {
      local_30 = param_1;
      local_18 = param_4;
      FUN_026dc150(*(undefined8 *)(param_1 + 0x68),&local_30,&lStack_20,&local_18);
    }
  }
  return;
}


