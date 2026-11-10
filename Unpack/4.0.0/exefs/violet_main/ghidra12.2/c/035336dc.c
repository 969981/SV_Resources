/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035336dc; name: FUN_035336dc
 */


void FUN_035336dc(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  puVar2 = PTR_DAT_047e2fd0;
  puVar4 = (undefined8 *)param_1[0xe];
  if (puVar4 != (undefined8 *)0x0) {
    do {
      if (puVar4[1] == 0) {
        param_1[0xd] = 0;
        param_1[0xe] = 0;
      }
      else {
        param_1[0xe] = puVar4[1];
      }
      (**(code **)*puVar4)(puVar4);
      (**(code **)(puVar2 + 0x30))(0,puVar4);
      puVar4 = (undefined8 *)param_1[0xe];
    } while (puVar4 != (undefined8 *)0x0);
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x80) = 0;
    plVar5 = *(long **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (plVar5 != (long *)0x0) {
      iVar1 = (int)plVar5[9] + -1;
      *(int *)(plVar5 + 9) = iVar1;
      if (iVar1 == 0) {
        if (plVar5[2] == 0) {
          FUN_03518540(plVar5);
        }
        else {
          FUN_0351c44c(plVar5[2],plVar5);
          plVar5[2] = 0;
        }
        (**(code **)(*plVar5 + 0x50))(plVar5);
        (**(code **)(puVar2 + 0x30))(0,plVar5);
      }
    }
  }
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xf0 | 4;
  iVar1 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x03533830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 0x30))(0,param_1);
  return;
}


