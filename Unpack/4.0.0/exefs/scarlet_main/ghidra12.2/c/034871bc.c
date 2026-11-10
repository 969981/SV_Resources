/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034871bc; name: FUN_034871bc
 */


void FUN_034871bc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  *param_1 = (long)&PTR_FUN_047c2fe0;
  puVar3 = PTR_DAT_047e6fd8;
  uVar5 = param_1[5];
  if (uVar5 != 0) {
    uVar10 = 0;
    do {
      uVar13 = 1L << (uVar10 & 0x3f);
      if ((uVar13 & uVar5) != 0) {
        FUN_034b6c14(*(undefined8 *)puVar3,param_1,uVar10);
        uVar5 = param_1[5] & (uVar13 ^ 0xffffffffffffffff);
        param_1[5] = uVar5;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar5 != 0);
  }
  if ((int)param_1[7] != 0) {
    FUN_034b6c14(*(undefined8 *)puVar3,param_1,0x3c);
  }
  puVar3 = PTR_DAT_047e2fd0;
  lVar11 = param_1[3];
  lVar12 = lVar11;
  if ((int)param_1[4] != 0) {
    do {
      plVar4 = *(long **)(lVar12 + 0x10);
      if (plVar4 != (long *)0x0) {
        puVar6 = (undefined8 *)plVar4[0x1d];
        if (puVar6 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)*puVar6;
          uVar7 = *(uint *)(puVar6 + 1);
          puVar1 = puVar9 + uVar7;
          if ((uVar7 != 0) && ((long *)*puVar9 != param_1)) {
            lVar11 = (ulong)uVar7 * 8;
            do {
              lVar11 = lVar11 + -8;
              if (lVar11 == 0) {
                puVar9 = puVar1;
                break;
              }
              puVar2 = puVar9 + 1;
              puVar8 = puVar9 + 1;
              puVar9 = puVar2;
            } while ((long *)*puVar8 != param_1);
          }
          if (puVar1 != puVar9) {
            if (puVar9 < puVar1 + -1) {
              do {
                puVar8 = puVar9 + 1;
                *puVar9 = *puVar8;
                puVar9 = puVar8;
              } while (puVar8 < puVar1 + -1);
              uVar7 = *(uint *)(puVar6 + 1);
            }
            *(uint *)(puVar6 + 1) = uVar7 - 1;
            (**(code **)(*plVar4 + 0x180))(plVar4,0,0);
          }
        }
        *(undefined8 *)(lVar12 + 0x10) = 0;
      }
      *(undefined4 *)(lVar12 + 8) = 0;
      if (*(long *)(lVar12 + 0x18) != 0) {
        (**(code **)(puVar3 + 0x30))(0);
        *(undefined8 *)(lVar12 + 0x18) = 0;
      }
      plVar4 = *(long **)(lVar12 + 0x40);
      *(undefined8 *)(lVar12 + 0x20) = 0;
      if (plVar4 != (long *)0x0) {
        if (*plVar4 == 0) {
LAB_03487354:
          (**(code **)(puVar3 + 0x30))(2,plVar4);
        }
        else {
          *(undefined4 *)(plVar4 + 1) = 0;
          (**(code **)(puVar3 + 0x30))(0);
          *plVar4 = 0;
          *(undefined4 *)((long)plVar4 + 0xc) = 0;
          plVar4 = *(long **)(lVar12 + 0x40);
          if (plVar4 != (long *)0x0) goto LAB_03487354;
        }
        *(undefined8 *)(lVar12 + 0x40) = 0;
      }
      lVar11 = param_1[3];
      lVar12 = lVar12 + 0x48;
    } while (lVar12 != lVar11 + (ulong)*(uint *)(param_1 + 4) * 0x48);
  }
  if (lVar11 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar11);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  *param_1 = (long)(PTR_DAT_047e70a0 + 0x10);
  return;
}


