/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002736c0; name: FUN_002736c0
 */


void FUN_002736c0(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  void *__dest;
  long *plVar15;
  uint *puVar16;
  undefined8 *local_68;
  
  plVar15 = param_1 + 3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar15;
  param_1[4] = (long)plVar15;
  param_1[5] = 0;
  plVar13 = (long *)param_2[4];
  if (plVar13 == param_2 + 3) {
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    do {
                    /* try { // try from 0027370c to 00273713 has its CatchHandler @ 00273a30 */
      FUN_00273ee8(plVar15,plVar13 + 2);
      plVar13 = (long *)plVar13[1];
    } while (plVar13 != param_2 + 3);
    lVar7 = param_1[2];
    lVar5 = *param_1;
  }
  uVar14 = param_2[1] - *param_2 >> 5;
  if ((ulong)(lVar7 - lVar5 >> 5) < uVar14) {
    lVar8 = param_1[1];
    lVar7 = FUN_0049e770(PTR_FUN_047cba38);
    pvVar3 = (void *)*param_1;
    lVar5 = lVar7 + (lVar8 - lVar5);
    plVar15 = (long *)(lVar7 + uVar14 * 0x20);
    sVar4 = param_1[1] - (long)pvVar3;
    __dest = (void *)(lVar5 - sVar4);
    if (0 < (long)sVar4) {
      memcpy(__dest,pvVar3,sVar4);
      pvVar3 = (void *)*param_1;
    }
    *param_1 = (long)__dest;
    param_1[1] = lVar5;
    param_1[2] = (long)plVar15;
    if (pvVar3 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  puVar1 = (uint *)param_2[1];
  if ((uint *)*param_2 != puVar1) {
    lVar5 = param_2[4];
    puVar16 = (uint *)*param_2 + 4;
    lVar7 = param_1[4];
    do {
      uVar2 = puVar16[-4];
      if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        lVar8 = lVar5 + 0x11;
      }
      else {
        lVar8 = *(long *)(lVar5 + 0x20);
      }
      if (lVar8 != *(long *)(puVar16 + -2)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002739a8 to 002739b7 has its CatchHandler @ 002739b8 */
        abort();
      }
      if ((*(byte *)(lVar7 + 0x10) & 1) == 0) {
        lVar8 = lVar7 + 0x11;
        lVar5 = *(long *)(lVar5 + 8);
        lVar7 = *(long *)(lVar7 + 8);
        if (uVar2 == 0) goto LAB_00273868;
LAB_0027382c:
        if (uVar2 == 2) {
          local_68 = *(undefined8 **)(puVar16 + 2);
                    /* try { // try from 00273888 to 0027388b has its CatchHandler @ 002739bc */
          plVar15 = (long *)(*(code *)*local_68)(*(undefined8 *)puVar16);
LAB_00273890:
          puVar6 = (uint *)param_1[1];
          puVar9 = (uint *)param_1[2];
          if (puVar6 != puVar9) goto LAB_002737bc;
          goto LAB_002738dc;
        }
        if (uVar2 != 1) goto LAB_00273890;
        plVar15 = (long *)((ulong)plVar15 & 0xffffffff00000000 | (ulong)*puVar16);
        puVar6 = (uint *)param_1[1];
        puVar9 = (uint *)param_1[2];
        if (puVar6 == puVar9) goto LAB_002738dc;
LAB_002737bc:
        *(long *)(puVar6 + 2) = lVar8;
        *(long **)(puVar6 + 4) = plVar15;
        *puVar6 = uVar2;
        *(undefined8 **)(puVar6 + 6) = local_68;
        param_1[1] = (long)(puVar6 + 8);
      }
      else {
        lVar8 = *(long *)(lVar7 + 0x20);
        lVar5 = *(long *)(lVar5 + 8);
        lVar7 = *(long *)(lVar7 + 8);
        if (uVar2 != 0) goto LAB_0027382c;
LAB_00273868:
        if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
          lVar12 = lVar5 + 0x11;
        }
        else {
          lVar12 = *(long *)(lVar5 + 0x20);
        }
        if (lVar12 != *(long *)puVar16) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((*(byte *)(lVar7 + 0x10) & 1) == 0) {
          plVar15 = (long *)(lVar7 + 0x11);
        }
        else {
          plVar15 = *(long **)(lVar7 + 0x20);
        }
        lVar5 = *(long *)(lVar5 + 8);
        lVar7 = *(long *)(lVar7 + 8);
        puVar6 = (uint *)param_1[1];
        puVar9 = (uint *)param_1[2];
        if (puVar6 != puVar9) goto LAB_002737bc;
LAB_002738dc:
        lVar12 = (long)puVar6 - *param_1 >> 5;
        uVar14 = lVar12 + 1;
        if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)puVar9 - *param_1;
        uVar11 = lVar10 >> 4;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        if (0x3fffffffffffffe < (ulong)(lVar10 >> 5)) {
          uVar14 = 0x7ffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = FUN_0049e770(PTR_FUN_047cba38,uVar14 << 5);
        }
        puVar6 = (uint *)(lVar10 + lVar12 * 0x20);
        *(long *)(puVar6 + 2) = lVar8;
        *(long **)(puVar6 + 4) = plVar15;
        *puVar6 = uVar2;
        *(undefined8 **)(puVar6 + 6) = local_68;
        pvVar3 = (void *)*param_1;
        sVar4 = param_1[1] - (long)pvVar3;
        if (0 < (long)sVar4) {
          memcpy((void *)((long)puVar6 - sVar4),pvVar3,sVar4);
          pvVar3 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar6 - sVar4);
        param_1[1] = (long)(puVar6 + 8);
        param_1[2] = lVar10 + uVar14 * 0x20;
        if (pvVar3 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      puVar6 = puVar16 + 4;
      puVar16 = puVar16 + 8;
    } while (puVar6 != puVar1);
  }
  return;
}


