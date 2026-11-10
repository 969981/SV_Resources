/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ac25c; name: FUN_028ac25c
 */


void FUN_028ac25c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *__src;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  
  __src = (undefined8 *)param_1[1];
  if (__src == (undefined8 *)*param_1) {
    uVar6 = param_1[2];
    uVar2 = param_1[3];
    if (uVar6 < uVar2) {
      lVar8 = (long)(uVar2 - uVar6) >> 3;
      lVar7 = lVar8 + 2;
      if (-1 < lVar8 + 1) {
        lVar7 = lVar8 + 1;
      }
      __n = uVar6 - (long)__src;
      puVar14 = (undefined8 *)(uVar6 + (lVar7 >> 1) * 8);
      if (__n == 0) {
        __src = puVar14;
      }
      else {
        puVar14 = (undefined8 *)((long)puVar14 - __n);
        memmove(puVar14,__src,__n);
        uVar6 = param_1[2];
        __src = puVar14;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar6 + (lVar7 >> 1) * 8;
    }
    else {
      lVar8 = uVar2 - *param_1;
      lVar7 = lVar8 >> 2;
      if (lVar8 == 0) {
        lVar7 = 1;
      }
      lVar5 = FUN_028ac4a4(lVar7);
      puVar14 = (undefined8 *)param_1[1];
      __src = (undefined8 *)(lVar5 + (lVar7 * 2 + 6U & 0xfffffffffffffff8));
      lVar8 = param_1[2] - (long)puVar14;
      if (lVar8 == 0) {
        puVar9 = __src;
      }
      else {
        puVar9 = (undefined8 *)((long)__src + lVar8);
        uVar1 = ((uint)(lVar8 - 8U >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) == 0) {
          puVar12 = __src;
        }
        else {
          lVar13 = -((ulong)uVar1 & 3);
          puVar10 = puVar14;
          puVar11 = __src;
          do {
            puVar14 = puVar10 + 1;
            bVar3 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            puVar12 = puVar11 + 1;
            *puVar11 = *puVar10;
            puVar10 = puVar14;
            puVar11 = puVar12;
          } while (bVar3);
        }
        if (0x17 < lVar8 - 8U) {
          do {
            *puVar12 = *puVar14;
            puVar12[1] = puVar14[1];
            puVar12[2] = puVar14[2];
            puVar12[3] = puVar14[3];
            puVar12 = puVar12 + 4;
            puVar14 = puVar14 + 4;
          } while (puVar9 != puVar12);
        }
      }
      lVar8 = *param_1;
      *param_1 = lVar5;
      param_1[1] = (long)__src;
      param_1[2] = (long)puVar9;
      param_1[3] = lVar5 + lVar7 * 8;
      if (lVar8 != 0) {
        lVar7 = tpidr_el0;
        plVar15 = *(long **)(lVar7 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar8,0,8);
        }
        __src = (undefined8 *)param_1[1];
      }
    }
  }
  __src[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


