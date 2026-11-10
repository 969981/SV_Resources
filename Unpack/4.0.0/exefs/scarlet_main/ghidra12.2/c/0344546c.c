/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344546c; name: FUN_0344546c
 */


void FUN_0344546c(ulong param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar6 = *(long *)(param_3 + 0x198);
  if ((*(uint *)(lVar6 + 0x158) & 0xf00) == 0x300) {
    uVar14 = (ulong)*(uint *)(param_4 + 0xb8);
    if ((*(uint *)(param_4 + 0xb8) & 0xf00) == 0x300) {
      uVar14 = (ulong)*(byte *)(param_4 + 0x120);
    }
    uVar13 = (uint)uVar14;
    uVar16 = uVar13 & 0xff;
    puVar12 = *(undefined4 **)(param_4 + 0x138);
    uVar15 = param_2 & 0xff;
    uVar1 = uVar16 + 3 & 0x1fc;
    iVar3 = uVar1 * uVar15;
    if (iVar3 != 0) {
      memset(puVar12,0,(ulong)(uint)(iVar3 * 4));
    }
    if ((param_2 & 0xf00) == 0x200) {
      if (((param_2 & 0xff) != 0) && ((uVar14 & 0xff) != 0)) {
        if (uVar15 < 0xc) {
          uVar14 = 0;
          uVar2 = *(uint *)(&DAT_03d99ae0 + (ulong)(uVar15 - 1) * 4);
          uVar13 = 0;
          do {
            if ((uVar2 >> (ulong)((uint)uVar14 & 0x1f) & 1) == 0) {
              uVar4 = uVar13 * uVar1;
              uVar13 = uVar13 + 1;
              puVar12[uVar4 + uVar14] = 0x3f800000;
            }
            uVar14 = uVar14 + 1;
          } while ((uVar14 < uVar16) && (uVar13 < uVar15));
        }
        else {
          if (uVar16 - 1 <= uVar15 - 1) {
            uVar15 = uVar16;
          }
          uVar9 = (ulong)uVar15;
          uVar7 = uVar9 & 3;
          if (uVar9 - 1 < 3) {
            lVar8 = 0;
          }
          else {
            uVar14 = (uVar14 & 0xff) + 3;
            uVar10 = uVar14 >> 2;
            lVar6 = 1;
            puVar11 = puVar12;
            do {
              lVar8 = lVar6;
              lVar6 = lVar8 + 4;
              *puVar11 = 0x3f800000;
              *(undefined4 *)((long)puVar11 + (uVar10 << 4 | 4)) = 0x3f800000;
              *(undefined4 *)((long)puVar11 + (uVar10 << 5 | 8)) = 0x3f800000;
              *(undefined4 *)((long)puVar11 + ((uVar10 * 2 + (uVar14 >> 2)) * 0x10 | 0xc)) =
                   0x3f800000;
              puVar11 = (undefined4 *)((long)puVar11 + (uVar10 << 6 | 0x10));
            } while (lVar6 - (uVar9 & 0xfc) != 1);
            lVar8 = lVar8 + 3;
          }
          if ((uVar15 & 3) != 0) {
            uVar14 = (ulong)((uVar13 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
            puVar12 = (undefined4 *)((long)puVar12 + lVar8 * uVar14);
            do {
              *puVar12 = 0x3f800000;
              uVar7 = uVar7 - 1;
              puVar12 = (undefined4 *)((long)puVar12 + uVar14);
            } while (uVar7 != 0);
          }
        }
      }
    }
    else {
      if (uVar16 <= uVar15) {
        uVar15 = uVar16;
      }
      uVar7 = (ulong)uVar15;
      if (uVar15 != 0) {
        uVar9 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          lVar8 = 0;
        }
        else {
          uVar14 = (uVar14 & 0xff) + 3;
          uVar10 = uVar14 >> 2;
          lVar6 = 1;
          puVar11 = puVar12;
          do {
            lVar8 = lVar6;
            lVar6 = lVar8 + 4;
            *puVar11 = 0x3f800000;
            *(undefined4 *)((long)puVar11 + (uVar10 << 4 | 4)) = 0x3f800000;
            *(undefined4 *)((long)puVar11 + (uVar10 << 5 | 8)) = 0x3f800000;
            *(undefined4 *)((long)puVar11 + ((uVar10 * 2 + (uVar14 >> 2)) * 0x10 | 0xc)) =
                 0x3f800000;
            puVar11 = (undefined4 *)((long)puVar11 + (uVar10 << 6 | 0x10));
          } while (lVar6 - (uVar7 & 0xfc) != 1);
          lVar8 = lVar8 + 3;
        }
        if ((uVar15 & 3) != 0) {
          uVar14 = (ulong)((uVar13 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
          puVar12 = (undefined4 *)((long)puVar12 + lVar8 * uVar14);
          do {
            *puVar12 = 0x3f800000;
            uVar9 = uVar9 - 1;
            puVar12 = (undefined4 *)((long)puVar12 + uVar14);
          } while (uVar9 != 0);
        }
      }
    }
  }
  else if (*(int *)(param_4 + 0x6c) == 0) {
    if (((param_1 & 1) != 0) || ((*(byte *)(param_3 + 0x1d8) >> 1 & 1) != 0)) {
      uVar5 = FUN_0349fff0(lVar6 + 0x60);
      uVar16 = *(uint *)(param_4 + 0xb8);
      if ((uVar16 & 0xf00) == 0x300) {
        uVar16 = *(uint *)(param_4 + 0x120);
      }
      FUN_034d2278(*(undefined4 *)(param_4 + 0x5c),*(undefined4 *)(param_4 + 0x60),
                   *(undefined4 *)(param_4 + 100),*(undefined4 *)(param_4 + 0x58),
                   *(undefined4 *)(param_4 + 0x70),param_2,uVar16,*(undefined8 *)(param_4 + 0x138),
                   uVar5);
      return;
    }
    uVar16 = *(uint *)(param_4 + 0x120);
    if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) {
      uVar16 = *(uint *)(param_4 + 0xb8);
    }
    lVar6 = ((ulong)((uVar16 & 0xff) + 3) & 0x1fc) * ((ulong)*(uint *)(param_4 + 0x120) & 0xff);
    if ((int)lVar6 != 0) {
      memcpy(*(void **)(param_4 + 0x138),*(void **)(param_4 + 0x140),lVar6 * 4);
      return;
    }
  }
  else {
    lVar6 = FUN_0349fff0(lVar6 + 0x60);
    if (lVar6 != 0) {
      uVar16 = param_2;
      if ((param_2 & 0xf00) == 0x100) {
        uVar15 = param_2 >> 0xc & 0x637;
        uVar16 = uVar15 - (uVar15 >> 1 & 0xf1f1f1f1);
        uVar16 = (uVar16 & 0x33333333) + (uVar16 >> 2 & 0x33333333);
        uVar16 = uVar15 << 0xc | (uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
      }
      uVar15 = *(uint *)(param_4 + 0xb8);
      if ((uVar15 & 0xf00) == 0x300) {
        uVar15 = *(uint *)(param_4 + 0x120);
      }
      uVar1 = (uVar15 & 0xff) + 3;
      iVar3 = (param_2 & 0xff) * (uVar1 >> 2);
      memset(*(void **)(param_4 + 0x138),0,(ulong)(uint)(iVar3 * 0x10));
      if ((uVar16 & 0xff) != 0) {
        FUN_034458bc(param_4 + 0x58,param_4 + 0x28,1,param_2,uVar16,uVar15,iVar3 * 4,lVar6,
                     *(undefined8 *)(param_4 + 0x138));
      }
      if (((param_2 & uVar15) >> 0xf & 1) != 0) {
        *(undefined4 *)
         (*(long *)(param_4 + 0x138) + (ulong)((uVar1 & 0x1fc) * ((param_2 & 0xff) - 1)) * 4 +
         (long)(int)((uVar15 & 0xff) - 1) * 4) = 0x3f800000;
      }
    }
  }
  return;
}


