/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dbb94; name: FUN_008dbb94
 */


void FUN_008dbb94(long param_1,int *param_2,long *param_3)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  *(undefined1 *)(param_2 + 10) = 1;
  lVar9 = *(long *)(param_2 + 2) + (ulong)*(uint *)(*(long *)(param_2 + 2) + 0x14);
  *(long *)(param_2 + 4) = lVar9;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(lVar9 + 0x50);
  lVar9 = *(long *)(param_2 + 2);
  iVar6 = 0;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 8) != 0xffffffff)) {
    iVar6 = 0;
    piVar10 = (int *)(lVar9 + (ulong)*(uint *)(lVar9 + 8));
    do {
      puVar1 = (uint *)(piVar10 + 3);
      if (*piVar10 == 0x52544d45) {
        iVar6 = iVar6 + 1;
      }
      piVar2 = (int *)((long)piVar10 + (ulong)*puVar1);
      piVar10 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar10 = piVar2;
      }
    } while (piVar10 != (int *)0x0);
  }
  *param_2 = iVar6;
  iVar6 = *(int *)(*(long *)(param_2 + 4) + 0x50);
  param_2[1] = iVar6;
  lVar15 = (long)iVar6 * 0x3e0 + 0x20;
  lVar9 = (**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                    (*(long **)(param_1 + 0x458),lVar15,0x80);
  *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar15;
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  *(long *)(param_2 + 8) = lVar9;
  if (param_2[1] != 0) {
    lVar12 = (long)param_2[1] * 0x3e0;
    lVar15 = lVar9;
    do {
      FUN_008cb020(lVar15);
      lVar15 = lVar15 + 0x3e0;
      lVar12 = lVar12 + -0x3e0;
    } while (lVar12 != 0);
  }
  lVar15 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 6) = lVar9;
  if ((lVar15 != 0) && (*(uint *)(lVar15 + 8) != 0xffffffff)) {
    piVar10 = (int *)(lVar15 + (ulong)*(uint *)(lVar15 + 8));
    do {
      if (*piVar10 == 0x52544d45) {
        *(undefined2 *)((long)param_2 + 0x29) = 0;
        if (piVar10 == (int *)0x0) {
          return;
        }
        iVar6 = 0;
        lVar12 = 0;
        *(undefined8 *)(lVar9 + 0x110) = 0;
        lVar15 = lVar9;
        while( true ) {
          lVar5 = lVar15;
          lVar13 = lVar9 + lVar12 * 0x3e0;
          *(int *)(lVar13 + 8) = iVar6;
          uVar4 = piVar10[5];
          plVar14 = (long *)(lVar13 + 0x10);
          *plVar14 = (long)piVar10 + (ulong)uVar4;
          *(ulong *)(lVar13 + 0x18) = (long)piVar10 + (ulong)uVar4 + 0x50;
          FUN_008cd2e4(lVar5,piVar10);
          lVar17 = param_3[1];
          uVar8 = -lVar17;
          lVar15 = (lVar17 + 0x74fU & uVar8) + *param_3;
          *param_3 = lVar15;
          if (*(long *)(lVar13 + 0x300) != 0) {
            lVar15 = ((lVar17 + *(long *)(lVar9 + lVar12 * 0x3e0 + 0x308)) - 1U & uVar8) + lVar15;
            *param_3 = lVar15;
          }
          if (*(long *)(lVar9 + lVar12 * 0x3e0 + 0x338) != 0) {
            lVar15 = lVar15 + (lVar17 + 0x7fU & uVar8);
            *param_3 = lVar15;
          }
          if (*(char *)(lVar9 + lVar12 * 0x3e0 + 3) != '\0') {
            *param_3 = lVar15 + (lVar17 + 0x11fU & uVar8);
          }
          *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + (ulong)(uint)piVar10[1];
          lVar15 = *plVar14;
          if (*(char *)(lVar15 + 0x8a8) != '\0') {
            *(undefined1 *)((long)param_2 + 0x2a) = 1;
            lVar15 = *plVar14;
          }
          if (*(char *)(lVar15 + 0x7f0) == '\0') {
            *(undefined1 *)((long)param_2 + 0x29) = 1;
          }
          lVar15 = lVar9 + lVar12 * 0x3e0;
          iVar11 = (int)lVar12 + 1;
          *(int *)(lVar15 + 0x88) = 0;
          *(undefined8 *)(lVar15 + 0x100) = 0;
          *(undefined8 *)(lVar15 + 0x108) = 0;
          *(undefined8 *)(lVar15 + 0xf0) = 0;
          *(undefined8 *)(lVar15 + 0xf8) = 0;
          *(undefined8 *)(lVar15 + 0xe0) = 0;
          *(undefined8 *)(lVar15 + 0xe8) = 0;
          *(undefined8 *)(lVar15 + 0xd0) = 0;
          *(undefined8 *)(lVar15 + 0xd8) = 0;
          *(undefined8 *)(lVar15 + 0xc0) = 0;
          *(undefined8 *)(lVar15 + 200) = 0;
          *(undefined8 *)(lVar15 + 0xb0) = 0;
          *(undefined8 *)(lVar15 + 0xb8) = 0;
          *(undefined8 *)(lVar15 + 0xa0) = 0;
          *(undefined8 *)(lVar15 + 0xa8) = 0;
          *(undefined8 *)(lVar15 + 0x90) = 0;
          *(undefined8 *)(lVar15 + 0x98) = 0;
          if (piVar10[2] != 0xffffffff) {
            lVar16 = (long)piVar10 + (ulong)(uint)piVar10[2];
            lVar13 = (long)iVar11 * 0x3e0;
            lVar17 = 0;
            lVar9 = lVar9 + lVar12 * 0x3e0 + 0x90;
            do {
              lVar12 = *(long *)(param_2 + 6) + lVar13;
              *(int *)(lVar12 + 8) = (int)lVar17;
              lVar7 = lVar16 + (ulong)*(uint *)(lVar16 + 0x14);
              *(long *)(lVar12 + 0x10) = lVar7;
              *(long *)(lVar12 + 0x18) = lVar7 + 0x50;
              FUN_008cd2e4(lVar12,lVar16);
              lVar3 = param_3[1];
              uVar8 = -lVar3;
              lVar7 = (lVar3 + 0x74fU & uVar8) + *param_3;
              *param_3 = lVar7;
              if (*(long *)(lVar12 + 0x300) != 0) {
                lVar7 = ((lVar3 + *(long *)(lVar12 + 0x308)) - 1U & uVar8) + lVar7;
                *param_3 = lVar7;
              }
              if (*(long *)(lVar12 + 0x338) != 0) {
                lVar7 = lVar7 + (lVar3 + 0x7fU & uVar8);
                *param_3 = lVar7;
              }
              if (*(char *)(lVar12 + 3) != '\0') {
                *param_3 = lVar7 + (lVar3 + 0x11fU & uVar8);
              }
              *(undefined1 *)(lVar12 + 4) = 1;
              if (*(char *)(*(long *)(lVar12 + 0x10) + 0x8a8) != '\0') {
                *(undefined1 *)((long)param_2 + 0x2a) = 1;
              }
              lVar7 = lVar17 * 8;
              lVar17 = lVar17 + 1;
              lVar13 = lVar13 + 0x3e0;
              *(long *)(lVar9 + lVar7) = lVar12;
              *(undefined8 *)(lVar12 + 0x110) = 0;
              lVar12 = *(long *)(lVar9 + lVar7);
              *(undefined8 *)(lVar12 + 0x100) = 0;
              *(undefined8 *)(lVar12 + 0x108) = 0;
              *(undefined8 *)(lVar12 + 0xf0) = 0;
              *(undefined8 *)(lVar12 + 0xf8) = 0;
              *(undefined8 *)(lVar12 + 0xe0) = 0;
              *(undefined8 *)(lVar12 + 0xe8) = 0;
              *(undefined8 *)(lVar12 + 0xd0) = 0;
              *(undefined8 *)(lVar12 + 0xd8) = 0;
              *(undefined8 *)(lVar12 + 0xc0) = 0;
              *(undefined8 *)(lVar12 + 200) = 0;
              *(undefined8 *)(lVar12 + 0xb0) = 0;
              *(undefined8 *)(lVar12 + 0xb8) = 0;
              *(undefined8 *)(lVar12 + 0xa0) = 0;
              *(undefined8 *)(lVar12 + 0xa8) = 0;
              *(undefined8 *)(lVar12 + 0x90) = 0;
              *(undefined8 *)(lVar12 + 0x98) = 0;
              puVar1 = (uint *)(lVar16 + 0xc);
              lVar12 = lVar16 + (ulong)*puVar1;
              lVar16 = 0;
              if (*puVar1 != 0xffffffff) {
                lVar16 = lVar12;
              }
            } while (lVar16 != 0);
            *(int *)(lVar15 + 0x88) = (int)lVar17;
            iVar11 = iVar11 + (int)lVar17;
          }
          if (piVar10[3] == 0xffffffff) break;
          iVar6 = iVar6 + 1;
          piVar10 = (int *)((long)piVar10 + (ulong)(uint)piVar10[3]);
          while (*piVar10 != 0x52544d45) {
            puVar1 = (uint *)(piVar10 + 3);
            piVar2 = (int *)((long)piVar10 + (ulong)*puVar1);
            piVar10 = (int *)0x0;
            if (*puVar1 != 0xffffffff) {
              piVar10 = piVar2;
            }
            if (piVar10 == (int *)0x0) {
              return;
            }
          }
          if (piVar10 == (int *)0x0) {
            return;
          }
          lVar9 = *(long *)(param_2 + 6);
          lVar15 = lVar9 + (long)iVar11 * 0x3e0;
          lVar12 = (long)iVar11;
          *(undefined8 *)(lVar15 + 0x110) = 0;
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x110) = lVar15;
          }
        }
        return;
      }
      puVar1 = (uint *)(piVar10 + 3);
      piVar2 = (int *)((long)piVar10 + (ulong)*puVar1);
      piVar10 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar10 = piVar2;
      }
    } while (piVar10 != (int *)0x0);
  }
  *(undefined2 *)((long)param_2 + 0x29) = 0;
  return;
}


