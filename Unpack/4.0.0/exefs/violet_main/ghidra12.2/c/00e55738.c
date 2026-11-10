/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e55738; name: FUN_00e55738
 */


void FUN_00e55738(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *local_58;
  ushort local_4c [2];
  char *local_48;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (*(char *)(param_2 + 0xb0b8) == '\0') {
    plVar4 = (long *)*param_3;
    *param_1 = (long)plVar4;
    if (plVar4 == (long *)0x0) goto LAB_00e55840;
    lVar3 = *plVar4;
  }
  else {
    plVar4 = (long *)*param_3;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 7;
    }
    local_48 = strrchr((char *)*plVar1,0x2e);
    if (local_48 != (char *)0x0) {
      local_4c[0] = (ushort)(byte)(*(char *)(param_2 + 0xb0bc) + 0x30);
      FUN_00e5587c(&local_58,local_4c,&local_48);
      if (*param_3 != 0) {
        puVar2 = (undefined8 *)(*param_3 + 0x38);
      }
      local_28 = *puVar2;
      FUN_00e55910(param_1,&local_28,&local_58,(int)param_3[5]);
      if (local_58 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_58 + 0x20))();
      return;
    }
    *param_1 = (long)plVar4;
    local_48 = (char *)0x0;
    if (plVar4 == (long *)0x0) goto LAB_00e55840;
    lVar3 = *plVar4;
  }
  (**(code **)(lVar3 + 0x18))(plVar4);
LAB_00e55840:
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  plVar4 = (long *)param_3[4];
  param_1[4] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)param_3[5];
  return;
}


