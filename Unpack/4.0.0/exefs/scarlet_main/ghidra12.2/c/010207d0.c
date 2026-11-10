/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010207d0; name: FUN_010207d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010207d0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x26;
  undefined8 uVar11;
  
  FUN_010186a4();
  *param_1 = &PTR_LAB_04563db8;
  param_1[4] = &PTR_LAB_04563f18;
  param_1[5] = &DAT_04564040;
  param_1[6] = &PTR_LAB_04564098;
  param_1[7] = &PTR_LAB_045640c0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar6 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (plVar7 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), plVar7 == (long *)0x0)) &&
     (plVar7 = *(long **)(lVar6 + 0x30), plVar7 == (long *)0x0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = plVar7;
  param_1[0x32] = 0;
  param_1[0x2f] = 0x7ffffffffffffff;
  param_1[0x30] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (plVar7 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), plVar7 == (long *)0x0)) &&
     (plVar7 = *(long **)(lVar6 + 0x30), plVar7 == (long *)0x0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  uVar3 = _UNK_03cabe58;
  uVar11 = _DAT_03cabe50;
  param_1[0x34] = 0x7ffffffffffffff;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  param_1[0x39] = 0x1010001;
  param_1[0x3a] = 0x1010001;
  *(undefined4 *)(param_1 + 0x36) = 0;
  plVar1 = param_1 + 0x2c;
  param_1[0x37] = 0;
  param_1[0x33] = plVar7;
  param_1[0x40] = 0x3f00000000000000;
  param_1[0x3d] = uVar3;
  param_1[0x3c] = uVar11;
  param_1[0x3f] = uVar3;
  param_1[0x3e] = uVar11;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 8;
  param_1[0x48] = 0x3f00000000000000;
  param_1[0x45] = uVar3;
  param_1[0x44] = uVar11;
  param_1[0x47] = uVar3;
  param_1[0x46] = uVar11;
  param_1[0x49] = 0;
  uVar10 = param_1[0x2d];
  *(undefined4 *)(param_1 + 0x4a) = 8;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  if (uVar10 == 0) {
LAB_01020990:
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x30,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x33] + 0xe8))();
    }
    uVar11 = param_1[0x33];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01021a14;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar7[2] = -0x453dd825c9e3bc42;
    plVar7[3] = -0x453dd825c9e3bc42;
    plVar7[4] = (long)"ride_climbing_short";
    plVar7[5] = 0x13;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar7 = 0;
    plVar7[1] = -0x453dd825c9e3bc42;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1)))
    {
      uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
      uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_01021aa4(plVar1,uVar8);
      uVar10 = param_1[0x2d];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & 0xbac227da361c43be;
      }
      else if (uVar10 < 0xbac227da361c43bf) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0xbac227da361c43be / uVar10;
        }
        unaff_x26 = 0xbac227da361c43be - uVar8 * uVar10;
      }
      else {
        unaff_x26 = 0xbac227da361c43be;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar7 = param_1[0x32];
      param_1[0x32] = plVar7;
      *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
      if (*plVar7 != 0) {
        uVar8 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar8 = uVar8 & uVar10 - 1;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        plVar9 = (long *)(*plVar1 + uVar8 * 8);
        goto LAB_01020a54;
      }
    }
    else {
      *plVar7 = *plVar9;
LAB_01020a54:
      *plVar9 = (long)plVar7;
    }
    uVar10 = param_1[0x2d];
    param_1[0x37] = param_1[0x37] + 1;
  }
  else {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0xbac227da361c43be;
      plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar9 == (long *)0x0) goto LAB_01020990;
      do {
        plVar9 = (long *)*plVar9;
        if ((plVar9 == (long *)0x0) ||
           (plVar9[1] != 0xbac227da361c43be && (plVar9[1] & uVar8) != unaff_x26)) goto LAB_01020990;
      } while (plVar9[2] != -0x453dd825c9e3bc42);
    }
    else {
      unaff_x26 = 0xbac227da361c43be;
      if (uVar10 < 0xbac227da361c43bf) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0xbac227da361c43be / uVar10;
        }
        unaff_x26 = 0xbac227da361c43be - uVar8 * uVar10;
      }
      plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar9 == (long *)0x0) goto LAB_01020990;
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_01020990;
        uVar8 = plVar9[1];
        if (uVar8 != 0xbac227da361c43be) {
          if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x26) goto LAB_01020990;
        }
      } while (plVar9[2] != -0x453dd825c9e3bc42);
    }
  }
  if (uVar10 == 0) {
LAB_01020b10:
    plVar7 = (long *)(**(code **)(*(long *)param_1[0x33] + 0x10))((long *)param_1[0x33],0x30,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x33] + 0xe8))();
    }
    uVar11 = param_1[0x33];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01021a14;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar7[2] = 0x5f1b698bc52e3a3;
    plVar7[3] = 0x5f1b698bc52e3a3;
    plVar7[4] = (long)"ride_climbing_short_drunk";
    plVar7[5] = 0x19;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar7 = 0;
    plVar7[1] = 0x5f1b698bc52e3a3;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1)))
    {
      uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
      uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_01021aa4(plVar1,uVar8);
      uVar10 = param_1[0x2d];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & 0x5f1b698bc52e3a3;
      }
      else if (uVar10 < 0x5f1b698bc52e3a4) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x5f1b698bc52e3a3 / uVar10;
        }
        unaff_x26 = 0x5f1b698bc52e3a3 - uVar8 * uVar10;
      }
      else {
        unaff_x26 = 0x5f1b698bc52e3a3;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar7 = param_1[0x32];
      param_1[0x32] = plVar7;
      *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
      if (*plVar7 != 0) {
        uVar8 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar8 = uVar8 & uVar10 - 1;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        plVar9 = (long *)(*plVar1 + uVar8 * 8);
        goto LAB_01020bd4;
      }
    }
    else {
      *plVar7 = *plVar9;
LAB_01020bd4:
      *plVar9 = (long)plVar7;
    }
    uVar10 = param_1[0x2d];
    param_1[0x37] = param_1[0x37] + 1;
  }
  else {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0x5f1b698bc52e3a3;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020b10;
      do {
        plVar7 = (long *)*plVar7;
        if ((plVar7 == (long *)0x0) ||
           (plVar7[1] != 0x5f1b698bc52e3a3 && (plVar7[1] & uVar8) != unaff_x26)) goto LAB_01020b10;
      } while (plVar7[2] != 0x5f1b698bc52e3a3);
    }
    else {
      unaff_x26 = 0x5f1b698bc52e3a3;
      if (uVar10 < 0x5f1b698bc52e3a4) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x5f1b698bc52e3a3 / uVar10;
        }
        unaff_x26 = 0x5f1b698bc52e3a3 - uVar8 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020b10;
      do {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01020b10;
        uVar8 = plVar7[1];
        if (uVar8 != 0x5f1b698bc52e3a3) {
          if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x26) goto LAB_01020b10;
        }
      } while (plVar7[2] != 0x5f1b698bc52e3a3);
    }
  }
  if (uVar10 == 0) {
LAB_01020c90:
    plVar7 = (long *)(**(code **)(*(long *)param_1[0x33] + 0x10))((long *)param_1[0x33],0x30,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x33] + 0xe8))();
    }
    uVar11 = param_1[0x33];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01021a14;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar7[2] = 0x197e6883595c9361;
    plVar7[3] = 0x197e6883595c9361;
    plVar7[4] = (long)"ride_climbing_middle";
    plVar7[5] = 0x14;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar7 = 0;
    plVar7[1] = 0x197e6883595c9361;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1)))
    {
      uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
      uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_01021aa4(plVar1,uVar8);
      uVar10 = param_1[0x2d];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & 0x197e6883595c9361;
      }
      else if (uVar10 < 0x197e6883595c9362) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x197e6883595c9361 / uVar10;
        }
        unaff_x26 = 0x197e6883595c9361 - uVar8 * uVar10;
      }
      else {
        unaff_x26 = 0x197e6883595c9361;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar7 = param_1[0x32];
      param_1[0x32] = plVar7;
      *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
      if (*plVar7 != 0) {
        uVar8 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar8 = uVar8 & uVar10 - 1;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        plVar9 = (long *)(*plVar1 + uVar8 * 8);
        goto LAB_01020d54;
      }
    }
    else {
      *plVar7 = *plVar9;
LAB_01020d54:
      *plVar9 = (long)plVar7;
    }
    uVar10 = param_1[0x2d];
    param_1[0x37] = param_1[0x37] + 1;
  }
  else {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0x197e6883595c9361;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020c90;
      do {
        plVar7 = (long *)*plVar7;
        if ((plVar7 == (long *)0x0) ||
           (plVar7[1] != 0x197e6883595c9361 && (plVar7[1] & uVar8) != unaff_x26)) goto LAB_01020c90;
      } while (plVar7[2] != 0x197e6883595c9361);
    }
    else {
      unaff_x26 = 0x197e6883595c9361;
      if (uVar10 < 0x197e6883595c9362) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x197e6883595c9361 / uVar10;
        }
        unaff_x26 = 0x197e6883595c9361 - uVar8 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020c90;
      do {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01020c90;
        uVar8 = plVar7[1];
        if (uVar8 != 0x197e6883595c9361) {
          if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x26) goto LAB_01020c90;
        }
      } while (plVar7[2] != 0x197e6883595c9361);
    }
  }
  if (uVar10 == 0) {
LAB_01020e10:
    plVar7 = (long *)(**(code **)(*(long *)param_1[0x33] + 0x10))((long *)param_1[0x33],0x30,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x33] + 0xe8))();
    }
    uVar11 = param_1[0x33];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01021a14;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar7[2] = 0x5baa30a6ebd25a50;
    plVar7[3] = 0x5baa30a6ebd25a50;
    plVar7[4] = (long)"ride_climbing_middle_drunk";
    plVar7[5] = 0x1a;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar7 = 0;
    plVar7[1] = 0x5baa30a6ebd25a50;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1)))
    {
      uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
      uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_01021aa4(plVar1,uVar8);
      uVar10 = param_1[0x2d];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & 0x5baa30a6ebd25a50;
      }
      else if (uVar10 < 0x5baa30a6ebd25a51) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x5baa30a6ebd25a50 / uVar10;
        }
        unaff_x26 = 0x5baa30a6ebd25a50 - uVar8 * uVar10;
      }
      else {
        unaff_x26 = 0x5baa30a6ebd25a50;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar7 = param_1[0x32];
      param_1[0x32] = plVar7;
      *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
      if (*plVar7 != 0) {
        uVar8 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar8 = uVar8 & uVar10 - 1;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        plVar9 = (long *)(*plVar1 + uVar8 * 8);
        goto LAB_01020ed4;
      }
    }
    else {
      *plVar7 = *plVar9;
LAB_01020ed4:
      *plVar9 = (long)plVar7;
    }
    uVar10 = param_1[0x2d];
    param_1[0x37] = param_1[0x37] + 1;
  }
  else {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0x5baa30a6ebd25a50;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020e10;
      do {
        plVar7 = (long *)*plVar7;
        if ((plVar7 == (long *)0x0) ||
           (plVar7[1] != 0x5baa30a6ebd25a50 && (plVar7[1] & uVar8) != unaff_x26)) goto LAB_01020e10;
      } while (plVar7[2] != 0x5baa30a6ebd25a50);
    }
    else {
      unaff_x26 = 0x5baa30a6ebd25a50;
      if (uVar10 < 0x5baa30a6ebd25a51) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x5baa30a6ebd25a50 / uVar10;
        }
        unaff_x26 = 0x5baa30a6ebd25a50 - uVar8 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020e10;
      do {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01020e10;
        uVar8 = plVar7[1];
        if (uVar8 != 0x5baa30a6ebd25a50) {
          if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x26) goto LAB_01020e10;
        }
      } while (plVar7[2] != 0x5baa30a6ebd25a50);
    }
  }
  if (uVar10 == 0) {
LAB_01020f90:
    plVar7 = (long *)(**(code **)(*(long *)param_1[0x33] + 0x10))((long *)param_1[0x33],0x30,8);
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x33] + 0xe8))();
    }
    uVar11 = param_1[0x33];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01021a14;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar7[2] = 0x51fb47e332e4b092;
    plVar7[3] = 0x51fb47e332e4b092;
    plVar7[4] = (long)"ride_climbing_long";
    plVar7[5] = 0x12;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar7 = 0;
    plVar7[1] = 0x51fb47e332e4b092;
    if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1)))
    {
      uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
      uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_01021aa4(plVar1,uVar8);
      uVar10 = param_1[0x2d];
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_x26 = uVar10 - 1 & 0x51fb47e332e4b092;
      }
      else if (uVar10 < 0x51fb47e332e4b093) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x51fb47e332e4b092 / uVar10;
        }
        unaff_x26 = 0x51fb47e332e4b092 - uVar8 * uVar10;
      }
      else {
        unaff_x26 = 0x51fb47e332e4b092;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar7 = param_1[0x32];
      param_1[0x32] = plVar7;
      *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
      if (*plVar7 != 0) {
        uVar8 = *(ulong *)(*plVar7 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar8 = uVar8 & uVar10 - 1;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        plVar9 = (long *)(*plVar1 + uVar8 * 8);
        goto LAB_01021054;
      }
    }
    else {
      *plVar7 = *plVar9;
LAB_01021054:
      *plVar9 = (long)plVar7;
    }
    uVar10 = param_1[0x2d];
    param_1[0x37] = param_1[0x37] + 1;
  }
  else {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0x51fb47e332e4b092;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020f90;
      do {
        plVar7 = (long *)*plVar7;
        if ((plVar7 == (long *)0x0) ||
           (plVar7[1] != 0x51fb47e332e4b092 && (plVar7[1] & uVar8) != unaff_x26)) goto LAB_01020f90;
      } while (plVar7[2] != 0x51fb47e332e4b092);
    }
    else {
      unaff_x26 = 0x51fb47e332e4b092;
      if (uVar10 < 0x51fb47e332e4b093) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0x51fb47e332e4b092 / uVar10;
        }
        unaff_x26 = 0x51fb47e332e4b092 - uVar8 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 == (long *)0x0) goto LAB_01020f90;
      do {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_01020f90;
        uVar8 = plVar7[1];
        if (uVar8 != 0x51fb47e332e4b092) {
          if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x26) goto LAB_01020f90;
        }
      } while (plVar7[2] != 0x51fb47e332e4b092);
    }
  }
  if (uVar10 != 0) {
    uVar8 = uVar10 - 1;
    if ((uVar10 & uVar8) == 0) {
      unaff_x26 = uVar8 & 0xd7d1cb9da171e127;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 != (long *)0x0) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == 0xd7d1cb9da171e127 || (plVar7[1] & uVar8) == unaff_x26))) {
          if (plVar7[2] == -0x282e34625e8e1ed9) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = 0xd7d1cb9da171e127;
      if (uVar10 < 0xd7d1cb9da171e128) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = 0xd7d1cb9da171e127 / uVar10;
        }
        unaff_x26 = 0xd7d1cb9da171e127 - uVar8 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 != (long *)0x0) {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if (uVar8 != 0xd7d1cb9da171e127) {
            if (uVar10 <= uVar8) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar8 / uVar10;
              }
              uVar8 = uVar8 - uVar2 * uVar10;
            }
            if (uVar8 != unaff_x26) break;
          }
          if (plVar7[2] == -0x282e34625e8e1ed9) {
            return;
          }
        }
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[0x33] + 0x10))((long *)param_1[0x33],0x30,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[0x33] + 0xe8))();
  }
  uVar11 = param_1[0x33];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01021a14:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar7[2] = -0x282e34625e8e1ed9;
  plVar7[3] = -0x282e34625e8e1ed9;
  plVar7[4] = (long)"ride_climbing_long_drunk";
  plVar7[5] = 0x18;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = -0x282e34625e8e1ed9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0x38) * (float)uVar10 < (float)(param_1[0x37] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar8 = (ulong)((float)(param_1[0x37] + 1) / *(float *)(param_1 + 0x38));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    FUN_01021aa4(plVar1,uVar8);
    uVar10 = param_1[0x2d];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & 0xd7d1cb9da171e127;
    }
    else if (uVar10 < 0xd7d1cb9da171e128) {
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar8 = 0xd7d1cb9da171e127 / uVar10;
      }
      unaff_x26 = 0xd7d1cb9da171e127 - uVar8 * uVar10;
    }
    else {
      unaff_x26 = 0xd7d1cb9da171e127;
    }
  }
  plVar9 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar7 = param_1[0x32];
    param_1[0x32] = plVar7;
    *(undefined8 **)(param_1[0x2c] + unaff_x26 * 8) = param_1 + 0x32;
    if (*plVar7 == 0) goto LAB_010211d8;
    uVar8 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar8 = uVar8 & uVar10 - 1;
    }
    else if (uVar10 <= uVar8) {
      uVar2 = 0;
      if (uVar10 != 0) {
        uVar2 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar2 * uVar10;
    }
    plVar9 = (long *)(*plVar1 + uVar8 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_010211d8:
  param_1[0x37] = param_1[0x37] + 1;
  return;
}


