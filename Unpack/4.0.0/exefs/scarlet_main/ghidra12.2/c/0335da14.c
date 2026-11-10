/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0335da14; name: FUN_0335da14
 */


void FUN_0335da14(long param_1,ulong *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong *puVar4;
  short *psVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *local_28 [5];
  
  do {
    param_5 = param_5 & 0xffffffff;
    uVar12 = param_4 & 0xffffffff;
    uVar11 = param_3 & 0xffffffff;
    puVar4 = param_2;
    while (uVar7 = *puVar4, ((uint)uVar7 >> 3 & 1) == 0) {
      if (((uVar7 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
      goto LAB_0335db44;
    }
    if (puVar4[(ulong)(byte)POPCOUNT((byte)uVar7 & 7) + 2] != 0) {
      uVar7 = *param_2;
      puVar4 = param_2;
      if ((uVar7 & 1) == 0) {
        do {
          puVar4 = (ulong *)puVar4[1];
        } while ((*puVar4 & 1) == 0);
      }
      if ((puVar4[2] & 0x1f) == 7) {
        uVar9 = 0;
        puVar4 = param_2;
        if (((uint)uVar7 >> 0x15 & 1) != 0) goto LAB_0335dabc;
        do {
          uVar8 = 0;
          while( true ) {
            uVar9 = uVar8 | uVar9;
            if (((uVar7 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0)) {
              if (((uint)uVar9 >> 5 & 1) == 0) {
                local_28[0] = param_2;
                lVar13 = FUN_0335b114((long *)(param_1 + 0x188),local_28,param_3,param_4);
                uVar1 = 0;
                if (lVar13 != 0) {
                  uVar1 = *(undefined8 *)
                           (*(long *)(param_1 + 0x188) + (long)*(int *)(lVar13 + 4) * 0x10 + 8);
                }
                FUN_033690d4(uVar1,uVar11,uVar12,param_5);
                return;
              }
              goto LAB_0335db44;
            }
            uVar7 = *puVar4;
            if (((uint)uVar7 >> 0x15 & 1) == 0) break;
LAB_0335dabc:
            uVar8 = CONCAT44((int)uVar7,(int)uVar7) & 0x1fffff001fffff;
            uVar8 = puVar4[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                        POPCOUNT((char)(uVar8 >> 0x10))) + 2];
          }
        } while( true );
      }
    }
LAB_0335db44:
    uVar7 = *param_2;
    puVar4 = param_2;
    if ((uVar7 & 1) == 0) {
      do {
        puVar4 = (ulong *)puVar4[1];
      } while ((*puVar4 & 1) == 0);
    }
    if ((puVar4[2] & 0x1f) == 7) {
      uVar8 = 0;
      puVar4 = param_2;
      uVar9 = uVar7;
      if (((uint)uVar7 >> 0x15 & 1) != 0) goto LAB_0335db88;
      do {
        uVar10 = 0;
        while( true ) {
          uVar8 = uVar10 | uVar8;
          if (((uVar9 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0)) {
            if (((uint)uVar8 >> 5 & 1) != 0) {
              if (param_2[1] != 0) {
                FUN_0335da14(param_1,param_2[1],uVar11,uVar12,param_5);
              }
              while( true ) {
                uVar3 = (uint)*param_2;
                if ((uVar3 >> 0x17 & 1) != 0) {
                  uVar12 = CONCAT44(uVar3,uVar3) & 0x7fffff007fffff;
                  psVar5 = (short *)param_2[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                                          POPCOUNT((char)(uVar12 >> 8)) +
                                                         POPCOUNT((char)(uVar12 >> 0x10))) + 2];
                  if (psVar5 != (short *)0x0) {
                    if ((long)psVar5[1] + (long)*psVar5 != 0) {
                      lVar13 = ((long)psVar5[1] + (long)*psVar5) * 8;
                      do {
                        psVar5 = psVar5 + 4;
                        puVar6 = *(undefined8 **)psVar5;
                        uVar3 = (uint)*puVar6;
                        if ((uVar3 >> 0x11 & 1) == 0) {
                          uVar2 = 0;
                        }
                        else {
                          uVar12 = CONCAT44(uVar3,uVar3) & 0x1ffff0001ffff;
                          uVar2 = *(undefined2 *)
                                   (puVar6 + (ulong)(byte)(POPCOUNT((char)uVar12) +
                                                           POPCOUNT((char)(uVar12 >> 8)) +
                                                          POPCOUNT((char)(uVar12 >> 0x10))) + 2);
                        }
                        FUN_0335da14(param_1,puVar6[1],uVar11,uVar2,param_5);
                        lVar13 = lVar13 + -8;
                      } while (lVar13 != 0);
                    }
                  }
                  return;
                }
                if ((*param_2 & 1) != 0) break;
                param_2 = (ulong *)param_2[1];
                if (param_2 == (ulong *)0x0) {
                  return;
                }
              }
              return;
            }
            goto LAB_0335dbc8;
          }
          uVar9 = *puVar4;
          if (((uint)uVar9 >> 0x15 & 1) == 0) break;
LAB_0335db88:
          uVar10 = CONCAT44((int)uVar9,(int)uVar9) & 0x1fffff001fffff;
          uVar10 = puVar4[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                       POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        }
      } while( true );
    }
LAB_0335dbc8:
    puVar4 = param_2;
    if ((uVar7 & 1) == 0) {
      do {
        puVar4 = (ulong *)puVar4[1];
      } while ((*puVar4 & 1) == 0);
    }
    if ((puVar4[2] & 0x1f) != 8) {
      return;
    }
    puVar4 = param_2;
    if (((uint)uVar7 >> 1 & 1) == 0) {
      do {
        puVar4 = (ulong *)puVar4[1];
        if (puVar4 == (ulong *)0x0) {
          return;
        }
      } while (((byte)*puVar4 >> 1 & 1) == 0);
    }
    if ((ulong *)puVar4[3] == (ulong *)0x0) {
      return;
    }
    if ((uVar7 & 1) == 0) {
      do {
        param_2 = (ulong *)param_2[1];
        if (param_2 == (ulong *)0x0) {
          return;
        }
      } while ((*param_2 & 1) == 0);
    }
    param_5 = param_2[2] >> 8;
    if ((int)(param_2[2] >> 8) == 0) {
      return;
    }
    param_2 = (ulong *)puVar4[3];
    param_3 = uVar11;
    param_4 = uVar12;
  } while( true );
}


