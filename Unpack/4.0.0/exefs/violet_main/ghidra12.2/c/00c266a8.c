/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c266a8; name: FUN_00c266a8
 */


void FUN_00c266a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_60;
  long local_58 [3];
  
  if (param_1[3] == param_2[3]) {
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
    plVar2 = param_1 + 1;
    lVar5 = *plVar2;
    plVar6 = param_2 + 1;
    *plVar2 = *plVar6;
    *plVar6 = lVar5;
    uVar3 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = uVar3;
    if (param_1[2] != 0) {
      param_1 = (undefined8 *)(*plVar2 + 0x10);
    }
    *param_1 = plVar2;
    if (param_2[2] == 0) {
      *param_2 = plVar6;
    }
    else {
      *(long **)(*plVar6 + 0x10) = plVar6;
    }
  }
  else {
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[0] = 0;
    plVar2 = param_2 + 1;
    plVar6 = (long *)*param_2;
    local_60 = local_58;
    if (plVar6 != plVar2) {
      do {
        FUN_00c24e04(&local_60,(int)plVar6[4],plVar6 + 5);
        plVar1 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar1 = plVar6 + 2;
          plVar4 = (long *)*plVar1;
          if ((long *)*plVar4 != plVar6) {
            do {
              lVar5 = *plVar1;
              plVar1 = (long *)(lVar5 + 0x10);
              plVar4 = (long *)*plVar1;
            } while (*plVar4 != lVar5);
          }
        }
        else {
          do {
            plVar4 = plVar1;
            plVar1 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        plVar6 = plVar4;
      } while (plVar4 != plVar2);
      plVar6 = (long *)*param_2;
    }
    while (plVar6 != plVar2) {
      FUN_00c1ffb4(plVar6 + 5);
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar1 = plVar6 + 2;
        if (*(long **)*plVar1 == plVar6) {
          plVar6 = (long *)*plVar1;
        }
        else {
          do {
            lVar5 = *plVar1;
            plVar1 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    plVar2 = param_1 + 1;
    plVar6 = (long *)*param_1;
    if (plVar6 != plVar2) {
      do {
        FUN_00c24e04(param_2,(int)plVar6[4],plVar6 + 5);
        plVar1 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar1 = plVar6 + 2;
          plVar4 = (long *)*plVar1;
          if ((long *)*plVar4 != plVar6) {
            do {
              lVar5 = *plVar1;
              plVar1 = (long *)(lVar5 + 0x10);
              plVar4 = (long *)*plVar1;
            } while (*plVar4 != lVar5);
          }
        }
        else {
          do {
            plVar4 = plVar1;
            plVar1 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        plVar6 = plVar4;
      } while (plVar4 != plVar2);
      plVar6 = (long *)*param_1;
    }
    while (plVar6 != plVar2) {
      FUN_00c1ffb4(plVar6 + 5);
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar1 = plVar6 + 2;
        if (*(long **)*plVar1 == plVar6) {
          plVar6 = (long *)*plVar1;
        }
        else {
          do {
            lVar5 = *plVar1;
            plVar1 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    plVar6 = local_60;
    while (plVar6 != local_58) {
      FUN_00c24e04(param_1,(int)plVar6[4],plVar6 + 5);
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 2;
        if (*(long **)*plVar2 == plVar6) {
          plVar6 = (long *)*plVar2;
        }
        else {
          do {
            lVar5 = *plVar2;
            plVar2 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar2;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    if (local_58[2] == 0) {
      plVar6 = local_60;
      while (plVar6 != local_58) {
        FUN_00c1f9ac(plVar6 + 5);
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar2 = plVar6 + 2;
          if (*(long **)*plVar2 == plVar6) {
            plVar6 = (long *)*plVar2;
          }
          else {
            do {
              lVar5 = *plVar2;
              plVar2 = (long *)(lVar5 + 0x10);
              plVar6 = (long *)*plVar2;
            } while (*plVar6 != lVar5);
          }
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
    }
    FUN_00c2c9d8(&local_60,local_58[0]);
  }
  return;
}


