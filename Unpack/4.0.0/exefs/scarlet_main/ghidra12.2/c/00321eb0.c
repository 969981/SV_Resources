/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00321eb0; name: FUN_00321eb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00321eb0(long param_1,undefined8 param_2)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  
  if ((*(byte *)(param_1 + 0x240) >> 3 & 1) != 0) {
    FUN_00322684(param_2,0);
    return;
  }
  local_f8 = 0;
  uVar13 = 0;
  lVar14 = 0;
  do {
    lVar3 = param_1 + lVar14 * 0x10;
    lVar8 = *(long *)(lVar3 + 0x1e0);
    if (lVar8 != 0) {
      if (((*(byte *)(lVar8 + 0x10) >> 5 & 1) != 0) && (*(long *)(param_1 + 0x170) != 0)) {
        lVar10 = *(long *)(lVar8 + 8);
        *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar10 + 0x70);
        uVar11 = *(undefined8 *)(lVar10 + 0x80);
        *(code **)(param_1 + 0x1b8) = FUN_0032234c;
        *(long *)(param_1 + 0x1c0) = param_1;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined8 *)(param_1 + 0x1d0) = uVar11;
        *(long *)(*(long *)(lVar8 + 8) + 0x80) = param_1 + 0x1b0;
      }
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x120);
      *(undefined1 **)(lVar8 + 0x28) = &LAB_00323540;
      *(long *)(lVar8 + 0x30) = lVar8;
      *(undefined8 *)(lVar8 + 0x38) = 0;
      bVar6 = (uVar13 & 1) != 0;
      pppppppuVar16 = &local_f0;
      if (bVar6) {
        pppppppuVar16 = local_f0;
      }
      uVar12 = 6;
      if (bVar6) {
        uVar12 = uStack_e8;
      }
      uVar17 = uVar13 >> 1;
      if (uVar17 == uVar12) {
        uVar15 = uVar12 * 2;
        pppppppuVar7 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar12 * 0x30);
        pppppppuVar9 = pppppppuVar7;
      }
      else {
        pppppppuVar7 = (undefined8 *******)0x0;
        uVar15 = 0;
        pppppppuVar9 = pppppppuVar16;
      }
      pppppppuVar9 = pppppppuVar9 + uVar17 * 3;
      *pppppppuVar9 = (undefined8 ******)(lVar8 + 0x20);
      pppppppuVar9[1] = (undefined8 ******)0x0;
      pppppppuVar9[2] = (undefined8 ******)"PendingBatchesResume";
      if (pppppppuVar7 != (undefined8 *******)0x0) {
        if (uVar17 != 0) {
          uVar13 = uVar13 >> 1 & 3;
          if (uVar17 - 1 < 3) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            pppppppuVar9 = pppppppuVar7 + 6;
            do {
              ppppppuVar19 = pppppppuVar16[1];
              ppppppuVar18 = *pppppppuVar16;
              uVar12 = uVar12 + 4;
              pppppppuVar9[-4] = pppppppuVar16[2];
              pppppppuVar9[-5] = ppppppuVar19;
              pppppppuVar9[-6] = ppppppuVar18;
              ppppppuVar19 = pppppppuVar16[4];
              ppppppuVar18 = pppppppuVar16[3];
              pppppppuVar9[-1] = pppppppuVar16[5];
              pppppppuVar9[-2] = ppppppuVar19;
              pppppppuVar9[-3] = ppppppuVar18;
              ppppppuVar19 = pppppppuVar16[7];
              ppppppuVar18 = pppppppuVar16[6];
              pppppppuVar9[2] = pppppppuVar16[8];
              pppppppuVar9[1] = ppppppuVar19;
              *pppppppuVar9 = ppppppuVar18;
              ppppppuVar19 = pppppppuVar16[10];
              ppppppuVar18 = pppppppuVar16[9];
              pppppppuVar1 = pppppppuVar16 + 0xb;
              pppppppuVar16 = pppppppuVar16 + 0xc;
              pppppppuVar9[5] = *pppppppuVar1;
              pppppppuVar9[4] = ppppppuVar19;
              pppppppuVar9[3] = ppppppuVar18;
              pppppppuVar9 = pppppppuVar9 + 0xc;
            } while ((uVar17 & 0x7ffffffffffffffc) != uVar12);
          }
          if (uVar13 != 0) {
            pppppppuVar9 = pppppppuVar7 + uVar12 * 3;
            do {
              ppppppuVar19 = pppppppuVar16[1];
              ppppppuVar18 = *pppppppuVar16;
              uVar13 = uVar13 - 1;
              pppppppuVar9[2] = pppppppuVar16[2];
              pppppppuVar9[1] = ppppppuVar19;
              *pppppppuVar9 = ppppppuVar18;
              pppppppuVar9 = pppppppuVar9 + 3;
              pppppppuVar16 = pppppppuVar16 + 3;
            } while (uVar13 != 0);
          }
        }
        if ((local_f8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f0);
        }
        local_f8 = local_f8 | 1;
        local_f0 = pppppppuVar7;
        uStack_e8 = uVar15;
      }
      uVar13 = local_f8 + 2;
      bVar4 = *(byte *)(param_1 + 0x240);
      plVar2 = (long *)(lVar3 + 0x1e0);
      if ((bVar4 >> 3 & 1) != 0) {
        bVar5 = *(byte *)(*plVar2 + 0x10);
        if ((bVar5 & 1) != 0) {
          bVar4 = bVar4 & 0xfe;
          *(byte *)(param_1 + 0x240) = bVar4;
          bVar5 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar5 >> 2 & 1) != 0) {
          bVar4 = bVar4 & 0xfd;
          *(byte *)(param_1 + 0x240) = bVar4;
          bVar5 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar5 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x240) = bVar4 & 0xfb;
        }
      }
      *plVar2 = 0;
      local_f8 = uVar13;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 6);
                    /* try { // try from 00322134 to 0032213b has its CatchHandler @ 00322174 */
  FUN_0032226c(&local_f8,*(undefined8 *)(param_1 + 0xd0));
  if ((local_f8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f0);
  }
  return;
}


