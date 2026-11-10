/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03504ca4; name: FUN_03504ca4
 */


void FUN_03504ca4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_047c63f8;
  param_1[0x12] = &PTR_LAB_047c6538;
  FUN_034fdcc0();
  FUN_03500ec8(param_1);
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2,0);
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(puVar1 + 0x30))(5,puVar3);
    }
    param_1[1] = 0;
  }
  lVar4 = param_1[0x2c];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x2d) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x2d) * 0x30;
      do {
        FUN_0350499c(lVar4);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      lVar4 = param_1[0x2c];
    }
    *(undefined4 *)(param_1 + 0x2d) = 0;
    (**(code **)(puVar1 + 0x30))(0,lVar4);
    param_1[0x2c] = 0;
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
  }
  FUN_03500b30(param_1);
  return;
}


