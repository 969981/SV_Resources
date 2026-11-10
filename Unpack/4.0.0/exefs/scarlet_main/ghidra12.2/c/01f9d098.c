/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9d098; name: FUN_01f9d098
 */


void FUN_01f9d098(undefined8 *param_1,long param_2)

{
  undefined8 local_30;
  undefined *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x27366b26c0d28d33;
  puStack_28 = &DAT_03c85400;
  local_20 = 3;
  local_18 = (long *)0x0;
  if (*(long *)(param_2 + 8) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    FUN_00cee868(*(long *)(param_2 + 8),&local_30);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


