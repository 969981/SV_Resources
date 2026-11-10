/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00336190; name: FUN_00336190
 */


void FUN_00336190(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  *(undefined8 *)((long)param_1 + 0x88) = param_4;
  memcpy(param_1,param_2,param_3);
  *(int *)((long)param_1 + 0x80) = (int)param_3;
  return;
}


