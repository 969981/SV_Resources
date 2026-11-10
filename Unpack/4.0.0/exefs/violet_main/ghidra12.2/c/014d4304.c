/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014d4304; name: FUN_014d4304
 */


void FUN_014d4304(long *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plStack_50;
  undefined1 local_48;
  
  plVar12 = param_1 + 7;
  plVar7 = (long *)(**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,0x50,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)*plVar12 + 0xe8))();
  }
  local_48 = 0;
  lVar14 = *plVar12;
  plStack_50 = plVar12;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  uVar3 = *param_2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(char *)(plVar7 + 2) = (char)uVar3;
  lVar14 = param_3[3];
  lVar1 = param_3[4];
  lVar2 = param_3[6];
  plVar7[8] = param_3[5];
  plVar7[9] = lVar2;
  plVar7[6] = lVar14;
  plVar7[7] = lVar1;
  plVar7[3] = *param_3;
  plVar7[4] = param_3[1];
  plVar7[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  local_48 = 1;
  bVar4 = *(byte *)(plVar7 + 2);
  uVar10 = (ulong)bVar4;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar11 = (int)uVar9 - 1 & uVar10;
      plVar12 = *(long **)(*param_1 + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) || ((plVar12[1] & uVar9 - 1) != uVar11)) goto LAB_014d442c;
        } while (*(byte *)(plVar12 + 2) != bVar4);
        goto LAB_014d4600;
      }
    }
    else {
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar10 / uVar9;
        }
        uVar11 = uVar10 - uVar11 * uVar9;
      }
      plVar12 = *(long **)(*param_1 + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_014d442c;
          uVar13 = plVar12[1];
          if (uVar9 <= uVar13) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar5 * uVar9;
          }
          if (uVar13 != uVar11) goto LAB_014d442c;
        } while (*(byte *)(plVar12 + 2) != bVar4);
LAB_014d4600:
        if (plVar7 == (long *)0x0) {
          return;
        }
        FUN_01e5caf4(&plStack_50,plVar7);
        return;
      }
    }
  }
LAB_014d442c:
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_014d4670(param_1,uVar10);
    uVar9 = param_1[1];
    uVar10 = plVar7[1];
  }
  uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar10 = uVar9 - 1 & uVar10;
  }
  else if (uVar9 <= uVar10) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar10 / uVar9;
    }
    uVar10 = uVar10 - uVar13 * uVar9;
  }
  plVar12 = *(long **)(*param_1 + uVar10 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 6;
    *plVar7 = *plVar12;
    *plVar12 = (long)plVar7;
    *(long **)(*param_1 + uVar10 * 8) = plVar12;
    if (*plVar7 == 0) goto LAB_014d44ec;
    uVar10 = *(ulong *)(*plVar7 + 8);
    if (uVar11 < 2) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar11 * uVar9;
    }
    plVar12 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar7 = *plVar12;
  }
  *plVar12 = (long)plVar7;
LAB_014d44ec:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


