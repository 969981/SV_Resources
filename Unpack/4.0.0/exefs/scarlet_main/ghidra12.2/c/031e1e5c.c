/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e1e5c; name: FUN_031e1e5c
 */


long FUN_031e1e5c(ulong *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  short *psVar6;
  long *plVar7;
  short *psVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  
  if ((param_1 != (ulong *)0x0) && (param_2 != (byte *)0x0)) {
    if ((param_3 & 1) != 0) {
      do {
        puVar5 = param_1;
        do {
          uVar4 = (uint)*puVar5;
          if ((uVar4 >> 0x17 & 1) != 0) {
            uVar4 = uVar4 & 0x7fffff;
            psVar6 = (short *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                   POPCOUNT((char)(uVar4 >> 8)) +
                                                  POPCOUNT((char)(uVar4 >> 0x10))) + 2];
            if (psVar6 != (short *)0x0) {
              psVar8 = psVar6 + 4;
              psVar6 = psVar8 + ((long)psVar6[1] + (long)*psVar6) * 4;
              goto LAB_031e1ed4;
            }
            break;
          }
          if ((*puVar5 & 1) != 0) {
            psVar8 = (short *)0x0;
            psVar6 = (short *)0x0;
            goto LAB_031e1ed4;
          }
          puVar5 = (ulong *)puVar5[1];
        } while (puVar5 != (ulong *)0x0);
        psVar6 = (short *)0x0;
        psVar8 = (short *)0x0;
LAB_031e1ed4:
        if (0 < (int)((ulong)((long)psVar6 - (long)psVar8) >> 3)) {
          uVar9 = 0;
LAB_031e1eec:
          plVar7 = (long *)(psVar8 + uVar9 * 4);
          puVar5 = (ulong *)*plVar7;
          if (puVar5 != (ulong *)0x0) {
            while( true ) {
              uVar4 = (uint)*puVar5;
              if ((uVar4 >> 0x10 & 1) != 0) break;
              if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
              goto LAB_031e1f8c;
            }
            uVar4 = uVar4 & 0xffff;
            pbVar10 = (byte *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                  POPCOUNT((char)(uVar4 >> 8))) + 2];
            if (pbVar10 != (byte *)0x0) {
              pbVar11 = param_2;
              goto LAB_031e1f38;
            }
          }
          goto LAB_031e1f8c;
        }
LAB_031e1f98:
        do {
          param_1 = (ulong *)param_1[1];
          if (param_1 == (ulong *)0x0) {
            return 0;
          }
        } while ((*param_1 & 1) == 0);
      } while( true );
    }
    do {
      uVar4 = (uint)*param_1;
      if ((uVar4 >> 0x17 & 1) != 0) {
        uVar4 = uVar4 & 0x7fffff;
        psVar6 = (short *)param_1[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))
                                               + POPCOUNT((char)(uVar4 >> 0x10))) + 2];
        if (psVar6 == (short *)0x0) {
          psVar8 = (short *)0x0;
          psVar6 = (short *)0x0;
        }
        else {
          psVar8 = psVar6 + 4;
          psVar6 = psVar8 + ((long)psVar6[1] + (long)*psVar6) * 4;
        }
        goto LAB_031e200c;
      }
    } while (((*param_1 & 1) == 0) && (param_1 = (ulong *)param_1[1], param_1 != (ulong *)0x0));
    psVar8 = (short *)0x0;
    psVar6 = (short *)0x0;
LAB_031e200c:
    if (0 < (int)((ulong)((long)psVar6 - (long)psVar8) >> 3)) {
      uVar9 = 0;
LAB_031e2024:
      plVar7 = (long *)(psVar8 + uVar9 * 4);
      puVar5 = (ulong *)*plVar7;
      if (puVar5 != (ulong *)0x0) {
        while( true ) {
          uVar4 = (uint)*puVar5;
          if ((uVar4 >> 0x10 & 1) != 0) break;
          if (((*puVar5 & 1) != 0) || (puVar5 = (ulong *)puVar5[1], puVar5 == (ulong *)0x0))
          goto LAB_031e20c4;
        }
        uVar4 = uVar4 & 0xffff;
        pbVar10 = (byte *)puVar5[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)))
                                 + 2];
        if (pbVar10 != (byte *)0x0) {
          pbVar11 = param_2;
          goto LAB_031e2070;
        }
      }
      goto LAB_031e20c4;
    }
  }
  return 0;
  while( true ) {
    if (bVar3 == 0) break;
    uVar12 = (uint)bVar3;
    uVar4 = bVar2 + 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
    uVar1 = uVar12 + 0x20;
    if (0x19 < uVar12 - 0x41) {
      uVar1 = uVar12;
    }
    if ((uVar4 & 0xff) < (uVar1 & 0xff)) break;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    if ((uVar1 & 0xff) < (uVar4 & 0xff)) break;
LAB_031e1f38:
    bVar2 = *pbVar11;
    bVar3 = *pbVar10;
    if (bVar2 == 0) {
      if (bVar3 == 0) goto LAB_031e20dc;
      break;
    }
  }
LAB_031e1f8c:
  uVar9 = uVar9 + 1;
  if (uVar9 == ((ulong)((long)psVar6 - (long)psVar8) >> 3 & 0xffffffff)) goto LAB_031e1f98;
  goto LAB_031e1eec;
  while( true ) {
    if (bVar3 == 0) break;
    uVar12 = (uint)bVar3;
    uVar4 = bVar2 + 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
    uVar1 = uVar12 + 0x20;
    if (0x19 < uVar12 - 0x41) {
      uVar1 = uVar12;
    }
    if ((uVar4 & 0xff) < (uVar1 & 0xff)) break;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    if ((uVar1 & 0xff) < (uVar4 & 0xff)) break;
LAB_031e2070:
    bVar2 = *pbVar11;
    bVar3 = *pbVar10;
    if (bVar2 == 0) {
      if (bVar3 == 0) {
LAB_031e20dc:
        return *plVar7;
      }
      break;
    }
  }
LAB_031e20c4:
  uVar9 = uVar9 + 1;
  if (uVar9 == ((ulong)((long)psVar6 - (long)psVar8) >> 3 & 0xffffffff)) {
    return 0;
  }
  goto LAB_031e2024;
}


