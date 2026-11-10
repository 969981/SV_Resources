/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d4640; name: FUN_003d4640
 */


undefined8 FUN_003d4640(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *__src;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  size_t *psVar18;
  long lVar19;
  size_t __n;
  void *local_68;
  
  puVar12 = *(ulong **)(param_1 + 0xa8);
  uVar13 = puVar12[0x4f];
  uVar15 = puVar12[0x50];
  uVar8 = puVar12[0x51];
  uVar17 = puVar12[0x53];
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *puVar12 = *puVar12 & 0xfffffffffffff800 |
               *puVar12 & 0x3ff | (ulong)(*(int *)(param_1 + 0x7d4) != 0) << 10;
    lVar14 = *(long *)(param_1 + 0x530);
    *(uint *)(param_1 + 0x138) =
         *(uint *)(param_1 + 0x138) & 0xfffffffc |
         *(uint *)(param_1 + 0x138) & 1 | (*(uint *)(puVar12[0x47] + 0x40) >> 0x10 & 1) << 1;
    if ((lVar14 == 0) ||
       (uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60), (uVar4 >> 3 & 1) != 0))
    {
      lVar14 = FUN_00439de0();
      *(long *)(param_1 + 0x530) = lVar14;
      if (lVar14 == 0) {
        uVar9 = 0x41;
        uVar10 = 0xa7;
        goto LAB_003d4bac;
      }
      bVar1 = false;
      uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60);
    }
    else {
      bVar1 = true;
    }
    if ((uVar4 >> 3 & 1) == 0) {
      lVar5 = FUN_003b5590(param_1 + 0x548,0);
      if (lVar5 == 0) {
        uVar9 = 0x41;
        uVar10 = 0xb9;
        goto LAB_003d4bac;
      }
    }
    else {
      lVar5 = FUN_0042bbc0();
      if (lVar5 == 0) {
        uVar9 = 0x41;
        uVar10 = 0xb0;
        goto LAB_003d4bac;
      }
      *(long *)(param_1 + 0x548) = lVar5;
    }
    FUN_003f4080(*(undefined8 *)(param_1 + 0x520));
    *(undefined8 *)(param_1 + 0x520) = 0;
    if (uVar17 != 0) {
      lVar6 = FUN_003f3fb0(*(undefined8 *)(uVar17 + 0x10));
      *(long *)(param_1 + 0x520) = lVar6;
      if (lVar6 == 0) {
        uVar9 = 0x8e;
        uVar10 = 0xc5;
        goto LAB_003d4bac;
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      FUN_003a4520(param_1 + 0x948);
    }
    lVar6 = *(long *)(param_1 + 0xa8);
    local_68 = (void *)(lVar6 + 0x58);
    psVar18 = (size_t *)(lVar6 + 0x50);
    if (bVar1) goto LAB_003d4840;
  }
  else {
    *puVar12 = *puVar12 & 0xfffffffffffffe00 |
               *puVar12 & 0xff | (ulong)(*(int *)(param_1 + 0x7d4) != 0) << 8;
    lVar14 = *(long *)(param_1 + 0x500);
    *(uint *)(param_1 + 0x138) =
         *(uint *)(param_1 + 0x138) & 0xfffffffe | *(uint *)(puVar12[0x47] + 0x40) >> 0x10 & 1;
    if (lVar14 == 0) {
      lVar14 = FUN_00439de0();
      *(long *)(param_1 + 0x500) = lVar14;
      if (lVar14 == 0) {
        uVar9 = 0x41;
        uVar10 = 0x78;
        goto LAB_003d4bac;
      }
      FUN_00439d50();
      lVar14 = *(long *)(param_1 + 0x500);
      bVar1 = false;
      lVar5 = FUN_003b5590(param_1 + 0x518,0);
      if (lVar5 == 0) {
        return 0;
      }
    }
    else {
      bVar1 = true;
      lVar5 = FUN_003b5590(param_1 + 0x518,0);
      if (lVar5 == 0) {
        return 0;
      }
    }
    FUN_003f4080(*(undefined8 *)(param_1 + 0x528));
    *(undefined8 *)(param_1 + 0x528) = 0;
    if (uVar17 != 0) {
      lVar6 = FUN_003f3fb0(*(undefined8 *)(uVar17 + 0x10));
      *(long *)(param_1 + 0x528) = lVar6;
      if (lVar6 == 0) {
        uVar9 = 0x8e;
        uVar10 = 0x8c;
        goto LAB_003d4bac;
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      FUN_003a4510(param_1 + 0x948);
    }
    lVar6 = *(long *)(param_1 + 0xa8);
    local_68 = (void *)(lVar6 + 0x10);
    psVar18 = (size_t *)(lVar6 + 8);
    if (bVar1) {
LAB_003d4840:
      FUN_00439d50(lVar14);
      lVar6 = *(long *)(param_1 + 0xa8);
    }
  }
  __n = *(size_t *)(lVar6 + 0x290);
  pvVar16 = *(void **)(lVar6 + 0x270);
  *psVar18 = __n;
  iVar2 = FUN_0043b6e0(uVar13);
  uVar17 = FUN_0043b160(uVar13);
  if (((uVar17 & 0xf0007) == 6) || (uVar17 = FUN_0043b160(uVar13), (uVar17 & 0xf0007) == 7)) {
    uVar17 = 4;
    if (param_2 != 0x21) goto LAB_003d48e4;
LAB_003d48ec:
    lVar6 = __n * 2;
    lVar19 = lVar6 + (long)iVar2 * 2;
    __src = pvVar16;
    if (lVar19 + uVar17 * 2 <= *(ulong *)(*(long *)(param_1 + 0xa8) + 0x268)) {
LAB_003d4950:
      memcpy(local_68,__src,__n);
      uVar4 = FUN_0043b160(uVar13);
      if ((uVar4 >> 0x15 & 1) == 0) {
        lVar7 = FUN_0043ff60((int)uVar8,0,local_68,(int)*psVar18);
        if ((lVar7 == 0) || (iVar2 = FUN_0043c900(lVar5,0,uVar15,0,lVar7), iVar2 < 1)) {
          FUN_0043e1f0(lVar7);
          uVar9 = 0x44;
          uVar10 = 0x106;
          goto LAB_003d4bac;
        }
        FUN_0043e1f0(lVar7);
      }
      lVar6 = (long)pvVar16 + lVar6;
      lVar19 = (long)pvVar16 + lVar19;
      uVar8 = FUN_0043b160(uVar13);
      if ((uVar8 & 0xf0007) == 6) {
        iVar2 = FUN_00439e90(lVar14,uVar13,0,lVar6,0,param_2 & 2);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_0043a230(lVar14,0x12,uVar17 & 0xffffffff,lVar19), iVar2 == 0)) {
          uVar9 = 0x44;
          uVar10 = 0x119;
          goto LAB_003d4bac;
        }
      }
      else {
        uVar8 = FUN_0043b160(uVar13);
        if ((uVar8 & 0xf0007) == 7) {
          uVar11 = 0x10;
          if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x24) & 0x30000) != 0) {
            uVar11 = 8;
          }
          iVar2 = FUN_00439e90(8,lVar14,uVar13,0,0,0,param_2 & 2);
          if ((((iVar2 == 0) || (iVar2 = FUN_0043a230(lVar14,9,0xc,0), iVar2 == 0)) ||
              (iVar2 = FUN_0043a230(lVar14,0x11,uVar11,0), iVar2 == 0)) ||
             ((iVar2 = FUN_0043a230(lVar14,0x12,uVar17 & 0xffffffff,lVar19), iVar2 == 0 ||
              (iVar2 = FUN_00439e90(lVar14,0,0,lVar6,0,0xffffffff), iVar2 == 0)))) {
            uVar9 = 0x44;
            uVar10 = 0x129;
            goto LAB_003d4bac;
          }
        }
        else {
          iVar2 = FUN_00439e90(lVar14,uVar13,0,lVar6,lVar19,param_2 & 2);
          if (iVar2 == 0) {
            uVar9 = 0x44;
            uVar10 = 0x12f;
            goto LAB_003d4bac;
          }
        }
      }
      uVar4 = FUN_0043b160(uVar13);
      if (((uVar4 >> 0x15 & 1) == 0) ||
         ((*psVar18 == 0 || (iVar2 = FUN_0043a230(lVar14,0x17,*psVar18,local_68), iVar2 != 0)))) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        return 1;
      }
      uVar9 = 0x44;
      uVar10 = 0x138;
      goto LAB_003d4bac;
    }
  }
  else {
    iVar3 = FUN_0043b690(uVar13);
    uVar17 = (ulong)iVar3;
    if (param_2 == 0x21) goto LAB_003d48ec;
LAB_003d48e4:
    if (param_2 == 0x12) goto LAB_003d48ec;
    lVar6 = (long)iVar2 + __n * 2;
    lVar19 = lVar6 + iVar2 + uVar17;
    __src = (void *)((long)pvVar16 + __n);
    if (lVar19 + uVar17 <= *(ulong *)(*(long *)(param_1 + 0xa8) + 0x268)) goto LAB_003d4950;
  }
  uVar9 = 0x44;
  uVar10 = 0xf8;
LAB_003d4bac:
  FUN_003c3950(param_1,0x50,0xd1,uVar9,"external/openssl/ssl/t1_enc.c",uVar10);
  return 0;
}


