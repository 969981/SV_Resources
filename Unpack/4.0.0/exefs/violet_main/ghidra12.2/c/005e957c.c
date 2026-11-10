/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e957c; name: FUN_005e957c
 */


void FUN_005e957c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  size_t __n;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *__dest;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pbVar7 = *(byte **)(param_2 + 0x28);
  if ((*pbVar7 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  FUN_005f7d20(&local_a0,pbVar7);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = local_70;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  pbVar7 = *(byte **)(param_2 + 0x38);
  if ((*pbVar7 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  plVar5 = (long *)FUN_01cf7e20();
  param_1[7] = plVar5;
  __n = strlen((char *)pbVar7);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005e992c to 005e9933 has its CatchHandler @ 005e9934 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_005e9690;
  }
  else {
    uVar16 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar16,1);
    param_1[4] = uVar16 | 1;
    param_1[5] = __n;
    param_1[6] = __dest;
  }
  memcpy(__dest,pbVar7,__n);
LAB_005e9690:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_2 + 0x60);
  param_1[9] = (long)*(int *)(param_2 + 0x54);
  iVar4 = *(int *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = (long)iVar4;
  uVar6 = FUN_01cf7e20();
  param_1[0xe] = uVar6;
  puVar15 = (undefined8 *)0x0;
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar15 = (undefined8 *)(*(long *)(param_3 + 0x10) + 8);
  }
  if (*(int *)(param_3 + 8) != 0) {
    puVar1 = puVar15 + *(int *)(param_3 + 8);
    do {
      uVar16 = param_1[0xc];
      uVar6 = *puVar15;
      if (uVar16 < (ulong)param_1[0xd]) {
        FUN_005e9358(uVar16,uVar6);
        param_1[0xc] = uVar16 + 0xa8;
      }
      else {
        lVar10 = param_1[0xb];
        lVar8 = (long)(uVar16 - lVar10) >> 3;
        uVar16 = lVar8 * -0x30c30c30c30c30c3 + 1;
        if (0x186186186186186 < uVar16) {
                    /* try { // try from 005e9924 to 005e992b has its CatchHandler @ 005e9944 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = param_1[0xd] - lVar10 >> 3;
        uVar11 = lVar10 * -0x6186186186186186;
        if (uVar16 <= uVar11) {
          uVar16 = uVar11;
        }
        if (0xc30c30c30c30c2 < (ulong)(lVar10 * -0x30c30c30c30c30c3)) {
          uVar16 = 0x186186186186186;
        }
        if (uVar16 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],uVar16 * 0xa8,8)
          ;
        }
        lVar12 = lVar10 + lVar8 * 8;
        FUN_005e9358(lVar12,uVar6);
        lVar13 = param_1[0xb];
        lVar14 = param_1[0xc];
        lVar8 = lVar12 + 0xa8;
        if (lVar14 == lVar13) {
          lVar14 = lVar13;
        }
        else {
          lVar17 = 0;
          do {
            lVar2 = lVar14 + lVar17;
            uVar18 = *(undefined8 *)(lVar2 + -0xa0);
            uVar6 = *(undefined8 *)(lVar2 + -0xa8);
            uVar19 = *(undefined8 *)(lVar2 + -0x98);
            lVar3 = lVar12 + lVar17;
            *(undefined8 *)(lVar3 + -0x90) = *(undefined8 *)(lVar2 + -0x90);
            *(undefined8 *)(lVar3 + -0x98) = uVar19;
            *(undefined8 *)(lVar3 + -0xa0) = uVar18;
            *(undefined8 *)(lVar3 + -0xa8) = uVar6;
            *(undefined8 *)(lVar2 + -0xa8) = 0;
            *(undefined8 *)(lVar2 + -0xa0) = 0;
            *(undefined8 *)(lVar2 + -0x98) = 0;
            FUN_027d3bd4(lVar3 + -0x88,lVar2 + -0x88);
            uVar6 = *(undefined8 *)(lVar2 + -0x80);
            uVar19 = *(undefined8 *)(lVar2 + -0x68);
            uVar18 = *(undefined8 *)(lVar2 + -0x70);
            *(undefined8 *)(lVar3 + -0x78) = *(undefined8 *)(lVar2 + -0x78);
            *(undefined8 *)(lVar3 + -0x80) = uVar6;
            *(undefined8 *)(lVar3 + -0x68) = uVar19;
            *(undefined8 *)(lVar3 + -0x70) = uVar18;
            *(undefined8 *)(lVar2 + -0x80) = 0;
            *(undefined8 *)(lVar2 + -0x78) = 0;
            *(undefined8 *)(lVar2 + -0x70) = 0;
            *(undefined8 *)(lVar3 + -0x60) = *(undefined8 *)(lVar2 + -0x60);
            uVar6 = *(undefined8 *)(lVar2 + -0x58);
            *(undefined8 *)(lVar3 + -0x50) = *(undefined8 *)(lVar2 + -0x50);
            *(undefined8 *)(lVar3 + -0x58) = uVar6;
            lVar9 = *(long *)(lVar2 + -0x48);
            *(long *)(lVar3 + -0x48) = lVar9;
            if (lVar9 == 0) {
              *(long *)(lVar3 + -0x60) = lVar3 + -0x58;
            }
            else {
              *(long *)(*(long *)(lVar3 + -0x58) + 0x10) = lVar3 + -0x58;
              *(undefined8 *)(lVar2 + -0x58) = 0;
              *(undefined8 **)(lVar2 + -0x60) = (undefined8 *)(lVar2 + -0x58);
              *(undefined8 *)(lVar2 + -0x48) = 0;
            }
            uVar6 = *(undefined8 *)(lVar2 + -0x40);
            uVar19 = *(undefined8 *)(lVar2 + -0x28);
            uVar18 = *(undefined8 *)(lVar2 + -0x30);
            *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
            *(undefined8 *)(lVar3 + -0x40) = uVar6;
            *(undefined8 *)(lVar3 + -0x28) = uVar19;
            *(undefined8 *)(lVar3 + -0x30) = uVar18;
            lVar17 = lVar17 + -0xa8;
            uVar6 = *(undefined8 *)(lVar2 + -0x20);
            uVar19 = *(undefined8 *)(lVar2 + -8);
            uVar18 = *(undefined8 *)(lVar2 + -0x10);
            *(undefined8 *)(lVar2 + -0x38) = 0;
            *(undefined8 *)(lVar2 + -0x30) = 0;
            *(undefined8 *)(lVar2 + -0x40) = 0;
            *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
            *(undefined8 *)(lVar3 + -0x20) = uVar6;
            *(undefined8 *)(lVar3 + -8) = uVar19;
            *(undefined8 *)(lVar3 + -0x10) = uVar18;
            *(undefined8 *)(lVar2 + -0x20) = 0;
            *(undefined8 *)(lVar2 + -0x18) = 0;
            *(undefined8 *)(lVar2 + -0x10) = 0;
          } while (lVar13 - lVar14 != lVar17);
          lVar13 = param_1[0xc];
          lVar12 = lVar12 + lVar17;
          lVar14 = param_1[0xb];
        }
        lVar17 = param_1[0xd];
        param_1[0xd] = lVar10 + uVar16 * 0xa8;
        param_1[0xb] = lVar12;
        param_1[0xc] = lVar8;
        while (lVar13 != lVar14) {
          lVar13 = lVar13 + -0xa8;
          FUN_005e9a0c(lVar13);
        }
        if (lVar14 != 0) {
          (**(code **)(*(long *)param_1[0xe] + 0x18))((long *)param_1[0xe],lVar14,lVar17 - lVar14,8)
          ;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
  }
  return;
}


