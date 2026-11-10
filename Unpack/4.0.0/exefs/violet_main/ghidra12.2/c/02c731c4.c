/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c731c4; name: FUN_02c731c4
 */


void FUN_02c731c4(long *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  
  iVar2 = *param_2;
  uVar9 = (ulong)iVar2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar9;
      plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar6 != (long *)0x0) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar9 || (plVar6[1] & uVar4) == unaff_x25))) {
          if (*(int *)(plVar6 + 2) == iVar2) {
            return;
          }
        }
      }
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar4 * uVar8;
      }
      plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar6 != (long *)0x0) {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar4 = plVar6[1];
          if (uVar4 != uVar9) {
            if (uVar8 <= uVar4) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar1 * uVar8;
            }
            if (uVar4 != unaff_x25) break;
          }
          if (*(int *)(plVar6 + 2) == iVar2) {
            return;
          }
        }
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x78,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar10 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *(int *)(plVar6 + 2) = *param_2;
  lVar10 = *param_3;
  lVar7 = param_3[1];
  *(short *)(plVar6 + 5) = (short)param_3[2];
  plVar6[3] = lVar10;
  plVar6[4] = lVar7;
  lVar10 = param_3[3];
  param_3[3] = 0;
  plVar6[6] = lVar10;
  lVar7 = param_3[6];
  lVar10 = param_3[5];
  plVar6[7] = param_3[4];
  plVar6[8] = lVar10;
  plVar6[9] = lVar7;
  plVar6[10] = param_3[7];
  lVar10 = param_3[8];
  param_3[8] = 0;
  plVar6[0xb] = lVar10;
  lVar10 = param_3[9];
  lVar7 = param_3[0xb];
  plVar6[0xd] = param_3[10];
  plVar6[0xe] = lVar7;
  plVar6[0xc] = lVar10;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    FUN_02c74e08(param_1,uVar4);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x25 = uVar9;
    }
    else {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
      unaff_x25 = uVar9 - uVar4 * uVar8;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar5;
    if (*plVar6 == 0) goto LAB_02c73470;
    uVar9 = *(ulong *)(*plVar6 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar6 = *plVar5;
  }
  *plVar5 = (long)plVar6;
LAB_02c73470:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


