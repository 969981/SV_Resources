/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012092b8; name: FUN_012092b8
 */


long * FUN_012092b8(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  ulong uVar9;
  long lVar10;
  
  bVar1 = *param_2;
  uVar9 = (ulong)bVar1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = (int)uVar8 - 1 & uVar9;
      plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar9 && (plVar7[1] & uVar8 - 1) != unaff_x23)) goto LAB_01209350;
        } while (*(byte *)(plVar7 + 2) != bVar1);
        goto LAB_01209490;
      }
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar5 * uVar8;
      }
      plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_01209350;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) {
            if (uVar8 <= uVar5) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar2 * uVar8;
            }
            if (uVar5 != unaff_x23) goto LAB_01209350;
          }
        } while (*(byte *)(plVar7 + 2) != bVar1);
        goto LAB_01209490;
      }
    }
  }
LAB_01209350:
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x58,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar10 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    bVar1 = *param_2;
    plVar7[5] = 0;
    plVar7[6] = 0;
    *(byte *)(plVar7 + 2) = bVar1;
    plVar7[7] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[3] = (long)&PTR_FUN_04545070;
    plVar7[4] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(byte *)(plVar7 + 2) = *param_2;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[3] = (long)&PTR_FUN_04545070;
    plVar7[4] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    FUN_012095e8(param_1,uVar5);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = (int)uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x23 = uVar9;
    }
    else {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      unaff_x23 = uVar9 - uVar5 * uVar8;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(*param_1 + unaff_x23 * 8) = plVar6;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar5 * uVar8;
      }
      plVar6 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_012094b4;
    }
  }
  else {
    *plVar7 = *plVar6;
LAB_012094b4:
    *plVar6 = (long)plVar7;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_01209490:
  return plVar7 + 3;
}


