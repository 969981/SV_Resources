/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d3e90; name: FUN_002d3e90
 */


void FUN_002d3e90(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_38;
  
  pauVar5 = (undefined1 (*) [16])(*param_1 + 8);
  pauVar8 = param_1 + 1;
  uVar2 = (*(code *)*param_3)(pauVar5,param_1);
  uVar3 = (*(code *)*param_3)(pauVar8,pauVar5);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      auVar11 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8
                         ,1);
      *(long *)param_1[1] = auVar11._8_8_;
      *(long *)(*param_1 + 8) = auVar11._0_8_;
      uVar2 = (*(code *)*param_3)(pauVar5,param_1);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*param_1,*param_1,8,1);
        *(long *)(*param_1 + 8) = auVar11._8_8_;
        *(long *)*param_1 = auVar11._0_8_;
      }
    }
  }
  else {
    uVar4 = *(undefined8 *)*param_1;
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar4;
      uVar2 = (*(code *)*param_3)(pauVar8,pauVar5);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*pauVar5,*pauVar5,8,1);
        *(long *)param_1[1] = auVar11._8_8_;
        *(long *)*pauVar5 = auVar11._0_8_;
      }
    }
    else {
      uVar7 = *(undefined8 *)param_1[1];
      *(undefined8 *)param_1[1] = uVar4;
      *(undefined8 *)*param_1 = uVar7;
    }
  }
  if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
    lVar9 = 0;
    pauVar5 = (undefined1 (*) [16])(param_1[1] + 8);
    do {
      pauVar6 = pauVar5;
      uVar2 = (*(code *)*param_3)(pauVar6,pauVar8);
      if ((uVar2 & 1) != 0) {
        local_38 = *(undefined8 *)*pauVar6;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)(param_1[1] + lVar10 + 8) = *(undefined8 *)(param_1[1] + lVar10);
          if (lVar10 == -0x10) {
            pauVar5 = param_1;
            goto LAB_002d3f68;
          }
          uVar2 = (*(code *)*param_3)(&local_38,*param_1 + lVar10 + 8);
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        pauVar5 = (undefined1 (*) [16])(param_1[1] + lVar10);
LAB_002d3f68:
        *(undefined8 *)*pauVar5 = local_38;
      }
      lVar9 = lVar9 + 8;
      pauVar5 = (undefined1 (*) [16])(*pauVar6 + 8);
      pauVar8 = pauVar6;
    } while ((undefined1 (*) [16])(*pauVar6 + 8) != param_2);
  }
  return;
}


