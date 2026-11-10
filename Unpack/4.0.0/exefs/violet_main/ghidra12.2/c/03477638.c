/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03477638; name: FUN_03477638
 */


void FUN_03477638(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined *puVar19;
  
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar11 = PTR_DAT_047e6958;
  puVar10 = PTR_DAT_047e2fd0;
  plVar13 = param_1;
  if ((char)param_1[0x1c] == '\0') {
    puVar1 = PTR_DAT_047e6e40 + 0x10;
    puVar2 = PTR_DAT_047e6e48 + 0x10;
    plVar13 = DAT_048afd38;
    do {
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(puVar10 + 0x10))(4,0xf0);
        *plVar13 = (long)puVar1;
        plVar13[1] = 0;
        lVar16 = *(long *)(puVar11 + 8);
        plVar13[2] = 0;
        plVar13[3] = lVar16;
        plVar17 = (long *)(puVar11 + 0x10);
        if (*(long *)(puVar11 + 0x10) != 0) {
          plVar17 = (long *)(lVar16 + 0x10);
        }
        *plVar17 = (long)plVar13;
        *(int *)puVar11 = *(int *)puVar11 + 1;
        *(long **)(puVar11 + 8) = plVar13;
        *plVar13 = (long)puVar2;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[0x12] = 0;
        plVar13[0x13] = 0;
        plVar13[0x16] = 0;
        plVar13[0x17] = 0;
        plVar13[0x1a] = 0;
        plVar13[0x1b] = 0;
        DAT_048afd38 = plVar13;
        *(undefined2 *)(plVar13 + 0x1c) = 0x101;
      }
    } while ((char)plVar13[0x1c] == '\0');
  }
  FUN_03477f30(param_1 + 0x18,plVar13 + 10);
  puVar11 = PTR_DAT_047e6958;
  puVar10 = PTR_DAT_047e2fd0;
  plVar13 = param_1;
  if (*(char *)((long)param_1 + 0xe1) == '\0') {
    puVar1 = PTR_DAT_047e6e40 + 0x10;
    puVar2 = PTR_DAT_047e6e48 + 0x10;
    plVar13 = DAT_048afd38;
    do {
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(puVar10 + 0x10))(4,0xf0);
        *plVar13 = (long)puVar1;
        plVar13[1] = 0;
        lVar16 = *(long *)(puVar11 + 8);
        plVar13[2] = 0;
        plVar13[3] = lVar16;
        plVar17 = (long *)(puVar11 + 0x10);
        if (*(long *)(puVar11 + 0x10) != 0) {
          plVar17 = (long *)(lVar16 + 0x10);
        }
        *plVar17 = (long)plVar13;
        *(int *)puVar11 = *(int *)puVar11 + 1;
        *(long **)(puVar11 + 8) = plVar13;
        *plVar13 = (long)puVar2;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[0xc] = 0;
        plVar13[0xd] = 0;
        plVar13[0x12] = 0;
        plVar13[0x13] = 0;
        plVar13[0x16] = 0;
        plVar13[0x17] = 0;
        plVar13[0x1a] = 0;
        plVar13[0x1b] = 0;
        DAT_048afd38 = plVar13;
        *(undefined2 *)(plVar13 + 0x1c) = 0x101;
      }
    } while (*(char *)((long)plVar13 + 0xe1) == '\0');
  }
  FUN_03477f30(param_1 + 0x18,plVar13 + 0x14);
  puVar11 = PTR_DAT_047e6d58;
  puVar10 = PTR_DAT_047e6cc0;
  if ((int)param_1[0x1b] != 0) {
    puVar1 = PTR_DAT_047e6d50 + 0x10;
    plVar13 = (long *)param_1[0x1a];
    puVar2 = PTR_DAT_047e6d60 + 0x10;
    do {
      uVar8 = *(uint *)(*(long *)puVar10 + 0x38);
      if (uVar8 != 0) {
        uVar9 = 0;
        uVar14 = (uint)*plVar13;
        if (uVar8 != 0) {
          uVar9 = uVar14 / uVar8;
        }
        for (plVar17 = *(long **)(*(long *)(*(long *)puVar10 + 0x30) +
                                 (ulong)(uVar14 - uVar9 * uVar8) * 8); plVar17 != (long *)0x0;
            plVar17 = (long *)*plVar17) {
          if (plVar17[1] == *plVar13) {
            lVar16 = plVar17[2];
            if (((lVar16 != 0) && (*(long *)(lVar16 + 0x40) == 0)) &&
               (plVar17 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90),
               plVar17 != (long *)0x0)) {
              *plVar17 = (long)puVar1;
              plVar17[1] = 0;
              lVar15 = *(long *)(puVar11 + 8);
              plVar17[2] = 0;
              plVar17[3] = lVar15;
              plVar18 = (long *)(puVar11 + 0x10);
              if (*(long *)(puVar11 + 0x10) != 0) {
                plVar18 = (long *)(lVar15 + 0x10);
              }
              *plVar18 = (long)plVar17;
              *(int *)puVar11 = *(int *)puVar11 + 1;
              *(long **)(puVar11 + 8) = plVar17;
              *plVar17 = (long)puVar2;
              plVar17[6] = 0;
              plVar17[4] = 0;
              plVar17[5] = 0;
              *(undefined4 *)(plVar17 + 7) = 0;
              *(undefined4 *)((long)plVar17 + 0x84) = 0x3f800000;
              *(undefined1 *)(plVar17 + 0x11) = 1;
              *(undefined8 *)((long)plVar17 + 100) = 0x3f80000000000000;
              *(undefined8 *)((long)plVar17 + 0x6c) = 0x3f80000000000000;
              *(undefined8 *)((long)plVar17 + 0x74) = 0;
              *(undefined8 *)((long)plVar17 + 0x7c) = 0;
              *(undefined8 *)((long)plVar17 + 0x3c) = 0x3f800000;
              *(undefined8 *)((long)plVar17 + 0x44) = 0;
              *(undefined8 *)((long)plVar17 + 0x4c) = 0x3f800000;
              *(undefined8 *)((long)plVar17 + 0x54) = 0;
              *(undefined8 *)((long)plVar17 + 0x5c) = 0x3f800000;
              *(long **)(lVar16 + 0x40) = plVar17;
              plVar17[1] = lVar16;
              iVar12 = (**(code **)(*plVar17 + 0x10))(plVar17,*(undefined8 *)(lVar16 + 0x78));
              if (iVar12 != 1) {
                (**(code **)*plVar17)(plVar17);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,plVar17);
                *(undefined8 *)(lVar16 + 0x40) = 0;
              }
            }
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != (long *)(param_1[0x1a] + (ulong)*(uint *)(param_1 + 0x1b) * 8));
  }
  puVar1 = PTR_DAT_047e6cc0;
  puVar11 = PTR_DAT_047e6958;
  puVar10 = PTR_DAT_047e2fd0;
  if ((DAT_048afd38 == param_1) &&
     (plVar13 = *(long **)(PTR_DAT_047e6958 + 0x10), plVar13 != (long *)0x0)) {
    puVar2 = PTR_DAT_047e6e40 + 0x10;
    puVar3 = PTR_DAT_047e6e48 + 0x10;
    puVar4 = PTR_DAT_047e6d50 + 0x10;
    puVar5 = PTR_DAT_047e6d60 + 0x10;
    do {
      if (plVar13 != param_1) {
        if (*(char *)((long)plVar13 + 0xe1) == '\0') {
          *(undefined4 *)(plVar13 + 0x1b) = 0;
          plVar17 = plVar13;
          puVar19 = PTR_DAT_047e6e40;
          if ((char)plVar13[0x1c] == '\0') goto LAB_03477a18;
        }
        else {
          if ((char)plVar13[0x1c] != '\0') goto LAB_03477c9c;
          *(undefined4 *)(plVar13 + 0x1b) = 0;
LAB_03477a18:
          puVar19 = PTR_DAT_047e6e40;
          plVar17 = DAT_048afd38;
          do {
            if (plVar17 == (long *)0x0) {
              plVar17 = (long *)(**(code **)(puVar10 + 0x10))(4,0xf0);
              *plVar17 = (long)puVar2;
              plVar17[1] = 0;
              lVar16 = *(long *)(puVar11 + 8);
              plVar17[2] = 0;
              plVar17[3] = lVar16;
              plVar18 = (long *)(puVar11 + 0x10);
              if (*(long *)(puVar11 + 0x10) != 0) {
                plVar18 = (long *)(lVar16 + 0x10);
              }
              *plVar18 = (long)plVar17;
              *(int *)puVar11 = *(int *)puVar11 + 1;
              *(long **)(puVar11 + 8) = plVar17;
              *plVar17 = (long)puVar3;
              plVar17[8] = 0;
              plVar17[9] = 0;
              plVar17[0xc] = 0;
              plVar17[0xd] = 0;
              plVar17[0x12] = 0;
              plVar17[0x13] = 0;
              plVar17[0x16] = 0;
              plVar17[0x17] = 0;
              plVar17[0x1a] = 0;
              plVar17[0x1b] = 0;
              DAT_048afd38 = plVar17;
              *(undefined2 *)(plVar17 + 0x1c) = 0x101;
            }
          } while ((char)plVar17[0x1c] == '\0');
        }
        FUN_03477f30(plVar13 + 0x18,plVar17 + 10);
        plVar17 = plVar13;
        if (*(char *)((long)plVar13 + 0xe1) == '\0') {
          plVar17 = DAT_048afd38;
          do {
            if (plVar17 == (long *)0x0) {
              plVar17 = (long *)(**(code **)(puVar10 + 0x10))(4,0xf0);
              *plVar17 = (long)(puVar19 + 0x10);
              plVar17[1] = 0;
              lVar16 = *(long *)(puVar11 + 8);
              plVar17[2] = 0;
              plVar17[3] = lVar16;
              plVar18 = (long *)(puVar11 + 0x10);
              if (*(long *)(puVar11 + 0x10) != 0) {
                plVar18 = (long *)(lVar16 + 0x10);
              }
              *plVar18 = (long)plVar17;
              puVar6 = PTR_DAT_047e6e48 + 0x10;
              *(long **)(puVar11 + 8) = plVar17;
              *(int *)puVar11 = *(int *)puVar11 + 1;
              *plVar17 = (long)puVar6;
              plVar17[8] = 0;
              plVar17[9] = 0;
              plVar17[0xc] = 0;
              plVar17[0xd] = 0;
              plVar17[0x12] = 0;
              plVar17[0x13] = 0;
              plVar17[0x16] = 0;
              plVar17[0x17] = 0;
              plVar17[0x1a] = 0;
              plVar17[0x1b] = 0;
              DAT_048afd38 = plVar17;
              *(undefined2 *)(plVar17 + 0x1c) = 0x101;
            }
          } while (*(char *)((long)plVar17 + 0xe1) == '\0');
        }
        FUN_03477f30(plVar13 + 0x18,plVar17 + 0x14);
        if ((int)plVar13[0x1b] != 0) {
          plVar17 = (long *)plVar13[0x1a];
          do {
            uVar8 = *(uint *)(*(long *)puVar1 + 0x38);
            if (uVar8 != 0) {
              uVar9 = 0;
              uVar14 = (uint)*plVar17;
              if (uVar8 != 0) {
                uVar9 = uVar14 / uVar8;
              }
              for (plVar18 = *(long **)(*(long *)(*(long *)puVar1 + 0x30) +
                                       (ulong)(uVar14 - uVar9 * uVar8) * 8); plVar18 != (long *)0x0;
                  plVar18 = (long *)*plVar18) {
                if (plVar18[1] == *plVar17) {
                  lVar16 = plVar18[2];
                  if (((lVar16 != 0) && (*(long *)(lVar16 + 0x40) == 0)) &&
                     (plVar18 = (long *)(**(code **)(puVar10 + 0x10))(4,0x90),
                     plVar18 != (long *)0x0)) {
                    *plVar18 = (long)puVar4;
                    plVar18[1] = 0;
                    puVar19 = PTR_DAT_047e6d58;
                    lVar15 = *(long *)(PTR_DAT_047e6d58 + 8);
                    plVar18[2] = 0;
                    plVar18[3] = lVar15;
                    plVar7 = (long *)(puVar19 + 0x10);
                    if (*(long *)(puVar19 + 0x10) != 0) {
                      plVar7 = (long *)(lVar15 + 0x10);
                    }
                    *plVar7 = (long)plVar18;
                    *(int *)puVar19 = *(int *)puVar19 + 1;
                    *(long **)(puVar19 + 8) = plVar18;
                    *plVar18 = (long)puVar5;
                    *(undefined1 *)(plVar18 + 0x11) = 1;
                    plVar18[4] = 0;
                    plVar18[5] = 0;
                    plVar18[6] = 0;
                    *(undefined4 *)(plVar18 + 7) = 0;
                    *(undefined4 *)((long)plVar18 + 0x84) = 0x3f800000;
                    *(undefined8 *)((long)plVar18 + 100) = 0x3f80000000000000;
                    *(undefined8 *)((long)plVar18 + 0x6c) = 0x3f80000000000000;
                    *(undefined8 *)((long)plVar18 + 0x74) = 0;
                    *(undefined8 *)((long)plVar18 + 0x7c) = 0;
                    *(undefined8 *)((long)plVar18 + 0x3c) = 0x3f800000;
                    *(undefined8 *)((long)plVar18 + 0x44) = 0;
                    *(undefined8 *)((long)plVar18 + 0x4c) = 0x3f800000;
                    *(undefined8 *)((long)plVar18 + 0x54) = 0;
                    *(undefined8 *)((long)plVar18 + 0x5c) = 0x3f800000;
                    *(long **)(lVar16 + 0x40) = plVar18;
                    plVar18[1] = lVar16;
                    iVar12 = (**(code **)(*plVar18 + 0x10))(plVar18,*(undefined8 *)(lVar16 + 0x78));
                    if (iVar12 != 1) {
                      (**(code **)*plVar18)(plVar18);
                      (**(code **)(puVar10 + 0x30))(4,plVar18);
                      *(undefined8 *)(lVar16 + 0x40) = 0;
                    }
                  }
                  break;
                }
              }
            }
            plVar17 = plVar17 + 1;
          } while (plVar17 != (long *)(plVar13[0x1a] + (ulong)*(uint *)(plVar13 + 0x1b) * 8));
        }
      }
LAB_03477c9c:
      plVar13 = (long *)plVar13[2];
    } while (plVar13 != (long *)0x0);
  }
  return;
}


