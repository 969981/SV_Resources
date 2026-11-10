/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c269fc; name: FUN_00c269fc
 */


void FUN_00c269fc(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_1 == param_2) {
    return;
  }
  plVar7 = param_1 + 1;
  plVar6 = (long *)*plVar7;
  if (plVar6 == (long *)0x0) {
LAB_00c26a6c:
    plVar8 = plVar7;
  }
  else {
    plVar9 = plVar6;
    plVar8 = plVar7;
    do {
      if (param_3 <= (int)plVar9[4]) {
        plVar8 = plVar9;
      }
      plVar9 = (long *)plVar9[(int)plVar9[4] < param_3];
    } while (plVar9 != (long *)0x0);
    if ((plVar8 == plVar7) || (param_3 < (int)plVar8[4])) goto LAB_00c26a6c;
  }
  plVar9 = param_2 + 1;
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
LAB_00c26ab0:
    plVar13 = plVar9;
  }
  else {
    plVar13 = plVar9;
    plVar14 = plVar10;
    do {
      if (param_3 <= (int)plVar14[4]) {
        plVar13 = plVar14;
      }
      plVar14 = (long *)plVar14[(int)plVar14[4] < param_3];
    } while (plVar14 != (long *)0x0);
    if ((plVar13 == plVar9) || (param_3 < (int)plVar13[4])) goto LAB_00c26ab0;
  }
  if ((plVar8 == plVar7) && (plVar13 == plVar9)) {
    return;
  }
  if ((plVar8 != plVar7) && (plVar13 != plVar9)) {
    if (param_1[3] == param_2[3]) {
      lVar12 = plVar8[5];
      lVar1 = plVar8[6];
      lVar15 = plVar8[7];
      lVar2 = plVar13[7];
      lVar11 = plVar13[5];
      plVar8[6] = plVar13[6];
      plVar8[7] = lVar2;
      plVar8[5] = lVar11;
      plVar13[6] = lVar1;
      plVar13[7] = lVar15;
      plVar13[5] = lVar12;
      return;
    }
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_70 = (long *)&uStack_68;
    FUN_00c24e04(&uStack_70,param_3,plVar13 + 5);
    plVar6 = (long *)CONCAT44(local_64,uStack_68);
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)&uStack_68;
      do {
        if (param_3 <= (int)plVar6[4]) {
          plVar7 = plVar6;
        }
        plVar6 = (long *)plVar6[(int)plVar6[4] < param_3];
      } while (plVar6 != (long *)0x0);
      if ((plVar7 != (long *)&uStack_68) && ((int)plVar7[4] <= param_3)) goto LAB_00c26b44;
    }
    plVar7 = (long *)&uStack_68;
