/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fdd4c; name: FUN_017fdd4c
 */


void FUN_017fdd4c(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  float fVar10;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [104];
  long *local_48 [5];
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar4 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar4;
  local_d0 = &LAB_0114440c;
  local_c8 = FUN_02a20cb8;
  plVar1 = (long *)(lVar4 + 0xb1c8);
  local_c0 = &LAB_02a20cbc;
  puStack_b8 = &LAB_02a20cc8;
  uVar8 = *param_1;
  uVar9 = *(ulong *)(lVar4 + 0xb1d0);
  if (uVar9 != 0) {
    uVar6 = uVar9 - 1;
    if ((uVar9 & uVar6) == 0) {
      unaff_x22 = uVar6 & uVar8;
      plVar7 = *(long **)(*plVar1 + unaff_x22 * 8);
      if (plVar7 != (long *)0x0) {
        pcVar5 = FUN_02a20cb8;
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) || (plVar7[1] != uVar8 && (plVar7[1] & uVar6) != unaff_x22))
          goto LAB_017fdea0;
        } while (plVar7[2] != uVar8);
        goto LAB_017fdf0c;
      }
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar6 * uVar9;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x22 * 8);
      if (plVar7 != (long *)0x0) {
        pcVar5 = FUN_02a20cb8;
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_017fdea0;
          uVar6 = plVar7[1];
          if (uVar6 != uVar8) {
            if (uVar9 <= uVar6) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar2 * uVar9;
            }
            if (uVar6 != unaff_x22) goto LAB_017fdea0;
          }
        } while (plVar7[2] != uVar8);
        goto LAB_017fdf0c;
      }
    }
  }
LAB_017fdea0:
  FUN_011c70f8(local_48,plVar1,uVar8,param_1,&local_d0);
  fVar10 = (float)(*(long *)(lVar4 + 0xb1f0) + 1);
  if ((uVar9 == 0) || (*(float *)(lVar4 + 0xb1f8) * (float)uVar9 < fVar10)) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)(fVar10 / *(float *)(lVar4 + 0xb1f8));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    FUN_014e0c70(plVar1,uVar6);
    uVar9 = *(ulong *)(lVar4 + 0xb1d0);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else if (uVar8 < uVar9) {
      unaff_x22 = uVar8;
    }
    else {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar8 / uVar9;
      }
      unaff_x22 = uVar8 - uVar6 * uVar9;
    }
  }
  plVar7 = *(long **)(*plVar1 + unaff_x22 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(lVar4 + 0xb1e0);
    *local_48[0] = *plVar7;
    *plVar7 = (long)local_48[0];
    *(long **)(*plVar1 + unaff_x22 * 8) = plVar7;
    if (*local_48[0] != 0) {
      uVar8 = *(ulong *)(*local_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar6 * uVar9;
      }
      *(long **)(*plVar1 + uVar8 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar7;
    *plVar7 = (long)local_48[0];
  }
  *(long *)(lVar4 + 0xb1f0) = *(long *)(lVar4 + 0xb1f0) + 1;
  pcVar5 = local_c8;
  if (local_c8 == (code *)0x0) {
    return;
  }
LAB_017fdf0c:
  local_c0 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  (*pcVar5)(auStack_b0);
  return;
}


