/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a43c0; name: FUN_034a43c0
 */


undefined8 FUN_034a43c0(float param_1,ulong *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  if ((param_4 & 1) == 0) {
    uVar6 = (ulong)(uint)param_2[1];
    if (param_1 != 1.0) goto LAB_034a4500;
  }
  else {
    plVar7 = (long *)*param_2;
    uVar4 = (uint)param_2[1];
    uVar6 = (ulong)uVar4;
    bVar1 = *(byte *)(param_3 + 1) & 1 ^ 1;
    plVar3 = plVar7;
    if (uVar4 == 0) {
LAB_034a4458:
      plVar10 = plVar7 + (ulong)uVar4 * 3;
      if (plVar3 != plVar10) {
        if ((*(byte *)(param_3 + 1) & 1) != 0) {
          return 0;
        }
        if (uVar4 != 0) {
          lVar9 = uVar6 * 0x18;
          do {
            if ((*plVar7 == *param_3) && ((*(byte *)(plVar7 + 1) & 1) == bVar1)) goto LAB_034a44ac;
            lVar9 = lVar9 + -0x18;
            plVar7 = plVar7 + 3;
          } while (lVar9 != 0);
          plVar7 = plVar10;
        }
LAB_034a44ac:
        if (plVar10 != plVar7) {
          if (plVar7 < plVar10 + -3) {
            do {
              plVar3 = plVar7 + 3;
              plVar7[2] = plVar7[5];
              *plVar7 = *plVar3;
              plVar7[1] = plVar7[4];
              plVar7 = plVar3;
            } while (plVar3 < plVar10 + -3);
            uVar4 = (uint)param_2[1];
          }
          uVar6 = (ulong)(uVar4 - 1);
          *(uint *)(param_2 + 1) = uVar4 - 1;
        }
      }
    }
    else {
      lVar9 = uVar6 * 0x18;
      do {
        if ((*plVar3 == *param_3) && ((*(byte *)(plVar3 + 1) & 1) == bVar1)) goto LAB_034a4458;
        lVar9 = lVar9 + -0x18;
        plVar3 = plVar3 + 3;
      } while (lVar9 != 0);
    }
    if ((param_1 != 1.0) || ((*(byte *)(param_3 + 1) & 1) == 0)) {
LAB_034a4500:
      lVar9 = *param_3;
      lVar2 = param_3[1];
      plVar3 = (long *)*param_2;
      uVar4 = (uint)uVar6;
      plVar7 = plVar3;
      if (uVar4 == 0) {
LAB_034a45e8:
        if (plVar7 != plVar3 + uVar6 * 3) {
          *(float *)(plVar7 + 2) = param_1;
          return 1;
        }
      }
      else {
        lVar8 = uVar6 * 0x18;
        do {
          if ((*plVar7 == lVar9) && ((((uint)*(byte *)(plVar7 + 1) ^ (uint)lVar2) & 1) == 0))
          goto LAB_034a45e8;
          lVar8 = lVar8 + -0x18;
          plVar7 = plVar7 + 3;
        } while (lVar8 != 0);
      }
      uVar11 = *(uint *)((long)param_2 + 0xc);
      if (uVar11 <= uVar4) {
        iVar5 = uVar11 + (uVar11 >> 1);
        if (uVar11 == 0) {
          iVar5 = 1;
        }
        uVar11 = iVar5 + uVar11;
        plVar3 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar3,(ulong)uVar11 * 0x18);
        if (plVar3 == (long *)0x0) {
          return 1;
        }
        *param_2 = (ulong)plVar3;
        *(uint *)((long)param_2 + 0xc) = uVar11;
      }
      if (uVar11 <= uVar4) {
        return 1;
      }
      uVar6 = param_2[1];
      *(uint *)(param_2 + 1) = (uint)uVar6 + 1;
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      plVar3 = plVar3 + (ulong)(uint)uVar6 * 3;
      *(float *)(plVar3 + 2) = param_1;
      *plVar3 = lVar9;
      plVar3[1] = lVar2;
      return 1;
    }
  }
  plVar7 = (long *)*param_2;
  plVar3 = plVar7 + uVar6 * 3;
  iVar5 = (int)uVar6;
  if (iVar5 != 0) {
    lVar9 = uVar6 * 0x18;
    do {
      if ((*plVar7 == *param_3) && (((*(byte *)(plVar7 + 1) ^ *(byte *)(param_3 + 1)) & 1) == 0))
      goto LAB_034a45a0;
      lVar9 = lVar9 + -0x18;
      plVar7 = plVar7 + 3;
    } while (lVar9 != 0);
    plVar7 = plVar3;
  }
LAB_034a45a0:
  if (plVar3 != plVar7) {
    if (plVar7 < plVar3 + -3) {
      do {
        plVar10 = plVar7 + 3;
        plVar7[2] = plVar7[5];
        *plVar7 = *plVar10;
        plVar7[1] = plVar7[4];
        plVar7 = plVar10;
      } while (plVar10 < plVar3 + -3);
      iVar5 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar5 + -1;
  }
  return 1;
}


