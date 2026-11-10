/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f5ea6c; name: FUN_00f5ea6c
 */


void FUN_00f5ea6c(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar9 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar9 >> 3)) {
    puVar8 = puVar9;
    if (param_2 != 0) {
      puVar8 = puVar9 + param_2;
      memset(puVar9,0,param_2 << 3);
    }
    param_1[1] = puVar8;
    return;
  }
  puVar8 = (undefined8 *)*param_1;
  lVar3 = (long)puVar9 - (long)puVar8 >> 3;
  uVar2 = param_2 + lVar3;
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)puVar8;
  uVar7 = lVar4 >> 2;
  if (uVar2 <= uVar7) {
    uVar2 = uVar7;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar2 = 0x1fffffffffffffff;
  }
  if (uVar2 == 0) {
    lVar4 = 0;
LAB_00f5eb18:
    puVar10 = (undefined8 *)(lVar4 + lVar3 * 8);
    puVar12 = puVar10 + param_2;
    memset(puVar10,0,param_2 << 3);
    if (puVar9 != puVar8) {
      puVar9 = puVar9 + -1;
      uVar6 = *puVar9;
      *puVar9 = 0;
      puVar10 = puVar10 + -1;
      *puVar10 = uVar6;
      while (puVar9 != puVar8) {
        puVar9 = puVar9 + -1;
        uVar6 = *puVar9;
        *puVar9 = 0;
        puVar10 = puVar10 + -1;
        *puVar10 = uVar6;
      }
      puVar8 = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
    }
    *param_1 = puVar10;
    param_1[1] = puVar12;
    param_1[2] = lVar4 + uVar2 * 8;
    if (puVar9 != puVar8) {
      lVar3 = tpidr_el0;
      do {
        puVar9 = puVar9 + -1;
        puVar10 = (undefined8 *)*puVar9;
        *puVar9 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)*puVar10;
          if (puVar12 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)puVar10[1];
            if (puVar13 == puVar12) {
              puVar13 = puVar12;
            }
            else {
              do {
                puVar13 = puVar13 + -1;
                puVar11 = (undefined8 *)*puVar13;
                *puVar13 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  FUN_00d44bc8(puVar11 + 2);
                  *puVar11 = &PTR_LAB_045a0398;
                  if ((long *)puVar11[1] != (long *)0x0) {
                    (**(code **)(*(long *)puVar11[1] + 0x20))();
                  }
                  plVar5 = *(long **)(lVar3 + 0x30);
                  if (plVar5 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar5 = DAT_04859430;
                    *(long **)(lVar3 + 0x30) = DAT_04859430;
                  }
                  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
                  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar5 + 0x18))(plVar5,puVar11,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar5,puVar11,0,8);
                  }
                }
              } while (puVar12 != puVar13);
              puVar13 = (undefined8 *)*puVar10;
            }
            puVar10[1] = puVar12;
            if (puVar13 != (undefined8 *)0x0) {
              plVar5 = *(long **)(lVar3 + 0x30);
              if (plVar5 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar5 = DAT_04859430;
                *(long **)(lVar3 + 0x30) = DAT_04859430;
              }
              uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
              if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                (**(code **)(*plVar5 + 0x18))(plVar5,puVar13,0,8);
              }
              else {
                FUN_00c48fe8(plVar5,puVar13,0,8);
              }
            }
          }
          plVar5 = *(long **)(lVar3 + 0x30);
          if (plVar5 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar5 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,puVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar5,puVar10,0,8);
          }
        }
      } while (puVar9 != puVar8);
    }
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    param_1 = (undefined8 *)tpidr_el0;
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) goto LAB_00f5ec68;
  }
  else {
    if (uVar2 >> 0x3d == 0) {
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar2 << 3,8);
      goto LAB_00f5eb18;
    }
    FUN_0219c980();
  }
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar5 = DAT_04859430;
  param_1[6] = DAT_04859430;
LAB_00f5ec68:
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f5ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar8,0,8);
    return;
  }
  FUN_00c48fe8(plVar5,puVar8,0,8);
  return;
}


