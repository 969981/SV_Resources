/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dac54; name: FUN_034dac54
 */


void FUN_034dac54(long *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar4 = PTR_DAT_047e7050;
  puVar3 = PTR_DAT_047e2fd0;
  if ((plVar5 != (long *)0x0) && (lVar13 = *plVar5, lVar13 != 0)) {
    do {
      if (*(long *)(lVar13 + 0x10) == 0) {
        *plVar5 = 0;
      }
      else {
        *plVar5 = *(long *)(lVar13 + 0x10);
      }
      piVar7 = (int *)**(undefined8 **)puVar4;
      uVar6 = *(uint *)(*(undefined8 **)puVar4 + 1);
      if ((uVar6 == 0) || (*piVar7 == *(int *)(lVar13 + 0x38))) {
        piVar9 = piVar7;
      }
      else {
        lVar8 = (ulong)uVar6 * 0x10;
        piVar12 = piVar7;
        do {
          lVar8 = lVar8 + -0x10;
          if (lVar8 == 0) goto LAB_034dad68;
          piVar9 = piVar12 + 4;
          piVar1 = piVar12 + 4;
          piVar12 = piVar9;
        } while (*piVar1 != *(int *)(lVar13 + 0x38));
      }
      if (piVar9 != piVar7 + (ulong)uVar6 * 4) {
        lVar8 = 0;
        lVar10 = *(long *)(*(long *)(piVar9 + 2) + 8);
        lVar11 = lVar10;
        if ((lVar10 != 0) && (lVar13 != lVar10)) {
          do {
            lVar8 = lVar11;
            lVar11 = *(long *)(lVar8 + 8);
          } while (lVar11 != 0 && lVar13 != lVar11);
        }
        if (lVar11 != 0) {
          if (lVar11 == lVar10) {
            *(undefined8 *)(*(long *)(piVar9 + 2) + 8) = *(undefined8 *)(lVar11 + 8);
          }
          else {
            *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar11 + 8);
          }
        }
      }
LAB_034dad68:
      uVar6 = *(uint *)(lVar13 + 0x30);
      while (uVar6 != 0) {
        piVar7 = *(int **)(lVar13 + 0x28);
        iVar2 = *piVar7;
        *(undefined8 *)(*(long *)(piVar7 + 2) + 0x20) = 0;
        (**(code **)(**(long **)(piVar7 + 2) + 0x18))();
        piVar9 = *(int **)(lVar13 + 0x28);
        uVar6 = *(uint *)(lVar13 + 0x30);
        piVar7 = piVar9 + (ulong)uVar6 * 4;
        if ((uVar6 != 0) && (*piVar9 != iVar2)) {
          lVar8 = (ulong)uVar6 * 0x10;
          do {
            lVar8 = lVar8 + -0x10;
            if (lVar8 == 0) {
              piVar9 = piVar7;
              break;
            }
            piVar1 = piVar9 + 4;
            piVar12 = piVar9 + 4;
            piVar9 = piVar1;
          } while (*piVar12 != iVar2);
        }
        if (piVar7 != piVar9) {
          if (piVar9 < piVar7 + -4) {
            do {
              piVar12 = piVar9 + 4;
              *(undefined8 *)piVar9 = *(undefined8 *)piVar12;
              *(undefined8 *)(piVar9 + 2) = *(undefined8 *)(piVar9 + 6);
              piVar9 = piVar12;
            } while (piVar12 < piVar7 + -4);
            uVar6 = *(uint *)(lVar13 + 0x30);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(lVar13 + 0x30) = uVar6;
        }
      }
      FUN_034dbce4(lVar13);
      (**(code **)(puVar3 + 0x30))(2,lVar13);
      lVar13 = *plVar5;
    } while (lVar13 != 0);
    if ((param_2 & 1) != 0) {
      FUN_034da454(param_1);
      return;
    }
  }
  return;
}


