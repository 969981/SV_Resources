/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbd890; name: FUN_00dbd890
 */


void FUN_00dbd890(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int local_6c;
  
LAB_00dbd8b8:
  plVar8 = param_2 + -1;
  plVar6 = param_1;
LAB_00dbd8c4:
  param_1 = plVar6;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    return;
  case 2:
    plVar6 = (long *)0x0;
    if (*plVar8 != 0) {
      plVar6 = (long *)(*plVar8 + -0x18);
    }
    lVar7 = *param_1;
    uVar2 = (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)0x0;
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + -0x18);
    }
    uVar3 = (**(code **)(*plVar6 + 0x40))();
    if (uVar2 < uVar3) {
      lVar7 = *param_1;
      *param_1 = *plVar8;
      *plVar8 = lVar7;
      return;
    }
    return;
  case 3:
    FUN_00dbe2e0(param_1,param_1 + 1,plVar8);
    return;
  case 4:
    FUN_00dbe4a0(param_1,param_1 + 1,param_1 + 2,plVar8);
    return;
  case 5:
    FUN_00dbe600(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar8);
    return;
  }
  if (0xf7 < lVar7) {
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    plVar6 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      local_6c = FUN_00dbe2e0(param_1,plVar6,plVar8);
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
      local_6c = FUN_00dbe600(param_1,(long)param_1 + lVar7,plVar6,(long)plVar6 + lVar7,plVar8);
    }
    plVar11 = (long *)0x0;
    if (*param_1 != 0) {
      plVar11 = (long *)(*param_1 + -0x18);
    }
    lVar7 = *plVar6;
    uVar2 = (**(code **)(*plVar11 + 0x40))();
    plVar11 = (long *)0x0;
    if (lVar7 != 0) {
      plVar11 = (long *)(lVar7 + -0x18);
    }
    uVar3 = (**(code **)(*plVar11 + 0x40))();
    if (uVar3 <= uVar2) {
      plVar11 = param_2 + -2;
LAB_00dbdce4:
      plVar12 = plVar11;
      if (param_1 != plVar12) goto code_r0x00dbdcec;
      plVar11 = param_1 + 1;
      lVar7 = *plVar8;
      plVar6 = (long *)0x0;
      if (*param_1 != 0) {
        plVar6 = (long *)(*param_1 + -0x18);
      }
      uVar2 = (**(code **)(*plVar6 + 0x40))();
      plVar6 = (long *)0x0;
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + -0x18);
      }
      uVar3 = (**(code **)(*plVar6 + 0x40))();
      if (uVar3 <= uVar2) {
        if (plVar11 == plVar8) {
          return;
        }
        plVar11 = param_1 + 2;
        while( true ) {
          plVar6 = (long *)0x0;
          if (*param_1 != 0) {
            plVar6 = (long *)(*param_1 + -0x18);
          }
          lVar7 = plVar11[-1];
          uVar2 = (**(code **)(*plVar6 + 0x40))();
          plVar6 = (long *)0x0;
          if (lVar7 != 0) {
            plVar6 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar6 + 0x40))();
          if (uVar2 < uVar3) break;
          plVar11 = plVar11 + 1;
          if (param_2 == plVar11) {
            return;
          }
        }
        lVar7 = plVar11[-1];
        plVar11[-1] = *plVar8;
        *plVar8 = lVar7;
      }
      if (plVar11 == plVar8) {
        return;
      }
      plVar12 = plVar8;
      do {
        lVar7 = *plVar11;
        plVar6 = (long *)0x0;
        if (*param_1 != 0) {
          plVar6 = (long *)(*param_1 + -0x18);
        }
        uVar2 = (**(code **)(*plVar6 + 0x40))();
        plVar6 = (long *)0x0;
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + -0x18);
        }
        uVar3 = (**(code **)(*plVar6 + 0x40))();
        if (uVar2 < uVar3) {
          plVar6 = plVar11;
          plVar11 = plVar11 + 1;
        }
        else {
          plVar6 = (long *)0x0;
          if (*param_1 != 0) {
            plVar6 = (long *)(*param_1 + -0x18);
          }
          lVar7 = plVar11[1];
          uVar2 = (**(code **)(*plVar6 + 0x40))();
          plVar6 = (long *)0x0;
          if (lVar7 != 0) {
            plVar6 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar6 + 0x40))();
          plVar10 = plVar11 + 1;
          plVar6 = plVar11 + 2;
          if (uVar2 < uVar3) {
LAB_00dbdf40:
            plVar11 = plVar6;
            plVar6 = plVar10;
          }
          else {
            plVar10 = (long *)0x0;
            if (*param_1 != 0) {
              plVar10 = (long *)(*param_1 + -0x18);
            }
            lVar7 = plVar11[2];
            uVar2 = (**(code **)(*plVar10 + 0x40))();
            plVar10 = (long *)0x0;
            if (lVar7 != 0) {
              plVar10 = (long *)(lVar7 + -0x18);
            }
            uVar3 = (**(code **)(*plVar10 + 0x40))();
            if (uVar2 < uVar3) {
              plVar11 = plVar11 + 3;
            }
            else {
              plVar6 = (long *)0x0;
              if (*param_1 != 0) {
                plVar6 = (long *)(*param_1 + -0x18);
              }
              lVar7 = plVar11[3];
              uVar2 = (**(code **)(*plVar6 + 0x40))();
              plVar6 = (long *)0x0;
              if (lVar7 != 0) {
                plVar6 = (long *)(lVar7 + -0x18);
              }
              uVar3 = (**(code **)(*plVar6 + 0x40))();
              plVar6 = plVar11 + 4;
              plVar10 = plVar11 + 3;
              if (uVar2 < uVar3) goto LAB_00dbdf40;
              plVar10 = (long *)0x0;
              if (*param_1 != 0) {
                plVar10 = (long *)(*param_1 + -0x18);
              }
              lVar7 = plVar11[4];
              uVar2 = (**(code **)(*plVar10 + 0x40))();
              plVar10 = (long *)0x0;
              if (lVar7 != 0) {
                plVar10 = (long *)(lVar7 + -0x18);
              }
              uVar3 = (**(code **)(*plVar10 + 0x40))();
              plVar11 = plVar11 + 5;
              if (uVar3 <= uVar2) {
                do {
                  plVar6 = plVar11;
                  plVar11 = plVar6 + 1;
                  lVar7 = *plVar6;
                  plVar10 = (long *)0x0;
                  if (*param_1 != 0) {
                    plVar10 = (long *)(*param_1 + -0x18);
                  }
                  uVar2 = (**(code **)(*plVar10 + 0x40))();
                  plVar10 = (long *)0x0;
                  if (lVar7 != 0) {
                    plVar10 = (long *)(lVar7 + -0x18);
                  }
                  uVar3 = (**(code **)(*plVar10 + 0x40))();
                } while (uVar3 <= uVar2);
              }
            }
          }
        }
        lVar7 = plVar12[-1];
        plVar10 = (long *)0x0;
        if (*param_1 != 0) {
          plVar10 = (long *)(*param_1 + -0x18);
        }
        uVar2 = (**(code **)(*plVar10 + 0x40))();
        plVar10 = (long *)0x0;
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + -0x18);
        }
        uVar3 = (**(code **)(*plVar10 + 0x40))();
        plVar10 = plVar12 + -1;
        if (uVar2 < uVar3) {
          lVar7 = plVar12[-2];
          plVar10 = (long *)0x0;
          if (*param_1 != 0) {
            plVar10 = (long *)(*param_1 + -0x18);
          }
          uVar2 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = (long *)0x0;
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = plVar12 + -2;
          if (uVar3 <= uVar2) goto LAB_00dbe10c;
          lVar7 = plVar12[-3];
          plVar10 = (long *)0x0;
          if (*param_1 != 0) {
            plVar10 = (long *)(*param_1 + -0x18);
          }
          uVar2 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = (long *)0x0;
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = plVar12 + -3;
          if (uVar3 <= uVar2) goto LAB_00dbe10c;
          lVar7 = plVar12[-4];
          plVar10 = (long *)0x0;
          if (*param_1 != 0) {
            plVar10 = (long *)(*param_1 + -0x18);
          }
          uVar2 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = (long *)0x0;
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = plVar12 + -4;
          if (uVar3 <= uVar2) goto LAB_00dbe10c;
          lVar7 = plVar12[-5];
          plVar10 = (long *)0x0;
          if (*param_1 != 0) {
            plVar10 = (long *)(*param_1 + -0x18);
          }
          uVar2 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = (long *)0x0;
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = plVar12 + -5;
          if (uVar3 <= uVar2) goto LAB_00dbe10c;
          lVar7 = plVar12[-6];
          plVar10 = (long *)0x0;
          if (*param_1 != 0) {
            plVar10 = (long *)(*param_1 + -0x18);
          }
          uVar2 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = (long *)0x0;
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x18);
          }
          uVar3 = (**(code **)(*plVar10 + 0x40))();
          plVar10 = plVar12 + -6;
          if (uVar3 <= uVar2) goto LAB_00dbe10c;
          plVar10 = plVar12 + -7;
          do {
            plVar12 = plVar10;
            lVar7 = *plVar12;
            plVar10 = (long *)0x0;
            if (*param_1 != 0) {
              plVar10 = (long *)(*param_1 + -0x18);
            }
            uVar2 = (**(code **)(*plVar10 + 0x40))();
            plVar10 = (long *)0x0;
            if (lVar7 != 0) {
              plVar10 = (long *)(lVar7 + -0x18);
            }
            uVar3 = (**(code **)(*plVar10 + 0x40))();
            plVar10 = plVar12 + -1;
          } while (uVar2 < uVar3);
        }
        else {
LAB_00dbe10c:
          plVar12 = plVar10;
        }
        if (plVar12 <= plVar6) goto LAB_00dbe264;
        lVar7 = *plVar6;
        *plVar6 = *plVar12;
        *plVar12 = lVar7;
      } while( true );
    }
    plVar12 = plVar8;
    goto LAB_00dbdb80;
  }
  FUN_00dbe2e0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar7 = 0;
  plVar6 = param_1 + 3;
  plVar8 = param_1 + 2;
  goto LAB_00dbda2c;
