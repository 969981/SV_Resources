/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00560c60; name: FUN_00560c60
 */


void FUN_00560c60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  size_t sVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  *param_1 = param_2;
  pbVar8 = *(byte **)(param_3 + 0x28);
  if ((*pbVar8 & 1) == 0) {
    pbVar8 = pbVar8 + 1;
  }
  else {
    pbVar8 = *(byte **)(pbVar8 + 0x10);
  }
  FUN_00567ec0(pbVar8);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[8] = uVar2;
  plVar16 = (long *)0x0;
  if (*(long *)(param_3 + 0x20) != 0) {
    plVar16 = (long *)(*(long *)(param_3 + 0x20) + 8);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    plVar1 = plVar16 + *(int *)(param_3 + 0x18);
    do {
      pbVar8 = *(byte **)(*plVar16 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar8 = pbVar8 + 1;
        puVar12 = (ulong *)param_1[6];
        puVar5 = (ulong *)param_1[7];
        if (puVar12 < puVar5) goto LAB_00560dc4;
LAB_00560d5c:
        lVar6 = param_1[5];
        lVar10 = (long)puVar12 - lVar6 >> 5;
        uVar14 = lVar10 + 1;
        if (uVar14 >> 0x3b != 0) {
                    /* try { // try from 00560f64 to 00560f6b has its CatchHandler @ 00560f80 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = (long)puVar5 - lVar6;
        uVar7 = lVar6 >> 4;
        if (uVar14 <= uVar7) {
          uVar14 = uVar7;
        }
        if (0x3fffffffffffffe < (ulong)(lVar6 >> 5)) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],uVar14 << 5,8);
        }
        puVar12 = (ulong *)(lVar6 + lVar10 * 0x20);
        plVar3 = (long *)FUN_01cf7e20();
        puVar12[3] = (ulong)plVar3;
        sVar4 = strlen((char *)pbVar8);
        if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00560f5c to 00560f63 has its CatchHandler @ 00560f88 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar4 < 0x17) {
          puVar15 = (undefined1 *)((long)puVar12 + 1);
          *(char *)puVar12 = (char)((int)sVar4 << 1);
          if (sVar4 != 0) goto LAB_00560e78;
        }
        else {
          uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
          puVar15 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
          *puVar12 = uVar7 | 1;
          puVar12[1] = sVar4;
          puVar12[2] = (ulong)puVar15;
LAB_00560e78:
          memcpy(puVar15,pbVar8,sVar4);
        }
        puVar15[sVar4] = 0;
        pbVar8 = (byte *)param_1[5];
        pbVar9 = (byte *)param_1[6];
        puVar5 = puVar12 + 4;
        puVar11 = puVar12;
        if (pbVar9 == pbVar8) {
          pbVar9 = pbVar8;
        }
        else {
          do {
            uVar7 = *(ulong *)(pbVar9 + -0x20);
            uVar18 = *(ulong *)(pbVar9 + -8);
            uVar17 = *(ulong *)(pbVar9 + -0x10);
            puVar12 = puVar11 + -4;
            puVar11[-3] = *(ulong *)(pbVar9 + -0x18);
            *puVar12 = uVar7;
            puVar11[-1] = uVar18;
            puVar11[-2] = uVar17;
            pbVar9[-0x18] = 0;
            pbVar9[-0x17] = 0;
            pbVar9[-0x16] = 0;
            pbVar9[-0x15] = 0;
            pbVar9[-0x14] = 0;
            pbVar9[-0x13] = 0;
            pbVar9[-0x12] = 0;
            pbVar9[-0x11] = 0;
            pbVar9[-0x10] = 0;
            pbVar9[-0xf] = 0;
            pbVar9[-0xe] = 0;
            pbVar9[-0xd] = 0;
            pbVar9[-0xc] = 0;
            pbVar9[-0xb] = 0;
            pbVar9[-10] = 0;
            pbVar9[-9] = 0;
            pbVar9[-0x20] = 0;
            pbVar9[-0x1f] = 0;
            pbVar9[-0x1e] = 0;
            pbVar9[-0x1d] = 0;
            pbVar9[-0x1c] = 0;
            pbVar9[-0x1b] = 0;
            pbVar9[-0x1a] = 0;
            pbVar9[-0x19] = 0;
            pbVar9 = pbVar9 + -0x20;
            puVar11 = puVar12;
          } while (pbVar8 != pbVar9);
          pbVar8 = (byte *)param_1[6];
          pbVar9 = (byte *)param_1[5];
        }
        lVar10 = param_1[7];
        param_1[7] = lVar6 + uVar14 * 0x20;
        param_1[5] = puVar12;
        param_1[6] = puVar5;
        if (pbVar8 != pbVar9) {
          do {
            pbVar13 = pbVar8 + -0x20;
            if ((*pbVar13 & 1) != 0) {
              (**(code **)(**(long **)(pbVar8 + -8) + 0x18))
                        (*(long **)(pbVar8 + -8),*(undefined8 *)(pbVar8 + -0x10),
                         *(ulong *)(pbVar8 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar8 = pbVar13;
          } while (pbVar9 != pbVar13);
        }
        if (pbVar9 != (byte *)0x0) {
          (**(code **)(*(long *)param_1[8] + 0x18))
                    ((long *)param_1[8],pbVar9,lVar10 - (long)pbVar9,8);
        }
      }
      else {
        pbVar8 = *(byte **)(pbVar8 + 0x10);
        puVar12 = (ulong *)param_1[6];
        puVar5 = (ulong *)param_1[7];
        if (puVar5 <= puVar12) goto LAB_00560d5c;
LAB_00560dc4:
        plVar3 = (long *)FUN_01cf7e20();
        puVar12[3] = (ulong)plVar3;
        sVar4 = strlen((char *)pbVar8);
        if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00560f6c to 00560f73 has its CatchHandler @ 00560f74 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar4 < 0x17) {
          puVar15 = (undefined1 *)((long)puVar12 + 1);
          *(char *)puVar12 = (char)((int)sVar4 << 1);
          if (sVar4 != 0) goto LAB_00560d14;
        }
        else {
          uVar14 = sVar4 + 0x10 & 0xfffffffffffffff0;
          puVar15 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar14,1);
          *puVar12 = uVar14 | 1;
          puVar12[1] = sVar4;
          puVar12[2] = (ulong)puVar15;
LAB_00560d14:
          memcpy(puVar15,pbVar8,sVar4);
        }
        puVar15[sVar4] = 0;
        param_1[6] = puVar12 + 4;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  return;
}


