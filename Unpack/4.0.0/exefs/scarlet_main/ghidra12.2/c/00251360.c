/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00251360; name: FUN_00251360
 */


void FUN_00251360(long *param_1,byte *param_2,uint *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  ulong __n;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 *__dest;
  undefined8 *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar13 = (ulong *)param_1[2];
  if (puVar13 == (ulong *)param_1[3]) {
    puVar7 = (ulong *)*param_1;
    puVar2 = (ulong *)param_1[1];
    if (puVar2 < puVar7 || (long)puVar2 - (long)puVar7 == 0) {
      puVar12 = (undefined8 *)param_1[4];
      lVar6 = param_1[3] - (long)puVar7;
      uVar3 = lVar6 >> 4;
      if (lVar6 == 0) {
        uVar3 = 1;
      }
      plVar4 = (long *)*puVar12;
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar3 * 0x20,8);
      pbVar14 = (byte *)param_1[1];
      pbVar10 = (byte *)param_1[2];
      puVar1 = (undefined8 *)(lVar5 + (uVar3 >> 2) * 0x20);
      lVar6 = (long)pbVar10 - (long)pbVar14;
      if (lVar6 == 0) {
        puVar9 = puVar1;
      }
      else {
        puVar9 = puVar1;
        if (((uint)(lVar6 - 0x20U) >> 5 & 1) == 0) {
          uVar17 = *(undefined8 *)pbVar14;
          uVar19 = *(undefined8 *)(pbVar14 + 0x18);
          uVar18 = *(undefined8 *)(pbVar14 + 0x10);
          puVar1[1] = *(undefined8 *)(pbVar14 + 8);
          *puVar1 = uVar17;
          puVar1[3] = uVar19;
          puVar1[2] = uVar18;
          pbVar14[8] = 0;
          pbVar14[9] = 0;
          pbVar14[10] = 0;
          pbVar14[0xb] = 0;
          pbVar14[0xc] = 0;
          pbVar14[0xd] = 0;
          pbVar14[0xe] = 0;
          pbVar14[0xf] = 0;
          pbVar14[0x10] = 0;
          pbVar14[0x11] = 0;
          pbVar14[0x12] = 0;
          pbVar14[0x13] = 0;
          pbVar14[0x14] = 0;
          pbVar14[0x15] = 0;
          pbVar14[0x16] = 0;
          pbVar14[0x17] = 0;
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14[2] = 0;
          pbVar14[3] = 0;
          pbVar14[4] = 0;
          pbVar14[5] = 0;
          pbVar14[6] = 0;
          pbVar14[7] = 0;
          pbVar14 = pbVar14 + 0x20;
          puVar9 = puVar1 + 4;
        }
        if (0x1f < lVar6 - 0x20U) {
          do {
            uVar17 = *(undefined8 *)pbVar14;
            uVar19 = *(undefined8 *)(pbVar14 + 0x18);
            uVar18 = *(undefined8 *)(pbVar14 + 0x10);
            puVar9[1] = *(undefined8 *)(pbVar14 + 8);
            *puVar9 = uVar17;
            puVar9[3] = uVar19;
            puVar9[2] = uVar18;
            pbVar14[0] = 0;
            pbVar14[1] = 0;
            pbVar14[2] = 0;
            pbVar14[3] = 0;
            pbVar14[4] = 0;
            pbVar14[5] = 0;
            pbVar14[6] = 0;
            pbVar14[7] = 0;
            uVar17 = *(undefined8 *)(pbVar14 + 0x20);
            uVar19 = *(undefined8 *)(pbVar14 + 0x38);
            uVar18 = *(undefined8 *)(pbVar14 + 0x30);
            pbVar14[8] = 0;
            pbVar14[9] = 0;
            pbVar14[10] = 0;
            pbVar14[0xb] = 0;
            pbVar14[0xc] = 0;
            pbVar14[0xd] = 0;
            pbVar14[0xe] = 0;
            pbVar14[0xf] = 0;
            pbVar14[0x10] = 0;
            pbVar14[0x11] = 0;
            pbVar14[0x12] = 0;
            pbVar14[0x13] = 0;
            pbVar14[0x14] = 0;
            pbVar14[0x15] = 0;
            pbVar14[0x16] = 0;
            pbVar14[0x17] = 0;
            puVar9[5] = *(undefined8 *)(pbVar14 + 0x28);
            puVar9[4] = uVar17;
            puVar9[7] = uVar19;
            puVar9[6] = uVar18;
            puVar9 = puVar9 + 8;
            pbVar14[0x28] = 0;
            pbVar14[0x29] = 0;
            pbVar14[0x2a] = 0;
            pbVar14[0x2b] = 0;
            pbVar14[0x2c] = 0;
            pbVar14[0x2d] = 0;
            pbVar14[0x2e] = 0;
            pbVar14[0x2f] = 0;
            pbVar14[0x30] = 0;
            pbVar14[0x31] = 0;
            pbVar14[0x32] = 0;
            pbVar14[0x33] = 0;
            pbVar14[0x34] = 0;
            pbVar14[0x35] = 0;
            pbVar14[0x36] = 0;
            pbVar14[0x37] = 0;
            pbVar14[0x20] = 0;
            pbVar14[0x21] = 0;
            pbVar14[0x22] = 0;
            pbVar14[0x23] = 0;
            pbVar14[0x24] = 0;
            pbVar14[0x25] = 0;
            pbVar14[0x26] = 0;
            pbVar14[0x27] = 0;
            pbVar14 = pbVar14 + 0x40;
          } while ((undefined8 *)(lVar5 + (lVar6 >> 5) * 0x20 + (uVar3 >> 2) * 0x20) != puVar9);
        }
        pbVar14 = (byte *)param_1[1];
        pbVar10 = (byte *)param_1[2];
        puVar9 = (undefined8 *)((long)puVar1 + lVar6);
      }
      lVar6 = *param_1;
      lVar15 = param_1[3];
      *param_1 = lVar5;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)puVar9;
      param_1[3] = lVar5 + uVar3 * 0x20;
      if (pbVar10 != pbVar14) {
        do {
          pbVar16 = pbVar10 + -0x20;
          if ((*pbVar16 & 1) != 0) {
            (**(code **)(**(long **)(pbVar10 + -8) + 0x18))
                      (*(long **)(pbVar10 + -8),*(undefined8 *)(pbVar10 + -0x10),
                       *(ulong *)(pbVar10 + -0x20) & 0xfffffffffffffffe,1);
          }
          pbVar10 = pbVar16;
        } while (pbVar14 != pbVar16);
      }
      if (lVar6 != 0) {
        plVar4 = (long *)*puVar12;
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar15 - lVar6,8);
      }
    }
    else {
      lVar5 = (long)puVar2 - (long)puVar7 >> 5;
      lVar6 = lVar5 + 2;
      if (-1 < lVar5 + 1) {
        lVar6 = lVar5 + 1;
      }
      lVar6 = lVar6 >> 1;
      if (puVar2 == puVar13) {
        puVar7 = puVar2 + lVar6 * -4;
      }
      else {
        do {
          while( true ) {
            puVar7 = puVar2;
            puVar2 = puVar7 + lVar6 * -4;
            if (((long *)puVar2[3] != (long *)puVar7[3]) &&
               (uVar3 = (**(code **)(*(long *)puVar2[3] + 0x20))(), (uVar3 & 1) == 0)) break;
            if ((*puVar2 & 1) != 0) {
              (**(code **)(*(long *)puVar2[3] + 0x18))
                        ((long *)puVar2[3],puVar2[2],*puVar2 & 0xfffffffffffffffe,1);
              *(undefined2 *)puVar2 = 0;
            }
            uVar11 = puVar7[1];
            uVar3 = *puVar7;
            puVar2[2] = puVar7[2];
            puVar2[1] = uVar11;
            *puVar2 = uVar3;
            *(undefined2 *)puVar7 = 0;
            puVar2 = puVar7 + 4;
            if (puVar13 == puVar7 + 4) goto LAB_0025144c;
          }
          FUN_01d0e1a8(puVar2,puVar7);
          puVar2 = puVar7 + 4;
        } while (puVar13 != puVar7 + 4);
LAB_0025144c:
        puVar13 = (ulong *)param_1[1];
        puVar7 = puVar7 + lVar6 * -4 + 4;
      }
      param_1[1] = (long)(puVar13 + lVar6 * -4);
      param_1[2] = (long)puVar7;
    }
  }
  puVar13 = (ulong *)param_1[2];
  uVar11 = (ulong)*param_3;
  uVar3 = *param_4;
  plVar4 = (long *)FUN_01cf7e20();
  puVar13[3] = (ulong)plVar4;
  if ((*param_2 & 1) == 0) {
    uVar8 = (ulong)(*param_2 >> 1);
    if (uVar8 < uVar11) {
LAB_00251674:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_2 = param_2 + 1;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if (uVar8 < uVar11) goto LAB_00251674;
    param_2 = *(byte **)(param_2 + 0x10);
  }
  __n = uVar8 - uVar11;
  if (uVar3 <= uVar8 - uVar11) {
    __n = uVar3;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)puVar13 + 1);
    *(char *)puVar13 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0025164c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar3,1);
    puVar13[1] = __n;
    puVar13[2] = (ulong)__dest;
    *puVar13 = uVar3 | 1;
  }
  memcpy(__dest,param_2 + uVar11,__n);
LAB_0025164c:
  __dest[__n] = 0;
  param_1[2] = param_1[2] + 0x20;
  return;
}


