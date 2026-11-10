/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351c700; name: FUN_0351c700
 */


void FUN_0351c700(long *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[6];
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
    plVar5 = (long *)param_1[6];
  }
  while (plVar5 != (long *)0x0) {
    plVar4 = (long *)plVar5[1];
    (**(code **)(*plVar5 + 0x48))(plVar5);
    plVar5 = plVar4;
  }
  uVar3 = *(uint *)((long)param_1 + 0x54);
  if (param_2 < *(uint *)((long)param_1 + 0x54)) {
    *(uint *)((long)param_1 + 0x54) = param_2;
    uVar3 = param_2;
  }
  if (uVar3 != 0) {
    bVar1 = *(byte *)((long)param_1 + 0x5a);
    if (((bVar1 & 0xf) != 0) && ((bVar1 >> 4 & 1) == 0)) {
      if ((bVar1 & 0xf) < 3) {
        *(byte *)((long)param_1 + 0x5a) = bVar1 & 0xf0 | 2;
      }
      goto LAB_0351c7c8;
    }
  }
  (**(code **)(*param_1 + 0x70))(param_1);
LAB_0351c7c8:
  iVar2 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_03518540(param_1);
  }
  else {
    FUN_0351c44c(param_1[2],param_1);
    param_1[2] = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0351c838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  return;
}


