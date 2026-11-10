/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01087a3c; name: FUN_01087a3c
 */


void FUN_01087a3c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  undefined4 uVar15;
  long local_68;
  
  param_1[2] = 0;
  puVar2 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047e32b0;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e32b0 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar11 = param_1 + 5;
  *plVar11 = (long)(puVar2 + 0x240);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar11);
  *param_1 = (long)&PTR_LAB_04609ed0;
  param_1[4] = (long)&PTR_LAB_0460a0d0;
  *plVar11 = (long)&PTR_LAB_0460a288;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  lVar5 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x10] = 0;
  param_1[0xd] = 0x555555555555555;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = lVar6;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x17] = 0;
  param_1[0x14] = 0x555555555555555;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x13] = lVar6;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x1e] = 0;
  param_1[0x1b] = 0x555555555555555;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = lVar6;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x22] = 0x555555555555555;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x21] = lVar6;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = 0x199999999999999;
  param_1[0x29] = 0;
  param_1[0x27] = lVar6;
  param_1[0x2b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x2c] = lVar6;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0x2d] = 0x199999999999999;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x35] = 0x199999999999999;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x34] = lVar6;
  param_1[0x38] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x30), lVar6 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  param_1[0x39] = lVar6;
  param_1[0x3a] = 0x199999999999999;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  FUN_0108959c(param_1 + 0x3f);
  FUN_0108959c(param_1 + 0x4c);
  piVar7 = (int *)param_1[8];
  if (piVar7 != (int *)0x0) {
    if ((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 != 0)) {
      puVar14 = (uint *)((long)piVar7 + uVar9);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      uVar9 = (ulong)*puVar14;
      if (*puVar14 != 0) {
        lVar5 = param_1[9];
        if ((ulong)((param_1[0xb] - lVar5 >> 4) * -0x5555555555555555) < uVar9) {
          plVar11 = param_1 + 0xc;
          lVar10 = param_1[10];
          lVar6 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar9 * 0x30,8);
          if (lVar6 == 0) {
            (**(code **)(*(long *)*plVar11 + 0xe8))();
          }
          lVar13 = lVar6 + (lVar10 - lVar5 >> 4) * 0x10;
          lVar5 = param_1[9];
          lVar10 = param_1[10];
          if (lVar10 == lVar5) {
            lVar12 = lVar13;
            lVar10 = lVar5;
          }
          else {
            lVar12 = lVar13 + -0x30;
            FUN_010897f8(plVar11,lVar12);
            if (lVar10 + -0x30 != lVar5) {
              do {
                lVar12 = lVar12 + -0x30;
                FUN_010897f8(plVar11,lVar12,lVar10 + -0x60);
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
            lVar5 = param_1[9];
            lVar10 = param_1[10];
          }
          param_1[9] = lVar12;
          param_1[10] = lVar13;
          lVar13 = param_1[0xb];
          param_1[0xb] = lVar6 + uVar9 * 0x30;
          if (lVar10 != lVar5) {
            if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
            }
            if (lVar10 + -0x30 != lVar5) {
              do {
                if (*(long **)(lVar10 + -0x40) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar10 + -0x40) + 0x20))();
                }
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
          }
          if (lVar5 != 0) {
            plVar11 = (long *)*plVar11;
            uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar13 - lVar5,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar5,lVar13 - lVar5,8);
            }
          }
        }
        if (*puVar14 != 0) {
          lVar5 = (ulong)*puVar14 << 2;
          do {
            puVar14 = puVar14 + 1;
            local_68 = (long)puVar14 + (ulong)*puVar14;
            uVar9 = param_1[10];
            if (uVar9 < (ulong)param_1[0xb]) {
              FUN_01089150(param_1 + 0xc,uVar9,&local_68);
              param_1[10] = uVar9 + 0x30;
            }
            else {
              FUN_01089e18(param_1 + 9,&local_68);
            }
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
      }
    }
    puVar1 = (undefined8 *)param_1[10];
    for (puVar8 = (undefined8 *)param_1[9]; puVar8 != puVar1; puVar8 = puVar8 + 6) {
      piVar7 = (int *)*puVar8;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar9 == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)((long)piVar7 + uVar9);
      }
      *(undefined4 *)(puVar8 + 5) = uVar15;
    }
    piVar7 = (int *)param_1[8];
    if ((6 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 != 0)) {
      puVar14 = (uint *)((long)piVar7 + uVar9);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      uVar9 = (ulong)*puVar14;
      if (*puVar14 != 0) {
        lVar5 = param_1[0x10];
        if ((ulong)((param_1[0x12] - lVar5 >> 4) * -0x5555555555555555) < uVar9) {
          plVar11 = param_1 + 0x13;
          lVar10 = param_1[0x11];
          lVar6 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar9 * 0x30,8);
          if (lVar6 == 0) {
            (**(code **)(*(long *)*plVar11 + 0xe8))();
          }
          lVar13 = lVar6 + (lVar10 - lVar5 >> 4) * 0x10;
          lVar5 = param_1[0x10];
          lVar10 = param_1[0x11];
          if (lVar10 == lVar5) {
            lVar12 = lVar13;
            lVar10 = lVar5;
          }
          else {
            lVar12 = lVar13 + -0x30;
            FUN_010898f8(plVar11,lVar12);
            if (lVar10 + -0x30 != lVar5) {
              do {
                lVar12 = lVar12 + -0x30;
                FUN_010898f8(plVar11,lVar12,lVar10 + -0x60);
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
            lVar5 = param_1[0x10];
            lVar10 = param_1[0x11];
          }
          param_1[0x10] = lVar12;
          param_1[0x11] = lVar13;
          lVar13 = param_1[0x12];
          param_1[0x12] = lVar6 + uVar9 * 0x30;
          if (lVar10 != lVar5) {
            if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
            }
            if (lVar10 + -0x30 != lVar5) {
              do {
                if (*(long **)(lVar10 + -0x40) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar10 + -0x40) + 0x20))();
                }
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
          }
          if (lVar5 != 0) {
            plVar11 = (long *)*plVar11;
            uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar13 - lVar5,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar5,lVar13 - lVar5,8);
            }
          }
        }
        if (*puVar14 != 0) {
          lVar5 = (ulong)*puVar14 << 2;
          do {
            puVar14 = puVar14 + 1;
            local_68 = (long)puVar14 + (ulong)*puVar14;
            uVar9 = param_1[0x11];
            if (uVar9 < (ulong)param_1[0x12]) {
              FUN_010892bc(param_1 + 0x13,uVar9,&local_68);
              param_1[0x11] = uVar9 + 0x30;
            }
            else {
              FUN_0108a044(param_1 + 0x10,&local_68);
            }
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
      }
    }
    puVar1 = (undefined8 *)param_1[0x11];
    for (puVar8 = (undefined8 *)param_1[0x10]; puVar8 != puVar1; puVar8 = puVar8 + 6) {
      piVar7 = (int *)*puVar8;
      uVar15 = 0;
      if (10 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
        uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5];
        uVar15 = 0;
        if (uVar9 != 0) {
          uVar15 = *(undefined4 *)((long)piVar7 + uVar9);
        }
      }
      *(undefined4 *)(puVar8 + 5) = uVar15;
    }
    piVar7 = (int *)param_1[8];
    if ((8 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar9 != 0)) {
      puVar14 = (uint *)((long)piVar7 + uVar9);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      uVar9 = (ulong)*puVar14;
      if (*puVar14 != 0) {
        lVar5 = param_1[0x17];
        if ((ulong)((param_1[0x19] - lVar5 >> 4) * -0x5555555555555555) < uVar9) {
          plVar11 = param_1 + 0x1a;
          lVar10 = param_1[0x18];
          lVar6 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar9 * 0x30,8);
          if (lVar6 == 0) {
            (**(code **)(*(long *)*plVar11 + 0xe8))();
          }
          lVar13 = lVar6 + (lVar10 - lVar5 >> 4) * 0x10;
          lVar5 = param_1[0x17];
          lVar10 = param_1[0x18];
          if (lVar10 == lVar5) {
            lVar12 = lVar13;
            lVar10 = lVar5;
          }
          else {
            lVar12 = lVar13 + -0x30;
            FUN_010899f8(plVar11,lVar12,lVar10 + -0x30);
            if (lVar10 + -0x30 != lVar5) {
              do {
                lVar12 = lVar12 + -0x30;
                FUN_010899f8(plVar11,lVar12,lVar10 + -0x60);
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
            lVar5 = param_1[0x17];
            lVar10 = param_1[0x18];
          }
          param_1[0x17] = lVar12;
          param_1[0x18] = lVar13;
          lVar13 = param_1[0x19];
          param_1[0x19] = lVar6 + uVar9 * 0x30;
          if (lVar10 != lVar5) {
            if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
            }
            if (lVar10 + -0x30 != lVar5) {
              do {
                if (*(long **)(lVar10 + -0x40) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar10 + -0x40) + 0x20))();
                }
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
          }
          if (lVar5 != 0) {
            plVar11 = (long *)*plVar11;
            uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar13 - lVar5,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar5,lVar13 - lVar5,8);
            }
          }
        }
        if (*puVar14 != 0) {
          lVar5 = (ulong)*puVar14 << 2;
          do {
            puVar14 = puVar14 + 1;
            local_68 = (long)puVar14 + (ulong)*puVar14;
            uVar9 = param_1[0x18];
            if (uVar9 < (ulong)param_1[0x19]) {
              FUN_01089428(param_1 + 0x1a,uVar9,&local_68);
              param_1[0x18] = uVar9 + 0x30;
            }
            else {
              FUN_01089bf8(param_1 + 0x17,&local_68);
            }
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
      }
    }
    puVar8 = (undefined8 *)param_1[0x17];
    puVar1 = (undefined8 *)param_1[0x18];
    if (puVar8 != puVar1) {
      piVar7 = (int *)*puVar8;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
         (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
      }
      *(bool *)(puVar8 + 5) = bVar3;
      if (puVar8 + 6 != puVar1) {
        piVar7 = (int *)puVar8[6];
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
           (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
        }
        *(bool *)(puVar8 + 0xb) = bVar3;
        if (puVar8 + 0xc != puVar1) {
          piVar7 = (int *)puVar8[0xc];
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
             (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
          }
          *(bool *)(puVar8 + 0x11) = bVar3;
          if (puVar8 + 0x12 != puVar1) {
            piVar7 = (int *)puVar8[0x12];
            if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
               (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
            }
            *(bool *)(puVar8 + 0x17) = bVar3;
            if (puVar8 + 0x18 != puVar1) {
              piVar7 = (int *)puVar8[0x18];
              if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
                 (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
              }
              *(bool *)(puVar8 + 0x1d) = bVar3;
              if (puVar8 + 0x1e != puVar1) {
                piVar7 = (int *)puVar8[0x1e];
                if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
                   (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
                }
                *(bool *)(puVar8 + 0x23) = bVar3;
                for (puVar8 = puVar8 + 0x24; puVar8 != puVar1; puVar8 = puVar8 + 6) {
                  piVar7 = (int *)*puVar8;
                  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
                     (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar9 == 0)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = *(char *)((long)piVar7 + uVar9) != '\0';
                  }
                  *(bool *)(puVar8 + 5) = bVar3;
                }
              }
            }
          }
        }
      }
    }
    piVar7 = (int *)param_1[8];
    if ((10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar9 != 0)) {
      puVar14 = (uint *)((long)piVar7 + uVar9);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      uVar9 = (ulong)*puVar14;
      if (*puVar14 != 0) {
        lVar5 = param_1[0x1e];
        if ((ulong)((param_1[0x20] - lVar5 >> 4) * -0x5555555555555555) < uVar9) {
          lVar10 = param_1[0x1f];
          plVar11 = param_1 + 0x21;
          lVar6 = (**(code **)(*(long *)param_1[0x21] + 0x10))((long *)param_1[0x21],uVar9 * 0x30,8)
          ;
          if (lVar6 == 0) {
            (**(code **)(*(long *)*plVar11 + 0xe8))();
          }
          lVar13 = lVar6 + (lVar10 - lVar5 >> 4) * 0x10;
          lVar5 = param_1[0x1e];
          lVar10 = param_1[0x1f];
          if (lVar10 == lVar5) {
            lVar12 = lVar13;
            lVar10 = lVar5;
          }
          else {
            lVar12 = lVar13 + -0x30;
            FUN_01089af8(plVar11,lVar12,lVar10 + -0x30);
            if (lVar10 + -0x30 != lVar5) {
              do {
                lVar12 = lVar12 + -0x30;
                FUN_01089af8(plVar11,lVar12,lVar10 + -0x60);
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
            lVar5 = param_1[0x1e];
            lVar10 = param_1[0x1f];
          }
          param_1[0x1e] = lVar12;
          param_1[0x1f] = lVar13;
          lVar13 = param_1[0x20];
          param_1[0x20] = lVar6 + uVar9 * 0x30;
          if (lVar10 != lVar5) {
            if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
            }
            if (lVar10 + -0x30 != lVar5) {
              do {
                if (*(long **)(lVar10 + -0x40) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar10 + -0x40) + 0x20))();
                }
                lVar10 = lVar10 + -0x30;
              } while (lVar5 + 0x30 != lVar10);
            }
          }
          if (lVar5 != 0) {
            plVar11 = (long *)*plVar11;
            uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,lVar13 - lVar5,8);
            }
            else {
              FUN_00c48fe8(plVar11,lVar5,lVar13 - lVar5,8);
            }
          }
        }
        if (*puVar14 != 0) {
          lVar5 = (ulong)*puVar14 << 2;
          do {
            puVar14 = puVar14 + 1;
            local_68 = (long)puVar14 + (ulong)*puVar14;
            uVar9 = param_1[0x1f];
            if (uVar9 < (ulong)param_1[0x20]) {
              FUN_01088fdc(param_1 + 0x21,uVar9,&local_68);
              param_1[0x1f] = uVar9 + 0x30;
            }
            else {
              FUN_0108a270(param_1 + 0x1e,&local_68);
            }
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
      }
    }
  }
  return;
}


