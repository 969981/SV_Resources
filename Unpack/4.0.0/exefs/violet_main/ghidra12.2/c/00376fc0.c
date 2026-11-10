/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00376fc0; name: FUN_00376fc0
 */


void FUN_00376fc0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  void *__ptr;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  puVar3 = PTR_LAB_047cba48;
  uVar4 = *(ulong *)(param_1 + 0x30);
  if ((long)(uVar4 >> 2) < *(long *)(param_1 + 0x38)) {
    lVar10 = 0;
    if (uVar4 != 0) {
      uVar11 = 0;
      do {
        plVar13 = (long *)(*(long *)(param_1 + 0x20) + uVar11 * 8);
        lVar9 = *plVar13;
        if (lVar9 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          do {
            while( true ) {
              plVar5 = (long *)(lVar9 + 0x80);
              lVar14 = *plVar5;
              if (*(long *)(lVar9 + 0x40) == 0) break;
              lVar9 = lVar14;
              plVar13 = plVar5;
              if (lVar14 == 0) goto LAB_0037707c;
            }
            *plVar13 = lVar14;
            FUN_00375df4(lVar9);
            FUN_0049e790(puVar3,lVar9);
            lVar12 = lVar12 + 1;
            lVar9 = lVar14;
          } while (lVar14 != 0);
LAB_0037707c:
          uVar4 = *(ulong *)(param_1 + 0x30);
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar12 + lVar10;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar12;
      } while (uVar11 < uVar4);
    }
    plVar13 = (long *)(param_1 + 0x38);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 - lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar11 = uVar4 * 2;
    lVar10 = FUN_0038c7b0(uVar4 << 4);
    lVar9 = *(long *)(param_1 + 0x30);
    __ptr = *(void **)(param_1 + 0x20);
    if (lVar9 != 0) {
      lVar12 = 0;
      do {
        lVar14 = *(long *)((long)__ptr + lVar12 * 8);
        while (lVar14 != 0) {
          uVar6 = (ulong)(*(uint *)(lVar14 + 0x48) >> 4);
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = uVar6 / uVar11;
          }
          lVar8 = *(long *)(lVar14 + 0x80);
          lVar7 = (uVar6 - uVar4 * uVar11) * 8;
          *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(lVar10 + lVar7);
          *(long *)(lVar10 + lVar7) = lVar14;
          lVar14 = lVar8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar9);
    }
    free(__ptr);
    *(long *)(param_1 + 0x20) = lVar10;
    *(ulong *)(param_1 + 0x30) = uVar11;
  }
  return;
}


