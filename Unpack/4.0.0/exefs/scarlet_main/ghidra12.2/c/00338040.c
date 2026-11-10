/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00338040; name: FUN_00338040
 */


long * FUN_00338040(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long lVar10;
  long lVar11;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar9 = (ulong)*(byte *)(param_2 + 1);
    lVar5 = (long)param_2 + 9;
LAB_003380b8:
    uVar7 = FUN_0038cbd0(lVar5,uVar9,*(undefined4 *)PTR_DAT_047cc650);
    uVar9 = param_1[1];
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    if (*(int *)(lVar5 + 8) == 1) {
      uVar1 = *(uint *)(lVar5 + 0x60);
      uVar9 = param_1[1];
    }
    else {
      if (*(int *)(lVar5 + 8) != 0) {
        uVar9 = param_2[1];
        lVar5 = param_2[2];
        goto LAB_003380b8;
      }
      uVar1 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar5 + 0x28) * 4);
      uVar9 = param_1[1];
    }
    uVar7 = (ulong)uVar1;
  }
  if (uVar9 != 0) {
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & uVar7;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar7 && (plVar4[1] & uVar9 - 1) != unaff_x24)) goto LAB_00338164;
          lStack_58 = plVar4[3];
          local_60 = plVar4[2];
          lStack_48 = plVar4[5];
          lStack_50 = plVar4[4];
          lStack_78 = param_2[1];
          local_80 = *param_2;
          lStack_68 = param_2[3];
          lStack_70 = param_2[2];
          iVar3 = FUN_00368020(&local_60,&local_80);
        } while (iVar3 == 0);
        goto LAB_003382f0;
      }
    }
    else {
      if (uVar7 < uVar9) {
        plVar4 = *(long **)(*param_1 + uVar7 * 8);
        unaff_x24 = uVar7;
      }
      else {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        unaff_x24 = uVar7 - uVar8 * uVar9;
        plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
      }
      if (plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00338164;
          uVar8 = plVar4[1];
          if (uVar8 != uVar7) {
            if (uVar9 <= uVar8) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar8 / uVar9;
              }
              uVar8 = uVar8 - uVar2 * uVar9;
            }
            if (uVar8 != unaff_x24) goto LAB_00338164;
          }
          lStack_58 = plVar4[3];
          local_60 = plVar4[2];
          lStack_48 = plVar4[5];
          lStack_50 = plVar4[4];
          lStack_78 = param_2[1];
          local_80 = *param_2;
          lStack_68 = param_2[3];
          lStack_70 = param_2[2];
          iVar3 = FUN_00368020(&local_60,&local_80);
        } while (iVar3 == 0);
        goto LAB_003382f0;
      }
    }
  }
LAB_00338164:
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x38);
  lVar11 = *param_2;
  lVar10 = param_2[3];
  lVar5 = param_2[2];
  plVar4[3] = param_2[1];
  plVar4[2] = lVar11;
  plVar4[5] = lVar10;
  plVar4[4] = lVar5;
  plVar4[6] = 0;
  *plVar4 = 0;
  plVar4[1] = uVar7;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
                    /* try { // try from 003381d8 to 003381df has its CatchHandler @ 0033830c */
    FUN_0033891c(param_1,uVar8);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & uVar7;
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      if (uVar7 < uVar9) {
        unaff_x24 = uVar7;
        goto LAB_00338264;
      }
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar7 / uVar9;
      }
      unaff_x24 = uVar7 - uVar8 * uVar9;
      plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar6 != (long *)0x0) goto LAB_00338270;
LAB_00338290:
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar7 = *(ulong *)(*plVar4 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar8 * uVar9;
      }
      plVar6 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_003382e0;
    }
  }
  else {
LAB_00338264:
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) goto LAB_00338290;
LAB_00338270:
    *plVar4 = *plVar6;
LAB_003382e0:
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
LAB_003382f0:
  return plVar4 + 6;
}


