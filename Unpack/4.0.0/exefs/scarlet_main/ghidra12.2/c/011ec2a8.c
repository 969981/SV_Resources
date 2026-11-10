/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011ec2a8; name: FUN_011ec2a8
 */


void FUN_011ec2a8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = &DAT_046097f0;
  param_1[4] = &PTR_LAB_04609828;
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  plVar6 = (long *)param_1[0x32];
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)*plVar6;
    if ((long *)plVar6[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[5] + 0x20))();
    }
    plVar1 = (long *)param_1[0x33];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar1,plVar6,0x38,8);
    }
    while (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar1 = (long *)param_1[0x33];
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar5,0x38,8);
        plVar5 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar1,plVar5,0x38,8);
        plVar5 = plVar6;
      }
    }
  }
  lVar4 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar4 != 0) {
    FUN_011ec7ac(param_1 + 0x2d);
  }
  plVar6 = (long *)param_1[0x25];
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)*plVar6;
    if ((long *)plVar6[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[5] + 0x20))();
    }
    plVar1 = (long *)param_1[0x26];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar1,plVar6,0x38,8);
    }
    while (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar1 = (long *)param_1[0x26];
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar5,0x38,8);
        plVar5 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar1,plVar5,0x38,8);
        plVar5 = plVar6;
      }
    }
  }
  lVar4 = param_1[0x1f];
  param_1[0x1f] = 0;
  if (lVar4 != 0) {
    FUN_011ec7ac(param_1 + 0x20);
  }
  plVar6 = (long *)param_1[0x16];
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)param_1[0x17];
    if (plVar5 == plVar6) {
      plVar5 = plVar6;
    }
    else {
      plVar1 = (long *)plVar5[-1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      if (plVar5 + -1 != plVar6) {
        plVar1 = (long *)plVar5[-2];
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
        }
        if (plVar5 + -2 != plVar6) {
          plVar1 = (long *)plVar5[-3];
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x18))();
          }
          if (plVar5 + -3 != plVar6) {
            do {
              if ((long *)plVar5[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar5[-4] + 0x18))();
              }
              plVar5 = plVar5 + -1;
            } while (plVar6 + 3 != plVar5);
          }
        }
      }
      plVar5 = (long *)param_1[0x16];
    }
    lVar4 = param_1[0x18];
    plVar1 = (long *)param_1[0x19];
    param_1[0x17] = plVar6;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar5,lVar4 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar1,plVar5,lVar4 - (long)plVar5,8);
    }
  }
  plVar6 = (long *)param_1[0xf];
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)param_1[0x10];
    if (plVar5 == plVar6) {
      plVar5 = plVar6;
    }
    else {
      plVar1 = (long *)plVar5[-1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      if (plVar5 + -1 != plVar6) {
        plVar1 = (long *)plVar5[-2];
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
        }
        if (plVar5 + -2 != plVar6) {
          plVar1 = (long *)plVar5[-3];
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x18))();
          }
          if (plVar5 + -3 != plVar6) {
            do {
              if ((long *)plVar5[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar5[-4] + 0x18))();
              }
              plVar5 = plVar5 + -1;
            } while (plVar6 + 3 != plVar5);
          }
        }
      }
      plVar5 = (long *)param_1[0xf];
    }
    lVar4 = param_1[0x11];
    plVar1 = (long *)param_1[0x12];
    param_1[0x10] = plVar6;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar5,lVar4 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar1,plVar5,lVar4 - (long)plVar5,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 10));
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x18))();
  }
  if ((long *)param_1[7] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011ec448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[7] + 0x18))();
  return;
}


