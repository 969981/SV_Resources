/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5e6f8; name: FUN_02f5e6f8
 */


void FUN_02f5e6f8(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  
  if (*(int *)(param_2 + 8) != 0) {
    puVar8 = (uint *)**(undefined8 **)(param_2 + 0x10);
    lVar7 = *(long *)(param_4 + 0x10);
    if ((*puVar8 & 0xffff) != 0) {
      puVar11 = puVar8 + 8;
      uVar10 = *puVar8 & 0xffff;
      uVar9 = 0x7fffffff;
      do {
        while( true ) {
          lVar15 = lVar7 + (ulong)*puVar11 * 0x80;
          iVar2 = *(int *)(lVar15 + 0x4c);
          if (iVar2 != 0x7fffffff) {
            lVar1 = lVar7 + (ulong)puVar11[1] * 0x80;
            iVar3 = *(int *)(lVar1 + 0x4c);
            if (iVar3 != 0x7fffffff) {
              uVar13 = *(int *)(*param_3 + (ulong)*(byte *)(lVar15 + 0x5e) * 8) + iVar2;
              plVar12 = (long *)*param_1;
              lVar15 = *plVar12;
              uVar14 = uVar13;
              do {
                uVar6 = uVar14;
                uVar14 = *(uint *)(lVar15 + (long)(int)uVar6 * 4);
              } while (-1 < (int)uVar14);
              uVar14 = *(int *)(*param_3 + (ulong)*(byte *)(lVar1 + 0x5e) * 8) + iVar3;
              puVar5 = (uint *)(lVar15 + (long)(int)uVar13 * 4);
              while (uVar4 = *puVar5, -1 < (int)uVar4) {
                *puVar5 = uVar6;
                lVar15 = *plVar12;
                uVar13 = uVar4;
                puVar5 = (uint *)(lVar15 + (ulong)uVar4 * 4);
              }
              uVar6 = uVar14;
              do {
                uVar4 = uVar6;
                uVar6 = *(uint *)(lVar15 + (long)(int)uVar4 * 4);
              } while (-1 < (int)uVar6);
              puVar5 = (uint *)(lVar15 + (long)(int)uVar14 * 4);
              while (uVar6 = *puVar5, -1 < (int)uVar6) {
                *puVar5 = uVar4;
                lVar15 = *plVar12;
                uVar14 = uVar6;
                puVar5 = (uint *)(lVar15 + (ulong)uVar6 * 4);
              }
              if (uVar13 != uVar14) {
                iVar2 = *(int *)(lVar15 + (long)(int)uVar14 * 4) +
                        *(int *)(lVar15 + (long)(int)uVar13 * 4);
                if ((int)uVar13 < (int)uVar14) {
                  *(int *)(lVar15 + (long)(int)uVar13 * 4) = iVar2;
                  *(uint *)(*plVar12 + (long)(int)uVar14 * 4) = uVar13;
                }
                else {
                  *(int *)(lVar15 + (long)(int)uVar14 * 4) = iVar2;
                  *(uint *)(*plVar12 + (long)(int)uVar13 * 4) = uVar14;
                }
              }
            }
          }
          if (1 < (int)uVar10) break;
          if (uVar9 == 0) {
            return;
          }
          puVar8 = *(uint **)(puVar8 + 2);
          if (puVar8 == (uint *)0x0) {
            return;
          }
          uVar10 = *puVar8 & 0xffff;
          if ((int)uVar9 <= (int)(*puVar8 & 0xffff)) {
            uVar10 = uVar9;
          }
          if ((int)uVar10 < 1) {
            return;
          }
          uVar9 = uVar9 - uVar10;
          puVar11 = puVar8 + 8;
          Hint_Prefetch(*(long *)(puVar8 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar8 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar8 + 0x20,0,0,0);
          Hint_Prefetch(puVar8 + 0x30,0,0,0);
          if (puVar11 == (uint *)0x0) {
            return;
          }
        }
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (puVar11 != (uint *)0x0);
    }
  }
  return;
}


