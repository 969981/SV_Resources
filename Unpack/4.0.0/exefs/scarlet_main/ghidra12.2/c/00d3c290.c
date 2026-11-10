/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d3c290; name: FUN_00d3c290
 */


long * FUN_00d3c290(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long lVar9;
  
  uVar8 = *param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar8;
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) || (plVar6[1] != uVar8 && (plVar6[1] & uVar4) != unaff_x24))
          goto LAB_00d3c378;
        } while (plVar6[2] != uVar8);
        goto LAB_00d3c320;
      }
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar4 * uVar7;
      }
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00d3c378;
          uVar4 = plVar6[1];
          if (uVar4 != uVar8) {
            if (uVar7 <= uVar4) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar1 * uVar7;
            }
            if (uVar4 != unaff_x24) goto LAB_00d3c378;
          }
        } while (plVar6[2] != uVar8);
        goto LAB_00d3c320;
      }
    }
  }
LAB_00d3c378:
  plVar6 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar9 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    plVar6[2] = *param_2;
    plVar6[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar6[2] = *param_2;
    plVar6[3] = 0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar8;
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    FUN_01610d58(param_1,uVar4);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else if (uVar8 < uVar7) {
      unaff_x24 = uVar8;
    }
    else {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar8 / uVar7;
      }
      unaff_x24 = uVar8 - uVar4 * uVar7;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar5;
    if (*plVar6 != 0) {
      uVar8 = *(ulong *)(*plVar6 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      plVar5 = (long *)(*param_1 + uVar8 * 8);
      goto LAB_00d3c428;
    }
  }
  else {
    *plVar6 = *plVar5;
LAB_00d3c428:
    *plVar5 = (long)plVar6;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_00d3c320:
  return plVar6 + 3;
}


