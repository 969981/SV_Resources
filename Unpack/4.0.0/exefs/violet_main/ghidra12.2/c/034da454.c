/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034da454; name: FUN_034da454
 */


void FUN_034da454(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined2 *puVar10;
  int *piVar11;
  ushort *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  ushort *puVar22;
  undefined4 *puVar23;
  ushort *puVar24;
  uint uVar25;
  ulong uVar26;
  undefined4 uVar27;
  
  plVar9 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar8 = PTR_DAT_047e2fd0;
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar21 = *plVar9;
  do {
    if (lVar21 == 0) {
                    /* WARNING: Could not recover jumptable at 0x034da75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))();
      return;
    }
    piVar11 = *(int **)(lVar21 + 0x28);
    uVar25 = *(uint *)(lVar21 + 0x30);
    if ((uVar25 == 0) || (*piVar11 == *(int *)(lVar21 + 0x3c))) {
      piVar18 = piVar11;
    }
    else {
      lVar16 = (ulong)uVar25 * 0x10;
      piVar20 = piVar11;
      do {
        lVar16 = lVar16 + -0x10;
        if (lVar16 == 0) goto LAB_034da524;
        piVar18 = piVar20 + 4;
        piVar1 = piVar20 + 4;
        piVar20 = piVar18;
      } while (*piVar1 != *(int *)(lVar21 + 0x3c));
    }
    if ((piVar18 == piVar11 + (ulong)uVar25 * 4) || (*(long *)(piVar18 + 2) == 0)) {
LAB_034da524:
      puVar12 = *(ushort **)(lVar21 + 0x20);
      if (puVar12 != (ushort *)0x0) {
        uVar6 = *puVar12;
        if ((ulong)uVar6 != 0) {
          puVar22 = puVar12 + uVar6;
          lVar16 = (long)puVar12 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc);
          do {
            lVar13 = *(long *)(lVar16 + 8);
            puVar12 = puVar12 + 1;
            if (lVar13 != 0) {
              uVar25 = *(uint *)(lVar13 + 0x30);
              if (uVar25 != 0) {
                plVar17 = *(long **)(lVar13 + 0x28);
                plVar9 = plVar17 + uVar25;
                if (*plVar17 != lVar21) {
                  lVar19 = (ulong)uVar25 * 8;
                  do {
                    lVar19 = lVar19 + -8;
                    if (lVar19 == 0) {
                      plVar17 = plVar9;
                      break;
                    }
                    plVar3 = plVar17 + 1;
                    plVar2 = plVar17 + 1;
                    plVar17 = plVar3;
                  } while (*plVar2 != lVar21);
                }
                if (plVar9 != plVar17) {
                  if (uVar25 < 2) {
                    iVar14 = 0;
                  }
                  else {
                    *plVar17 = plVar9[-1];
                    iVar14 = *(int *)(lVar13 + 0x30) + -1;
                  }
                  *(int *)(lVar13 + 0x30) = iVar14;
                }
              }
              *(undefined8 *)(lVar16 + 8) = 0;
              (**(code **)(**(long **)(lVar21 + 0x18) + 0x18))();
            }
            lVar16 = lVar16 + 0x10;
          } while (puVar12 != puVar22);
        }
      }
    }
    else {
      puVar12 = *(ushort **)(*(long *)(piVar18 + 2) + 0x18);
      if (puVar12 == (ushort *)0x0) {
        puVar23 = (undefined4 *)0x0;
        puVar22 = (ushort *)0x0;
        puVar24 = (ushort *)0x0;
      }
      else {
        puVar22 = puVar12 + 1;
        puVar24 = puVar22 + *puVar12;
        puVar23 = (undefined4 *)((long)puVar12 + ((ulong)((uint)*puVar12 * 2 + 5) & 0x3fffc));
      }
      for (; puVar22 != puVar24; puVar22 = puVar22 + 1) {
        uVar27 = *puVar23;
        uVar6 = *puVar22;
        puVar12 = *(ushort **)(lVar21 + 0x20);
        if (puVar12 == (ushort *)0x0) {
          uVar26 = 0;
        }
        else {
          uVar7 = *puVar12;
          uVar26 = (ulong)uVar7;
          uVar25 = (uint)uVar7;
          if (uVar7 < 2) {
            uVar25 = 1;
          }
          uVar15 = (ulong)uVar25;
          plVar9 = (long *)((long)puVar12 + ((ulong)((uint)uVar7 * 2 + 5) & 0x3fffc) + 8);
          do {
            puVar12 = puVar12 + 1;
            if (*puVar12 == uVar6) {
              if (*plVar9 == 0) {
                *(undefined4 *)(plVar9 + -1) = uVar27;
              }
              else {
                FUN_034e6c0c(uVar27,*(undefined8 *)PTR_DAT_047e7038,*plVar9,uVar6,0,4,0);
              }
              goto LAB_034da71c;
            }
            plVar9 = plVar9 + 2;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        uVar25 = (int)uVar26 + 1;
        uVar5 = uVar25 * 2 + 5 & 0x7fffc;
        puVar10 = (undefined2 *)(**(code **)(puVar8 + 0x10))(0,uVar5 + uVar25 * 0x10);
        if (puVar10 != (undefined2 *)0x0) {
          if (*(long *)(lVar21 + 0x20) != 0) {
            memcpy(puVar10 + 1,(void *)(*(long *)(lVar21 + 0x20) + 2),uVar26 << 1);
            memcpy((void *)((long)puVar10 + (ulong)uVar5),
                   (void *)(*(long *)(lVar21 + 0x20) + (ulong)((int)uVar26 * 2 + 5U & 0x3fffc)),
                   uVar26 << 4);
            (**(code **)(puVar8 + 0x30))(0,*(undefined8 *)(lVar21 + 0x20));
          }
          puVar4 = (undefined4 *)((long)puVar10 + uVar26 * 0x10 + (ulong)uVar5);
          puVar10[uVar25] = uVar6;
          *puVar10 = (short)uVar25;
          *(undefined2 **)(lVar21 + 0x20) = puVar10;
          *puVar4 = uVar27;
          *(undefined8 *)(puVar4 + 2) = 0;
        }
LAB_034da71c:
        puVar23 = puVar23 + 1;
      }
    }
    lVar21 = *(long *)(lVar21 + 0x10);
  } while( true );
}


