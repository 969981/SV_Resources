/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d3ff0; name: FUN_002d3ff0
 */


bool FUN_002d3ff0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_48;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    puVar9 = (undefined8 *)(param_2[-1] + 8);
    uVar3 = (*(code *)*param_3)(puVar9,param_1);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *puVar9;
      *puVar9 = uVar5;
      return true;
    }
    break;
  case 3:
    puVar9 = (undefined8 *)(*param_1 + 8);
    puVar10 = (undefined8 *)(param_2[-1] + 8);
    uVar3 = (*(code *)*param_3)(puVar9,param_1);
    uVar4 = (*(code *)*param_3)(puVar10,puVar9);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)*param_1;
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar5;
        uVar3 = (*(code *)*param_3)(puVar10,puVar9);
        if ((uVar3 & 1) == 0) {
          return true;
        }
        uVar5 = *puVar9;
        *puVar9 = *puVar10;
      }
      else {
        *(undefined8 *)*param_1 = *puVar10;
      }
      *puVar10 = uVar5;
      return true;
    }
    if ((uVar4 & 1) == 0) {
      return true;
    }
    uVar5 = *(undefined8 *)(*param_1 + 8);
    *(undefined8 *)(*param_1 + 8) = *puVar10;
    *puVar10 = uVar5;
    uVar3 = (*(code *)*param_3)(puVar9,param_1);
    goto joined_r0x002d41b0;
  case 4:
    FUN_002d3d10(param_1,*param_1 + 8,param_1 + 1,param_2[-1] + 8,param_3);
    break;
  case 5:
    puVar1 = *param_1 + 8;
    pauVar6 = param_1 + 1;
    puVar9 = (undefined8 *)(param_1[1] + 8);
    puVar10 = (undefined8 *)(param_2[-1] + 8);
    FUN_002d3d10(param_1,puVar1,pauVar6,puVar9,param_3);
    uVar3 = (*(code *)*param_3)(puVar10,puVar9);
    if ((uVar3 & 1) == 0) {
      return true;
    }
    uVar5 = *puVar9;
    *puVar9 = *puVar10;
    *puVar10 = uVar5;
    uVar3 = (*(code *)*param_3)(puVar9,pauVar6);
    if ((uVar3 & 1) == 0) {
      return true;
    }
    auVar15 = NEON_ext(*pauVar6,*pauVar6,8,1);
    *(long *)(param_1[1] + 8) = auVar15._8_8_;
    *(long *)*pauVar6 = auVar15._0_8_;
    uVar3 = (*(code *)*param_3)(pauVar6,puVar1);
    if ((uVar3 & 1) == 0) {
      return true;
    }
    auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8,1
                      );
    *(long *)param_1[1] = auVar15._8_8_;
    *(long *)(*param_1 + 8) = auVar15._0_8_;
    uVar3 = (*(code *)*param_3)(puVar1,param_1);
joined_r0x002d41b0:
    if ((uVar3 & 1) != 0) {
      auVar15 = NEON_ext(*param_1,*param_1,8,1);
      *(long *)(*param_1 + 8) = auVar15._8_8_;
      *(long *)*param_1 = auVar15._0_8_;
      return true;
    }
    break;
  default:
    pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
    pauVar11 = param_1 + 1;
    uVar3 = (*(code *)*param_3)(pauVar6,param_1);
    uVar4 = (*(code *)*param_3)(pauVar11,pauVar6);
    if ((uVar3 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        auVar15 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8)
                           ,8,1);
        *(long *)param_1[1] = auVar15._8_8_;
        *(long *)(*param_1 + 8) = auVar15._0_8_;
        uVar3 = (*(code *)*param_3)(pauVar6,param_1);
        if ((uVar3 & 1) != 0) {
          auVar15 = NEON_ext(*param_1,*param_1,8,1);
          *(long *)(*param_1 + 8) = auVar15._8_8_;
          *(long *)*param_1 = auVar15._0_8_;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)*param_1;
      if ((uVar4 & 1) == 0) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar5;
        uVar3 = (*(code *)*param_3)(pauVar11,pauVar6);
        if ((uVar3 & 1) != 0) {
          auVar15 = NEON_ext(*pauVar6,*pauVar6,8,1);
          *(long *)param_1[1] = auVar15._8_8_;
          *(long *)*pauVar6 = auVar15._0_8_;
        }
      }
      else {
        uVar8 = *(undefined8 *)param_1[1];
        *(undefined8 *)param_1[1] = uVar5;
        *(undefined8 *)*param_1 = uVar8;
      }
    }
    if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
      lVar12 = 0;
      iVar13 = 0;
      pauVar6 = (undefined1 (*) [16])(param_1[1] + 8);
      do {
        pauVar7 = pauVar6;
        uVar3 = (*(code *)*param_3)(pauVar7,pauVar11);
        if ((uVar3 & 1) != 0) {
          local_48 = *(undefined8 *)*pauVar7;
          lVar2 = lVar12;
          do {
            lVar14 = lVar2;
            *(undefined8 *)(param_1[1] + lVar14 + 8) = *(undefined8 *)(param_1[1] + lVar14);
            if (lVar14 == -0x10) {
              pauVar6 = param_1;
              goto LAB_002d429c;
            }
            uVar3 = (*(code *)*param_3)(&local_48,*param_1 + lVar14 + 8);
            lVar2 = lVar14 + -8;
          } while ((uVar3 & 1) != 0);
          pauVar6 = (undefined1 (*) [16])(param_1[1] + lVar14);
LAB_002d429c:
          iVar13 = iVar13 + 1;
          *(undefined8 *)*pauVar6 = local_48;
          if (iVar13 == 8) {
            return (undefined1 (*) [16])(*pauVar7 + 8) == param_2;
          }
        }
        lVar12 = lVar12 + 8;
        pauVar6 = (undefined1 (*) [16])(*pauVar7 + 8);
        pauVar11 = pauVar7;
      } while ((undefined1 (*) [16])(*pauVar7 + 8) != param_2);
    }
  }
  return true;
}


