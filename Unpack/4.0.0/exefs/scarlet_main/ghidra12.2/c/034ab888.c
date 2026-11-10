/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ab888; name: FUN_034ab888
 */


void FUN_034ab888(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined *puVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  
  puVar7 = PTR_DAT_047e2fd0;
  plVar9 = *(long **)(param_1 + 0x78);
  if ((plVar9 != (long *)0x0) && ((int)plVar9[1] != 0)) {
    plVar19 = (long *)*plVar9;
    puVar2 = PTR_DAT_047e71b8 + 0x10;
    do {
      if (*plVar19 == param_2) {
        plVar18 = (long *)plVar19[1];
        if (plVar18 != (long *)0x0) {
          pbVar8 = (byte *)plVar18[3];
          *plVar18 = (long)puVar2;
          if (pbVar8 != (byte *)0x0) {
            bVar6 = *pbVar8;
            if ((ulong)bVar6 != 0) {
              pbVar4 = pbVar8 + bVar6;
              pbVar10 = pbVar8 + ((ulong)(bVar6 + 4) & 0x1fc);
              do {
                lVar13 = *(long *)(pbVar10 + 8);
                pbVar8 = pbVar8 + 1;
                if (lVar13 != 0) {
                  uVar12 = *(uint *)(lVar13 + 0x30);
                  if (uVar12 != 0) {
                    puVar16 = *(undefined8 **)(lVar13 + 0x28);
                    puVar5 = puVar16 + uVar12;
                    if ((long *)*puVar16 != plVar18) {
                      lVar17 = (ulong)uVar12 * 8;
                      do {
                        lVar17 = lVar17 + -8;
                        if (lVar17 == 0) {
                          puVar16 = puVar5;
                          break;
                        }
                        puVar3 = puVar16 + 1;
                        puVar1 = puVar16 + 1;
                        puVar16 = puVar3;
                      } while ((long *)*puVar1 != plVar18);
                    }
                    if (puVar5 != puVar16) {
                      if (uVar12 < 2) {
                        iVar15 = 0;
                      }
                      else {
                        *puVar16 = puVar5[-1];
                        iVar15 = *(int *)(lVar13 + 0x30) + -1;
                      }
                      *(int *)(lVar13 + 0x30) = iVar15;
                    }
                  }
                }
                pbVar10 = pbVar10 + 0x10;
              } while (pbVar8 != pbVar4);
              if (plVar18[3] == 0) goto LAB_034ab9b8;
            }
            (**(code **)(puVar7 + 0x30))(0);
          }
LAB_034ab9b8:
          plVar18[3] = 0;
          (**(code **)(puVar7 + 0x30))(4,plVar18);
          plVar9 = *(long **)(param_1 + 0x78);
        }
        uVar12 = *(uint *)(plVar9 + 1);
        plVar11 = (long *)(*plVar9 + (ulong)uVar12 * 0x10 + -0x10);
        plVar18 = plVar19;
        if (plVar19 < plVar11) {
          do {
            plVar14 = plVar18 + 2;
            *plVar18 = *plVar14;
            plVar18[1] = plVar18[3];
            plVar18 = plVar14;
          } while (plVar14 < plVar11);
          uVar12 = *(uint *)(plVar9 + 1);
        }
        *(uint *)(plVar9 + 1) = uVar12 - 1;
        plVar9 = *(long **)(param_1 + 0x78);
      }
      else {
        plVar19 = plVar19 + 2;
      }
    } while ((long *)(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x10) != plVar19);
  }
  return;
}


