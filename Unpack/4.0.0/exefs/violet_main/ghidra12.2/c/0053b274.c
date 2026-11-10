/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053b274; name: FUN_0053b274
 */


long * FUN_0053b274(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar5 = param_1 + 1;
  if (plVar5 == param_2) {
LAB_0053b2c4:
    plVar7 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      if (plVar7 == (long *)0x0) {
        plVar8 = param_2;
        do {
          plVar9 = (long *)plVar8[2];
          bVar3 = (long *)*plVar9 == plVar8;
          plVar8 = plVar9;
        } while (bVar3);
      }
      else {
        plVar8 = plVar7;
        do {
          plVar9 = plVar8;
          plVar8 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      uVar1 = *param_5;
      uVar2 = param_5[1];
      uVar4 = FUN_0053b5e8(plVar9 + 4,uVar1,uVar2);
      if ((uVar4 & 1) == 0) {
        if ((long *)*plVar5 != (long *)0x0) {
          param_1 = param_1 + 1;
          plVar9 = (long *)*plVar5;
          do {
            uVar4 = FUN_0053b4c4(uVar1,uVar2,plVar9 + 4);
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_0053b5e8(plVar9 + 4,uVar1,uVar2);
              if ((uVar4 & 1) == 0) goto LAB_0053b3bc;
              param_1 = plVar9 + 1;
              plVar5 = (long *)*param_1;
              if (plVar5 == (long *)0x0) goto LAB_0053b3bc;
            }
            else {
              plVar5 = (long *)*plVar9;
              if (plVar5 == (long *)0x0) goto LAB_0053b42c;
              param_1 = plVar9;
            }
            plVar9 = plVar5;
          } while( true );
        }
        goto LAB_0053b498;
      }
    }
    if (plVar7 == (long *)0x0) {
      *param_3 = (long)param_2;
      plVar5 = param_2;
    }
    else {
      *param_3 = (long)plVar9;
      plVar5 = plVar9 + 1;
    }
  }
  else {
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar4 = FUN_0053b4c4(uVar1,uVar2,param_2 + 4);
    if ((uVar4 & 1) != 0) goto LAB_0053b2c4;
    uVar4 = FUN_0053b5e8(param_2 + 4,uVar1,uVar2);
    if ((uVar4 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar7 = (long *)param_2[1];
    if (plVar7 == (long *)0x0) {
      plVar7 = param_2 + 2;
      plVar9 = (long *)*plVar7;
      if ((long *)*plVar9 != param_2) {
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(lVar6 + 0x10);
          plVar9 = (long *)*plVar7;
        } while (*plVar9 != lVar6);
      }
    }
    else {
      do {
        plVar9 = plVar7;
        plVar7 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    if ((plVar9 == plVar5) || (uVar4 = FUN_0053b4c4(uVar1,uVar2,plVar9 + 4), (uVar4 & 1) != 0)) {
      if (param_2[1] == 0) {
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
LAB_0053b42c:
      *param_3 = (long)plVar9;
      return plVar9;
    }
    if ((long *)*plVar5 != (long *)0x0) {
      param_1 = param_1 + 1;
      plVar9 = (long *)*plVar5;
      do {
        uVar4 = FUN_0053b4c4(uVar1,uVar2,plVar9 + 4);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_0053b5e8(plVar9 + 4,uVar1,uVar2);
          if ((uVar4 & 1) == 0) {
LAB_0053b3bc:
            *param_3 = (long)plVar9;
            return param_1;
          }
          param_1 = plVar9 + 1;
          plVar5 = (long *)*param_1;
          if (plVar5 == (long *)0x0) goto LAB_0053b3bc;
        }
        else {
          plVar5 = (long *)*plVar9;
          if (plVar5 == (long *)0x0) goto LAB_0053b42c;
          param_1 = plVar9;
        }
        plVar9 = plVar5;
      } while( true );
    }
LAB_0053b498:
    *param_3 = (long)plVar5;
  }
  return plVar5;
}


