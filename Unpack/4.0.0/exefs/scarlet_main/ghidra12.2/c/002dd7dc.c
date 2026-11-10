/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dd7dc; name: FUN_002dd7dc
 */


ulong FUN_002dd7dc(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  void *__s;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  ulong local_170;
  undefined8 auStack_168 [33];
  
  FUN_002dd208();
  if (param_2 == 0) {
    FUN_002cc810(&local_170,"external/com_github_google_re2\\re2/walker-inl.h",0xa2);
                    /* try { // try from 002dd8a4 to 002dd8b3 has its CatchHandler @ 002ddc58 */
    std::__put_character_sequence<char,std::char_traits<char>>((ostream *)auStack_168,"Walk NULL",9)
    ;
    FUN_002cc97c(&local_170);
    uVar5 = param_3 >> 0x20;
LAB_002dd8c0:
    return param_3 & 0xffffffff | uVar5 << 0x20;
  }
  local_170 = 0;
  auStack_168[0] = 0;
  lVar12 = param_1[2];
  lVar14 = param_1[3];
  uVar5 = 0;
  if (lVar14 - lVar12 != 0) {
    uVar5 = (lVar14 - lVar12 >> 3) * 0x55 - 1;
  }
  uVar10 = param_1[6] + param_1[5];
  if (uVar5 == uVar10) {
    FUN_002ddc6c();
    uVar10 = param_1[5] + param_1[6];
    lVar12 = param_1[2];
    lVar14 = param_1[3];
  }
  if (lVar14 == lVar12) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(*(long *)(lVar12 + (uVar10 / 0x55) * 8) + (uVar10 % 0x55) * 0x30);
  }
  *plVar4 = param_2;
  *(ulong *)((long)plVar4 + 0xc) = param_3;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined8 *)((long)plVar4 + 0x1c) = auStack_168[0];
  *(ulong *)((long)plVar4 + 0x14) = local_170;
  plVar4[5] = 0;
  lVar12 = param_1[6] + 1;
  param_1[6] = lVar12;
