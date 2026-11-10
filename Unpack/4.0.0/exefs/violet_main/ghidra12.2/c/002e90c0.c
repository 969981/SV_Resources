/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e90c0; name: FUN_002e90c0
 */


long FUN_002e90c0(long *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char local_170;
  undefined7 uStack_16f;
  long alStack_168 [33];
  
  FUN_002e8dac();
  if (param_2 == 0) {
    FUN_002cc810(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 002e9184 to 002e9193 has its CatchHandler @ 002e94e4 */
    std::__put_character_sequence<char,std::char_traits<char>>((ostream *)alStack_168,"Walk NULL",9)
    ;
    FUN_002cc97c(&local_170);
    return param_3;
  }
  lVar6 = param_1[2];
  lVar14 = param_1[3];
  uVar7 = 0;
  if (lVar14 - lVar6 != 0) {
    uVar7 = (lVar14 - lVar6 >> 3) * 0x55 - 1;
  }
  uVar13 = param_1[6] + param_1[5];
  if (uVar7 == uVar13) {
    FUN_002e94f8();
    uVar13 = param_1[5] + param_1[6];
    lVar6 = param_1[2];
    lVar14 = param_1[3];
  }
  if (lVar14 == lVar6) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(*(long *)(lVar6 + (uVar13 / 0x55) * 8) + (uVar13 % 0x55) * 0x30);
  }
  *plVar5 = param_2;
  plVar5[2] = param_3;
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  plVar5[4] = alStack_168[0];
  plVar5[3] = CONCAT71(uStack_16f,local_170);
  plVar5[5] = 0;
  lVar6 = param_1[6];
LAB_002e922c:
  lVar6 = lVar6 + 1;
  param_1[6] = lVar6;
  do {
    while( true ) {
      uVar7 = (lVar6 + param_1[5]) - 1;
      uVar13 = uVar7 % 0x55;
      lVar6 = *(long *)(param_1[2] + (uVar7 / 0x55) * 8);
      lVar14 = *(long *)(lVar6 + uVar13 * 0x30);
      puVar11 = (uint *)(lVar6 + uVar13 * 0x30 + 8);
      if (*puVar11 != 0xffffffff) break;
      iVar9 = *(int *)((long)param_1 + 0x3c);
      *(int *)((long)param_1 + 0x3c) = iVar9 + -1;
      if (iVar9 < 1) {
        *(undefined1 *)(param_1 + 7) = 1;
        lVar4 = (**(code **)(*param_1 + 0x28))
                          (param_1,lVar14,*(undefined8 *)(lVar6 + uVar13 * 0x30 + 0x10));
      }
      else {
        local_170 = '\0';
        lVar10 = lVar6 + uVar13 * 0x30;
        lVar4 = (**(code **)(*param_1 + 0x10))
                          (param_1,lVar14,*(undefined8 *)(lVar10 + 0x10),&local_170);
        *(long *)(lVar10 + 0x18) = lVar4;
        if (local_170 == '\0') {
          *puVar11 = 0;
          plVar5 = (long *)(lVar6 + uVar13 * 0x30 + 0x28);
          *plVar5 = 0;
          uVar2 = *(ushort *)(lVar14 + 6);
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              *plVar5 = lVar6 + uVar13 * 0x30 + 0x20;
            }
            else {
              lVar4 = FUN_0049e7b0(PTR_FUN_047cba38,(ulong)uVar2 << 3);
              *plVar5 = lVar4;
            }
          }
          break;
        }
      }
LAB_002e93f0:
      lVar10 = param_1[3] - param_1[2];
      lVar6 = param_1[6] + -1;
      lVar14 = 0;
      if (lVar10 != 0) {
        lVar14 = (lVar10 >> 3) * 0x55 + -1;
      }
      param_1[6] = lVar6;
      if (0xa9 < (ulong)(lVar14 - (param_1[5] + lVar6))) {
        operator_delete(*(void **)(param_1[3] + -8));
        param_1[3] = param_1[3] + -8;
        lVar6 = param_1[6];
      }
      if (lVar6 == 0) {
        return lVar4;
      }
      uVar7 = (lVar6 + param_1[5]) - 1;
      uVar13 = uVar7 % 0x55;
      lVar14 = *(long *)(param_1[2] + (uVar7 / 0x55) * 8);
      lVar10 = *(long *)(lVar14 + uVar13 * 0x30 + 0x28);
      if (lVar10 == 0) {
        lVar10 = lVar14 + uVar13 * 0x30;
        *(long *)(lVar10 + 0x20) = lVar4;
        iVar9 = *(int *)(lVar10 + 8);
      }
      else {
        iVar9 = *(int *)(lVar14 + uVar13 * 0x30 + 8);
        *(long *)(lVar10 + (long)iVar9 * 8) = lVar4;
      }
      *(int *)(lVar14 + uVar13 * 0x30 + 8) = iVar9 + 1;
    }
    uVar2 = *(ushort *)(lVar14 + 6);
    if (uVar2 == 0) {
      uVar7 = (ulong)*puVar11;
LAB_002e9374:
      lVar6 = lVar6 + uVar13 * 0x30;
      lVar4 = (**(code **)(*param_1 + 0x18))
                        (param_1,lVar14,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),
                         *(long *)(lVar6 + 0x28),uVar7);
      if ((1 < *(ushort *)(lVar14 + 6)) && (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
        FUN_0049e800(lVar6);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar6);
      }
      goto LAB_002e93f0;
    }
    puVar8 = (undefined8 *)(lVar14 + 8);
    if (uVar2 != 1) {
      puVar8 = (undefined8 *)*puVar8;
    }
    uVar1 = *puVar11;
    uVar7 = (ulong)uVar1;
    if ((int)(uint)uVar2 <= (int)uVar1) goto LAB_002e9374;
    if ((((int)uVar1 < 1) || ((param_4 & 1) == 0)) || (puVar8[uVar1 - 1] != puVar8[uVar7])) break;
    lVar6 = lVar6 + uVar13 * 0x30;
    uVar3 = (**(code **)(*param_1 + 0x20))
                      (param_1,*(undefined8 *)(*(long *)(lVar6 + 0x28) + (ulong)(uVar1 - 1) * 8));
    uVar1 = *puVar11;
    *(undefined8 *)(*(long *)(lVar6 + 0x28) + (long)(int)uVar1 * 8) = uVar3;
    *puVar11 = uVar1 + 1;
    lVar6 = param_1[6];
  } while( true );
  uVar3 = puVar8[(int)uVar1];
  uVar12 = *(undefined8 *)(lVar6 + uVar13 * 0x30 + 0x18);
  lVar6 = param_1[2];
  uVar7 = 0;
  if (param_1[3] - lVar6 != 0) {
    uVar7 = (param_1[3] - lVar6 >> 3) * 0x55 - 1;
  }
  uVar13 = param_1[6] + param_1[5];
  if (uVar7 == uVar13) {
    FUN_002e94f8(param_1 + 1);
    uVar13 = param_1[5] + param_1[6];
    lVar6 = param_1[2];
  }
  puVar8 = (undefined8 *)(*(long *)(lVar6 + (uVar13 / 0x55) * 8) + (uVar13 % 0x55) * 0x30);
  *puVar8 = uVar3;
  *(undefined4 *)(puVar8 + 1) = 0xffffffff;
  puVar8[2] = uVar12;
  puVar8[5] = 0;
  puVar8[4] = alStack_168[0];
  puVar8[3] = CONCAT71(uStack_16f,local_170);
  lVar6 = param_1[6];
  goto LAB_002e922c;
}


