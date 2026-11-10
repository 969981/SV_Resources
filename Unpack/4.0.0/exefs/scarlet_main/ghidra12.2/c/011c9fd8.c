/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c9fd8; name: FUN_011c9fd8
 */


void FUN_011c9fd8(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)&DAT_045d1c88;
  param_1[4] = (long)&PTR_LAB_045d1d20;
  param_1[5] = (long)&DAT_045d1d70;
  if ((long *)param_1[0x65] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x65] + 0x20))();
  }
  plVar7 = (long *)param_1[0x54];
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)param_1[0x55];
    plVar5 = plVar7;
    if (plVar8 != plVar7) {
      if ((long *)plVar8[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[-1] + 0x20))();
      }
      lVar4 = plVar8[-0xb];
      if (lVar4 != 0) {
        lVar6 = plVar8[-9];
        plVar5 = (long *)plVar8[-8];
        plVar8[-10] = lVar4;
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar6 - lVar4,4);
        }
        else {
          FUN_00c48fe8(plVar5,lVar4,lVar6 - lVar4,4);
        }
      }
      if (plVar8 + -0xb != plVar7) {
        if ((long *)plVar8[-0xc] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[-0xc] + 0x20))();
        }
        lVar4 = plVar8[-0x16];
        if (lVar4 != 0) {
          lVar6 = plVar8[-0x14];
          plVar5 = (long *)plVar8[-0x13];
          plVar8[-0x15] = lVar4;
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar6 - lVar4,4);
          }
          else {
            FUN_00c48fe8(plVar5,lVar4,lVar6 - lVar4,4);
          }
        }
        if (plVar8 + -0x16 != plVar7) {
          do {
            if ((long *)plVar8[-0x17] != (long *)0x0) {
              (**(code **)(*(long *)plVar8[-0x17] + 0x20))();
            }
            lVar4 = plVar8[-0x21];
            if (lVar4 != 0) {
              lVar6 = plVar8[-0x1f];
              plVar5 = (long *)plVar8[-0x1e];
              plVar8[-0x20] = lVar4;
              uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
              if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar6 - lVar4,4);
              }
              else {
                FUN_00c48fe8(plVar5,lVar4,lVar6 - lVar4,4);
              }
            }
            plVar8 = plVar8 + -0xb;
          } while (plVar7 + 0x16 != plVar8);
        }
      }
      plVar5 = (long *)param_1[0x54];
    }
    lVar4 = param_1[0x56];
    param_1[0x55] = (long)plVar7;
    plVar7 = (long *)param_1[0x57];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,lVar4 - (long)plVar5,8);
    }
    else {
      FUN_00c48fe8(plVar7,plVar5,lVar4 - (long)plVar5,8);
    }
  }
  lVar4 = param_1[0x4d];
  if (lVar4 != 0) {
    lVar6 = param_1[0x4e];
    if (lVar6 == lVar4) {
      lVar6 = lVar4;
    }
    else {
      do {
        plVar7 = (long *)(lVar6 + -8);
        lVar6 = lVar6 + -0x20;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x20))();
        }
      } while (lVar4 != lVar6);
      lVar6 = param_1[0x4d];
    }
    lVar3 = param_1[0x4f];
    param_1[0x4e] = lVar4;
    plVar7 = (long *)param_1[0x50];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar3 - lVar6,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,lVar3 - lVar6,8);
    }
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 0x20))();
  }
  lVar4 = param_1[0x42];
  if (lVar4 != 0) {
    lVar6 = param_1[0x43];
    if (lVar6 == lVar4) {
      lVar6 = lVar4;
    }
    else {
      if (*(long **)(lVar6 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -8) + 0x20))();
      }
      if (lVar6 + -0x20 != lVar4) {
        if (*(long **)(lVar6 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar6 + -0x28) + 0x20))();
        }
        if (lVar6 + -0x40 != lVar4) {
          if (*(long **)(lVar6 + -0x48) != (long *)0x0) {
            (**(code **)(**(long **)(lVar6 + -0x48) + 0x20))();
          }
          if (lVar6 + -0x60 != lVar4) {
            do {
              if (*(long **)(lVar6 + -0x68) != (long *)0x0) {
                (**(code **)(**(long **)(lVar6 + -0x68) + 0x20))();
              }
              lVar6 = lVar6 + -0x20;
            } while (lVar4 + 0x60 != lVar6);
          }
        }
      }
      lVar6 = param_1[0x42];
    }
    lVar3 = param_1[0x44];
    param_1[0x43] = lVar4;
    plVar7 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar3 - lVar6,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar6,lVar3 - lVar6,8);
    }
  }
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_011ca494(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


