/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a3914; name: FUN_031a3914
 */


void FUN_031a3914(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_047e5898 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[0x34] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


