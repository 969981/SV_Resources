/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02004134; name: FUN_02004134
 */


void FUN_02004134(long param_1)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  uint *__s;
  undefined8 *__s_00;
  uint *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  char cVar24;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar25;
  uint *puVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  long *plVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined6 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  
  fVar36 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar34 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar37 = (fVar36 + -250.0) / 3.0;
  fVar35 = (fVar34 + -250.0) / 3.0;
  iVar15 = (int)fVar37;
  fVar34 = (fVar34 + 250.0) / 3.0;
  iVar17 = (int)fVar35;
  iVar15 = iVar15 - (uint)(fVar37 < (float)iVar15);
  fVar36 = (fVar36 + 250.0) / 3.0;
  iVar17 = iVar17 - (uint)(fVar35 < (float)iVar17);
  iVar18 = (int)fVar36;
  iVar18 = iVar18 - (uint)(fVar36 < (float)iVar18);
  iVar16 = (int)fVar34;
  iVar16 = iVar16 - (uint)(fVar34 < (float)iVar16);
  uVar1 = (iVar18 - iVar15) + 1;
  uVar2 = (iVar16 - iVar17) + 1;
  if ((iVar16 < iVar17) || (iVar18 < iVar15)) {
    uVar27 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(param_1 + 0xb0);
    uVar27 = 0;
    iVar28 = iVar17;
    do {
      iVar29 = iVar15;
      do {
        local_70 = iVar29;
        iStack_6c = iVar28;
        lVar14 = FUN_02004980(uVar25,&local_70);
        for (lVar14 = *(long *)(lVar14 + 0x20); lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x28)) {
          uVar27 = (ulong)((int)uVar27 + 1);
        }
        bVar11 = iVar29 != iVar18;
        iVar29 = iVar29 + 1;
      } while (bVar11);
      bVar11 = iVar28 < iVar16;
      iVar28 = iVar28 + 1;
    } while (bVar11);
  }
  __n_00 = ((ulong)uVar1 & 0xffff) * ((ulong)uVar2 & 0xffff) * 4;
  __s = (uint *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n_00,0x10);
  memset(__s,0,__n_00);
  __n_01 = uVar27 * 0x18;
  __s_00 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n_01,0x10);
  memset(__s_00,0,__n_01);
  uVar33 = 0;
  bVar31 = 0;
  if (iVar17 <= iVar16) {
    if (iVar18 < iVar15) {
      uVar33 = 0;
      bVar31 = 0;
    }
    else {
      uVar33 = 0;
      iVar28 = iVar17;
      do {
        lVar14 = (long)iVar15;
        do {
          local_78 = (int)lVar14;
          iVar29 = -iVar15 + (iVar28 - iVar17) * (uVar1 & 0xffff) + local_78;
          iStack_74 = iVar28;
          lVar13 = FUN_02004980(*(undefined8 *)(param_1 + 0xb0),&local_78);
          __s[iVar29] = 0;
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) {
            puVar19 = (undefined4 *)((long)__s_00 + (long)(int)uVar33 * 0x18 + 0xc);
            uVar32 = uVar33 << 8;
            __s[iVar29] = uVar32;
            while( true ) {
              uVar33 = uVar33 + 1;
              __s[iVar29] = uVar32 & 0xffffff00 | uVar32 + 1 & 0xff;
              puVar19[-3] = (int)*(undefined8 *)(lVar13 + 0x10);
              puVar19[-2] = *(undefined4 *)(lVar13 + 0x14);
              puVar19[-1] = (int)*(undefined8 *)(lVar13 + 0x18);
              *puVar19 = *(undefined4 *)(lVar13 + 0x1c);
              puVar19[1] = *(undefined4 *)(lVar13 + 4);
              puVar19[2] = *(undefined4 *)(lVar13 + 0x20);
              lVar13 = *(long *)(lVar13 + 0x28);
              if (lVar13 == 0) break;
              uVar32 = __s[iVar29];
              puVar19 = puVar19 + 6;
            }
          }
          bVar11 = lVar14 != iVar18;
          lVar14 = lVar14 + 1;
        } while (bVar11);
        bVar11 = iVar28 < iVar16;
        iVar28 = iVar28 + 1;
      } while (bVar11);
      bVar31 = 0;
      iVar28 = iVar17;
      do {
        lVar14 = (long)iVar15;
        do {
          local_80 = (int)lVar14;
          iVar29 = -iVar15 + (iVar28 - iVar17) * (uVar1 & 0xffff) + local_80;
          iStack_7c = iVar28;
          lVar13 = FUN_02004980(*(undefined8 *)(param_1 + 0xb0),&local_80);
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((lVar13 != 0) && (*(long *)(lVar13 + 0x28) == 0)) {
            fVar34 = *(float *)(lVar13 + 4);
            fVar36 = *(float *)(lVar13 + 0x20);
            iVar5 = *(int *)(lVar13 + 0x10);
            iVar8 = *(int *)(lVar13 + 0x14);
            iVar6 = *(int *)(lVar13 + 0x18);
            iVar9 = *(int *)(lVar13 + 0x1c);
            if (0 < (int)uVar33) {
              lVar13 = 0;
              piVar23 = (int *)((long)__s_00 + 0xc);
              do {
                if ((((piVar23[-3] == iVar5) && (piVar23[-2] == iVar8)) && (piVar23[-1] == iVar6))
                   && (*piVar23 == iVar9)) {
                  fVar37 = fVar36 - (float)piVar23[2];
                  fVar35 = fVar34 - (float)piVar23[1];
                  fVar37 = fVar37 * fVar37;
                  bVar11 = false;
                  if ((fVar35 * fVar35 < 1.0000001e-06) && (bVar11 = false, !NAN(fVar37))) {
                    bVar11 = fVar37 < 1.0000001e-06;
                  }
                  if (bVar11) {
                    __s[iVar29] = (int)lVar13 + 1;
                  }
                }
                lVar13 = lVar13 + 0x100;
                piVar23 = piVar23 + 6;
              } while ((ulong)uVar33 * 0x100 != lVar13);
            }
            if ((char)__s[iVar29] == '\0') {
              __s[iVar29] = uVar33 << 8 | 1;
              piVar23 = (int *)(__s_00 + (long)(int)uVar33 * 3);
              uVar33 = uVar33 + 1;
              *piVar23 = iVar5;
              piVar23[1] = iVar8;
              piVar23[2] = iVar6;
              piVar23[3] = iVar9;
              piVar23[4] = (int)fVar34;
              piVar23[5] = (int)fVar36;
            }
          }
          bVar10 = (byte)__s[iVar29];
          if ((byte)__s[iVar29] <= bVar31) {
            bVar10 = bVar31;
          }
          bVar31 = bVar10;
          bVar11 = lVar14 != iVar18;
          lVar14 = lVar14 + 1;
        } while (bVar11);
        bVar11 = iVar28 < iVar16;
        iVar28 = iVar28 + 1;
      } while (bVar11);
    }
  }
  if (((int)uVar33 < 2) && (bVar31 < 2)) {
    cVar24 = '\x04';
  }
  else if (((int)uVar33 < 0x4000) && (bVar31 < 4)) {
    cVar24 = '\x03';
  }
  else {
    cVar24 = '\x01';
    if (bVar31 < 0x40 && (int)uVar33 < 0x40000) {
      cVar24 = '\x02';
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  uStack_c0 = 0;
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uStack_f8 = 0;
  local_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_fb = 0;
  local_118 = 0;
  uStack_110 = 0;
  iVar18 = (int)((ulong)uVar1 & 0xffff);
  iVar16 = (int)((ulong)uVar2 & 0xffff);
  if (cVar24 == '\x03') {
    iVar18 = iVar18 * iVar16 * 2;
  }
  else {
    if (cVar24 != '\x02') {
      uVar32 = 0;
      if (cVar24 == '\x01') {
        uVar32 = (uint)__n_00;
      }
      goto LAB_020043b0;
    }
    iVar18 = iVar18 * iVar16 * 3;
  }
  uVar32 = iVar18 + 3U & 0xfffffffc;
LAB_020043b0:
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  __n = (ulong)(uVar33 * 0x18 + 0x40) + (ulong)(uVar32 + 0x40) + 0x80;
  puVar12 = (uint *)(**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),__n,0x10)
  ;
  memset(puVar12,0,__n);
  *(int *)(param_1 + 0xc0) = (int)__n;
  *(uint **)(param_1 + 0x60) = puVar12;
  *(uint **)(param_1 + 0xb8) = puVar12;
  puVar12[0] = 0x40;
  puVar12[1] = 0;
  puVar12[2] = 3;
  memcpy(puVar12 + 3,&local_b8,0x34);
  *(uint **)(param_1 + 0x68) = puVar12;
  puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[1] + (ulong)*puVar12);
  puVar12[0] = 0x40;
  puVar12[1] = 0;
  *(char *)(puVar12 + 2) = (char)uVar4;
  *(char *)((long)puVar12 + 9) = (char)uVar7;
  memcpy((void *)((long)puVar12 + 10),&local_f0,0x36);
  *(uint **)(param_1 + 0x70) = puVar12;
  puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[1] + (ulong)*puVar12);
  *puVar12 = 0x40;
  puVar12[1] = uVar32;
  *(undefined2 *)(puVar12 + 2) = 8;
  *(short *)((long)puVar12 + 10) = (short)iVar15;
  *(char *)((long)puVar12 + 0x12) = cVar24;
  *(short *)(puVar12 + 3) = (short)iVar17;
  *(short *)((long)puVar12 + 0xe) = (short)uVar1;
  *(short *)(puVar12 + 4) = (short)uVar2;
  memcpy((void *)((long)puVar12 + 0x13),&local_120,0x2d);
  puVar26 = puVar12 + 0x10;
  *(uint **)(param_1 + 0x78) = puVar12;
  *(uint **)(param_1 + 0x88) = puVar26;
  *(uint **)(param_1 + 0x90) = puVar26;
  *(uint **)(param_1 + 0x98) = puVar26;
  puVar19 = (undefined4 *)((long)puVar12 + (ulong)puVar12[1] + (ulong)*puVar12);
  *puVar19 = 0x40;
  puVar19[1] = uVar33 * 0x18;
  puVar19[2] = 0x18;
  puVar19[3] = uVar33;
  memcpy(puVar19 + 4,&local_150,0x30);
  uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
  puVar3 = (undefined8 *)(puVar19 + 0x10);
  *(undefined4 **)(param_1 + 0xa0) = puVar19;
  *(undefined8 **)(param_1 + 0xa8) = puVar3;
  if (cVar24 == '\x01') {
    if (uVar1 != 0) {
      uVar27 = (ulong)uVar1;
      puVar12 = __s;
      do {
        uVar1 = *puVar12;
        *(char *)puVar26 = (char)uVar1;
        uVar27 = uVar27 - 1;
        *puVar26 = *puVar12 & 0xffffff00 | uVar1 & 0xff;
        puVar12 = puVar12 + 1;
        puVar26 = puVar26 + 1;
      } while (uVar27 != 0);
    }
  }
  else if (cVar24 == '\x02') {
    if (uVar1 != 0) {
      uVar27 = (ulong)uVar1;
      puVar12 = __s;
      do {
        uVar1 = *puVar12;
        uVar27 = uVar27 - 1;
        *(byte *)puVar26 = (byte)*puVar26 & 0xc0 | (byte)uVar1 & 0x3f;
        *(byte *)puVar26 = (byte)(*puVar12 >> 0x12) & 0xc0 | (byte)uVar1 & 0x3f;
        *(char *)((long)puVar26 + 1) = (char)*(undefined2 *)((long)puVar12 + 2);
        *(char *)((long)puVar26 + 2) = (char)(*puVar12 >> 8);
        puVar26 = (uint *)((long)puVar26 + 3);
        puVar12 = puVar12 + 1;
      } while (uVar27 != 0);
    }
  }
  else if ((cVar24 == '\x03') && (uVar1 != 0)) {
    uVar27 = (ulong)uVar1;
    puVar12 = __s;
    do {
      uVar1 = *puVar12;
      uVar27 = uVar27 - 1;
      *(ushort *)puVar26 = (ushort)*puVar26 & 0xfffc | (ushort)uVar1 & 3;
      *(ushort *)puVar26 = (ushort)(*puVar12 >> 6) & 0xfffc | (ushort)uVar1 & 3;
      puVar12 = puVar12 + 1;
      puVar26 = (uint *)((long)puVar26 + 2);
    } while (uVar27 != 0);
  }
  if (0 < (int)uVar33) {
    if (uVar33 == 1) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      puVar21 = puVar3;
      puVar22 = __s_00;
      do {
        uVar25 = *puVar22;
        uVar27 = uVar27 + 2;
        uVar20 = puVar22[2];
        puVar21[1] = puVar22[1];
        puVar21[2] = uVar20;
        *puVar21 = uVar25;
        uVar25 = puVar22[3];
        uVar20 = puVar22[5];
        puVar21[4] = puVar22[4];
        puVar21[5] = uVar20;
        puVar21[3] = uVar25;
        puVar22 = puVar22 + 6;
        puVar21 = puVar21 + 6;
      } while (((ulong)uVar33 & 0xfffffffe) != uVar27);
    }
    if ((uVar33 & 1) != 0) {
      puVar3 = puVar3 + uVar27 * 3;
      puVar22 = __s_00 + uVar27 * 3;
      uVar25 = *puVar22;
      uVar20 = puVar22[2];
      puVar3[1] = puVar22[1];
      puVar3[2] = uVar20;
      *puVar3 = uVar25;
    }
  }
  if (__s != (uint *)0x0) {
    plVar30 = *(long **)(param_1 + 8);
    uVar27 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar27 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,__s,__n_00,0x10);
    }
    else {
      FUN_00c48fe8(plVar30,__s,__n_00,0x10);
    }
  }
  if (__s_00 != (undefined8 *)0x0) {
    plVar30 = *(long **)(param_1 + 8);
    uVar27 = (**(code **)(*plVar30 + 0xf8))(plVar30);
    if (((uVar27 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar30 + 0x18))(plVar30,__s_00,__n_01,0x10);
    }
    else {
      FUN_00c48fe8(plVar30,__s_00,__n_01,0x10);
    }
  }
  return;
}


