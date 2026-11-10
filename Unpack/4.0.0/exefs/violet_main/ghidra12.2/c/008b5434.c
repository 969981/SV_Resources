/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b5434; name: FUN_008b5434
 */


void FUN_008b5434(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 int param_6)

{
  FUN_008effc4();
  *param_3 = (long)(PTR_DAT_047d2468 + 0x10);
  *(float *)(param_3 + 8) = param_1 + param_1;
  *(float *)((long)param_3 + 0x44) = param_2 + param_2;
  *(int *)(param_3 + 9) = param_6;
  FUN_008f0080(param_3,param_6 * 4 + 0x14);
  FUN_008f00bc(param_3,(int)param_3[9] * 0xc + 0x12);
  return;
}