LAB_002dd954:
  do {
    uVar5 = (lVar12 + param_1[5]) - 1;
    uVar10 = uVar5 % 0x55;
    lVar12 = *(long *)(param_1[2] + (uVar5 / 0x55) * 8);
    lVar14 = *(long *)(lVar12 + uVar10 * 0x30);
    puVar15 = (uint *)(lVar12 + uVar10 * 0x30 + 8);
    if (*puVar15 == 0xffffffff) {
      iVar2 = *(int *)((long)param_1 + 0x3c);
      *(int *)((long)param_1 + 0x3c) = iVar2 + -1;
      if (iVar2 < 1) {
        *(undefined1 *)(param_1 + 7) = 1;
        param_3 = (**(code **)(*param_1 + 0x28))
                            (param_1,lVar14,*(undefined8 *)(lVar12 + uVar10 * 0x30 + 0xc));
      }
      else {
        local_170 = local_170 & 0xffffffffffffff00;
        lVar7 = lVar12 + uVar10 * 0x30;
        param_3 = (**(code **)(*param_1 + 0x10))
                            (param_1,lVar14,*(undefined8 *)(lVar7 + 0xc),&local_170);
        *(ulong *)(lVar7 + 0x14) = param_3;
        if ((char)local_170 == '\0') {
          *puVar15 = 0;
          plVar4 = (long *)(lVar12 + uVar10 * 0x30 + 0x28);
          *plVar4 = 0;
          uVar3 = *(ushort *)(lVar14 + 6);
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              *plVar4 = lVar12 + uVar10 * 0x30 + 0x1c;
            }
            else {
              __s = (void *)FUN_0049e7b0(PTR_FUN_047cba38,(ulong)uVar3 << 3);
              if (__s != (void *)0x0) {
                memset(__s,0,(ulong)uVar3 << 3);
              }
              *plVar4 = (long)__s;
            }
          }
          goto LAB_002dd98c;
        }
      }
      uVar5 = param_3 >> 0x20;
    }
    else {
LAB_002dd98c:
      uVar3 = *(ushort *)(lVar14 + 6);
      if (uVar3 == 0) {
        uVar5 = (ulong)*puVar15;
      }
      else {
        puVar6 = (undefined8 *)(lVar14 + 8);
        if (uVar3 != 1) {
          puVar6 = (undefined8 *)*puVar6;
        }
        uVar1 = *puVar15;
        uVar5 = (ulong)uVar1;
        if ((int)uVar1 < (int)(uint)uVar3) {
          if ((((int)uVar1 < 1) || ((param_4 & 1) == 0)) || (puVar6[uVar1 - 1] != puVar6[uVar5])) {
            uVar13 = puVar6[(int)uVar1];
            uVar11 = *(undefined8 *)(lVar12 + uVar10 * 0x30 + 0x14);
            local_170 = 0;
            auStack_168[0] = 0;
            lVar12 = param_1[2];
            uVar5 = 0;
            if (param_1[3] - lVar12 != 0) {
              uVar5 = (param_1[3] - lVar12 >> 3) * 0x55 - 1;
            }
            uVar10 = param_1[6] + param_1[5];
            if (uVar5 == uVar10) {
              FUN_002ddc6c(param_1 + 1);
              uVar10 = param_1[5] + param_1[6];
              lVar12 = param_1[2];
            }
            puVar6 = (undefined8 *)
                     (*(long *)(lVar12 + (uVar10 / 0x55) * 8) + (uVar10 % 0x55) * 0x30);
            *puVar6 = uVar13;
            *(undefined4 *)(puVar6 + 1) = 0xffffffff;
            *(undefined8 *)((long)puVar6 + 0xc) = uVar11;
            puVar6[5] = 0;
            *(undefined8 *)((long)puVar6 + 0x1c) = auStack_168[0];
            *(ulong *)((long)puVar6 + 0x14) = local_170;
            lVar12 = param_1[6] + 1;
            param_1[6] = lVar12;
          }
          else {
            lVar12 = lVar12 + uVar10 * 0x30;
            uVar11 = (**(code **)(*param_1 + 0x20))
                               (param_1,*(undefined8 *)
                                         (*(long *)(lVar12 + 0x28) + (ulong)(uVar1 - 1) * 8));
            *(undefined8 *)(*(long *)(lVar12 + 0x28) + (long)(int)*puVar15 * 8) = uVar11;
            *puVar15 = *puVar15 + 1;
            lVar12 = param_1[6];
          }
          goto LAB_002dd954;
        }
      }
      lVar12 = lVar12 + uVar10 * 0x30;
      param_3 = (**(code **)(*param_1 + 0x18))
                          (param_1,lVar14,*(undefined8 *)(lVar12 + 0xc),
                           *(undefined8 *)(lVar12 + 0x14),*(long *)(lVar12 + 0x28),uVar5);
      uVar5 = param_3 >> 0x20;
      if ((1 < *(ushort *)(lVar14 + 6)) && (lVar12 = *(long *)(lVar12 + 0x28), lVar12 != 0)) {
        FUN_0049e800(lVar12);
        FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
      }
    }
    lVar14 = param_1[3] - param_1[2];
    lVar7 = param_1[6] + -1;
    lVar12 = 0;
    if (lVar14 != 0) {
      lVar12 = (lVar14 >> 3) * 0x55 + -1;
    }
    param_1[6] = lVar7;
    if (0xa9 < (ulong)(lVar12 - (param_1[5] + lVar7))) {
      operator_delete(*(void **)(param_1[3] + -8));
      param_1[3] = param_1[3] + -8;
      lVar7 = param_1[6];
    }
    if (lVar7 == 0) goto LAB_002dd8c0;
    uVar10 = (lVar7 + param_1[5]) - 1;
    uVar8 = uVar10 % 0x55;
    lVar12 = *(long *)(param_1[2] + (uVar10 / 0x55) * 8);
    lVar14 = *(long *)(lVar12 + uVar8 * 0x30 + 0x28);
    if (lVar14 == 0) {
      puVar9 = (ulong *)(lVar12 + uVar8 * 0x30 + 0x1c);
    }
    else {
      puVar9 = (ulong *)(lVar14 + (long)*(int *)(lVar12 + uVar8 * 0x30 + 8) * 8);
    }
    lVar12 = lVar12 + uVar8 * 0x30;
    *puVar9 = param_3 & 0xffffffff | uVar5 << 0x20;
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    lVar12 = param_1[6];
  } while( true );
}


