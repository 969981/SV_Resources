/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac254; name: FUN_034ac254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034ac254(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_38;
  
  plVar4 = param_2 + 3;
  local_38 = (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
  if (param_2[0xb] != 0) {
    FUN_034be534(&DAT_048b0298,plVar4);
    FUN_034afae0(param_2[0xb],plVar4,&local_38,uVar3 & 1);
    param_2[0xb] = 0;
  }
  puVar2 = PTR_DAT_047e2fd0;
  if (param_2[0xc] != 0) {
    *(undefined4 *)(param_2 + 0xd) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_2[0xc] = 0;
    *(undefined4 *)((long)param_2 + 0x6c) = 0;
  }
  param_2[2] = 0;
  if (*param_2 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
  }
  param_2[3] = (long)(PTR_DAT_047e7168 + 0x10);
  local_38 = 0xffffffffffffffff;
  if (param_2[0xb] != 0) {
    FUN_034be534(&DAT_048b0298,plVar4);
    FUN_034afae0(param_2[0xb],plVar4,&local_38,1);
    param_2[0xb] = 0;
  }
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
LAB_034ac3b8:
    if (_DAT_00005010 == (long *)0x0) {
      _DAT_00005010 = param_2;
      *param_2 = 0;
    }
    else {
      *param_2 = (long)_DAT_00005010;
      _DAT_00005010 = param_2;
    }
    _DAT_00005008 = _DAT_00005008 + 1;
  }
  else {
    if ((param_2 < plVar4) || (plVar4 + 0xa00 <= param_2)) {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)plVar5[0xa00];
        if (plVar4 == (long *)0x0) goto LAB_034ac3b8;
      } while ((param_2 < plVar4) || (plVar4 + 0xa00 <= param_2));
    }
    else {
      plVar5 = (long *)0x0;
    }
    if (plVar4[0xa02] == 0) {
      plVar4[0xa02] = (long)param_2;
      *param_2 = 0;
    }
    else {
      *param_2 = plVar4[0xa02];
      plVar4[0xa02] = (long)param_2;
    }
    iVar1 = (int)plVar4[0xa01] + 1;
    *(int *)(plVar4 + 0xa01) = iVar1;
    if (iVar1 == 0x80) {
      if ((long *)*param_1 != plVar4) {
        param_1 = plVar5 + 0xa00;
      }
      *param_1 = plVar4[0xa00];
                    /* WARNING: Could not recover jumptable at 0x034ac444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2 + 0x30))(0);
      return;
    }
  }
  return;
}