LAB_00c26b44:
    FUN_00c1ffb4(plVar13 + 5);
    FUN_00c24e04(param_2,param_3,plVar8 + 5);
    FUN_00c1ffb4(plVar8 + 5);
    FUN_00c24e04(param_1,param_3,plVar7 + 5);
    if (CONCAT44(uStack_54,uStack_58) == 0) {
      plVar6 = uStack_70;
      while (plVar6 != (long *)&uStack_68) {
        FUN_00c1f9ac(plVar6 + 5);
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar7 = plVar6 + 2;
          if (*(long **)*plVar7 == plVar6) {
            plVar6 = (long *)*plVar7;
          }
          else {
            do {
              lVar12 = *plVar7;
              plVar7 = (long *)(lVar12 + 0x10);
              plVar6 = (long *)*plVar7;
            } while (*plVar6 != lVar12);
          }
        }
        else {
          do {
            plVar6 = plVar7;
            plVar7 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
    }
    FUN_00c2c9d8(&uStack_70,CONCAT44(local_64,uStack_68));
    return;
  }
  if (plVar8 == plVar7) {
    if (param_1[3] == param_2[3]) {
      local_5c = (undefined4)plVar13[7];
      uStack_58 = (undefined4)((ulong)plVar13[7] >> 0x20);
      local_64 = (undefined4)plVar13[6];
      uStack_60 = (undefined4)((ulong)plVar13[6] >> 0x20);
      uStack_70._4_4_ = (undefined4)plVar13[5];
      uStack_68 = (undefined4)((ulong)plVar13[5] >> 0x20);
      if (plVar6 != (long *)0x0) {
        plVar8 = param_1 + 1;
        do {
          plVar7 = plVar6;
          if (param_3 < (int)plVar6[4]) {
            plVar8 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_00c26d48;
            plVar6 = (long *)*plVar6;
          }
          else {
            if (param_3 <= (int)plVar6[4]) goto LAB_00c26d20;
            plVar8 = plVar6 + 1;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_00c26d20;
          }
        } while( true );
      }
      plVar8 = plVar7;
      goto LAB_00c26d48;
    }
    FUN_00c24e04(param_1,param_3,plVar13 + 5);
    goto LAB_00c26ddc;
  }
  if (plVar13 != plVar9) {
    return;
  }
  if (param_1[3] == param_2[3]) {
    local_5c = (undefined4)plVar8[7];
    uStack_58 = (undefined4)((ulong)plVar8[7] >> 0x20);
    local_64 = (undefined4)plVar8[6];
    uStack_60 = (undefined4)((ulong)plVar8[6] >> 0x20);
    uStack_70._4_4_ = (undefined4)plVar8[5];
    uStack_68 = (undefined4)((ulong)plVar8[5] >> 0x20);
    if (plVar10 != (long *)0x0) {
      plVar6 = param_2 + 1;
      plVar9 = plVar10;
      do {
        if (param_3 < (int)plVar9[4]) {
          plVar8 = (long *)*plVar9;
          plVar6 = plVar9;
          if (plVar8 == (long *)0x0) goto LAB_00c26ecc;
        }
        else {
          if (param_3 <= (int)plVar9[4]) goto LAB_00c26d30;
          plVar6 = plVar9 + 1;
          plVar8 = (long *)*plVar6;
          if (plVar8 == (long *)0x0) goto LAB_00c26d30;
        }
        plVar9 = plVar8;
      } while( true );
    }
    plVar6 = plVar9;
    goto LAB_00c26ecc;
  }
  FUN_00c24e04(param_2,param_3,plVar8 + 5);
LAB_00c26f60:
  plVar6 = (long *)*plVar7;
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar9 = plVar6;
  plVar8 = plVar7;
  do {
    if (param_3 <= (int)plVar9[4]) {
      plVar8 = plVar9;
    }
    plVar9 = (long *)plVar9[(int)plVar9[4] < param_3];
  } while (plVar9 != (long *)0x0);
  if (plVar8 == plVar7) {
    return;
  }
  if (param_3 < (int)plVar8[4]) {
    return;
  }
  plVar7 = (long *)plVar8[1];
  if ((long *)plVar8[1] == (long *)0x0) {
    plVar7 = plVar8 + 2;
    plVar9 = (long *)*plVar7;
    if ((long *)*plVar9 != plVar8) {
      do {
        lVar12 = *plVar7;
        plVar7 = (long *)(lVar12 + 0x10);
        plVar9 = (long *)*plVar7;
      } while (*plVar9 != lVar12);
    }
  }
  else {
    do {
      plVar9 = plVar7;
      plVar7 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
  if ((long *)*param_1 == plVar8) {
    *param_1 = (long)plVar9;
  }
  param_1[2] = param_1[2] + -1;
  FUN_01336080(plVar6,plVar8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar12 = tpidr_el0;
  plVar6 = *(long **)(lVar12 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar12 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar5 & 1) != 0) && (lVar12 = FUN_00c4e600(), 0 < *(int *)(lVar12 + 0x12c8))) {
LAB_00c270bc:
    FUN_00c48fe8(plVar6,plVar8,0,8);
    return;
  }
  lVar12 = *plVar6;
LAB_00c27060:
                    /* WARNING: Could not recover jumptable at 0x00c27084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 0x18))(plVar6,plVar8,0,8);
  return;
LAB_00c26d20:
LAB_00c26d48:
  if (*plVar8 == 0) {
    lVar12 = tpidr_el0;
    plVar6 = *(long **)(lVar12 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
    *(int *)(puVar4 + 4) = param_3;
    puVar4[5] = CONCAT44(uStack_68,uStack_70._4_4_);
    puVar4[6] = CONCAT44(uStack_60,local_64);
    puVar4[7] = CONCAT44(uStack_58,local_5c);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = plVar7;
    *plVar8 = (long)puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*plVar8;
    }
    FUN_010108e0(param_1[1],puVar4);
    param_1[2] = param_1[2] + 1;
  }
LAB_00c26ddc:
  plVar6 = (long *)*plVar9;
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar7 = plVar6;
  plVar8 = plVar9;
  do {
    if (param_3 <= (int)plVar7[4]) {
      plVar8 = plVar7;
    }
    plVar7 = (long *)plVar7[(int)plVar7[4] < param_3];
  } while (plVar7 != (long *)0x0);
  if (plVar8 == plVar9) {
    return;
  }
  if (param_3 < (int)plVar8[4]) {
    return;
  }
  plVar7 = (long *)plVar8[1];
  if ((long *)plVar8[1] == (long *)0x0) {
    plVar7 = plVar8 + 2;
    plVar9 = (long *)*plVar7;
    if ((long *)*plVar9 != plVar8) {
      do {
        lVar12 = *plVar7;
        plVar7 = (long *)(lVar12 + 0x10);
        plVar9 = (long *)*plVar7;
      } while (*plVar9 != lVar12);
    }
  }
  else {
    do {
      plVar9 = plVar7;
      plVar7 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
  if ((long *)*param_2 == plVar8) {
    *param_2 = (long)plVar9;
  }
  param_2[2] = param_2[2] + -1;
  FUN_01336080(plVar6,plVar8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar12 = tpidr_el0;
  plVar6 = *(long **)(lVar12 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar12 + 0x30) = DAT_04859430;
  }
  uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar5 & 1) != 0) && (lVar12 = FUN_00c4e600(), 0 < *(int *)(lVar12 + 0x12c8)))
  goto LAB_00c270bc;
  lVar12 = *plVar6;
  goto LAB_00c27060;
LAB_00c26d30:
LAB_00c26ecc:
  if (*plVar6 == 0) {
    lVar12 = tpidr_el0;
    plVar8 = *(long **)(lVar12 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
    *(int *)(puVar4 + 4) = param_3;
    puVar4[5] = CONCAT44(uStack_68,uStack_70._4_4_);
    puVar4[6] = CONCAT44(uStack_60,local_64);
    puVar4[7] = CONCAT44(uStack_58,local_5c);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = plVar9;
    *plVar6 = (long)puVar4;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      puVar4 = (undefined8 *)*plVar6;
    }
    FUN_010108e0(param_2[1],puVar4);
    param_2[2] = param_2[2] + 1;
  }
  goto LAB_00c26f60;
}


