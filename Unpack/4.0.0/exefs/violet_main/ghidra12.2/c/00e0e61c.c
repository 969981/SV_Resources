/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0e61c; name: FUN_00e0e61c
 */


void FUN_00e0e61c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 8;
  plVar2 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar2,"Cloner");
  }
  local_38 = 0xc0;
  lVar3 = (**(code **)puVar1)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(lVar3,"CloneImpl");
  }
  FUN_00cb44e4(lVar3);
  *plVar2 = lVar3;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[3] = plVar2;
  param_1[4] = 0;
  *(undefined1 *)(*plVar2 + 0x5d) = 0;
  return;
}


