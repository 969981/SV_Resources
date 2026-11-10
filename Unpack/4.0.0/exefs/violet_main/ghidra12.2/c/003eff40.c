/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eff40; name: FUN_003eff40
 */


bool FUN_003eff40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  undefined8 uVar39;
  long *plVar40;
  ulong uVar41;
  uint uVar42;
  
  iVar34 = FUN_003eb480(param_3);
  if (iVar34 != 0) {
    param_3 = param_2;
LAB_003eff94:
    lVar38 = FUN_003eb8f0(param_1,param_3);
    *(undefined4 *)(param_1 + 2) = 0;
    return lVar38 != 0;
  }
  iVar34 = FUN_003eb480(param_2);
  if (iVar34 != 0) goto LAB_003eff94;
  FUN_003ed410(param_4);
  uVar39 = FUN_003ed5c0(param_4);
  plVar40 = (long *)FUN_003ed5c0(param_4);
  if (((plVar40 != (long *)0x0) && (iVar34 = FUN_003f1f80(plVar40,param_3), iVar34 != 0)) &&
     (iVar34 = FUN_003f1f80(param_1,param_2), iVar34 != 0)) {
    if (*(int *)((long)param_1 + 0xc) < 1) {
      iVar34 = 0;
    }
    else {
      uVar41 = 0;
      iVar34 = 0;
      uVar42 = 1;
      do {
        if ((*(uint *)((long)plVar40 + 0xc) &
            ((int)*(uint *)((long)plVar40 + 0xc) >> 0x1f ^ 0xffffffffU)) == uVar41) break;
        lVar38 = uVar41 * 4;
        uVar41 = uVar41 + 1;
        uVar32 = *(uint *)(*plVar40 + lVar38) | *(uint *)(*param_1 + lVar38);
        uVar31 = ~uVar32;
        uVar30 = uVar42 & (uVar32 ^ 0xffffffff);
        uVar32 = uVar30 & uVar31 >> 1;
        uVar1 = uVar32 & uVar31 >> 2;
        uVar2 = uVar1 & uVar31 >> 3;
        uVar3 = uVar2 & uVar31 >> 4;
        uVar4 = uVar3 & uVar31 >> 5;
        uVar5 = uVar4 & uVar31 >> 6;
        uVar6 = uVar5 & uVar31 >> 7;
        uVar7 = uVar6 & uVar31 >> 8;
        uVar8 = uVar7 & uVar31 >> 9;
        uVar9 = uVar8 & uVar31 >> 10;
        uVar10 = uVar9 & uVar31 >> 0xb;
        uVar11 = uVar10 & uVar31 >> 0xc;
        uVar12 = uVar11 & uVar31 >> 0xd;
        uVar13 = uVar12 & uVar31 >> 0xe;
        uVar14 = uVar13 & uVar31 >> 0xf;
        uVar15 = uVar14 & uVar31 >> 0x10;
        uVar16 = uVar15 & uVar31 >> 0x11;
        uVar17 = uVar16 & uVar31 >> 0x12;
        uVar18 = uVar17 & uVar31 >> 0x13;
        uVar19 = uVar18 & uVar31 >> 0x14;
        uVar20 = uVar19 & uVar31 >> 0x15;
        uVar21 = uVar20 & uVar31 >> 0x16;
        uVar22 = uVar21 & uVar31 >> 0x17;
        uVar23 = uVar22 & uVar31 >> 0x18;
        uVar24 = uVar23 & uVar31 >> 0x19;
        uVar25 = uVar24 & uVar31 >> 0x1a;
        uVar26 = uVar25 & uVar31 >> 0x1b;
        uVar27 = uVar26 & uVar31 >> 0x1c;
        uVar28 = uVar27 & uVar31 >> 0x1d;
        uVar29 = uVar28 & uVar31 >> 0x1e;
        uVar42 = uVar29 & uVar31 >> 0x1f;
        iVar34 = iVar34 + uVar30 + uVar32 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 +
                 uVar8 + uVar9 + uVar10 + uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 +
                 uVar17 + uVar18 + uVar19 + uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 +
                 uVar26 + uVar27 + uVar28 + uVar29 + uVar42;
      } while ((long)uVar41 < (long)*(int *)((long)param_1 + 0xc));
    }
    iVar35 = FUN_003f23a0(param_1,param_1,iVar34);
    if ((iVar35 != 0) && (iVar35 = FUN_003f23a0(plVar40,plVar40,iVar34), iVar35 != 0)) {
      iVar35 = (int)plVar40[1];
      if ((int)plVar40[1] <= (int)param_1[1]) {
        iVar35 = (int)param_1[1];
      }
      iVar35 = iVar35 + 1;
      lVar38 = FUN_003eb9a0(param_1,iVar35);
      if (((lVar38 != 0) && (lVar38 = FUN_003eb9a0(plVar40,iVar35), lVar38 != 0)) &&
         (lVar38 = FUN_003eb9a0(uVar39,iVar35), lVar38 != 0)) {
        FUN_003ec370(~*(uint *)*param_1 & 1,param_1,plVar40,iVar35);
        iVar36 = FUN_003eb2b0(param_1);
        iVar37 = FUN_003eb2b0(plVar40);
        if (iVar37 <= iVar36) {
          iVar37 = iVar36;
        }
        if (-4 < iVar37 * 3) {
          uVar42 = iVar37 * 3 + 3;
          iVar37 = (uVar42 & ((int)uVar42 >> 0x1f ^ 0xffffffffU)) + 1;
          uVar42 = 1;
          do {
            uVar32 = *(uint *)*plVar40 & -uVar42 >> 0x1f &
                     ((int)plVar40[1] + -1 >> 0x1f ^ 0xffffffffU);
            *(uint *)(param_1 + 2) = uVar32 ^ *(uint *)(param_1 + 2);
            FUN_003ec370(uVar32,param_1,plVar40,iVar35);
            iVar36 = FUN_003f0310(uVar39,plVar40,param_1);
            if (iVar36 == 0) goto LAB_003f02fc;
            FUN_003ec370(*(uint *)*plVar40 & ((int)plVar40[1] - 1U >> 0x1f ^ 0xffffffff) & 1,plVar40
                         ,uVar39,iVar35);
            iVar36 = FUN_003f2040(plVar40,plVar40);
            if (iVar36 == 0) goto LAB_003f02fc;
            uVar42 = (uVar32 - 1 & uVar42 | -uVar32 & -uVar42) + 1;
            iVar37 = iVar37 + -1;
          } while (iVar37 != 0);
        }
        *(undefined4 *)(param_1 + 2) = 0;
        iVar34 = FUN_003f2120(param_1,param_1,iVar34);
        if (iVar34 != 0) {
          iVar34 = FUN_003f2040(param_1,param_1);
          bVar33 = iVar34 != 0;
          goto LAB_003f0300;
        }
      }
    }
  }
LAB_003f02fc:
  bVar33 = false;
LAB_003f0300:
  FUN_003ed530(param_4);
  return bVar33;
}


