/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010caa0; name: FUN_0010caa0
 */


void FUN_0010caa0(int *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *in_x5;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *local_68;
  
  if (*(int *)(param_2 + 4) != 1) {
    uVar14 = 0;
    local_68 = (uint *)(param_2 + 0xc);
    do {
      iVar3 = 0;
      if (param_1[5] + 1 < *param_1) {
        iVar3 = param_1[5] + 1;
      }
      if ((in_x5 != (int *)0x0) && (*in_x5 != 0)) {
        uVar16 = (uint)param_1[1] >> 5;
        uVar4 = param_1[9];
        uVar11 = (ulong)uVar4;
        piVar15 = in_x5 + 1;
        *in_x5 = 0;
        uVar5 = *local_68;
        if (uVar16 != 0) {
          lVar12 = *(long *)(param_1 + (long)iVar3 * 0x14 + 6) + (ulong)((uVar5 + 0xe) * uVar4);
          uVar9 = lVar12 + 0x7fU & 0xffffffffffffffc0;
          uVar10 = uVar16;
          do {
            uVar6 = (int)uVar9 - (int)lVar12;
            uVar7 = (ulong)uVar6;
            if (uVar6 < 0x41) {
              lVar13 = uVar9 + uVar11;
              Hint_Prefetch(uVar9,0,0,0);
              uVar9 = uVar9 + 0x40;
              Hint_Prefetch(lVar13,0,0,0);
              lVar13 = lVar13 + uVar11;
              Hint_Prefetch(lVar13,0,0,0);
              uVar7 = lVar13 + uVar11;
              Hint_Prefetch(uVar7,0,0,0);
            }
            FUN_0010ccf0(uVar7,(char)*piVar15,lVar12,uVar4);
            puVar1 = (undefined1 *)((long)piVar15 + 1);
            piVar15 = (int *)((long)piVar15 + 2);
            FUN_0010ccf0(*puVar1,lVar12 + 0x10,uVar11);
            uVar10 = uVar10 - 1;
            lVar12 = lVar12 + 0x20;
          } while (uVar10 != 0);
        }
        if (uVar16 != 0) {
          uVar4 = param_1[0xd];
          uVar7 = (ulong)uVar4;
          uVar11 = (ulong)(uVar4 * ((uVar5 >> 1) + 6));
          lVar13 = *(long *)(param_1 + (long)iVar3 * 0x14 + 0xe) + uVar11;
          lVar12 = *(long *)(param_1 + (long)iVar3 * 0x14 + 10) + uVar11;
          uVar9 = lVar13 + 0x7fU & 0xffffffffffffffc0;
          uVar11 = lVar12 + 0x7fU & 0xffffffffffffffc0;
          do {
            if ((uint)((int)uVar11 - (int)lVar12) < 0x41) {
              lVar2 = uVar11 + uVar7;
              Hint_Prefetch(uVar11,0,0,0);
              uVar11 = uVar11 + 0x40;
              Hint_Prefetch(lVar2,0,0,0);
              lVar2 = lVar2 + uVar7;
              Hint_Prefetch(lVar2,0,0,0);
              Hint_Prefetch(lVar2 + uVar7,0,0,0);
            }
            uVar5 = (int)uVar9 - (int)lVar13;
            uVar8 = (ulong)uVar5;
            if (uVar5 < 0x41) {
              lVar2 = uVar9 + uVar7;
              Hint_Prefetch(uVar9,0,0,0);
              uVar9 = uVar9 + 0x40;
              Hint_Prefetch(lVar2,0,0,0);
              lVar2 = lVar2 + uVar7;
              Hint_Prefetch(lVar2,0,0,0);
              uVar8 = lVar2 + uVar7;
              Hint_Prefetch(uVar8,0,0,0);
            }
            FUN_0010ccf0(uVar8,(char)*piVar15,lVar12,uVar4);
            FUN_0010ccf0(*(undefined1 *)((long)piVar15 + 1),lVar13,uVar7);
            lVar12 = lVar12 + 0x10;
            lVar13 = lVar13 + 0x10;
            uVar16 = uVar16 - 1;
            piVar15 = (int *)((long)piVar15 + 2);
          } while (uVar16 != 0);
        }
      }
      in_x5 = (int *)((long)in_x5 + (ulong)*(uint *)(param_2 + 8));
      uVar14 = uVar14 + 1;
      local_68 = local_68 + 1;
    } while (uVar14 < *(int *)(param_2 + 4) - 1U);
  }
  return;
}


