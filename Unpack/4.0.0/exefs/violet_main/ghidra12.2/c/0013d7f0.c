/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013d7f0; name: FUN_0013d7f0
 */


ulong FUN_0013d7f0(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  uVar10 = *(uint *)(param_1 + 0xc);
  uVar11 = (ulong)uVar10;
  if (uVar10 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    uVar7 = uVar10 - 1;
    uVar8 = (ulong)uVar7;
    if ((*(byte *)(lVar12 + uVar8 * 0x10 + 8) & 0xf) == 0) {
      if (uVar10 < 2) {
        uVar7 = 0;
      }
      else {
        if ((*(byte *)(lVar12 + (ulong)(uVar10 - 2) * 0x10 + 8) & 0xf) != 0) {
          if ((uVar7 & uVar10 - 2) == 0) {
            return uVar8;
          }
          if ((uVar10 & uVar7) == 0 || (char)*(byte *)(param_1 + 10) < '\0') {
            *(uint *)(param_1 + 0xc) = uVar7;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x80;
            return uVar8;
          }
          return uVar8;
        }
        uVar7 = 0;
        do {
          uVar4 = (uint)uVar11 + uVar7 >> 1;
          bVar6 = (*(byte *)(lVar12 + (ulong)(uVar4 - 1) * 0x10 + 8) & 0xf) != 0;
          uVar2 = uVar4;
          if (bVar6) {
            uVar2 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar2;
          if (bVar6) {
            uVar7 = uVar4;
          }
        } while (1 < uVar2 - uVar7);
      }
      uVar2 = uVar10 - (uVar10 >> 1 & 0x55555555);
      uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
      bVar6 = 1 < (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if ((char)*(byte *)(param_1 + 10) < '\0') {
        uVar2 = uVar10 | uVar10 >> 1;
        uVar2 = uVar2 | uVar2 >> 2;
        uVar2 = uVar2 | uVar2 >> 4;
        uVar2 = uVar2 | uVar2 >> 8;
        if (bVar6) {
          uVar10 = (uVar2 | uVar2 >> 0x10) + 1;
        }
      }
      else if (bVar6) goto LAB_0013dd30;
      if (uVar10 >> 1 < uVar7) {
        *(uint *)(param_1 + 0xc) = uVar7;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x80;
      }
LAB_0013dd30:
      return (ulong)uVar7;
    }
  }
  cVar3 = *(char *)(param_1 + 10);
  bVar6 = (uVar10 & uVar10 - 1) != 0;
  uVar7 = uVar10;
  if (bVar6 && cVar3 < '\0') {
    lVar12 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar12 + uVar11 * 0x10 + 8) & 0xf) == 0) {
      return uVar11;
    }
    uVar2 = uVar10 | uVar10 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar7 = uVar2 + 1;
    if ((*(byte *)(lVar12 + (ulong)uVar2 * 0x10 + 8) & 0xf) == 0) {
      if (uVar7 - uVar10 < 2) {
        *(uint *)(param_1 + 0xc) = uVar10;
        return uVar11;
      }
      do {
        uVar2 = uVar7 + (uint)uVar11 >> 1;
        uVar10 = (uint)uVar11;
        if ((*(byte *)(lVar12 + (ulong)(uVar2 - 1) * 0x10 + 8) & 0xf) != 0) {
          uVar10 = uVar2;
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        uVar11 = (ulong)uVar10;
      } while (1 < uVar7 - uVar10);
      *(uint *)(param_1 + 0xc) = uVar10;
      return (ulong)uVar10;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = uVar7 + 1;
    uVar8 = (ulong)uVar2 - 1;
    if (uVar8 < uVar11) {
      bVar5 = *(byte *)(*(long *)(param_1 + 0x10) + uVar8 * 0x10 + 8);
    }
    else if ((!(bVar6 && cVar3 < '\0')) ||
            ((uVar10 != uVar7 &&
             (uVar10 = uVar10 | uVar10 >> 1, uVar10 = uVar10 | uVar10 >> 2,
             uVar10 = uVar10 | uVar10 >> 4, uVar10 = uVar10 | uVar10 >> 8,
             (uVar10 | uVar10 >> 0x10) + 1 <= uVar8)))) {
      lVar12 = *(long *)(param_1 + 0x18) +
               (long)(int)(uVar2 & (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) *
               0x18;
      do {
        if ((*(char *)(lVar12 + 9) == '\x03') && (*(ulong *)(lVar12 + 0x10) == (ulong)uVar2))
        goto LAB_0013d9dc;
        piVar1 = (int *)(lVar12 + 0xc);
        lVar12 = lVar12 + (long)*piVar1 * 0x18;
        bVar5 = DAT_03cb6490;
      } while (*piVar1 != 0);
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar2;
      lVar12 = *(long *)(param_1 + 0x10) + uVar8 * 0x10;
      uVar11 = (ulong)uVar2;
LAB_0013d9dc:
      bVar5 = *(byte *)(lVar12 + 8);
    }
    if ((bVar5 & 0xf) != 0) {
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      uVar8 = (ulong)uVar7;
      if (cVar3 < '\0') {
        do {
          uVar9 = uVar8;
          if (uVar9 >> 0x3e != 0) goto LAB_0013db64;
          uVar8 = uVar9 * 2;
          uVar13 = uVar8 - 1;
          if (uVar13 < uVar11) {
            puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar13 * 0x10);
          }
          else {
            uVar10 = (uint)uVar11;
            if (((uVar10 & uVar10 - 1) == 0) ||
               ((uVar8 != uVar10 + 1 &&
                (uVar10 = uVar10 | uVar10 >> 1, uVar10 = uVar10 | uVar10 >> 2,
                uVar10 = uVar10 | uVar10 >> 4, uVar10 = uVar10 | uVar10 >> 8,
                (uVar10 | uVar10 >> 0x10) + 1 <= uVar13)))) {
              puVar15 = (undefined8 *)
                        (*(long *)(param_1 + 0x18) +
                        (long)(int)((-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xfffffffeU) &
                                   (uint)uVar8) * 0x18);
              do {
                if ((*(char *)((long)puVar15 + 9) == '\x03') && (puVar15[2] == uVar8))
                goto LAB_0013daa4;
                piVar1 = (int *)((long)puVar15 + 0xc);
                puVar15 = puVar15 + (long)*piVar1 * 3;
              } while (*piVar1 != 0);
              puVar15 = &DAT_03cb6488;
            }
            else {
              *(uint *)(param_1 + 0xc) = (uint)uVar8;
              puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar13 * 0x10);
              uVar11 = uVar8 & 0xffffffff;
            }
          }
LAB_0013daa4:
        } while ((*(byte *)(puVar15 + 1) & 0xf) != 0);
      }
      else {
        do {
          uVar9 = uVar8;
          if (uVar9 >> 0x3e != 0) goto LAB_0013db64;
          uVar8 = uVar9 * 2;
          if (uVar8 - 1 < uVar11) {
            puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + (uVar8 - 1) * 0x10);
          }
          else {
            puVar15 = (undefined8 *)
                      (*(long *)(param_1 + 0x18) +
                      (long)(int)((-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xfffffffeU) &
                                 (uint)uVar8) * 0x18);
            do {
              if ((*(char *)((long)puVar15 + 9) == '\x03') && (puVar15[2] == uVar8))
              goto LAB_0013da14;
              piVar1 = (int *)((long)puVar15 + 0xc);
              puVar15 = puVar15 + (long)*piVar1 * 3;
            } while (*piVar1 != 0);
            puVar15 = &DAT_03cb6488;
          }
LAB_0013da14:
        } while ((*(byte *)(puVar15 + 1) & 0xf) != 0);
      }
      goto LAB_0013dbd8;
    }
  }
  return (ulong)uVar7;
