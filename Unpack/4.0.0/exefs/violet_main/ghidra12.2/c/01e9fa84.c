/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9fa84; name: FUN_01e9fa84
 */


void FUN_01e9fa84(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
  puVar1 = PTR_DAT_047cfa90 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)param_2;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  *(undefined1 *)(plVar2 + 4) = 0;
  nn::os::SdkMutexType::Initialize();
  plVar2[5] = (long)(plVar2 + 5);
  plVar2[6] = (long)(plVar2 + 5);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


