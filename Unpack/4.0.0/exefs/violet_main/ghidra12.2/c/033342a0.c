/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033342a0; name: FUN_033342a0
 */


void FUN_033342a0(long param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  short *psVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  undefined4 local_5c;
  ulong *local_58;
  
  local_58 = param_3;
  if (param_3 != (ulong *)0x0) {
    for (; (*local_58 & 1) == 0; local_58 = (ulong *)local_58[1]) {
    }
  }
  local_5c = 0xffffffff;
  uVar2 = FUN_03335274(param_2,&local_58,&local_5c);
  puVar8 = local_58;
  if (*(int *)(*param_2 + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8) != -1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x210);
  lVar10 = (long)iVar1 + 1;
  iVar9 = (int)lVar10;
  if (iVar1 < (int)(*(uint *)(param_1 + 0x214) & 0x7fffffff)) {
LAB_0333437c:
    *(int *)(param_1 + 0x210) = iVar9;
  }
  else {
    FUN_031d93e4((long *)(param_1 + 0x208),PTR_PTR_047d1a50,lVar10);
    if ((*(int *)(param_1 + 0x210) <= iVar1) || (iVar9 < *(int *)(param_1 + 0x210)))
    goto LAB_0333437c;
  }
  puVar6 = local_58;
  *(ulong **)(*(long *)(param_1 + 0x208) + (long)iVar1 * 8) = puVar8;
  *(int *)(*param_2 + (long)(int)uVar2 * 0x10 + 8) = iVar1;
  uVar3 = *local_58;
  uVar2 = (uint)uVar3;
  puVar8 = local_58;
  if ((uVar3 & 1) == 0) {
    puVar5 = local_58;
    do {
      puVar5 = (ulong *)puVar5[1];
    } while ((*puVar5 & 1) == 0);
    if ((local_58 != (ulong *)0x0) && ((puVar5[2] & 0x1f) == 7)) goto LAB_03334428;
    if ((uVar3 & 1) != 0) goto LAB_03334540;
    puVar5 = local_58;
    do {
      puVar5 = (ulong *)puVar5[1];
    } while ((*puVar5 & 1) == 0);
    if ((local_58 == (ulong *)0x0) || ((puVar5[2] & 0x1f) != 8)) {
      do {
        puVar6 = (ulong *)puVar6[1];
      } while ((*puVar6 & 1) == 0);
      goto LAB_03334574;
    }
LAB_03334558:
    if ((uVar2 >> 1 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
        if (puVar8 == (ulong *)0x0) goto LAB_033345a4;
      } while (((byte)*puVar8 >> 1 & 1) == 0);
    }
  }
  else {
    if ((local_58 != (ulong *)0x0) && ((local_58[2] & 0x1f) == 7)) {
LAB_03334428:
      if ((uVar2 >> 0x17 & 1) == 0) {
        uVar7 = uVar3;
        do {
          if ((uVar7 & 1) != 0) {
            return;
          }
          puVar8 = (ulong *)puVar8[1];
          if (puVar8 == (ulong *)0x0) {
            return;
          }
          uVar7 = *puVar8;
          uVar2 = (uint)uVar7;
        } while ((uVar2 >> 0x17 & 1) == 0);
      }
      uVar2 = uVar2 & 0x7fffff;
      psVar4 = (short *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                                            POPCOUNT((char)(uVar2 >> 0x10))) + 2];
      if (psVar4 == (short *)0x0) {
        return;
      }
      if ((int)psVar4[1] + (int)*psVar4 < 1) {
        return;
      }
      lVar10 = 0;
      do {
        uVar2 = (uint)uVar3;
        puVar8 = puVar6;
        if ((uVar2 >> 0x17 & 1) == 0) {
          do {
            puVar8 = (ulong *)puVar8[1];
            uVar2 = (uint)*puVar8;
          } while ((uVar2 >> 0x17 & 1) == 0);
        }
        uVar3 = CONCAT44(uVar2,uVar2) & 0x7fffff007fffff;
        FUN_033342a0(param_1,param_2,
                     *(undefined8 *)
                      (*(long *)(puVar8[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                      POPCOUNT((char)(uVar3 >> 8)) +
                                                     POPCOUNT((char)(uVar3 >> 0x10))) + 2] +
                                 lVar10 * 8 + 8) + 8));
        lVar10 = lVar10 + 1;
        puVar8 = puVar6;
        while( true ) {
          uVar2 = (uint)*puVar8;
          if ((uVar2 >> 0x17 & 1) != 0) break;
          if ((*puVar8 & 1) != 0) {
            return;
          }
          puVar8 = (ulong *)puVar8[1];
          if (puVar8 == (ulong *)0x0) {
            return;
          }
        }
        if (puVar8 == (ulong *)0x0) {
          return;
        }
        uVar2 = uVar2 & 0x7fffff;
        psVar4 = (short *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))
                                              + POPCOUNT((char)(uVar2 >> 0x10))) + 2];
        if (psVar4 == (short *)0x0) {
          return;
        }
        if ((long)psVar4[1] + (long)*psVar4 <= lVar10) {
          return;
        }
        uVar3 = *puVar6;
      } while( true );
    }
LAB_03334540:
    if ((local_58 != (ulong *)0x0) && ((local_58[2] & 0x1f) == 8)) goto LAB_03334558;
LAB_03334574:
    if (local_58 == (ulong *)0x0) {
      return;
    }
    if ((puVar6[2] & 0x1f) != 6) {
      return;
    }
    if ((uVar2 >> 1 & 1) == 0) {
      do {
        puVar8 = (ulong *)puVar8[1];
        if (puVar8 == (ulong *)0x0) goto LAB_033345a4;
      } while (((byte)*puVar8 >> 1 & 1) == 0);
    }
  }
  uVar3 = puVar8[3];
LAB_033345a8:
  FUN_033342a0(param_1,param_2,uVar3);
  return;
LAB_033345a4:
  uVar3 = 0;
  goto LAB_033345a8;
}


