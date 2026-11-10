/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bca70c; name: FUN_01bca70c
 */


undefined1  [16]
FUN_01bca70c(byte *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_40;
  long local_38 [3];
  
  if (3 < *param_1) {
    return ZEXT816(0);
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 2:
    auVar4 = ZEXT816(0);
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), auVar4 = ZEXT816(0), lVar3 != 0)) {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar2);
      }
      auVar4 = (*param_2)(0,plVar2,param_4,param_5);
    }
    return auVar4;
  case 3:
    if (*(long *)(param_1 + 8) == 0) {
      local_40 = 0;
    }
    else {
      FUN_01bca00c(local_38,0);
      local_40 = local_38[0];
      if (local_38[0] != 0) {
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)(local_38[0] + lVar1));
        }
        auVar4 = (*param_2)((long *)(local_38[0] + lVar1),param_4,param_5);
        FUN_01bca098(&local_40);
        return auVar4;
      }
    }
    FUN_01bca098(&local_40);
    return ZEXT816(0);
  }
  if (*(long *)(param_1 + 8) == 0) {
    return ZEXT816(0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar2);
  }
  auVar4 = (*param_2)(plVar2,param_4,param_5);
  return auVar4;
}


