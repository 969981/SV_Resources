/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010cb714; name: FUN_010cb714
 */


long FUN_010cb714(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong unaff_x25;
  long local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68 [3];
  
  uVar6 = param_1[2];
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar4;
    }
    else if (uVar4 < uVar6) {
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar4 / uVar6;
      }
      uVar8 = uVar4 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(param_1[1] + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar4) {
            if (plVar9[2] == uVar4) goto LAB_010cb8b8;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar4) {
            if (plVar9[2] == uVar4) goto LAB_010cb8b8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_010cb7e4:
  FUN_010cbc70(&local_88,*param_1,param_1);
  lVar2 = local_88;
  plVar9 = param_1 + 1;
  uVar6 = *param_2;
  uVar7 = param_1[2];
  if (uVar7 == 0) {
LAB_010cb8e0:
    FUN_010cbae0(local_68,plVar9,uVar6,param_2,&local_88);
    if ((uVar7 == 0) || (*(float *)(param_1 + 0xd) * (float)uVar7 < (float)(param_1[0xc] + 1))) {
      uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
      uVar4 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      FUN_010cbe08(plVar9,uVar4);
      uVar7 = param_1[2];
      if ((uVar7 & uVar7 - 1) == 0) {
        unaff_x25 = uVar7 - 1 & uVar6;
      }
      else if (uVar6 < uVar7) {
        unaff_x25 = uVar6;
      }
      else {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6 / uVar7;
        }
        unaff_x25 = uVar6 - uVar4 * uVar7;
      }
    }
    plVar5 = *(long **)(*plVar9 + unaff_x25 * 8);
    if (plVar5 == (long *)0x0) {
      plVar5 = param_1 + 7;
      *local_68[0] = *plVar5;
      *plVar5 = (long)local_68[0];
      *(long **)(param_1[1] + unaff_x25 * 8) = plVar5;
      if (*local_68[0] != 0) {
        uVar6 = *(ulong *)(*local_68[0] + 8);
        if ((uVar7 & uVar7 - 1) == 0) {
          uVar6 = uVar6 & uVar7 - 1;
        }
        else if (uVar7 <= uVar6) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar4 * uVar7;
        }
        *(long **)(*plVar9 + uVar6 * 8) = local_68[0];
      }
    }
    else {
      *local_68[0] = *plVar5;
      *plVar5 = (long)local_68[0];
    }
    param_1[0xc] = param_1[0xc] + 1;
    lVar10 = local_88;
  }
  else {
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar6;
      plVar5 = *(long **)(*plVar9 + unaff_x25 * 8);
      if (plVar5 == (long *)0x0) goto LAB_010cb8e0;
      do {
        plVar5 = (long *)*plVar5;
        if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar6 && (plVar5[1] & uVar4) != unaff_x25))
        goto LAB_010cb8e0;
      } while (plVar5[2] != uVar6);
    }
    else {
      unaff_x25 = uVar6;
      if (uVar7 <= uVar6) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6 / uVar7;
        }
        unaff_x25 = uVar6 - uVar4 * uVar7;
      }
      plVar5 = *(long **)(*plVar9 + unaff_x25 * 8);
      if (plVar5 == (long *)0x0) goto LAB_010cb8e0;
      do {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_010cb8e0;
        uVar4 = plVar5[1];
        if (uVar4 != uVar6) {
          if (uVar7 <= uVar4) {
            uVar8 = 0;
            if (uVar7 != 0) {
              uVar8 = uVar4 / uVar7;
            }
            uVar4 = uVar4 - uVar8 * uVar7;
          }
          if (uVar4 != unaff_x25) goto LAB_010cb8e0;
        }
      } while (plVar5[2] != uVar6);
    }
    lVar10 = local_88;
  }
  local_88 = 0;
  if (lVar10 != 0) {
    FUN_00c4e5a0(local_68,0);
    FUN_010cc26c(lVar10);
    uVar6 = (**(code **)(*local_80 + 0xf8))(local_80);
    if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*local_80 + 0x18))(local_80,lVar10,uStack_78,local_70);
    }
    else {
      FUN_00c48fe8(local_80,lVar10,uStack_78,local_70);
    }
    FUN_00c4e70c(local_68);
  }
  return lVar2;
LAB_010cb8b8:
  if (plVar9[6] != 0) {
    return plVar9[6];
  }
  goto LAB_010cb7e4;
}


