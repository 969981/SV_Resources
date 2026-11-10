/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ba840; name: FUN_034ba840
 */


void FUN_034ba840(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  
  puVar4 = PTR_DAT_047e2fd0;
  bVar2 = *param_2;
  if (bVar2 == 0xff) {
    uVar11 = *(ulong *)(param_2 + 8);
    if (uVar11 == 0) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar4 = PTR_DAT_047e2fd0;
      puVar20 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar16 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        plVar19 = puVar20 + 2;
        do {
          if (*plVar19 != 0) {
            *(undefined4 *)(plVar19 + 1) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *plVar19 = 0;
            *(undefined4 *)((long)plVar19 + 0xc) = 0;
          }
          lVar16 = lVar16 + -0x28;
          plVar19 = plVar19 + 5;
        } while (lVar16 != 0);
        puVar20 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar20 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar16 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
          do {
            (**(code **)*puVar20)(puVar20);
            lVar16 = lVar16 + -0x28;
            puVar20 = puVar20 + 5;
          } while (lVar16 != 0);
          puVar20 = *(undefined8 **)(param_1 + 0x10);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar20);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      puVar20 = *(undefined8 **)(param_1 + 0x10);
      if (uVar11 == 0) goto LAB_034ba91c;
      while( true ) {
        uVar8 = *(uint *)(puVar20 + 3);
        if (uVar8 != 0) break;
LAB_034ba988:
        while( true ) {
          if ((*(char *)((long)puVar20 + 0xc) == '\0') && (*(int *)(puVar20 + 3) == 0)) {
            if (puVar20[2] != 0) {
              *(undefined4 *)(puVar20 + 3) = 0;
              (**(code **)(puVar4 + 0x30))(0);
              puVar20[2] = 0;
              *(undefined4 *)((long)puVar20 + 0x1c) = 0;
            }
            puVar17 = (undefined8 *)
                      (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
            puVar12 = puVar20;
            while (puVar12 < puVar17) {
              *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(puVar12 + 9);
              *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 6);
              *(undefined1 *)((long)puVar12 + 0xc) = *(undefined1 *)((long)puVar12 + 0x34);
              if (puVar12[2] != 0) {
                *(undefined4 *)(puVar12 + 3) = 0;
                (**(code **)(puVar4 + 0x30))(0);
                puVar12[2] = 0;
                *(undefined4 *)((long)puVar12 + 0x1c) = 0;
              }
              *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar12 + 8);
              *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar12 + 0x44);
              puVar12[2] = puVar12[7];
              puVar12[7] = 0;
              puVar12[8] = 0;
              puVar12 = puVar12 + 5;
            }
            (**(code **)*puVar17)(puVar17);
            uVar8 = *(int *)(param_1 + 0x18) - 1;
            *(uint *)(param_1 + 0x18) = uVar8;
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x18);
            puVar20 = puVar20 + 5;
          }
          if ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x28) == puVar20) {
            return;
          }
          uVar11 = *(ulong *)(param_2 + 8);
          if (uVar11 != 0) break;
LAB_034ba91c:
          if (*(char *)((long)puVar20 + 0xc) != '\0') {
            *(undefined1 *)((long)puVar20 + 0xc) = 0;
          }
          if (puVar20[2] != 0) {
            *(undefined4 *)(puVar20 + 3) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            puVar20[2] = 0;
            *(undefined4 *)((long)puVar20 + 0x1c) = 0;
          }
        }
      }
      lVar16 = puVar20[2];
      iVar10 = 0;
      uVar13 = uVar8;
