/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344b9fc; name: FUN_0344b9fc
 */


void FUN_0344b9fc(long param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar6 = *(uint *)(param_1 + 0x18);
  if (uVar6 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = lVar8;
    do {
      puVar19 = (undefined8 *)(lVar7 + 0x20);
      puVar12 = (undefined8 *)*puVar19;
      if (puVar12 != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)0x0;
        puVar10 = (undefined8 *)(lVar7 + 0x18);
        do {
          if ((*(ushort *)(lVar7 + 0x28) >> (ulong)(*(byte *)((long)puVar12 + 0x29) & 0x1f) & 1) ==
              0) {
            bVar5 = 1;
          }
          else {
            cVar2 = *(char *)(puVar12 + 5);
            if (cVar2 == -0x80) {
              bVar3 = true;
            }
            else if (cVar2 == -0x70) {
              bVar3 = *(char *)((long)puVar12 + 0x2d) == '\0';
            }
            else {
              bVar3 = false;
            }
            bVar5 = bVar3 ^ 1;
          }
          uVar4 = FUN_0344cf70(puVar12,param_2,bVar5,puVar10);
          if ((uVar4 & 1) == 0) {
            puVar15 = (undefined8 *)*puVar12;
            puVar18 = puVar12;
          }
          else {
            cVar2 = *(char *)(puVar12 + 5);
            if (((cVar2 != -0x80) && (cVar2 != -0x70)) && (cVar2 != -2)) {
              FUN_0344c2d0(puVar10,puVar12[3],puVar12 + 5);
            }
            puVar15 = (undefined8 *)*puVar12;
            puVar13 = puVar19;
            if ((undefined8 *)*puVar19 != puVar12) {
              puVar13 = puVar18;
            }
            *puVar13 = puVar15;
            if ((undefined8 *)*puVar10 == puVar12) {
              *puVar10 = puVar18;
            }
            if ((*(char *)(puVar12 + 5) == -0x80) ||
               ((*(char *)(puVar12 + 5) == -0x70 && (*(char *)((long)puVar12 + 0x2d) == '\0')))) {
              *(long *)(puVar12[2] + 0x18) = param_1;
              *puVar12 = 0;
              puVar13 = (undefined8 *)(param_1 + 0x28);
              if (*(long *)(param_1 + 0x28) != 0) {
                puVar13 = *(undefined8 **)(param_1 + 0x20);
              }
              *puVar13 = puVar12;
              *(undefined8 **)(param_1 + 0x20) = puVar12;
            }
            else {
              iVar1 = *(int *)(puVar12 + 1);
              *(int *)(puVar12 + 1) = iVar1 + -1;
              if (iVar1 + -1 == 0) {
                puVar13 = (undefined8 *)puVar12[3];
                if ((puVar13 != (undefined8 *)0x0) &&
                   (iVar1 = *(int *)((long)puVar13 + 0x4c) + -1,
                   *(int *)((long)puVar13 + 0x4c) = iVar1, iVar1 == 0)) {
                  (**(code **)*puVar13)(puVar13);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar13);
                }
                if ((long *)puVar12[4] != (long *)0x0) {
                  (**(code **)(*(long *)puVar12[4] + 0x30))();
                }
                piVar14 = (int *)puVar12[2];
                if ((piVar14 != (int *)0x0) &&
                   (iVar1 = *piVar14, *piVar14 = iVar1 + -1, iVar1 + -1 == 0)) {
                  FUN_0344ca4c(piVar14);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar14);
                }
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar12);
              }
            }
          }
          puVar12 = puVar15;
        } while (puVar12 != (undefined8 *)0x0);
        lVar8 = *(long *)(param_1 + 0x10);
        uVar6 = *(uint *)(param_1 + 0x18);
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar8 + (ulong)uVar6 * 0x30);
  }
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    plVar17 = (long *)0x0;
    do {
      lVar7 = plVar9[2];
      if ((*(int *)(lVar7 + 0x6c) == 0) && (*(int *)(lVar7 + 0x94) == 0)) {
        plVar16 = (long *)*plVar9;
        plVar11 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar9) {
          plVar11 = plVar17;
        }
        *plVar11 = (long)plVar16;
        if (*(long **)(param_1 + 0x20) == plVar9) {
          *(long **)(param_1 + 0x20) = plVar17;
        }
        *(undefined8 *)(lVar7 + 0x18) = 0;
        for (plVar11 = *(long **)(plVar9[2] + 0x48); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          lVar7 = plVar11[2];
          *(undefined4 *)(lVar7 + 0x318) = 0xffffffff;
          local_68 = 0;
          local_70 = 0x400000000;
          FUN_034a30a4(lVar7,&local_70,1);
        }
        iVar1 = (int)plVar9[1] + -1;
        *(int *)(plVar9 + 1) = iVar1;
        if (iVar1 == 0) {
          puVar12 = (undefined8 *)plVar9[3];
          if ((puVar12 != (undefined8 *)0x0) &&
             (iVar1 = *(int *)((long)puVar12 + 0x4c) + -1, *(int *)((long)puVar12 + 0x4c) = iVar1,
             iVar1 == 0)) {
            (**(code **)*puVar12)(puVar12);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar12);
          }
          if ((long *)plVar9[4] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[4] + 0x30))();
          }
          piVar14 = (int *)plVar9[2];
          if ((piVar14 != (int *)0x0) && (iVar1 = *piVar14, *piVar14 = iVar1 + -1, iVar1 + -1 == 0))
          {
            FUN_0344ca4c(piVar14);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar14);
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
        }
      }
      else {
        plVar16 = (long *)*plVar9;
        plVar17 = plVar9;
      }
      plVar9 = plVar16;
    } while (plVar9 != (long *)0x0);
  }
  return;
}


