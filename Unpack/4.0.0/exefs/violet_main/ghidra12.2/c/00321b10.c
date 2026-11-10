/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00321b10; name: FUN_00321b10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00321b10(long param_1,undefined8 ******param_2,code *param_3)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  
  if (param_2 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar19 = 0;
  lVar18 = 0;
  local_f8 = 0;
  do {
    lVar3 = param_1 + lVar18 * 0x10;
    lVar14 = *(long *)(lVar3 + 0x1e0);
    if (lVar14 != 0) {
      if (((*(byte *)(lVar14 + 0x10) >> 5 & 1) != 0) && (*(long *)(param_1 + 0x170) != 0)) {
        lVar10 = *(long *)(lVar14 + 8);
        *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar10 + 0x70);
        uVar11 = *(undefined8 *)(lVar10 + 0x80);
        *(code **)(param_1 + 0x1b8) = FUN_0032234c;
        *(long *)(param_1 + 0x1c0) = param_1;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined8 *)(param_1 + 0x1d0) = uVar11;
        *(long *)(*(long *)(lVar14 + 8) + 0x80) = param_1 + 0x1b0;
      }
      *(long *)(lVar14 + 0x18) = param_1;
      *(undefined8 *)(lVar14 + 0x38) = 0;
      *(undefined1 **)(lVar14 + 0x28) = &LAB_00322234;
      *(long *)(lVar14 + 0x30) = lVar14;
      ppppppuVar8 = param_2;
      if ((undefined8 ******)0x4 < param_2) {
                    /* try { // try from 00321bd4 to 00321bdb has its CatchHandler @ 00321e84 */
        ppppppuVar8 = (undefined8 ******)FUN_00350fb0(param_2);
        uVar19 = local_f8;
      }
      bVar7 = (uVar19 & 1) != 0;
      pppppppuVar17 = &local_f0;
      if (bVar7) {
        pppppppuVar17 = local_f0;
      }
      uVar13 = 6;
      if (bVar7) {
        uVar13 = uStack_e8;
      }
      uVar16 = uVar19 >> 1;
      if (uVar16 == uVar13) {
        uVar15 = uVar13 * 2;
        pppppppuVar9 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar13 * 0x30);
        pppppppuVar12 = pppppppuVar9;
      }
      else {
        pppppppuVar9 = (undefined8 *******)0x0;
        uVar15 = 0;
        pppppppuVar12 = pppppppuVar17;
      }
      pppppppuVar12 = pppppppuVar12 + uVar16 * 3;
      *pppppppuVar12 = (undefined8 ******)(lVar14 + 0x20);
      pppppppuVar12[1] = ppppppuVar8;
      pppppppuVar12[2] = (undefined8 ******)"PendingBatchesFail";
      if (pppppppuVar9 != (undefined8 *******)0x0) {
        if (uVar16 != 0) {
          uVar19 = uVar19 >> 1 & 3;
          if (uVar16 - 1 < 3) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            pppppppuVar12 = pppppppuVar9 + 6;
            do {
              ppppppuVar20 = pppppppuVar17[1];
              ppppppuVar8 = *pppppppuVar17;
              uVar13 = uVar13 + 4;
              pppppppuVar12[-4] = pppppppuVar17[2];
              pppppppuVar12[-5] = ppppppuVar20;
              pppppppuVar12[-6] = ppppppuVar8;
              ppppppuVar20 = pppppppuVar17[4];
              ppppppuVar8 = pppppppuVar17[3];
              pppppppuVar12[-1] = pppppppuVar17[5];
              pppppppuVar12[-2] = ppppppuVar20;
              pppppppuVar12[-3] = ppppppuVar8;
              ppppppuVar20 = pppppppuVar17[7];
              ppppppuVar8 = pppppppuVar17[6];
              pppppppuVar12[2] = pppppppuVar17[8];
              pppppppuVar12[1] = ppppppuVar20;
              *pppppppuVar12 = ppppppuVar8;
              ppppppuVar20 = pppppppuVar17[10];
              ppppppuVar8 = pppppppuVar17[9];
              pppppppuVar1 = pppppppuVar17 + 0xb;
              pppppppuVar17 = pppppppuVar17 + 0xc;
              pppppppuVar12[5] = *pppppppuVar1;
              pppppppuVar12[4] = ppppppuVar20;
              pppppppuVar12[3] = ppppppuVar8;
              pppppppuVar12 = pppppppuVar12 + 0xc;
            } while ((uVar16 & 0x7ffffffffffffffc) != uVar13);
          }
          if (uVar19 != 0) {
            pppppppuVar12 = pppppppuVar9 + uVar13 * 3;
            do {
              ppppppuVar20 = pppppppuVar17[1];
              ppppppuVar8 = *pppppppuVar17;
              uVar19 = uVar19 - 1;
              pppppppuVar12[2] = pppppppuVar17[2];
              pppppppuVar12[1] = ppppppuVar20;
              *pppppppuVar12 = ppppppuVar8;
              pppppppuVar12 = pppppppuVar12 + 3;
              pppppppuVar17 = pppppppuVar17 + 3;
            } while (uVar19 != 0);
          }
        }
        if ((local_f8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f0);
        }
        local_f8 = local_f8 | 1;
        local_f0 = pppppppuVar9;
        uStack_e8 = uVar15;
      }
      uVar19 = local_f8 + 2;
      bVar5 = *(byte *)(param_1 + 0x240);
      plVar2 = (long *)(lVar3 + 0x1e0);
      if ((bVar5 >> 3 & 1) != 0) {
        bVar6 = *(byte *)(*plVar2 + 0x10);
        if ((bVar6 & 1) != 0) {
          bVar5 = bVar5 & 0xfe;
          *(byte *)(param_1 + 0x240) = bVar5;
          bVar6 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar6 >> 2 & 1) != 0) {
          bVar5 = bVar5 & 0xfd;
          *(byte *)(param_1 + 0x240) = bVar5;
          bVar6 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar6 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x240) = bVar5 & 0xfb;
        }
      }
      *plVar2 = 0;
      local_f8 = uVar19;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 6);
                    /* try { // try from 00321d90 to 00321daf has its CatchHandler @ 00321e7c */
  uVar19 = (*param_3)(&local_f8);
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  if ((uVar19 & 1) == 0) {
    bVar7 = (local_f8 & 1) == 0;
    if (1 < local_f8) {
      lVar18 = 0;
      uVar19 = 0;
      do {
        pppppppuVar17 = &local_f0;
        if (!bVar7) {
          pppppppuVar17 = local_f0;
        }
        puVar4 = (undefined8 *)((long)pppppppuVar17 + lVar18);
                    /* try { // try from 00321df4 to 00321dfb has its CatchHandler @ 00321e80 */
        FUN_003504a8(uVar11,*puVar4,puVar4[1],puVar4[2]);
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x18;
        bVar7 = (local_f8 & 1) == 0;
      } while (uVar19 < local_f8 >> 1);
    }
    if (!bVar7) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    local_f8 = 0;
  }
  else {
    FUN_0032226c(&local_f8,uVar11);
  }
  if ((undefined8 ******)0x4 < param_2) {
                    /* try { // try from 00321e38 to 00321e3f has its CatchHandler @ 00321e7c */
    FUN_00350fd0(param_2);
  }
  if ((local_f8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f0);
  }
  return;
}


