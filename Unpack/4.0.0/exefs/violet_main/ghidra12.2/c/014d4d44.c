/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014d4d44; name: FUN_014d4d44
 */


void FUN_014d4d44(long *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x26;
  long lVar10;
  
  bVar1 = *param_2;
  uVar9 = (ulong)bVar1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x26 = (int)uVar8 - 1 & uVar9;
      plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar5 != (long *)0x0) {
        while ((plVar5 = (long *)*plVar5, plVar5 != (long *)0x0 &&
               (plVar5[1] == uVar9 || (plVar5[1] & uVar8 - 1) == unaff_x26))) {
          if (*(byte *)(plVar5 + 2) == bVar1) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar9;
      if (uVar8 <= uVar9) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar9 / uVar8;
        }
        unaff_x26 = uVar9 - uVar7 * uVar8;
      }
      plVar5 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar5 != (long *)0x0) {
        while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
          uVar7 = plVar5[1];
          if (uVar7 != uVar9) {
            if (uVar8 <= uVar7) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar2 * uVar8;
            }
            if (uVar7 != unaff_x26) break;
          }
          if (*(byte *)(plVar5 + 2) == bVar1) {
            return;
          }
        }
      }
    }
  }
  plVar5 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x80,8);
  if (plVar5 == (long *)0x0) {
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
    *(byte *)(plVar5 + 2) = *param_2;
    FUN_014d5488(plVar5 + 3,param_3);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(byte *)(plVar5 + 2) = *param_2;
    FUN_014d5488(plVar5 + 3,param_3);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar5 = 0;
  plVar5[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    FUN_014d5048(param_1,uVar7);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x26 = (int)uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x26 = uVar9;
    }
    else {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      unaff_x26 = uVar9 - uVar7 * uVar8;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar5 = *plVar6;
    *plVar6 = (long)plVar5;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar6;
    if (*plVar5 == 0) goto LAB_014d4f40;
    uVar9 = *(ulong *)(*plVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar7 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar5 = *plVar6;
  }
  *plVar6 = (long)plVar5;
LAB_014d4f40:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


