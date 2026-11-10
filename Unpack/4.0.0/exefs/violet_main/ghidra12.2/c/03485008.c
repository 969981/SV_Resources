/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03485008; name: FUN_03485008
 */


void FUN_03485008(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int *piVar10;
  ulong *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  int *piVar20;
  
  if (*(uint *)(param_1 + 0x25) != 0) {
    plVar19 = (long *)param_1[0x24];
    plVar15 = plVar19 + *(uint *)(param_1 + 0x25);
    do {
      lVar7 = *plVar19;
      piVar10 = *(int **)(lVar7 + 0x18);
      uVar12 = *(uint *)(lVar7 + 0x20);
      if ((uVar12 == 0) || (*piVar10 == (int)param_2[3])) {
        piVar20 = piVar10;
      }
      else {
        lVar17 = (ulong)uVar12 * 0x48;
        piVar18 = piVar10;
        do {
          lVar17 = lVar17 + -0x48;
          if (lVar17 == 0) goto LAB_03485140;
          piVar20 = piVar18 + 0x12;
          piVar1 = piVar18 + 0x12;
          piVar18 = piVar20;
        } while (*piVar1 != (int)param_2[3]);
      }
      if ((piVar20 != piVar10 + (ulong)uVar12 * 0x12) &&
         (plVar6 = *(long **)(piVar20 + 4), plVar6 != (long *)0x0)) {
        puVar11 = (ulong *)plVar6[0x1d];
        if (puVar11 != (ulong *)0x0) {
          plVar14 = (long *)*puVar11;
          uVar12 = (uint)puVar11[1];
          plVar8 = plVar14 + uVar12;
          if ((uVar12 != 0) && (*plVar14 != lVar7)) {
            lVar17 = (ulong)uVar12 * 8;
            do {
              lVar17 = lVar17 + -8;
              if (lVar17 == 0) {
                plVar14 = plVar8;
                break;
              }
              plVar2 = plVar14 + 1;
              plVar13 = plVar14 + 1;
              plVar14 = plVar2;
            } while (*plVar13 != lVar7);
          }
          if (plVar8 != plVar14) {
            if (plVar14 < plVar8 + -1) {
              do {
                plVar13 = plVar14 + 1;
                *plVar14 = *plVar13;
                plVar14 = plVar13;
              } while (plVar13 < plVar8 + -1);
              uVar12 = (uint)puVar11[1];
            }
            *(uint *)(puVar11 + 1) = uVar12 - 1;
            (**(code **)(*plVar6 + 0x180))(plVar6,0,0);
          }
        }
        piVar20[4] = 0;
        piVar20[5] = 0;
      }
LAB_03485140:
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar15);
  }
  plVar19 = (long *)param_2[0x13];
  if (plVar19 != param_1) {
    return;
  }
  (**(code **)(*param_2 + 0x38))(param_2,0);
  uVar12 = *(uint *)(param_1 + 0x21);
  if (uVar12 != 0) {
    uVar4 = *(uint *)(param_2 + 3);
    iVar9 = 0;
    uVar16 = uVar12;
    do {
      iVar3 = iVar9 + (uVar16 >> 1);
      plVar15 = (long *)(param_1[0x20] + (long)iVar3 * 8);
      uVar5 = *(uint *)(*plVar15 + 0x18);
      if (uVar5 == uVar4) {
        plVar6 = (long *)((param_1[0x20] + (ulong)uVar12 * 8) - 8);
        if (plVar15 < plVar6) {
          do {
            plVar8 = plVar15 + 1;
            *plVar15 = *plVar8;
            plVar15 = plVar8;
          } while (plVar8 < plVar6);
          uVar12 = *(uint *)(param_1 + 0x21);
        }
        *(uint *)(param_1 + 0x21) = uVar12 - 1;
        break;
      }
      if (uVar5 < uVar4) {
        iVar9 = iVar3 + 1;
      }
      uVar16 = uVar16 - (uVar5 < uVar4) >> 1;
    } while (uVar16 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x03485218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(plVar19);
  return;
}


