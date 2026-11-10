/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028abde4; name: FUN_028abde4
 */


void FUN_028abde4(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  size_t __n;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  void *__src;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  ulong uVar15;
  long *plVar16;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    pvVar14 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar14 || (long)__src - (long)pvVar14 == 0) {
      lVar6 = (long)param_1[3] - (long)pvVar14;
      uVar7 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar7 = 1;
      }
      uVar5 = FUN_028ac4a4(uVar7);
      puVar11 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)(uVar5 + (uVar7 & 0x7ffffffffffffffc) * 2);
      lVar6 = param_1[2] - (long)puVar11;
      if (lVar6 == 0) {
        puVar8 = puVar2;
      }
      else {
        puVar8 = (undefined8 *)((long)puVar2 + lVar6);
        uVar1 = ((uint)(lVar6 - 8U >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) == 0) {
          puVar13 = puVar2;
        }
        else {
          lVar9 = -((ulong)uVar1 & 3);
          puVar10 = puVar11;
          puVar12 = puVar2;
          do {
            puVar11 = puVar10 + 1;
            bVar3 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            puVar13 = puVar12 + 1;
            *puVar12 = *puVar10;
            puVar10 = puVar11;
            puVar12 = puVar13;
          } while (bVar3);
        }
        if (0x17 < lVar6 - 8U) {
          do {
            *puVar13 = *puVar11;
            puVar13[1] = puVar11[1];
            puVar13[2] = puVar11[2];
            puVar13[3] = puVar11[3];
            puVar13 = puVar13 + 4;
            puVar11 = puVar11 + 4;
          } while (puVar8 != puVar13);
        }
      }
      uVar15 = *param_1;
      *param_1 = uVar5;
      param_1[1] = (ulong)puVar2;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar5 + uVar7 * 8;
      if (uVar15 != 0) {
        lVar6 = tpidr_el0;
        plVar16 = *(long **)(lVar6 + 0x30);
        if (plVar16 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar16 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0,8);
        }
        else {
          FUN_00c48fe8(plVar16,uVar15,0,8);
        }
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar9 = (long)__src - (long)pvVar14 >> 3;
      lVar6 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar6 = lVar9 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      pvVar14 = (void *)((long)__src + (lVar6 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar14,__src,__n);
        __src = (void *)param_1[1];
      }
      puVar8 = (undefined8 *)((long)pvVar14 + __n);
      param_1[1] = (ulong)((long)__src + (lVar6 >> 1) * -8);
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


