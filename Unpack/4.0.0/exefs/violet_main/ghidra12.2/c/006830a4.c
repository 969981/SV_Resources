/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006830a4; name: FUN_006830a4
 */


void FUN_006830a4(undefined2 *param_1,undefined2 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  size_t sVar4;
  byte *pbVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
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
  *(long *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar2 = FUN_01cf7e20();
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  plVar16 = (long *)0x0;
  if (*(long *)(param_3 + 0x20) != 0) {
    plVar16 = (long *)(*(long *)(param_3 + 0x20) + 8);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    plVar1 = plVar16 + *(int *)(param_3 + 0x18);
    do {
      pbVar5 = *(byte **)(*plVar16 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar5 = pbVar5 + 1;
        puVar12 = *(ulong **)(param_1 + 8);
        puVar6 = *(ulong **)(param_1 + 0xc);
        if (puVar12 < puVar6) goto LAB_006831e0;
LAB_00683178:
        lVar7 = *(long *)(param_1 + 4);
        lVar10 = (long)puVar12 - lVar7 >> 5;
        uVar14 = lVar10 + 1;
        if (uVar14 >> 0x3b != 0) {
                    /* try { // try from 0068337c to 00683383 has its CatchHandler @ 00683398 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)puVar6 - lVar7;
        uVar8 = lVar7 >> 4;
        if (uVar14 <= uVar8) {
          uVar14 = uVar8;
        }
        if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                            (*(long **)(param_1 + 0x10),uVar14 << 5,8);
        }
        puVar12 = (ulong *)(lVar7 + lVar10 * 0x20);
        plVar3 = (long *)FUN_01cf7e20();
        puVar12[3] = (ulong)plVar3;
        sVar4 = strlen((char *)pbVar5);
        if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00683374 to 0068337b has its CatchHandler @ 006833a0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar4 < 0x17) {
          puVar15 = (undefined1 *)((long)puVar12 + 1);
          *(char *)puVar12 = (char)((int)sVar4 << 1);
          if (sVar4 != 0) goto LAB_00683294;
        }
        else {
          uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
          puVar15 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar8,1);
          *puVar12 = uVar8 | 1;
          puVar12[1] = sVar4;
          puVar12[2] = (ulong)puVar15;
LAB_00683294:
          memcpy(puVar15,pbVar5,sVar4);
        }
        puVar15[sVar4] = 0;
        pbVar5 = *(byte **)(param_1 + 4);
        pbVar9 = *(byte **)(param_1 + 8);
        puVar6 = puVar12 + 4;
        puVar11 = puVar12;
        if (pbVar9 == pbVar5) {
          pbVar9 = pbVar5;
        }
        else {
          do {
            uVar8 = *(ulong *)(pbVar9 + -0x20);
            uVar18 = *(ulong *)(pbVar9 + -8);
            uVar17 = *(ulong *)(pbVar9 + -0x10);
            puVar12 = puVar11 + -4;
            puVar11[-3] = *(ulong *)(pbVar9 + -0x18);
            *puVar12 = uVar8;
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
          } while (pbVar5 != pbVar9);
          pbVar5 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 4);
        }
        *(ulong **)(param_1 + 4) = puVar12;
        *(ulong **)(param_1 + 8) = puVar6;
        lVar10 = *(long *)(param_1 + 0xc);
        *(ulong *)(param_1 + 0xc) = lVar7 + uVar14 * 0x20;
        if (pbVar5 != pbVar9) {
          do {
            pbVar13 = pbVar5 + -0x20;
            if ((*pbVar13 & 1) != 0) {
              (**(code **)(**(long **)(pbVar5 + -8) + 0x18))
                        (*(long **)(pbVar5 + -8),*(undefined8 *)(pbVar5 + -0x10),
                         *(ulong *)(pbVar5 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar5 = pbVar13;
          } while (pbVar9 != pbVar13);
        }
        if (pbVar9 != (byte *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                    (*(long **)(param_1 + 0x10),pbVar9,lVar10 - (long)pbVar9,8);
        }
      }
      else {
        pbVar5 = *(byte **)(pbVar5 + 0x10);
        puVar12 = *(ulong **)(param_1 + 8);
        puVar6 = *(ulong **)(param_1 + 0xc);
        if (puVar6 <= puVar12) goto LAB_00683178;
LAB_006831e0:
        plVar3 = (long *)FUN_01cf7e20();
        puVar12[3] = (ulong)plVar3;
        sVar4 = strlen((char *)pbVar5);
        if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 00683384 to 0068338b has its CatchHandler @ 0068338c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar4 < 0x17) {
          puVar15 = (undefined1 *)((long)puVar12 + 1);
          *(char *)puVar12 = (char)((int)sVar4 << 1);
          if (sVar4 != 0) goto LAB_00683130;
        }
        else {
          uVar14 = sVar4 + 0x10 & 0xfffffffffffffff0;
          puVar15 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar14,1);
          *puVar12 = uVar14 | 1;
          puVar12[1] = sVar4;
          puVar12[2] = (ulong)puVar15;
LAB_00683130:
          memcpy(puVar15,pbVar5,sVar4);
        }
        puVar15[sVar4] = 0;
        *(ulong **)(param_1 + 8) = puVar12 + 4;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  return;
}


