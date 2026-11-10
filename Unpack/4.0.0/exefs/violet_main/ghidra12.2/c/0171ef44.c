/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0171ef44; name: FUN_0171ef44
 */


void FUN_0171ef44(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047db998 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0171efa4(param_1 + 3);
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 0xb) = 6;
  param_1[10] = 0;
  *param_1 = (long)&PTR_LAB_04579600;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  return;
}