LAB_034ba8ec:
      iVar1 = iVar10 + (uVar13 >> 1);
      uVar15 = *(ulong *)(lVar16 + (long)iVar1 * 0x10 + 8);
      if (uVar15 != uVar11) goto code_r0x034ba904;
      puVar12 = (undefined8 *)(lVar16 + (long)iVar1 * 0x10);
      puVar17 = (undefined8 *)((lVar16 + (ulong)uVar8 * 0x10) - 0x10);
      if (puVar12 < puVar17) {
        do {
          puVar9 = puVar12 + 2;
          *puVar12 = *puVar9;
          puVar12[1] = puVar12[3];
          puVar12 = puVar9;
        } while (puVar9 < puVar17);
        uVar8 = *(uint *)(puVar20 + 3);
      }
      *(uint *)(puVar20 + 3) = uVar8 - 1;
      goto LAB_034ba988;
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 != 0) {
      lVar16 = *(long *)(param_1 + 0x10);
      iVar10 = 0;
      do {
        iVar1 = iVar10 + (uVar8 >> 1);
        lVar18 = (long)iVar1;
        bVar3 = *(byte *)(lVar16 + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          uVar11 = *(ulong *)(param_2 + 8);
          if (uVar11 != 0) {
            puVar5 = (uint *)(lVar16 + lVar18 * 0x28 + 0x18);
            uVar8 = *puVar5;
            if (uVar8 == 0) goto LAB_034bac14;
            lVar14 = *(long *)(lVar16 + lVar18 * 0x28 + 0x10);
            iVar10 = 0;
            uVar13 = uVar8;
            goto LAB_034baaa0;
          }
          pcVar6 = (char *)(lVar16 + lVar18 * 0x28 + 0xc);
          if (*pcVar6 != '\0') {
            *pcVar6 = '\0';
          }
          plVar19 = (long *)(lVar16 + lVar18 * 0x28 + 0x10);
          if (*plVar19 != 0) {
            lVar14 = lVar16 + lVar18 * 0x28;
            *(undefined4 *)(lVar14 + 0x18) = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar19 = 0;
            *(undefined4 *)(lVar14 + 0x1c) = 0;
          }
          goto LAB_034bac14;
        }
        if (bVar3 < bVar2) {
          iVar10 = iVar1 + 1;
        }
        uVar8 = uVar8 - (bVar3 < bVar2) >> 1;
      } while (uVar8 != 0);
    }
  }
  return;
code_r0x034ba904:
  if (uVar15 < uVar11) {
    iVar10 = iVar1 + 1;
  }
  uVar13 = uVar13 - (uVar15 < uVar11) >> 1;
  if (uVar13 == 0) goto LAB_034ba988;
  goto LAB_034ba8ec;
LAB_034baaa0:
  iVar1 = iVar10 + (uVar13 >> 1);
  uVar15 = *(ulong *)(lVar14 + (long)iVar1 * 0x10 + 8);
  if (uVar15 == uVar11) {
    puVar12 = (undefined8 *)((lVar14 + (ulong)uVar8 * 0x10) - 0x10);
    puVar20 = (undefined8 *)(lVar14 + (long)iVar1 * 0x10);
    if (puVar20 < puVar12) {
      do {
        puVar17 = puVar20 + 2;
        *puVar20 = *puVar17;
        puVar20[1] = puVar20[3];
        puVar20 = puVar17;
      } while (puVar17 < puVar12);
      uVar8 = *puVar5;
    }
    *puVar5 = uVar8 - 1;
LAB_034bac14:
    if (*(char *)(lVar16 + lVar18 * 0x28 + 0xc) != '\0') {
      return;
    }
    piVar7 = (int *)(lVar16 + lVar18 * 0x28 + 0x18);
    if (*piVar7 != 0) {
      return;
    }
    plVar19 = (long *)(lVar16 + lVar18 * 0x28 + 0x10);
    if (*plVar19 != 0) {
      *piVar7 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar19 = 0;
      *(undefined4 *)(lVar16 + lVar18 * 0x28 + 0x1c) = 0;
    }
    FUN_034badf8((long *)(param_1 + 0x10),*param_2);
    return;
  }
  if (uVar15 < uVar11) {
    iVar10 = iVar1 + 1;
  }
  uVar13 = uVar13 - (uVar15 < uVar11) >> 1;
  if (uVar13 == 0) goto LAB_034bac14;
  goto LAB_034baaa0;
}


