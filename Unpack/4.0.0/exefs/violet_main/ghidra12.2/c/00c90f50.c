/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c90f50; name: FUN_00c90f50
 */


void FUN_00c90f50(long param_1,ulong param_2,undefined8 param_3,int param_4,uint param_5,
                 ulong param_6,uint param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  int iVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  lVar14 = *(long *)(param_1 + (long)param_4 * 8 + 0xb0);
  if (lVar14 != 0) {
    iVar9 = (int)param_2;
    if ((param_6 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      puVar12 = (uint *)(lVar10 + (long)iVar9 * 0x9e8);
      puVar1 = puVar12 + 0x274;
      do {
        if ((((*puVar12 & *(uint *)(lVar14 + 0x48)) != 0) &&
            ((*(uint *)(lVar14 + 0x230) & param_5) != 0)) && (*(char *)(lVar14 + 0xb) != '\0')) {
          uVar7 = *(undefined8 *)(lVar14 + 0x98);
          uVar6 = *(undefined8 *)(lVar14 + 0x90);
          *(long *)(*(long *)(puVar12 + 0x272) + (long)(int)*puVar1 * 0x10) = lVar14;
          auVar8 = *(undefined1 (*) [12])(puVar12 + 0x19e);
          fVar15 = (float)uVar6 * auVar8._0_4_;
          fVar16 = (float)((ulong)uVar6 >> 0x20) * auVar8._4_4_;
          fVar17 = (float)uVar7 * auVar8._8_4_;
          fVar18 = (float)((ulong)uVar7 >> 0x20) * 0.0;
          auVar19._4_4_ = fVar16;
          auVar19._0_4_ = fVar15;
          auVar19._8_4_ = fVar17;
          auVar19._12_4_ = fVar18;
          auVar5._4_4_ = fVar16;
          auVar5._0_4_ = fVar15;
          auVar5._8_4_ = fVar17;
          auVar5._12_4_ = fVar18;
          auVar19 = NEON_ext(auVar19,auVar5,8,1);
          fVar15 = auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16 + (float)puVar12[0x1a1];
          uVar2 = (uint)fVar15 >> 8 & 0x800000;
          uVar3 = 0;
          if (ABS(fVar15) != 0.0) {
            uVar3 = ((uint)fVar15 >> 0x17 & 0xff) - 0x40;
          }
          uVar4 = 0x7f0000;
          if ((int)uVar3 < 0x80) {
            uVar4 = uVar2 | (uint)fVar15 >> 7 & 0xffff | (uVar3 & 0x7f) << 0x10;
          }
          if ((uVar3 & 0x80000000) == 0) {
            uVar2 = uVar4;
          }
          *(uint *)(*(long *)(puVar12 + 0x272) + (long)(int)*puVar1 * 0x10 + 8) =
               uVar2 | (uint)*(byte *)(lVar14 + 0x10) << 0x18;
          *puVar1 = *puVar1 + 1;
        }
        lVar14 = *(long *)(lVar14 + 0x1d0);
      } while (lVar14 != 0);
      lVar10 = lVar10 + (long)iVar9 * 0x9e8;
      *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_5;
      FUN_008e5b78(0,param_1,param_2,param_3,param_7 & 1,param_8);
      return;
    }
    if (iVar9 < *(int *)(param_1 + 8)) {
      uVar13 = -(param_2 >> 0x1f & 1) & 0xffffffc000000000 | (param_2 & 0xffffffff) << 6;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x10) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x14) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8 + 0x108);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8 + 0x7a8);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x20) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8 + 0x7b0);
      lVar11 = *(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8;
      lVar10 = lVar11 + 0x798;
      if (*(char *)(lVar11 + 0x9e0) != '\0') {
        lVar10 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x20) + uVar13 + 0x28) = lVar10;
      lVar10 = *(long *)(param_1 + 0x20) + uVar13;
    }
    else {
      lVar10 = 0;
    }
    do {
      if ((((*(uint *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x9e8) & *(uint *)(lVar14 + 0x48))
            != 0) && ((*(uint *)(lVar14 + 0x230) & param_5) != 0)) &&
         (*(char *)(lVar14 + 0xb) != '\0')) {
        FUN_008cabc0(lVar14,param_3,param_5,param_7 & 1,param_8,lVar10,
                     *(undefined8 *)(param_1 + 0x11f8),*(undefined8 *)(param_1 + 0x11e8));
      }
      lVar14 = *(long *)(lVar14 + 0x1d0);
    } while (lVar14 != 0);
  }
  return;
}


