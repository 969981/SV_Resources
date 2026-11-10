/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c9fc4; name: FUN_029c9fc4
 */


void FUN_029c9fc4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = param_1[0x3c];
  *param_1 = &PTR_FUN_04606e50;
  if (lVar5 != 0) {
    lVar4 = param_1[0x3e];
    plVar8 = (long *)param_1[0x3f];
    param_1[0x3d] = lVar5;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar4 - lVar5,4);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar4 - lVar5,4);
    }
  }
  lVar5 = param_1[0x34];
  if (lVar5 != 0) {
    lVar4 = param_1[0x36];
    plVar8 = (long *)param_1[0x37];
    param_1[0x35] = lVar5;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar4 - lVar5,4);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar4 - lVar5,4);
    }
  }
  FUN_00dbfff8(param_1 + 0x2b,param_1[0x2c]);
  FUN_00dbfff8(param_1 + 0x24,param_1[0x25]);
  plVar8 = (long *)param_1[0x1d];
  while (plVar8 != (long *)0x0) {
    lVar5 = plVar8[3];
    plVar8[3] = 0;
    plVar7 = (long *)*plVar8;
    if (lVar5 != 0) {
      FUN_0114bd48(plVar8 + 4);
    }
    plVar6 = (long *)param_1[0x1e];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,0x38,8);
      plVar8 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar8,0x38,8);
      plVar8 = plVar7;
    }
  }
  lVar5 = param_1[0x17];
  param_1[0x17] = 0;
  if (lVar5 != 0) {
    lVar4 = param_1[0x18];
    plVar8 = (long *)param_1[0x19];
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,lVar4 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar5,lVar4 << 3,8);
    }
  }
  plVar8 = (long *)param_1[0x10];
  if (plVar8 != (long *)0x0) {
    plVar6 = (long *)param_1[0x11];
    plVar7 = plVar8;
    if (plVar6 != plVar8) {
      lVar5 = plVar6[-8];
      if (lVar5 != 0) {
        lVar4 = plVar6[-6];
        plVar7 = (long *)plVar6[-5];
        plVar6[-7] = lVar5;
        uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,4);
        }
        else {
          FUN_00c48fe8(plVar7,lVar5,lVar4 - lVar5,4);
        }
      }
      if (plVar6 + -8 != plVar8) {
        lVar5 = plVar6[-0x10];
        if (lVar5 != 0) {
          lVar4 = plVar6[-0xe];
          plVar7 = (long *)plVar6[-0xd];
          plVar6[-0xf] = lVar5;
          uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,4);
          }
          else {
            FUN_00c48fe8(plVar7,lVar5,lVar4 - lVar5,4);
          }
        }
        if (plVar6 + -0x10 != plVar8) {
          do {
            lVar5 = plVar6[-0x18];
            if (lVar5 != 0) {
              lVar4 = plVar6[-0x16];
              plVar7 = (long *)plVar6[-0x15];
              plVar6[-0x17] = lVar5;
              uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
              if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,4);
              }
              else {
                FUN_00c48fe8(plVar7,lVar5,lVar4 - lVar5,4);
              }
            }
            plVar6 = plVar6 + -8;
          } while (plVar8 + 0x10 != plVar6);
        }
      }
      plVar7 = (long *)param_1[0x10];
    }
    lVar5 = param_1[0x12];
    plVar6 = (long *)param_1[0x13];
    param_1[0x11] = plVar8;
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar5 - (long)plVar7,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar7,lVar5 - (long)plVar7,8);
    }
  }
  plVar8 = (long *)param_1[9];
  if (plVar8 != (long *)0x0) {
    if ((long *)param_1[10] == plVar8) {
      plVar7 = plVar8;
    }
    else {
      plVar7 = (long *)param_1[10];
      do {
        plVar6 = plVar7 + -8;
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          lVar4 = plVar7[-6];
          plVar1 = (long *)plVar7[-5];
          plVar7[-7] = lVar5;
          uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,4);
          }
          else {
            FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,4);
          }
        }
        plVar7 = plVar6;
      } while (plVar8 != plVar6);
      plVar7 = (long *)param_1[9];
    }
    lVar5 = param_1[0xb];
    plVar6 = (long *)param_1[0xc];
    param_1[10] = plVar8;
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar5 - (long)plVar7,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar7,lVar5 - (long)plVar7,8);
    }
  }
  plVar8 = (long *)param_1[2];
  if (plVar8 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[3] == plVar8) {
    plVar7 = plVar8;
  }
  else {
    plVar7 = (long *)param_1[3];
    do {
      plVar6 = plVar7 + -0xb;
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        lVar4 = plVar7[-9];
        plVar1 = (long *)plVar7[-8];
        plVar7[-10] = lVar5;
        uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,4);
        }
        else {
          FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,4);
        }
      }
      plVar7 = plVar6;
    } while (plVar8 != plVar6);
    plVar7 = (long *)param_1[2];
  }
  lVar5 = param_1[4];
  plVar6 = (long *)param_1[5];
  param_1[3] = plVar8;
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x029ca3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar5 - (long)plVar7,8);
    return;
  }
  FUN_00c48fe8(plVar6,plVar7,lVar5 - (long)plVar7,8);
  return;
}


