/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a344c; name: FUN_008a344c
 */


void FUN_008a344c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint local_6c [3];
  
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    uVar5 = *(uint *)(param_1 + 0x14) >> 4 & 3;
    if (uVar1 <= uVar5) {
      uVar5 = uVar1;
    }
    *(undefined4 *)
     (*(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x34) + 0x84) = 0;
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar12 = (ulong)(uVar2 << 4) & 0x30;
      uVar8 = (ulong)(uVar2 >> 2) & 3;
      lVar10 = *(long *)(param_1 + 0x18) + uVar12 + uVar8 * 0x14;
      if ((*(char *)(lVar10 + 1) == '\a') ||
         ((uVar1 != 1 &&
          ((*(char *)(lVar10 + 0x11) == '\a' || ((uVar1 != 2 && (*(char *)(lVar10 + 0x21) == '\a')))
           ))))) {
        lVar10 = *(long *)(*(long *)(param_2 + 200) + 0x38);
        if (lVar10 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6 = (undefined8 *)
                   (lVar10 + *(long *)(*(long *)(param_1 + 0x18) +
                                      (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) +
                                                  (uVar2 >> 0xc & 8) + (uVar2 >> 0xd & 0x60) +
                                                  (uVar2 >> 0xc & 1) * 0xc +
                                                  (uVar2 >> 0x10 & 1) * 0x1c +
                                                  (uVar2 >> 0xc & 0x10) * (uVar2 >> 6 & 7) +
                                                  (uVar2 >> 0x11 & 1) * 0x74 +
                                                  ((int)uVar12 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                                                 ((uVar2 >> 0xd & 3) + (int)uVar8) * 0x14)));
        }
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      iVar13 = 0;
      iVar14 = 0;
      lVar10 = 1;
      do {
        uVar1 = *(uint *)(param_1 + 0x10);
        uVar9 = (ulong)(uVar1 << 4) & 0x30;
        uVar12 = (ulong)(uVar1 >> 2) & 3;
        lVar7 = *(long *)(param_1 + 0x18);
        lVar11 = (uVar12 | uVar12 << 2) * 4;
        bVar3 = *(byte *)(lVar7 + lVar11 + uVar9 + lVar10);
        uVar2 = (uint)(bVar3 == 6 || bVar3 - 3 < 3);
        local_6c[uVar8] = uVar2;
        if (uVar2 == 0) {
          if (bVar3 == 7) {
            lVar11 = (long)iVar14;
            iVar14 = iVar14 + 1;
            FUN_008a40cc(param_1,param_2,
                         lVar7 + (int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8)
                                       + (uVar1 >> 0xd & 0x60) + (uVar1 >> 0xc & 1) * 0xc +
                                       (uVar1 >> 0x10 & 1) * 0x1c +
                                       (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) +
                                       (uVar1 >> 0x11 & 1) * 0x74 +
                                       (uint)((uVar1 & 0x300000) != 0) * 0x10 +
                                       ((int)uVar9 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                                      ((uVar1 >> 0xd & 3) + (int)uVar12) * 0x14) + lVar11 * 0x58,
                         uVar8 & 0xffffffff);
          }
        }
        else {
          lVar4 = (long)iVar13;
          iVar13 = iVar13 + 1;
          FUN_008a37fc(param_1,param_2,param_3,param_4,
                       lVar7 + ((ulong)(uVar1 >> 4) & 0x1c) + ((ulong)(uVar1 >> 8) & 0xc) + lVar11 +
                               ((ulong)(uVar1 >> 0xc) & 1) * 0xc +
                               (uVar9 + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
                       lVar4 * 0x14,uVar8 & 0xffffffff);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar5 != uVar8);
    }
    if (uVar5 < 3) {
      memset(local_6c + uVar5,0,(ulong)(2 - uVar5) * 4 + 4);
    }
    lVar10 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar10 != 0) {
      lVar10 = lVar10 + (ulong)*(uint *)(param_1 + 0x30);
    }
    *(uint *)(lVar10 + 0x220) = local_6c[0];
    *(uint *)(lVar10 + 0x224) = local_6c[1];
    *(uint *)(lVar10 + 0x228) = local_6c[2];
  }
  return;
}


