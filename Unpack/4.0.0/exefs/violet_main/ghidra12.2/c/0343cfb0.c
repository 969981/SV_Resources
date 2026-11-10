/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343cfb0; name: FUN_0343cfb0
 */


void FUN_0343cfb0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)&PTR_FUN_047bfb88;
  if (*(char *)((long)param_1 + 0x69) != '\0') {
    (**(code **)(**(long **)(param_1[10] + 0x610) + 0x10))
              (*(long **)(param_1[10] + 0x610),param_1[4]);
  }
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = (long *)param_1[3];
  if (plVar2 != (long *)0x0) {
    if (((*(byte *)((long)plVar2 + 0x34) & 1) != 0) && (*plVar2 != 0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7);
    }
    (**(code **)(puVar1 + 0x30))(7,plVar2);
    param_1[3] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(puVar1 + 0x30))(7);
  }
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(7);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  *param_1 = (long)(PTR_DAT_047e6f08 + 0x10);
  return;
}


