/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a9d44; name: FUN_010a9d44
 */


void FUN_010a9d44(long param_1,void *param_2)

{
  undefined8 local_28;
  
  memcpy((void *)(param_1 + 0x40),param_2,0x28);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x38),&local_28);
  return;
}


