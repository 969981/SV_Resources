/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e14608; name: FUN_00e14608
 */


void FUN_00e14608(long *param_1,int *param_2)

{
  char *__s;
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  size_t sVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e147a4(param_1 + 2);
  if (((param_2 != (int *)0x0) && (8 < *(ushort *)((long)param_2 - (long)*param_2))) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)param_2 + uVar13);
    puVar1 = (uint *)((long)((long)param_2 + uVar13) + uVar14);
    lVar12 = param_1[1];
    uVar9 = (ulong)*puVar1;
    uVar11 = lVar12 - *param_1 >> 5;
    if (uVar11 < uVar9) {
      FUN_00d24494(param_1,uVar9 - uVar11);
    }
    else if (uVar11 != uVar9) {
      lVar4 = *param_1 + uVar9 * 0x20;
      while (lVar4 != lVar12) {
        plVar7 = (long *)(lVar12 + -8);
        lVar12 = lVar12 + -0x20;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x20))();
        }
      }
      param_1[1] = lVar4;
    }
    if (*puVar1 != 0) {
      uVar9 = 0;
      lVar12 = (long)param_2 + uVar14 + uVar13 + 9;
      do {
        puVar2 = puVar1 + uVar9 + 1;
        uVar13 = (ulong)*puVar2;
        __s = (char *)((long)puVar2 + uVar13 + 4);
        sVar6 = strlen(__s);
        bVar5 = *(byte *)((long)puVar2 + uVar13 + 4);
        puVar8 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar8 = &DAT_cbf29ce484222645;
          pbVar10 = (byte *)(lVar12 + uVar13);
          do {
            puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar5 != 0);
        }
        puVar3 = (undefined8 *)(*param_1 + uVar9 * 0x20);
        puVar3[2] = sVar6;
        *puVar3 = puVar8;
        puVar3[1] = __s;
        plVar15 = puVar3 + 3;
        plVar7 = (long *)*plVar15;
        *plVar15 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        *plVar15 = 0;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 4;
      } while (uVar9 < *puVar1);
    }
  }
  return;
}