code_r0x00dbdcec:
  plVar11 = (long *)0x0;
  if (*plVar12 != 0) {
    plVar11 = (long *)(*plVar12 + -0x18);
  }
  lVar7 = *plVar6;
  uVar2 = (**(code **)(*plVar11 + 0x40))();
  plVar11 = (long *)0x0;
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + -0x18);
  }
  uVar3 = (**(code **)(*plVar11 + 0x40))();
  plVar11 = plVar12 + -1;
  if (uVar2 < uVar3) goto code_r0x00dbdd30;
  goto LAB_00dbdce4;
code_r0x00dbdd30:
  lVar7 = *param_1;
  *param_1 = *plVar12;
  *plVar12 = lVar7;
  local_6c = local_6c + 1;
LAB_00dbdb80:
  plVar11 = param_1 + 1;
  plVar10 = plVar11;
  if (plVar11 < plVar12) {
    while( true ) {
      plVar11 = plVar10 + -1;
      do {
        plVar10 = plVar11;
        plVar11 = plVar10 + 1;
        plVar1 = (long *)0x0;
        if (*plVar11 != 0) {
          plVar1 = (long *)(*plVar11 + -0x18);
        }
        lVar7 = *plVar6;
        uVar2 = (**(code **)(*plVar1 + 0x40))();
        plVar1 = (long *)0x0;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + -0x18);
        }
        uVar3 = (**(code **)(*plVar1 + 0x40))();
      } while (uVar2 < uVar3);
      plVar10 = plVar10 + 2;
      do {
        plVar12 = plVar12 + -1;
        plVar1 = (long *)0x0;
        if (*plVar12 != 0) {
          plVar1 = (long *)(*plVar12 + -0x18);
        }
        lVar7 = *plVar6;
        uVar2 = (**(code **)(*plVar1 + 0x40))();
        plVar1 = (long *)0x0;
        if (lVar7 != 0) {
          plVar1 = (long *)(lVar7 + -0x18);
        }
        uVar3 = (**(code **)(*plVar1 + 0x40))();
      } while (uVar3 <= uVar2);
      if (plVar12 < plVar11) break;
      lVar7 = *plVar11;
      plVar1 = plVar12;
      if (plVar6 != plVar11) {
        plVar1 = plVar6;
      }
      *plVar11 = *plVar12;
      *plVar12 = lVar7;
      local_6c = local_6c + 1;
      plVar6 = plVar1;
    }
  }
  if (plVar11 != plVar6) {
    plVar12 = (long *)0x0;
    if (*plVar6 != 0) {
      plVar12 = (long *)(*plVar6 + -0x18);
    }
    lVar7 = *plVar11;
    uVar2 = (**(code **)(*plVar12 + 0x40))();
    plVar12 = (long *)0x0;
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + -0x18);
    }
    uVar3 = (**(code **)(*plVar12 + 0x40))();
    if (uVar2 < uVar3) {
      lVar7 = *plVar11;
      *plVar11 = *plVar6;
      *plVar6 = lVar7;
      local_6c = local_6c + 1;
    }
  }
  if (local_6c == 0) {
    uVar5 = FUN_028bfdf0(param_1,plVar11);
    uVar4 = FUN_028bfdf0(plVar11 + 1,param_2);
    if ((uVar4 & 1) != 0) goto code_r0x00dbdcd0;
    plVar6 = plVar11 + 1;
    if ((uVar5 & 1) != 0) goto LAB_00dbd8c4;
  }
  if ((long)param_2 - (long)plVar11 <= (long)plVar11 - (long)param_1) {
    FUN_00dbd890(plVar11 + 1,param_2);
    param_2 = plVar11;
    goto LAB_00dbd8b8;
  }
  FUN_00dbd890(param_1,plVar11);
  plVar6 = plVar11 + 1;
