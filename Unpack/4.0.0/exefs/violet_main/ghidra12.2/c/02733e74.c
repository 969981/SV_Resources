/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02733e74; name: FUN_02733e74
 */


void FUN_02733e74(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047e1358 + 0x10);
  nn::os::FinalizeReaderWriterLock((ReaderWriterLockType *)(param_1 + 0x4f));
  FUN_0273434c(param_1 + 0x42);
  plVar5 = (long *)param_1[0x3b];
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar6 = (long *)param_1[0x3c];
    uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar5,0x38,8);
    }
    while (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      if ((long *)plVar4[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[5] + 0x20))();
      }
      plVar6 = (long *)param_1[0x3c];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x38,8);
        plVar4 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x38,8);
        plVar4 = plVar5;
      }
    }
  }
  lVar2 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar2 != 0) {
    FUN_0273438c(param_1 + 0x36);
  }
  FUN_02734414(param_1 + 0x28);
  puVar3 = (undefined8 *)param_1[0x21];
  if (puVar3 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar3;
    if ((long *)puVar3[5] != (long *)0x0) {
      (**(code **)(*(long *)puVar3[5] + 0x20))();
    }
    plVar4 = (long *)param_1[0x22];
    uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar3,0x40,0x10);
    }
    else {
      FUN_00c48fe8(plVar4,puVar3,0x40,0x10);
    }
    if (plVar5 != (long *)0x0) {
      plVar4 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar6 = (long *)param_1[0x22];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x40,0x10);
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x40,0x10);
      }
      while (plVar4 != (long *)0x0) {
        plVar5 = (long *)*plVar4;
        if ((long *)plVar4[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[5] + 0x20))();
        }
        plVar6 = (long *)param_1[0x22];
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x40,0x10);
          plVar4 = plVar5;
        }
        else {
          FUN_00c48fe8(plVar6,plVar4,0x40,0x10);
          plVar4 = plVar5;
        }
      }
    }
  }
  lVar2 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar2 != 0) {
    FUN_02734454(param_1 + 0x1c);
  }
  FUN_027344dc(param_1 + 0xe);
  plVar5 = (long *)param_1[7];
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar6 = (long *)param_1[8];
    uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar5,0x38,8);
    }
    while (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      if ((long *)plVar4[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[5] + 0x20))();
      }
      plVar6 = (long *)param_1[8];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x38,8);
        plVar4 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x38,8);
        plVar4 = plVar5;
      }
    }
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_0273451c(param_1 + 2);
  return;
}


