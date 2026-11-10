/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036444c; name: FUN_0036444c
 */


ulong * FUN_0036444c(ulong *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  byte local_b0 [16];
  ulong local_a0;
  undefined1 auStack_98 [32];
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  int *piStack_58;
  
  if (param_1[0x13] == param_1[0x14]) {
    param_1 = param_1 + 9;
  }
  else {
    piVar10 = *(int **)(param_1[0x14] - 8);
    if (*piVar10 == 5) {
      plVar1 = (long *)(piVar10 + 8);
      puVar6 = param_1 + 0x16;
      piVar2 = (int *)FUN_0027bd44(plVar1,puVar6);
      if (piVar10 + 10 != piVar2) {
        puVar8 = param_1 + 5;
        if (param_1[6] - *puVar8 == 0x80) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
        else {
          local_68 = (ulong *)(param_1[1] + ~*param_1);
          local_70 = (ulong *)PTR_FUN_047cc5f8;
          local_60 = (ulong *)PTR_FUN_047cc7f8;
          local_78 = puVar6;
          FUN_00391b20(local_b0,"duplicate key \"%s\" at index %lu",0x1f,&local_78,2);
          uVar12 = (ulong)local_b0 | 1;
          if ((local_b0[0] & 1) != 0) {
            uVar12 = local_a0;
          }
                    /* try { // try from 003645e0 to 00364603 has its CatchHandler @ 0036485c */
          FUN_00367770(auStack_98,uVar12);
          uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0xba
                               ,auStack_98,0,0);
          puVar4 = (undefined8 *)param_1[6];
          if (puVar4 < (undefined8 *)param_1[7]) {
            *puVar4 = uVar3;
            param_1[6] = (ulong)(puVar4 + 1);
          }
          else {
            lVar11 = (long)((long)puVar4 - *puVar8) >> 3;
            uVar12 = lVar11 + 1;
            if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00364854 to 0036485b has its CatchHandler @ 0036485c */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar5 = (long)param_1[7] - *puVar8;
            uVar7 = lVar5 >> 2;
            if (uVar12 <= uVar7) {
              uVar12 = uVar7;
            }
            if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar12 << 3);
            }
            puVar4 = (undefined8 *)(lVar5 + lVar11 * 8);
            *puVar4 = uVar3;
            __src = (void *)param_1[5];
            __n = param_1[6] - (long)__src;
            if (0 < (long)__n) {
              memcpy((void *)((long)puVar4 - __n),__src,__n);
              __src = (void *)*puVar8;
            }
            param_1[5] = (ulong)((long)puVar4 - __n);
            param_1[6] = (ulong)(puVar4 + 1);
            param_1[7] = lVar5 + uVar12 * 8;
            if (__src != (void *)0x0) {
              FUN_0049e790(PTR_LAB_047cba48);
            }
          }
          if ((local_b0[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_a0);
          }
        }
      }
      puVar4 = (undefined8 *)FUN_002885a4(plVar1,&local_78,puVar6);
      puVar9 = (undefined8 *)*puVar4;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
        uVar7 = param_1[0x17];
        uVar12 = *puVar6;
        puVar9[6] = param_1[0x18];
        puVar9[5] = uVar7;
        puVar9[4] = uVar12;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        *puVar6 = 0;
        puVar9[0xc] = 0;
        puVar9[0xb] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xb] = puVar9 + 0xc;
        puVar9[10] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[7] = 0;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
        puVar9[2] = local_78;
        *puVar9 = 0;
        puVar9[1] = 0;
        *puVar4 = puVar9;
        if (*(long *)*plVar1 == 0) {
          puVar4 = puVar9;
        }
        else {
          *plVar1 = *(long *)*plVar1;
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_010108e0(*(undefined8 *)(piVar10 + 10),puVar4);
        *(long *)(piVar10 + 0xc) = *(long *)(piVar10 + 0xc) + 1;
      }
      param_1 = puVar9 + 7;
    }
    else {
      if (*piVar10 != 6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = *(undefined8 **)(piVar10 + 0x10);
      if (puVar4 < *(undefined8 **)(piVar10 + 0x12)) {
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[4] = puVar4 + 5;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4 = puVar4 + 10;
        *(undefined8 **)(piVar10 + 0x10) = puVar4;
      }
      else {
        lVar11 = (long)puVar4 - *(long *)(piVar10 + 0xe) >> 4;
        uVar12 = lVar11 * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = (long)*(undefined8 **)(piVar10 + 0x12) - *(long *)(piVar10 + 0xe) >> 4;
        uVar7 = lVar5 * -0x6666666666666666;
        if (uVar12 <= uVar7) {
          uVar12 = uVar7;
        }
        piStack_58 = piVar10 + 0x12;
        local_60 = (ulong *)0x0;
        if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
          uVar12 = 0x333333333333333;
        }
        if (uVar12 == 0) {
          local_78 = (ulong *)0x0;
        }
        else {
          local_78 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar12 * 0x50);
        }
        local_70 = local_78 + lVar11 * 2;
        local_60 = local_78 + uVar12 * 10;
        local_70[3] = 0;
        local_70[2] = 0;
        local_70[5] = 0;
        local_70[4] = 0;
        local_70[4] = (ulong)(local_70 + 5);
        local_68 = local_70 + 10;
        local_70[6] = 0;
        local_70[7] = 0;
        local_70[1] = 0;
        *local_70 = 0;
        local_70[8] = 0;
        local_70[9] = 0;
        puVar6 = *(ulong **)(piVar10 + 0xe);
        puVar8 = *(ulong **)(piVar10 + 0x10);
        if (puVar8 == puVar6) {
          puVar8 = puVar6;
        }
        else {
          do {
            puVar8 = puVar8 + -10;
                    /* try { // try from 00364670 to 00364677 has its CatchHandler @ 00364880 */
            FUN_002886bc(local_70 + -10,puVar8);
            local_70 = local_70 + -10;
          } while (puVar6 != puVar8);
          puVar6 = *(ulong **)(piVar10 + 0xe);
          puVar8 = *(ulong **)(piVar10 + 0x10);
        }
        *(ulong **)(piVar10 + 0xe) = local_70;
        *(ulong **)(piVar10 + 0x10) = local_68;
        uVar3 = *(undefined8 *)(piVar10 + 0x12);
        *(ulong **)(piVar10 + 0x12) = local_60;
        local_78 = puVar6;
        local_70 = puVar6;
        local_68 = puVar8;
        local_60 = (ulong *)uVar3;
        FUN_0028f660(&local_78);
        puVar4 = *(undefined8 **)(piVar10 + 0x10);
      }
      param_1 = puVar4 + -10;
    }
  }
  return param_1;
}