LAB_00dbe264:
  goto LAB_00dbd8c4;
code_r0x00dbdcd0:
  param_2 = plVar11;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_00dbd8b8;
LAB_00dbda2c:
  plVar11 = plVar6;
  lVar9 = *plVar8;
  plVar6 = (long *)0x0;
  if (*plVar11 != 0) {
    plVar6 = (long *)(*plVar11 + -0x18);
  }
  uVar2 = (**(code **)(*plVar6 + 0x40))();
  plVar6 = (long *)0x0;
  if (lVar9 != 0) {
    plVar6 = (long *)(lVar9 + -0x18);
  }
  uVar3 = (**(code **)(*plVar6 + 0x40))();
  if (uVar2 < uVar3) {
    lVar9 = *plVar11;
    plVar6 = (long *)0x0;
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + -0x18);
    }
    lVar14 = lVar7;
    do {
      lVar13 = lVar14;
      *(undefined8 *)((long)param_1 + lVar13 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar13 + 0x10);
      if (lVar13 == -0x10) {
        plVar6 = param_1;
        goto LAB_00dbdaf8;
      }
      lVar14 = *(long *)((long)param_1 + lVar13 + 8);
      uVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
      plVar8 = (long *)0x0;
      if (lVar14 != 0) {
        plVar8 = (long *)(lVar14 + -0x18);
      }
      uVar3 = (**(code **)(*plVar8 + 0x40))();
      lVar14 = lVar13 + -8;
    } while (uVar2 < uVar3);
    plVar6 = (long *)((long)param_1 + lVar13 + 0x10);
LAB_00dbdaf8:
    *plVar6 = lVar9;
  }
  lVar7 = lVar7 + 8;
  plVar6 = plVar11 + 1;
  plVar8 = plVar11;
  if (plVar11 + 1 == param_2) {
    return;
  }
  goto LAB_00dbda2c;
}


