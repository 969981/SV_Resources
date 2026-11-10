/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c4230; name: FUN_004c4230
 */


undefined4 FUN_004c4230(long *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  byte *__s2;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar7 = 0;
    uVar6 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar5 = __s2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 * 5 + (ulong)bVar3;
      bVar3 = *pbVar5;
    } while (bVar3 != 0);
    uVar6 = param_1[1];
  }
  if (uVar6 != 0) {
    uVar8 = uVar6 - 1;
    if ((uVar6 & uVar8) == 0) {
      unaff_x24 = uVar8 & uVar7;
      plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar7 || (plVar9[1] & uVar8) == unaff_x24))) {
          iVar2 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
    }
    else {
      if (uVar7 < uVar6) {
        plVar9 = *(long **)(*param_1 + uVar7 * 8);
        unaff_x24 = uVar7;
      }
      else {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        unaff_x24 = uVar7 - uVar8 * uVar6;
        plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
      }
      if (plVar9 != (long *)0x0) {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar8 = plVar9[1];
          if (uVar8 != uVar7) {
            if (uVar6 <= uVar8) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar1 * uVar6;
            }
            if (uVar8 != unaff_x24) break;
          }
          iVar2 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
    }
  }
  plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  lVar11 = param_2[1];
  lVar10 = *param_2;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  plVar9[3] = lVar11;
  plVar9[2] = lVar10;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
                    /* try { // try from 004c4374 to 004c437b has its CatchHandler @ 004c4494 */
    FUN_004c16bc(param_1,uVar8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar7;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      if (uVar7 < uVar6) {
        unaff_x24 = uVar7;
        goto LAB_004c43ec;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar7 / uVar6;
      }
      unaff_x24 = uVar7 - uVar8 * uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 == (long *)0x0) goto LAB_004c4418;
LAB_004c43f8:
    *plVar9 = *plVar4;
  }
  else {
LAB_004c43ec:
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) goto LAB_004c43f8;
LAB_004c4418:
    plVar4 = param_1 + 2;
    *plVar9 = *plVar4;
    *plVar4 = (long)plVar9;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar4;
    if (*plVar9 == 0) goto LAB_004c446c;
    uVar7 = *(ulong *)(*plVar9 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar7 = uVar7 & uVar6 - 1;
    }
    else if (uVar6 <= uVar7) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar7 / uVar6;
      }
      uVar7 = uVar7 - uVar8 * uVar6;
    }
    plVar4 = (long *)(*param_1 + uVar7 * 8);
  }
  *plVar4 = (long)plVar9;
LAB_004c446c:
  param_1[3] = param_1[3] + 1;
  return 1;
}


