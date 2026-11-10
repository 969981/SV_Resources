/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d36b0; name: FUN_002d36b0
 */


void FUN_002d36b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  
LAB_002d36d8:
  pauVar11 = (undefined1 (*) [16])(param_2[-1] + 8);
LAB_002d36e0:
  lVar9 = (long)param_2 - (long)param_1;
  uVar7 = lVar9 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_002d3b48_caseD_0;
  case 2:
    uVar7 = (*(code *)*param_3)(pauVar11,param_1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)*param_1;
    break;
  case 3:
    puVar1 = (undefined8 *)(*param_1 + 8);
    uVar7 = (*(code *)*param_3)(puVar1,param_1);
    uVar5 = (*(code *)*param_3)(pauVar11,puVar1);
    if ((uVar7 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar8 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)*pauVar11;
      *(undefined8 *)*pauVar11 = uVar8;
      goto LAB_002d3ca4;
    }
    uVar8 = *(undefined8 *)*param_1;
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar8;
      uVar7 = (*(code *)*param_3)(pauVar11,puVar1);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar8 = *puVar1;
      *puVar1 = *(undefined8 *)*pauVar11;
      goto LAB_002d3bcc;
    }
    break;
  case 4:
    FUN_002d3d10(param_1,*param_1 + 8,param_1 + 1,pauVar11,param_3);
    return;
  case 5:
    pauVar12 = param_1 + 1;
    puVar1 = (undefined8 *)(param_1[1] + 8);
    FUN_002d3d10(param_1,*param_1 + 8,pauVar12,puVar1,param_3);
    uVar7 = (*(code *)*param_3)(pauVar11,puVar1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar8 = *puVar1;
    *puVar1 = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = uVar8;
    uVar7 = (*(code *)*param_3)(puVar1,pauVar12);
    if ((uVar7 & 1) == 0) {
      return;
    }
    auVar15 = NEON_ext(*pauVar12,*pauVar12,8,1);
    *(long *)(param_1[1] + 8) = auVar15._8_8_;
    *(long *)*pauVar12 = auVar15._0_8_;
    uVar7 = (*(code *)*param_3)(pauVar12,*param_1 + 8);
    if ((uVar7 & 1) == 0) {
      return;
    }
    auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8,1
                      );
    *(long *)param_1[1] = auVar15._8_8_;
    *(long *)(*param_1 + 8) = auVar15._0_8_;
LAB_002d3ca4:
    uVar7 = (*(code *)*param_3)(*param_1 + 8,param_1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    auVar15 = NEON_ext(*param_1,*param_1,8,1);
    *(long *)(*param_1 + 8) = auVar15._8_8_;
    *(long *)*param_1 = auVar15._0_8_;
    return;
  default:
    if (lVar9 < 0xf8) {
      FUN_002d3e90(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar7;
    if ((long)uVar7 < 0) {
      uVar5 = uVar7 + 1;
    }
    pauVar12 = (undefined1 (*) [16])(*param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      uVar7 = (*(code *)*param_3)(pauVar12,param_1);
      uVar5 = (*(code *)*param_3)(pauVar11,pauVar12);
      if ((uVar7 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          iVar4 = 0;
        }
        else {
          uVar8 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
          uVar7 = (*(code *)*param_3)(pauVar12,param_1);
          if ((uVar7 & 1) != 0) {
            uVar8 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = *(undefined8 *)*pauVar12;
            *(undefined8 *)*pauVar12 = uVar8;
            goto LAB_002d389c;
          }
LAB_002d38ac:
          iVar4 = 1;
        }
      }
      else {
        uVar8 = *(undefined8 *)*param_1;
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar8;
          uVar7 = (*(code *)*param_3)(pauVar11,pauVar12);
          if ((uVar7 & 1) == 0) goto LAB_002d38ac;
          uVar8 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
LAB_002d389c:
          iVar4 = 2;
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
          iVar4 = 1;
        }
      }
    }
    else {
      uVar5 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar5 = uVar7;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      puVar1 = (undefined8 *)(*param_1 + lVar9);
      puVar2 = (undefined8 *)(*pauVar12 + lVar9);
      iVar4 = FUN_002d3d10(param_1,puVar1,pauVar12,puVar2,param_3);
      uVar7 = (*(code *)*param_3)(pauVar11,puVar2);
      if ((uVar7 & 1) != 0) {
        uVar8 = *puVar2;
        *puVar2 = *(undefined8 *)*pauVar11;
        *(undefined8 *)*pauVar11 = uVar8;
        uVar7 = (*(code *)*param_3)(puVar2,pauVar12);
        if ((uVar7 & 1) == 0) {
          iVar4 = iVar4 + 1;
        }
        else {
          uVar8 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *puVar2;
          *puVar2 = uVar8;
          uVar7 = (*(code *)*param_3)(pauVar12,puVar1);
          if ((uVar7 & 1) == 0) {
            iVar4 = iVar4 + 2;
          }
          else {
            uVar8 = *puVar1;
            *puVar1 = *(undefined8 *)*pauVar12;
            *(undefined8 *)*pauVar12 = uVar8;
            uVar7 = (*(code *)*param_3)(puVar1,param_1);
            if ((uVar7 & 1) == 0) {
              iVar4 = iVar4 + 3;
            }
            else {
              uVar8 = *(undefined8 *)*param_1;
              iVar4 = iVar4 + 4;
              *(undefined8 *)*param_1 = *puVar1;
              *puVar1 = uVar8;
            }
          }
        }
      }
    }
    uVar7 = (*(code *)*param_3)(param_1,pauVar12);
    if ((uVar7 & 1) == 0) {
      pauVar13 = param_2 + -1;
LAB_002d38ec:
      pauVar10 = pauVar13;
      if (param_1 != pauVar10) goto code_r0x002d38f4;
      pauVar12 = (undefined1 (*) [16])(*param_1 + 8);
      uVar7 = (*(code *)*param_3)(param_1,pauVar11);
      if ((uVar7 & 1) == 0) {
        if (pauVar12 == pauVar11) {
          return;
        }
        pauVar12 = param_1 + 1;
        while (uVar7 = (*(code *)*param_3)(param_1,pauVar12[-1] + 8), (uVar7 & 1) == 0) {
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + 8);
          if (param_2 == pauVar12) {
            return;
          }
        }
        uVar8 = *(undefined8 *)(pauVar12[-1] + 8);
        *(undefined8 *)(pauVar12[-1] + 8) = *(undefined8 *)*pauVar11;
        *(undefined8 *)*pauVar11 = uVar8;
      }
      if (pauVar12 == pauVar11) {
        return;
      }
      pauVar13 = pauVar11;
      while( true ) {
        pauVar10 = (undefined1 (*) [16])(pauVar12[-1] + 8);
        do {
          pauVar12 = pauVar10;
          pauVar10 = (undefined1 (*) [16])(*pauVar12 + 8);
          uVar7 = (*(code *)*param_3)(param_1,pauVar10);
        } while ((uVar7 & 1) == 0);
        pauVar12 = pauVar12 + 1;
        do {
          pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 8);
          uVar7 = (*(code *)*param_3)(param_1,pauVar13);
        } while ((uVar7 & 1) != 0);
        if (pauVar13 <= pauVar10) break;
        uVar8 = *(undefined8 *)*pauVar10;
        *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = uVar8;
      }
      uVar6 = 4;
      goto LAB_002d3af0;
    }
    pauVar13 = (undefined1 (*) [16])(*param_1 + 8);
    pauVar10 = pauVar11;
    if (pauVar13 < pauVar11) goto LAB_002d3954;
    goto LAB_002d392c;
  }
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar11;
LAB_002d3bcc:
  *(undefined8 *)*pauVar11 = uVar8;
  return;
