/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034be534; name: FUN_034be534
 */


bool FUN_034be534(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar14;
  int iVar13;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x40);
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar8 = (ulong)(uVar2 - uVar4 * uVar1);
    plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      if (*(uint *)(plVar6 + 1) == uVar2) {
        plVar9 = (long *)0x0;
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)*plVar9;
          if (plVar6 == (long *)0x0) goto LAB_034be5b8;
        } while (*(uint *)(plVar6 + 1) != uVar2);
      }
      lVar10 = plVar6[2];
      if (lVar10 == 0 || lVar10 == param_2) {
        lVar11 = 0;
        lVar12 = lVar10;
      }
      else {
        lVar12 = lVar10;
        do {
          lVar11 = lVar12;
          lVar12 = *(long *)(lVar11 + 8);
        } while (lVar12 != 0 && lVar12 != param_2);
      }
      if (lVar12 == 0) {
        iVar14 = 2;
        iVar13 = 2;
        lVar7 = lVar10;
      }
      else {
        lVar7 = *(long *)(lVar12 + 8);
        if (lVar12 == lVar10) {
          plVar6[2] = lVar7;
          iVar14 = 1;
          iVar13 = 1;
        }
        else {
          *(long *)(lVar11 + 8) = lVar7;
          iVar14 = 1;
          iVar13 = 1;
          lVar7 = plVar6[2];
        }
      }
      if (lVar7 == 0) {
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)(*(long *)(param_1 + 8) + uVar8 * 8);
        }
        *plVar9 = *plVar6;
        puVar5 = PTR_DAT_047e2fd0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        iVar3 = *(int *)(param_1 + 0x18) + -1;
        *(int *)(param_1 + 0x18) = iVar3;
        iVar13 = iVar14;
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            uVar8 = 0;
            do {
              lVar10 = *(long *)(param_1 + 8);
              plVar6 = *(long **)(lVar10 + uVar8 * 8);
              if (plVar6 != (long *)0x0) {
                do {
                  plVar6 = (long *)*plVar6;
                  (**(code **)(puVar5 + 0x30))(0);
                } while (plVar6 != (long *)0x0);
                lVar10 = *(long *)(param_1 + 8);
              }
              *(undefined8 *)(lVar10 + uVar8 * 8) = 0;
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)(param_1 + 0x10));
          }
          *(undefined4 *)(param_1 + 0x18) = 0;
          if (*(long *)(param_1 + 8) != 0) {
            *(undefined4 *)(param_1 + 0x10) = 0;
            (**(code **)(puVar5 + 0x30))(0);
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
        }
      }
      goto LAB_034be6bc;
    }
  }
LAB_034be5b8:
  iVar13 = 2;
LAB_034be6bc:
  return iVar13 == 1;
}


