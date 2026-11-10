/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f6ed0; name: FUN_031f6ed0
 */


uint FUN_031f6ed0(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  while (uVar2 = (uint)*param_1, (uVar2 >> 0x14 & 1) == 0) {
    param_1 = (ulong *)param_1[1];
    if (param_1 == (ulong *)0x0) {
      return 1;
    }
  }
  uVar3 = CONCAT44(uVar2,uVar2) & 0xfffff000fffff;
  uVar3 = (ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                       POPCOUNT((char)(uVar3 >> 0x10)));
  uVar2 = (uint)param_1[uVar3 + 2];
  if ((~uVar2 & 0xfff0000) == 0) {
    uVar1 = FUN_031f6ed0(param_1[1]);
    uVar4 = 0;
    puVar5 = param_1;
    do {
      uVar6 = (uint)*puVar5;
      if ((uVar6 >> 0x15 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar6 = uVar6 & 0x1fffff;
        uVar10 = puVar5[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                     POPCOUNT((char)(uVar6 >> 0x10))) + 2];
      }
      uVar4 = uVar10 | uVar4;
    } while (((*puVar5 & 1) == 0) && (puVar5 = (ulong *)puVar5[1], puVar5 != (ulong *)0x0));
    uVar10 = *param_1;
    uVar6 = (uint)uVar10;
    if ((uVar4 & 0x80) != 0 && (int)uVar1 < 9) {
      uVar1 = 8;
    }
    puVar5 = param_1;
    if ((uVar10 & 1) == 0) {
      do {
        puVar5 = (ulong *)puVar5[1];
      } while ((*puVar5 & 1) == 0);
    }
    if ((puVar5[2] & 0x1f) == 7) {
      puVar5 = param_1;
      uVar8 = uVar6;
      if ((uVar6 >> 0x17 & 1) == 0) {
        do {
          if (((uVar10 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
          goto LAB_031f7104;
          uVar10 = *puVar5;
          uVar8 = (uint)uVar10;
        } while ((uVar8 >> 0x17 & 1) == 0);
      }
      if (puVar5 != (ulong *)0x0) {
        uVar8 = uVar8 & 0x7fffff;
        if (((short *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                          POPCOUNT((char)(uVar8 >> 0x10))) + 2] != (short *)0x0) &&
           (0 < *(short *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                              + POPCOUNT((char)(uVar8 >> 0x10))) + 2])) {
          lVar7 = 0;
          do {
            puVar5 = param_1;
            uVar8 = uVar6;
            if ((uVar6 >> 0x17 & 1) == 0) {
              do {
                puVar5 = (ulong *)puVar5[1];
                uVar8 = (uint)*puVar5;
              } while ((uVar8 >> 0x17 & 1) == 0);
            }
            uVar8 = uVar8 & 0x7fffff;
            puVar5 = *(ulong **)
                      (puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                           POPCOUNT((char)(uVar8 >> 0x10))) + 2] + lVar7 * 8 + 8);
            do {
              uVar8 = (uint)*puVar5;
              if ((uVar8 >> 0x14 & 1) != 0) {
                uVar9 = 0;
                if (puVar5 != (ulong *)0x0) {
                  uVar8 = uVar8 & 0xfffff;
                  uVar9 = *(ushort *)
                           ((long)puVar5 +
                           (ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                        POPCOUNT((char)(uVar8 >> 0x10))) * 8 + 0x12) & 0xfff;
                }
                goto LAB_031f70a8;
              }
              if ((*puVar5 & 1) != 0) {
                uVar9 = 0;
                goto LAB_031f70a8;
              }
              puVar5 = (ulong *)puVar5[1];
            } while (puVar5 != (ulong *)0x0);
            uVar9 = 0;
LAB_031f70a8:
            if ((int)uVar1 <= (int)uVar9) {
              uVar1 = uVar9;
            }
            lVar7 = lVar7 + 1;
            puVar5 = param_1;
            while( true ) {
              uVar8 = (uint)*puVar5;
              if ((uVar8 >> 0x17 & 1) != 0) break;
              if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
              goto LAB_031f7104;
            }
            if (puVar5 == (ulong *)0x0) break;
            uVar8 = uVar8 & 0x7fffff;
            if (((short *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                              + POPCOUNT((char)(uVar8 >> 0x10))) + 2] ==
                 (short *)0x0) ||
               (*(short *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                              + POPCOUNT((char)(uVar8 >> 0x10))) + 2] <= lVar7))
            break;
          } while( true );
        }
      }
    }
LAB_031f7104:
    uVar2 = uVar2 & 0xf0000000 | uVar2 & 0xffff | (uVar1 & 0xfff) << 0x10;
    param_1[uVar3 + 2] = (ulong)uVar2;
  }
  return uVar2 >> 0x10 & 0xfff;
}