code_r0x002d38f4:
  uVar7 = (*(code *)*param_3)(pauVar10,pauVar12);
  pauVar13 = (undefined1 (*) [16])(pauVar10[-1] + 8);
  if ((uVar7 & 1) != 0) goto code_r0x002d390c;
  goto LAB_002d38ec;
code_r0x002d390c:
  uVar8 = *(undefined8 *)*param_1;
  iVar4 = iVar4 + 1;
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar10;
  *(undefined8 *)*pauVar10 = uVar8;
  pauVar13 = (undefined1 (*) [16])(*param_1 + 8);
  if (pauVar13 < pauVar10) {
LAB_002d3954:
    while( true ) {
      pauVar14 = (undefined1 (*) [16])(pauVar13[-1] + 8);
      do {
        pauVar13 = pauVar14;
        pauVar14 = (undefined1 (*) [16])(*pauVar13 + 8);
        uVar7 = (*(code *)*param_3)(pauVar14,pauVar12);
      } while ((uVar7 & 1) != 0);
      pauVar13 = pauVar13 + 1;
      do {
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        uVar7 = (*(code *)*param_3)(pauVar10,pauVar12);
      } while ((uVar7 & 1) == 0);
      if (pauVar10 < pauVar14) break;
      uVar8 = *(undefined8 *)*pauVar14;
      iVar4 = iVar4 + 1;
      *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar10;
      *(undefined8 *)*pauVar10 = uVar8;
      pauVar3 = pauVar10;
      if (pauVar12 != pauVar14) {
        pauVar3 = pauVar12;
      }
      pauVar12 = pauVar3;
    }
    if (pauVar14 == pauVar12) goto LAB_002d39c8;
  }
  else {
LAB_002d392c:
    pauVar14 = (undefined1 (*) [16])(*param_1 + 8);
    if (pauVar14 == pauVar12) goto LAB_002d39c8;
  }
  uVar7 = (*(code *)*param_3)(pauVar12,pauVar14);
  if ((uVar7 & 1) != 0) {
    uVar8 = *(undefined8 *)*pauVar14;
    iVar4 = iVar4 + 1;
    *(undefined8 *)*pauVar14 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = uVar8;
  }
LAB_002d39c8:
  if (iVar4 == 0) {
    uVar7 = FUN_002d3ff0(param_1,pauVar14,param_3);
    pauVar10 = (undefined1 (*) [16])(*pauVar14 + 8);
    uVar5 = FUN_002d3ff0(pauVar10,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      param_2 = pauVar14;
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_002d36d8;
    }
    if ((uVar7 & 1) != 0) {
      uVar6 = 2;
LAB_002d3af0:
      if ((4 < uVar6) || (param_1 = pauVar10, (1 << (ulong)uVar6 & 0x15U) == 0)) {
switchD_002d3b48_caseD_0:
        return;
      }
      goto LAB_002d36e0;
    }
  }
  if ((long)pauVar14 - (long)param_1 < (long)param_2 - (long)pauVar14) {
    FUN_002d36b0(param_1,pauVar14,param_3);
    param_1 = (undefined1 (*) [16])(*pauVar14 + 8);
    goto LAB_002d36e0;
  }
  FUN_002d36b0((long)*pauVar14 + 8,param_2,param_3);
  param_2 = pauVar14;
  goto LAB_002d36d8;
}


