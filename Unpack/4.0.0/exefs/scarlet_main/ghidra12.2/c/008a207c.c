/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a207c; name: FUN_008a207c
 */


void FUN_008a207c(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
                 uint param_13,uint param_14)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 0x14) & 0xfffffff0 |
          *(uint *)(param_1 + 0x14) & 3 | (param_3 & 3) << 2;
  uVar5 = param_2 & 3 | (param_3 & 3) << 2 | (param_4 & 3) << 4 | (param_5 & 7) << 6 |
          (param_6 & 1) << 9 | (param_7 & 3) << 10 | (param_8 & 1) << 0xc | (param_9 & 3) << 0xd |
          (param_10 & 1) << 0xf | (param_11 & 1) << 0x10 | (param_12 & 1) << 0x11 |
          (param_13 & 3) << 0x12 | (param_14 & 3) << 0x14 | *(uint *)(param_1 + 0x10) & 0xffc00000;
  param_3 = param_3 & 3;
  *(uint *)(param_1 + 0x10) = uVar5;
  *(uint *)(param_1 + 0x14) = uVar6;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)((param_2 & 3) << 4));
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    if (param_3 != 1) {
      *(undefined8 *)((long)puVar1 + 0x14) = 0;
      *(undefined8 *)((long)puVar1 + 0x1c) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar1 + 0x24) = 0x3f800000;
      if (param_3 != 2) {
        puVar1[5] = 0;
        puVar1[6] = 0x3f80000000000000;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  uVar6 = uVar6 & 0xfffffc00 | uVar6 & 0x1ff | (uVar5 >> 9 & 1) << 9;
  *(uint *)(param_1 + 0x14) = uVar6;
  if ((uVar5 >> 9 & 1) != 0) {
    uVar6 = uVar5 >> 2 & 3;
    *(undefined8 *)
     (*(long *)(param_1 + 0x18) +
     (ulong)((uVar5 & 3) * 0x10 + (uVar5 & 0x30)) + (ulong)((uVar6 | uVar6 << 2) << 2)) = 7;
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  uVar6 = uVar6 & 0xfffff3ff | uVar5 & 0xc00;
  *(uint *)(param_1 + 0x14) = uVar6;
  if ((uVar5 & 0xc00) != 0) {
    uVar6 = uVar5 >> 2 & 3;
    *(undefined4 *)
     (*(long *)(param_1 + 0x18) +
     (ulong)((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
     (ulong)((uVar6 | uVar6 << 2) << 2)) = 0x50400;
    uVar6 = *(uint *)(param_1 + 0x14);
    if ((uVar6 & 0xc00) == 0x800) {
      uVar6 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       ((((ulong)(uVar6 << 4) & 0x30) + ((ulong)uVar6 & 0x30) | (ulong)(uVar6 >> 6) & 8) +
        ((ulong)(uVar6 >> 2) & 3) * 0x14 + *(long *)(param_1 + 0x18) + 4) = 0x50400;
      uVar6 = *(uint *)(param_1 + 0x14);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar7 = (ulong)uVar4;
  uVar5 = uVar6 & 0xfff | (uVar4 >> 0xc & 1) << 0xc;
  *(uint *)(param_1 + 0x14) = uVar6 & 0xffffe000 | uVar5;
  if ((uVar4 >> 0xc & 1) == 0) {
    uVar6 = uVar6 & 0xffff0000 | uVar6 & 0x6000 | uVar5 | (uVar4 >> 0xf & 1) << 0xf;
    *(uint *)(param_1 + 0x14) = uVar6;
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             ((ulong)(uVar4 >> 8) & 0xc) + ((ulong)(uVar4 >> 2) & 3) * 0x14 +
             (((ulong)(uVar4 << 4) & 0x30) + (uVar7 & 0x30) | (ulong)(uVar4 >> 6) & 8));
    *puVar1 = 0x3f80000000000000;
    *(undefined4 *)(puVar1 + 1) = 0x3f800000;
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar7 = (ulong)uVar4;
    uVar6 = *(uint *)(param_1 + 0x14) & 0xffff0000 |
            *(uint *)(param_1 + 0x14) & 0x7fff | (uVar4 >> 0xf & 1) << 0xf;
    *(uint *)(param_1 + 0x14) = uVar6;
  }
  if ((uVar4 >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 0x14) =
         uVar6 & 0xfffe0000 | uVar6 & 0xffff | ((uint)(uVar7 >> 0x10) & 1) << 0x10;
    uVar6 = (uint)uVar7;
  }
  else {
    puVar2 = (undefined2 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)((uVar4 >> 4 & 0x1c) + (uVar4 >> 8 & 0xc) + (uVar4 >> 0xc & 1) * 0xc +
                     ((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
                    ((uVar4 >> 0xd & 3) + (uVar4 >> 2 & 3)) * 0x14));
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 3) = 0xffffffff;
    *(undefined1 *)((long)puVar2 + 7) = 0;
    uVar6 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xfffe0000 |
         *(uint *)(param_1 + 0x14) & 0xffff | (uVar6 >> 0x10 & 1) << 0x10;
  }
  if ((uVar6 >> 0x10 & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                     (uVar6 >> 0xc & 1) * 0xc +
                     ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                    ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14));
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (0 < (int)param_5) {
      lVar8 = 0;
      do {
        uVar6 = *(uint *)(param_1 + 0x10);
        puVar1 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) +
                  (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                              (uVar6 >> 0xc & 1) * 0xc + (uVar6 >> 0x10 & 1) * 0x1c +
                              ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                             ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + lVar8);
        lVar8 = lVar8 + 0x10;
        *puVar1 = 0;
        puVar1[1] = 0;
      } while ((ulong)param_5 * 0x10 != lVar8);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14) & 0xfffc0000 |
          *(uint *)(param_1 + 0x14) & 0x1ffff | (uVar5 >> 0x11 & 1) << 0x11;
  *(uint *)(param_1 + 0x14) = uVar6;
  if ((uVar5 >> 0x11 & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (long)(int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8) +
                         (uVar5 >> 0xc & 1) * 0xc + (uVar5 >> 0x10 & 1) * 0x1c +
                         (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) +
                         ((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                        ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14));
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  uVar6 = uVar6 & 0xfff3ffff | uVar5 & 0xc0000;
  *(uint *)(param_1 + 0x14) = uVar6;
  if (((uVar5 & 0xc0000) != 0) && (0 < (int)param_13)) {
    lVar8 = 0;
    while( true ) {
      uVar6 = uVar5 >> 0x10 & 1;
      *(undefined4 *)
       (*(long *)(param_1 + 0x18) +
        (long)(int)(((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                    (uVar6 << 4 | 4) * (uVar5 >> 6 & 7) + (uVar5 >> 0x11 & 1) * 0x74 + uVar6 * 0x1c
                    + ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14 + (uVar5 >> 0xc & 1) * 0xc +
                    (uVar5 >> 0xf & 1) * 8 + (uVar5 >> 10 & 3) * 4) + lVar8) = 0;
      uVar6 = *(uint *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) +
              (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                          (uVar6 >> 0xc & 1) * 0xc + (uVar6 >> 0x10 & 1) * 0x1c +
                          (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) + (uVar6 >> 0x11 & 1) * 0x74 +
                          ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                         ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + lVar8;
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      uVar6 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)
       (*(long *)(param_1 + 0x18) +
        (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                    (uVar6 >> 0xc & 1) * 0xc + (uVar6 >> 0x10 & 1) * 0x1c +
                    (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) + (uVar6 >> 0x11 & 1) * 0x74 +
                    ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                   ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + lVar8 + 0x18) = 0;
      if ((ulong)param_13 * 0x20 + -0x20 == lVar8) break;
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar8 = lVar8 + 0x20;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar6 & 0xffcfffff | uVar5 & 0x300000;
  if ((uVar5 & 0x300000) != 0) {
    *(undefined8 *)
     (*(long *)(param_1 + 0x18) +
     (long)(int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8) +
                 (uVar5 >> 0xd & 0x60) + (uVar5 >> 0xc & 1) * 0xc + (uVar5 >> 0x10 & 1) * 0x1c +
                 (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) + (uVar5 >> 0x11 & 1) * 0x74 +
                 ((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14)) = 0;
    uVar6 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)
     (*(long *)(param_1 + 0x18) +
      (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                  (uVar6 >> 0xd & 0x60) + (uVar6 >> 0xc & 1) * 0xc + (uVar6 >> 0x10 & 1) * 0x1c +
                  (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7) + (uVar6 >> 0x11 & 1) * 0x74 +
                  ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                 ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + 8) = 0;
    if (0 < (int)param_14) {
      lVar8 = 0;
      do {
        uVar6 = *(uint *)(param_1 + 0x10);
        puVar1 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) +
                  (long)(int)((uVar6 >> 4 & 0x1c) + (uVar6 >> 8 & 0xc) + (uVar6 >> 0xc & 8) +
                              (uVar6 >> 0xd & 0x60) + (uVar6 >> 0xc & 1) * 0xc +
                              (uVar6 >> 0x10 & 1) * 0x1c + (uVar6 >> 0xc & 0x10) * (uVar6 >> 6 & 7)
                              + (uVar6 >> 0x11 & 1) * 0x74 + (uint)((uVar6 & 0x300000) != 0) * 0x10
                              + ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | uVar6 >> 6 & 8) +
                             ((uVar6 >> 0xd & 3) + (uVar6 >> 2 & 3)) * 0x14) + lVar8);
        lVar8 = lVar8 + 0x58;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        *puVar1 = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      } while ((ulong)param_14 * 0x58 != lVar8);
    }
  }
  return;
}


