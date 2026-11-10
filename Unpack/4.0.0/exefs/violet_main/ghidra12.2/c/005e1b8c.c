/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e1b8c; name: FUN_005e1b8c
 */


/* WARNING: Removing unreachable block (ram,0x005e1d34) */

void FUN_005e1b8c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  size_t sVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pbVar11 = *(byte **)(param_2 + 0x28);
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  FUN_005f7d20(&local_a0,pbVar11);
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
  puVar5 = PTR_DAT_047cc258;
  if (*(undefined **)(param_2 + 0x48) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 0x48);
  }
  FUN_00258750(param_1 + 4,puVar5);
  uVar21 = *(undefined8 *)(param_2 + 0x50);
  param_1[6] = (long)(int)((ulong)uVar21 >> 0x20);
  param_1[5] = (long)(int)uVar21;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)(param_2 + 0x59);
  pbVar11 = *(byte **)(param_2 + 0x38);
  if ((*pbVar11 & 1) == 0) {
    pbVar11 = pbVar11 + 1;
  }
  else {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
  }
  plVar9 = (long *)FUN_01cf7e20();
  param_1[0xb] = plVar9;
  sVar10 = strlen((char *)pbVar11);
  if (0xffffffffffffffef < sVar10) {
                    /* try { // try from 005e1fc4 to 005e1fcb has its CatchHandler @ 005e1fcc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    __dest = (void *)((long)param_1 + 0x41);
    *(char *)(param_1 + 8) = (char)((int)sVar10 << 1);
    if (sVar10 != 0) goto LAB_005e1ccc;
  }
  else {
    uVar15 = sVar10 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar15,1);
    param_1[8] = uVar15 | 1;
    param_1[9] = sVar10;
    param_1[10] = __dest;
LAB_005e1ccc:
    memcpy(__dest,pbVar11,sVar10);
  }
  *(undefined1 *)((long)__dest + sVar10) = 0;
  *(short *)(param_1 + 0xc) = (short)*(undefined4 *)(param_2 + 0x60);
  pbVar11 = *(byte **)(param_2 + 0x30);
  bVar6 = *pbVar11;
  if ((bVar6 & 1) == 0) {
    if ((bVar6 & 0xfe) == 2) {
      uVar15 = (ulong)(bVar6 >> 1);
      pbVar11 = pbVar11 + 1;
      sVar10 = uVar15;
      if (1 < uVar15) {
        sVar10 = 1;
      }
      if (sVar10 != 0) goto LAB_005e1d3c;
LAB_005e1d4c:
      uVar8 = (uint)(1 < uVar15);
      if (uVar15 == 0) {
        uVar8 = 0xffffffff;
      }
LAB_005e1d5c:
      bVar7 = uVar8 == 0;
      goto LAB_005e1d6c;
    }
  }
  else if (*(long *)(pbVar11 + 8) == 1) {
    pbVar11 = *(byte **)(pbVar11 + 0x10);
    uVar15 = 1;
    sVar10 = 1;
LAB_005e1d3c:
    uVar8 = memcmp(pbVar11,&DAT_03d0a1b1,sVar10);
    if (uVar8 == 0) goto LAB_005e1d4c;
    goto LAB_005e1d5c;
  }
  bVar7 = false;
LAB_005e1d6c:
  param_1[0xd] = 0;
  *(bool *)((long)param_1 + 0x62) = bVar7;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar21 = FUN_01cf7e20();
  param_1[0x10] = uVar21;
  puVar20 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x20) != 0) {
    puVar20 = (undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar2 = puVar20 + *(int *)(param_2 + 0x18);
    puVar1 = param_1 + 0x10;
    do {
      uVar15 = param_1[0xe];
      uVar21 = *puVar20;
      if (uVar15 < (ulong)param_1[0xf]) {
        FUN_005f589c(uVar15,uVar21);
        param_1[0xe] = uVar15 + 0x90;
      }
      else {
        lVar13 = param_1[0xd];
        lVar12 = (long)(uVar15 - lVar13) >> 4;
        uVar15 = lVar12 * -0x71c71c71c71c71c7 + 1;
        if (0x1c71c71c71c71c7 < uVar15) {
                    /* try { // try from 005e1fbc to 005e1fc3 has its CatchHandler @ 005e1fe4 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar13 = param_1[0xf] - lVar13 >> 4;
        uVar14 = lVar13 * 0x1c71c71c71c71c72;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0xe38e38e38e38e2 < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
          uVar15 = 0x1c71c71c71c71c7;
        }
        if (uVar15 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar15 * 0x90,8);
        }
        lVar16 = lVar13 + lVar12 * 0x10;
        FUN_005f589c(lVar16,uVar21);
        lVar17 = param_1[0xd];
        lVar19 = param_1[0xe];
        lVar12 = lVar16 + 0x90;
        if (lVar19 == lVar17) {
          lVar19 = lVar17;
        }
        else {
          lVar18 = 0;
          do {
            lVar3 = lVar19 + lVar18;
            lVar4 = lVar16 + lVar18;
            uVar21 = *(undefined8 *)(lVar3 + -0x90);
            uVar23 = *(undefined8 *)(lVar3 + -0x78);
            uVar22 = *(undefined8 *)(lVar3 + -0x80);
            *(undefined8 *)(lVar4 + -0x88) = *(undefined8 *)(lVar3 + -0x88);
            *(undefined8 *)(lVar4 + -0x90) = uVar21;
            *(undefined8 *)(lVar4 + -0x78) = uVar23;
            *(undefined8 *)(lVar4 + -0x80) = uVar22;
            uVar21 = *(undefined8 *)(lVar3 + -0x70);
            uVar23 = *(undefined8 *)(lVar3 + -0x58);
            uVar22 = *(undefined8 *)(lVar3 + -0x60);
            *(undefined8 *)(lVar3 + -0x88) = 0;
            *(undefined8 *)(lVar3 + -0x80) = 0;
            *(undefined8 *)(lVar3 + -0x90) = 0;
            *(undefined8 *)(lVar4 + -0x68) = *(undefined8 *)(lVar3 + -0x68);
            *(undefined8 *)(lVar4 + -0x70) = uVar21;
            *(undefined8 *)(lVar4 + -0x58) = uVar23;
            *(undefined8 *)(lVar4 + -0x60) = uVar22;
            *(undefined8 *)(lVar3 + -0x70) = 0;
            *(undefined8 *)(lVar3 + -0x68) = 0;
            *(undefined8 *)(lVar3 + -0x60) = 0;
            FUN_027d3bd4(lVar4 + -0x50,lVar3 + -0x50);
            uVar22 = *(undefined8 *)(lVar3 + -0x40);
            uVar21 = *(undefined8 *)(lVar3 + -0x48);
            lVar18 = lVar18 + -0x90;
            uVar23 = *(undefined8 *)(lVar3 + -0x38);
            *(undefined8 *)(lVar4 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
            *(undefined8 *)(lVar4 + -0x38) = uVar23;
            *(undefined8 *)(lVar4 + -0x40) = uVar22;
            *(undefined8 *)(lVar4 + -0x48) = uVar21;
            *(undefined8 *)(lVar3 + -0x48) = 0;
            *(undefined8 *)(lVar3 + -0x40) = 0;
            *(undefined8 *)(lVar3 + -0x38) = 0;
            *(undefined4 *)(lVar4 + -0x28) = *(undefined4 *)(lVar3 + -0x28);
            uVar21 = *(undefined8 *)(lVar3 + -0x20);
            uVar23 = *(undefined8 *)(lVar3 + -8);
            uVar22 = *(undefined8 *)(lVar3 + -0x10);
            *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
            *(undefined8 *)(lVar4 + -0x20) = uVar21;
            *(undefined8 *)(lVar4 + -8) = uVar23;
            *(undefined8 *)(lVar4 + -0x10) = uVar22;
            *(undefined8 *)(lVar3 + -0x20) = 0;
            *(undefined8 *)(lVar3 + -0x18) = 0;
            *(undefined8 *)(lVar3 + -0x10) = 0;
          } while (lVar17 - lVar19 != lVar18);
          lVar16 = lVar16 + lVar18;
          lVar17 = param_1[0xe];
          lVar19 = param_1[0xd];
        }
        lVar18 = param_1[0xf];
        param_1[0xf] = lVar13 + uVar15 * 0x90;
        param_1[0xd] = lVar16;
        param_1[0xe] = lVar12;
        while (lVar17 != lVar19) {
          lVar17 = lVar17 + -0x90;
          FUN_005d569c(puVar1,lVar17);
        }
        if (lVar19 != 0) {
          (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,lVar19,lVar18 - lVar19,8);
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  return;
}


