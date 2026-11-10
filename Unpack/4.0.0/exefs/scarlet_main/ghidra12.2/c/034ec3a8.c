/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ec3a8; name: FUN_034ec3a8
 */


undefined4 FUN_034ec3a8(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  void *__src;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  void *__dest;
  long lVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  
  *(undefined4 *)(param_2 + 1) = 0;
  bVar3 = DAT_048b07f8;
  bVar10 = DAT_047c5aa8;
  if (param_3 == (long *)0x0) {
    fVar14 = 0.0;
    bVar11 = DAT_048b07f8;
  }
  else {
    uVar6 = (**(code **)(*param_3 + 0x40))(param_3);
    uVar7 = (**(code **)(*param_3 + 0x38))(param_3);
    bVar11 = bVar3;
    if ((bVar10 & 2) != 0 && (uVar6 & 1) == 0) {
      bVar11 = bVar3 | 2;
    }
    bVar4 = bVar10 | 1;
    if ((uVar7 & 1) != 0) {
      bVar3 = bVar11;
      bVar4 = bVar10 | 5;
    }
    bVar5 = (uVar6 & 1) == 0;
    fVar14 = 1.0;
    if (bVar5) {
      fVar14 = 0.0;
    }
    bVar10 = bVar4 | 2;
    if (bVar5) {
      bVar10 = bVar4;
    }
    bVar11 = bVar3 | 8;
    if ((*(byte *)(param_3[1] + 0xee) & 1) != 0) {
      bVar11 = bVar3;
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar13 = 0x501502f9;
  }
  else {
    uVar13 = 0x501502f9;
    lVar12 = 0;
    uVar7 = 0;
    do {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x30) + uVar7);
      if ((bVar3 & bVar10) != 0 && (bVar3 & bVar11) == 0) {
        uVar2 = *(uint *)(param_2 + 1);
        uVar6 = *(uint *)((long)param_2 + 0xc);
        lVar9 = *(long *)(param_1 + 0x20);
        if (uVar6 <= uVar2) {
          iVar1 = uVar6 + (uVar6 >> 1);
          if (uVar6 == 0) {
            iVar1 = 1;
          }
          uVar6 = iVar1 + uVar6;
          lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar6 * 0x78);
          if (lVar8 == 0) goto LAB_034ec584;
          *param_2 = lVar8;
          *(uint *)((long)param_2 + 0xc) = uVar6;
        }
        if (uVar2 < uVar6) {
          uVar6 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar6 + 1;
          if (*param_2 != 0) {
            __dest = (void *)(*param_2 + (ulong)uVar6 * 0x78);
            *(undefined8 *)((long)__dest + 0x2c) = 0x3f80000000000000;
            *(undefined8 *)((long)__dest + 0x34) = 0x3f8000003f800000;
            *(undefined8 *)((long)__dest + 0x50) = 0x3f80000042c80000;
            __src = (void *)(lVar9 + lVar12);
            *(undefined8 *)((long)__dest + 0x58) = 0xffffffff;
            *(undefined8 *)((long)__dest + 0x60) = 0;
            *(undefined8 *)((long)__dest + 0x24) = 0;
            *(undefined8 *)((long)__dest + 0x3c) = 0;
            *(undefined8 *)((long)__dest + 0x44) = 0;
            *(undefined4 *)((long)__dest + 0x4c) = 0;
            *(undefined4 *)((long)__dest + 0x70) = 0;
            *(undefined8 *)((long)__dest + 0x68) = 0x3f800000;
            memcpy(__dest,__src,0x68);
            *(float *)((long)__dest + 0x48) = *(float *)((long)__dest + 0x48) * fVar14;
            uVar13 = NEON_fminnm(*(undefined4 *)((long)__src + 0x24),uVar13);
          }
        }
      }
LAB_034ec584:
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + 0x78;
    } while (uVar7 < *(uint *)(param_1 + 0x28));
  }
  return uVar13;
}


