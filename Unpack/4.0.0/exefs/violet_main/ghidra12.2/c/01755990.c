/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01755990; name: FUN_01755990
 */


long * FUN_01755990(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long lVar10;
  
  uVar1 = *param_2;
  uVar9 = (ulong)uVar1;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar8 - 1U & uVar1);
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar9 && (plVar7[1] & uVar8 - 1) != unaff_x24)) goto LAB_017559fc;
        } while (*(uint *)(plVar7 + 2) != uVar1);
        goto LAB_01755b5c;
      }
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017559fc;
          uVar6 = plVar7[1];
          if (uVar6 != uVar9) {
            if (uVar8 <= uVar6) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar2 * uVar8;
            }
            if (uVar6 != unaff_x24) goto LAB_017559fc;
          }
        } while (*(uint *)(plVar7 + 2) != uVar1);
        goto LAB_01755b5c;
      }
    }
  }
LAB_017559fc:
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
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
    *(uint *)(plVar7 + 2) = *param_2;
    plVar7[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *(uint *)(plVar7 + 2) = *param_2;
    plVar7[3] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar8 < (float)(param_1[0xb] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    FUN_01755c90(param_1,uVar6);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar8 - 1U & uVar1);
    }
    else if (uVar9 < uVar8) {
      unaff_x24 = uVar9;
    }
    else {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar9 / uVar8;
      }
      unaff_x24 = uVar9 - uVar6 * uVar8;
    }
  }
  plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar5;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar6 * uVar8;
      }
      plVar5 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_01755b4c;
    }
  }
  else {
    *plVar7 = *plVar5;
LAB_01755b4c:
    *plVar5 = (long)plVar7;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_01755b5c:
  return plVar7 + 3;
}


