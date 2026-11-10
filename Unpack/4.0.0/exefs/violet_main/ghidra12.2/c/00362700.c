/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00362700; name: FUN_00362700
 */


void FUN_00362700(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x88);
  if (plVar2 != (long *)0x0) {
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar3 = plVar2 + 0xb;
    plVar2[0xc] = 0;
    *plVar3 = 0;
    puVar1 = PTR_DAT_047ccec8 + 0x10;
    plVar2[2] = (long)plVar3;
    plVar2[10] = (long)plVar3;
    *plVar2 = (long)puVar1;
    plVar2[1] = 1;
    *plVar3 = 0;
    nn::os::InitializeMutex((MutexType *)(plVar2 + 0xc),false,0);
    nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar2 + 0x10));
  }
  *param_1 = plVar2;
  return;
}


