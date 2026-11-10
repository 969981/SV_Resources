/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b9aa8; name: FUN_034b9aa8
 */


void FUN_034b9aa8(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  puVar6 = PTR_DAT_047e2fd0;
  uVar8 = *param_2;
  if (uVar8 == 0) {
    if ((((param_2[2] == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) &&
       (*(long *)(param_2 + 8) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_034b9cd0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_034b9f60(puVar12,param_2 + 2);
        if ((*(char *)((long)puVar12 + 0xc) == '\0') && (*(int *)(puVar12 + 3) == 0)) {
          if (puVar12[2] != 0) {
            *(undefined4 *)(puVar12 + 3) = 0;
            (**(code **)(puVar6 + 0x30))(0);
            puVar12[2] = 0;
            *(undefined4 *)((long)puVar12 + 0x1c) = 0;
          }
          puVar7 = (undefined8 *)
                   ((*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28) - 0x28);
          for (puVar5 = puVar12; puVar5 < puVar7; puVar5 = puVar5 + 5) {
            *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar5 + 9);
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar5 + 6);
            *(undefined1 *)((long)puVar5 + 0xc) = *(undefined1 *)((long)puVar5 + 0x34);
            uVar2 = puVar5[7];
            uVar3 = puVar5[8];
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
          }
          (**(code **)*puVar7)();
          uVar8 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar8;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar12 = puVar12 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x28) != puVar12);
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x18);
    if (uVar10 != 0) {
      lVar15 = *(long *)(param_1 + 0x10);
      iVar11 = 0;
      do {
        iVar1 = iVar11 + (uVar10 >> 1);
        lVar16 = (long)iVar1;
        uVar4 = *(uint *)(lVar15 + (long)iVar1 * 0x28 + 0x20);
        if (uVar4 == uVar8) {
          lVar13 = lVar15 + lVar16 * 0x28;
          FUN_034b9f60(lVar13,param_2 + 2);
          if (*(char *)(lVar13 + 0xc) != '\0') {
            return;
          }
          piVar9 = (int *)(lVar15 + lVar16 * 0x28 + 0x18);
          if (*piVar9 != 0) {
            return;
          }
          plVar14 = (long *)(lVar15 + lVar16 * 0x28 + 0x10);
          if (*plVar14 != 0) {
            *piVar9 = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar14 = 0;
            *(undefined4 *)(lVar15 + lVar16 * 0x28 + 0x1c) = 0;
          }
          FUN_034ba22c((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (uVar4 < uVar8) {
          iVar11 = iVar1 + 1;
        }
        uVar10 = uVar10 - (uVar4 < uVar8) >> 1;
      } while (uVar10 != 0);
    }
  }
  return;
}


