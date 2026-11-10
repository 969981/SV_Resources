/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e3740; name: FUN_002e3740
 */


undefined4 FUN_002e3740(long *param_1,long param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  char local_170 [8];
  ostream aoStack_168 [264];
  
  FUN_002e3424();
  if (param_2 == 0) {
    FUN_002cc810(local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 002e37ec to 002e37fb has its CatchHandler @ 002e3b18 */
    std::__put_character_sequence<char,std::char_traits<char>>(aoStack_168,"Walk NULL",9);
    FUN_002cc97c(local_170);
    return param_3;
  }
  lVar15 = param_1[2];
  lVar13 = param_1[3];
  uVar8 = 0;
  if (lVar13 - lVar15 != 0) {
    uVar8 = (lVar13 - lVar15) * 0x10 - 1;
  }
  uVar7 = param_1[6] + param_1[5];
  if (uVar8 == uVar7) {
    FUN_002e3b2c(param_1 + 1);
    uVar7 = param_1[5] + param_1[6];
    lVar15 = param_1[2];
    lVar13 = param_1[3];
  }
  if (lVar13 == lVar15) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = (long *)(*(long *)(lVar15 + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20)
    ;
  }
  *plVar12 = param_2;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined4 *)(plVar12 + 1) = 0xffffffff;
  *(undefined4 *)((long)plVar12 + 0xc) = param_3;
  lVar15 = param_1[6] + 1;
  param_1[6] = lVar15;
  puVar4 = PTR_LAB_047cba48;
  do {
    while( true ) {
      uVar8 = (lVar15 + param_1[5]) - 1;
      lVar15 = *(long *)(param_1[2] + (uVar8 >> 4 & 0xffffffffffffff8));
      uVar8 = uVar8 & 0x7f;
      lVar13 = *(long *)(lVar15 + uVar8 * 0x20);
      puVar14 = (uint *)(lVar15 + uVar8 * 0x20 + 8);
      if (*puVar14 != 0xffffffff) break;
      iVar2 = *(int *)((long)param_1 + 0x3c);
      *(int *)((long)param_1 + 0x3c) = iVar2 + -1;
      if (iVar2 < 1) {
        *(undefined1 *)(param_1 + 7) = 1;
        uVar5 = (**(code **)(*param_1 + 0x28))
                          (param_1,lVar13,*(undefined4 *)(lVar15 + uVar8 * 0x20 + 0xc));
      }
      else {
        local_170[0] = '\0';
        lVar6 = lVar15 + uVar8 * 0x20;
        uVar5 = (**(code **)(*param_1 + 0x10))
                          (param_1,lVar13,*(undefined4 *)(lVar6 + 0xc),local_170);
        *(undefined4 *)(lVar6 + 0x10) = uVar5;
        if (local_170[0] == '\0') {
          *puVar14 = 0;
          plVar12 = (long *)(lVar6 + 0x18);
          *plVar12 = 0;
          uVar3 = *(ushort *)(lVar13 + 6);
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              *plVar12 = lVar6 + 0x14;
            }
            else {
              lVar6 = FUN_0049e7b0(PTR_FUN_047cba38,(ulong)uVar3 << 2);
              *plVar12 = lVar6;
            }
          }
          break;
        }
      }
LAB_002e3a40:
      lVar6 = param_1[3] - param_1[2];
      lVar15 = param_1[6] + -1;
      lVar13 = 0;
      if (lVar6 != 0) {
        lVar13 = lVar6 * 0x10 + -1;
      }
      param_1[6] = lVar15;
      if (0xff < (ulong)(lVar13 - (param_1[5] + lVar15))) {
        operator_delete(*(void **)(param_1[3] + -8));
        param_1[3] = param_1[3] + -8;
        lVar15 = param_1[6];
      }
      if (lVar15 == 0) {
        return uVar5;
      }
      uVar8 = (lVar15 + param_1[5]) - 1;
      lVar13 = *(long *)(param_1[2] + (uVar8 >> 4 & 0xffffffffffffff8)) + (uVar8 & 0x7f) * 0x20;
      if (*(long *)(lVar13 + 0x18) == 0) {
        puVar10 = (undefined4 *)(lVar13 + 0x14);
      }
      else {
        puVar10 = (undefined4 *)(*(long *)(lVar13 + 0x18) + (long)*(int *)(lVar13 + 8) * 4);
      }
      *puVar10 = uVar5;
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    }
    uVar3 = *(ushort *)(lVar13 + 6);
    if (uVar3 == 0) {
      uVar7 = (ulong)*puVar14;
LAB_002e39c8:
      lVar15 = lVar15 + uVar8 * 0x20;
      uVar5 = (**(code **)(*param_1 + 0x18))
                        (param_1,lVar13,*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10)
                         ,*(long *)(lVar15 + 0x18),uVar7);
      if ((1 < *(ushort *)(lVar13 + 6)) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
        FUN_0049e800(lVar15);
        FUN_0049e7e0(puVar4,lVar15);
      }
      goto LAB_002e3a40;
    }
    puVar9 = (undefined8 *)(lVar13 + 8);
    if (uVar3 != 1) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar1 = *puVar14;
    uVar7 = (ulong)uVar1;
    if ((int)(uint)uVar3 <= (int)uVar1) goto LAB_002e39c8;
    if ((((int)uVar1 < 1) || ((param_4 & 1) == 0)) || (puVar9[uVar1 - 1] != puVar9[uVar7])) {
      uVar11 = puVar9[(int)uVar1];
      uVar5 = *(undefined4 *)(lVar15 + uVar8 * 0x20 + 0x10);
      lVar15 = param_1[2];
      uVar8 = 0;
      if (param_1[3] - lVar15 != 0) {
        uVar8 = (param_1[3] - lVar15) * 0x10 - 1;
      }
      uVar7 = param_1[6] + param_1[5];
      if (uVar8 == uVar7) {
        FUN_002e3b2c(param_1 + 1);
        uVar7 = param_1[5] + param_1[6];
        lVar15 = param_1[2];
      }
      puVar9 = (undefined8 *)
               (*(long *)(lVar15 + (uVar7 >> 4 & 0xffffffffffffff8)) + (uVar7 & 0x7f) * 0x20);
      *puVar9 = uVar11;
      *(undefined4 *)(puVar9 + 1) = 0xffffffff;
      *(undefined4 *)((long)puVar9 + 0xc) = uVar5;
      puVar9[2] = 0;
      puVar9[3] = 0;
      lVar15 = param_1[6] + 1;
      param_1[6] = lVar15;
    }
    else {
      lVar15 = lVar15 + uVar8 * 0x20;
      uVar5 = (**(code **)(*param_1 + 0x20))
                        (param_1,*(undefined4 *)(*(long *)(lVar15 + 0x18) + (ulong)(uVar1 - 1) * 4))
      ;
      *(undefined4 *)(*(long *)(lVar15 + 0x18) + (long)(int)*puVar14 * 4) = uVar5;
      *puVar14 = *puVar14 + 1;
      lVar15 = param_1[6];
    }
  } while( true );
}


