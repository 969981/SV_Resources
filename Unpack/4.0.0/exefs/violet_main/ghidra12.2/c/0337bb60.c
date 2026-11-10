/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0337bb60; name: FUN_0337bb60
 */


void FUN_0337bb60(long param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  short *psVar7;
  ulong uVar8;
  ulong *local_18;
  
  if (param_2 == (ulong *)0x0) {
    return;
  }
  local_18 = param_2;
  lVar1 = FUN_03379400(param_1 + 0xd8,&local_18);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 4);
    uVar4 = ((int)lVar1 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
  }
  if (-1 < (int)(uVar2 | uVar4)) {
    return;
  }
  local_18 = param_2;
  lVar1 = FUN_03379400(param_1 + 0xd8,&local_18);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 4);
    uVar4 = ((int)lVar1 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
  }
  if ((int)(uVar2 | uVar4) < 0) {
    FUN_0337e9e8(param_1,*(undefined4 *)(param_1 + 0xe0),local_18);
  }
  uVar3 = *param_2;
  uVar2 = (uint)uVar3;
  puVar6 = param_2;
  if ((uVar3 & 1) == 0) {
    puVar5 = param_2;
    do {
      puVar5 = (ulong *)puVar5[1];
    } while ((*puVar5 & 1) == 0);
    if ((puVar5[2] & 0x1f) == 7) goto LAB_0337bc84;
    puVar5 = param_2;
    do {
      puVar5 = (ulong *)puVar5[1];
    } while ((*puVar5 & 1) == 0);
    if ((puVar5[2] & 0x1f) == 8) goto LAB_0337bddc;
    if ((uVar3 & 1) == 0) {
      do {
        puVar6 = (ulong *)puVar6[1];
      } while ((*puVar6 & 1) == 0);
    }
LAB_0337bda8:
    if ((puVar6[2] & 0x1f) != 6) {
      return;
    }
    if ((uVar2 >> 1 & 1) == 0) {
      do {
        param_2 = (ulong *)param_2[1];
        if (param_2 == (ulong *)0x0) goto LAB_0337bde8;
      } while (((byte)*param_2 >> 1 & 1) == 0);
    }
  }
  else {
    if ((param_2[2] & 0x1f) == 7) {
LAB_0337bc84:
      if ((uVar2 >> 0x17 & 1) == 0) {
        uVar8 = uVar3;
        do {
          if ((uVar8 & 1) != 0) {
            return;
          }
          puVar6 = (ulong *)puVar6[1];
          if (puVar6 == (ulong *)0x0) {
            return;
          }
          uVar8 = *puVar6;
          uVar2 = (uint)uVar8;
        } while ((uVar2 >> 0x17 & 1) == 0);
      }
      uVar2 = uVar2 & 0x7fffff;
      psVar7 = (short *)puVar6[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                                            POPCOUNT((char)(uVar2 >> 0x10))) + 2];
      if (psVar7 == (short *)0x0) {
        return;
      }
      if ((int)psVar7[1] + (int)*psVar7 < 1) {
        return;
      }
      lVar1 = 0;
      do {
        uVar2 = (uint)uVar3;
        puVar6 = param_2;
        if ((uVar2 >> 0x17 & 1) == 0) {
          do {
            puVar6 = (ulong *)puVar6[1];
            uVar2 = (uint)*puVar6;
          } while ((uVar2 >> 0x17 & 1) == 0);
        }
        uVar3 = CONCAT44(uVar2,uVar2) & 0x7fffff007fffff;
        FUN_0337bb60(param_1,*(undefined8 *)
                              (puVar6[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                    POPCOUNT((char)(uVar3 >> 8)) +
                                                   POPCOUNT((char)(uVar3 >> 0x10))) + 2] + lVar1 * 8
                              + 8));
        lVar1 = lVar1 + 1;
        puVar6 = param_2;
        while( true ) {
          uVar2 = (uint)*puVar6;
          if ((uVar2 >> 0x17 & 1) != 0) break;
          if ((*puVar6 & 1) != 0) {
            return;
          }
          puVar6 = (ulong *)puVar6[1];
          if (puVar6 == (ulong *)0x0) {
            return;
          }
        }
        if (puVar6 == (ulong *)0x0) {
          return;
        }
        uVar2 = uVar2 & 0x7fffff;
        psVar7 = (short *)puVar6[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))
                                              + POPCOUNT((char)(uVar2 >> 0x10))) + 2];
        if (psVar7 == (short *)0x0) {
          return;
        }
        if ((long)psVar7[1] + (long)*psVar7 <= lVar1) {
          return;
        }
        uVar3 = *param_2;
      } while( true );
    }
    if ((param_2[2] & 0x1f) != 8) goto LAB_0337bda8;
LAB_0337bddc:
    while (((uint)uVar3 >> 1 & 1) == 0) {
      param_2 = (ulong *)param_2[1];
      if (param_2 == (ulong *)0x0) goto LAB_0337bde8;
      uVar3 = (ulong)(byte)*param_2;
    }
  }
  uVar3 = param_2[3];
LAB_0337bdec:
  FUN_0337bb60(param_1,uVar3);
  return;
LAB_0337bde8:
  uVar3 = 0;
  goto LAB_0337bdec;
}