LAB_0013db64:
  puVar15 = (undefined8 *)
            (*(long *)(param_1 + 0x18) +
            (long)~(-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) * 0x18);
  do {
    if ((*(char *)((long)puVar15 + 9) == '\x03') && (puVar15[2] == 0x7fffffffffffffff))
    goto LAB_0013dbbc;
    piVar1 = (int *)((long)puVar15 + 0xc);
    puVar15 = puVar15 + (long)*piVar1 * 3;
  } while (*piVar1 != 0);
  puVar15 = &DAT_03cb6488;
LAB_0013dbbc:
  uVar8 = 0x7fffffffffffffff;
  if ((*(byte *)(puVar15 + 1) & 0xf) != 0) {
    return 0x7fffffffffffffff;
  }
LAB_0013dbd8:
  if (uVar8 - uVar9 < 2) {
    return uVar9;
  }
  if (cVar3 < '\0') {
    do {
      uVar13 = uVar8 + uVar9 >> 1;
      uVar14 = uVar13 - 1;
      if (uVar14 < uVar11) {
        puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar14 * 0x10);
      }
      else {
        uVar10 = (uint)uVar11;
        if (((uVar10 & uVar10 - 1) == 0) ||
           ((uVar13 != uVar10 + 1 &&
            (uVar10 = uVar10 | uVar10 >> 1, uVar10 = uVar10 | uVar10 >> 2,
            uVar10 = uVar10 | uVar10 >> 4, uVar10 = uVar10 | uVar10 >> 8,
            (uVar10 | uVar10 >> 0x10) + 1 <= uVar14)))) {
          puVar15 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) +
                    (long)(int)((uint)uVar13 &
                               (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) *
                    0x18);
          do {
            if ((*(char *)((long)puVar15 + 9) == '\x03') && (puVar15[2] == uVar13))
            goto LAB_0013dd8c;
            piVar1 = (int *)((long)puVar15 + 0xc);
            puVar15 = puVar15 + (long)*piVar1 * 3;
          } while (*piVar1 != 0);
          puVar15 = &DAT_03cb6488;
        }
        else {
          *(uint *)(param_1 + 0xc) = (uint)uVar13;
          puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar14 * 0x10);
          uVar11 = uVar13 & 0xffffffff;
        }
      }
LAB_0013dd8c:
      if ((*(byte *)(puVar15 + 1) & 0xf) != 0) {
        uVar9 = uVar13;
        uVar13 = uVar8;
      }
      uVar8 = uVar13;
    } while (1 < uVar8 - uVar9);
  }
  else {
    do {
      uVar13 = uVar8 + uVar9 >> 1;
      if (uVar13 - 1 < uVar11) {
        puVar15 = (undefined8 *)(*(long *)(param_1 + 0x10) + (uVar13 - 1) * 0x10);
      }
      else {
        puVar15 = (undefined8 *)
                  (*(long *)(param_1 + 0x18) +
                  (long)(int)((uint)uVar13 &
                             (-1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18)
        ;
        do {
          if ((*(char *)((long)puVar15 + 9) == '\x03') && (puVar15[2] == uVar13)) goto LAB_0013dc0c;
          piVar1 = (int *)((long)puVar15 + 0xc);
          puVar15 = puVar15 + (long)*piVar1 * 3;
        } while (*piVar1 != 0);
        puVar15 = &DAT_03cb6488;
      }
LAB_0013dc0c:
      if ((*(byte *)(puVar15 + 1) & 0xf) != 0) {
        uVar9 = uVar13;
        uVar13 = uVar8;
      }
      uVar8 = uVar13;
    } while (1 < uVar8 - uVar9);
  }
  return uVar9;
}


