/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d19bc; name: FUN_034d19bc
 */


void FUN_034d19bc(uint param_1,byte param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  
  uVar2 = (uint)param_2;
  uVar3 = param_1 & 0xff;
  uVar4 = uVar2 + 3 & 0x1fc;
  iVar6 = uVar4 * uVar3;
  if (iVar6 != 0) {
    memset(param_3,0,(ulong)(uint)(iVar6 * 4));
  }
  if ((param_1 & 0xf00) == 0x200) {
    if ((uVar3 != 0) && (param_2 != 0)) {
      if (uVar3 < 0xc) {
        uVar8 = 0;
        uVar5 = *(uint *)(&DAT_03d99ae0 + (ulong)(uVar3 - 1) * 4);
        uVar9 = 0;
        do {
          if ((uVar5 >> (ulong)((uint)uVar8 & 0x1f) & 1) == 0) {
            uVar7 = uVar9 * uVar4;
            uVar9 = uVar9 + 1;
            param_3[uVar7 + uVar8] = 0x3f800000;
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 < uVar2) && (uVar9 < uVar3));
      }
      else {
        if (uVar2 - 1 <= uVar3 - 1) {
          uVar3 = uVar2;
        }
        uVar11 = (ulong)uVar3;
        uVar8 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar10 = 0;
        }
        else {
          uVar12 = (ulong)param_2 + 3 >> 2;
          lVar1 = 1;
          puVar13 = param_3;
          do {
            lVar10 = lVar1;
            lVar1 = lVar10 + 4;
            *puVar13 = 0x3f800000;
            *(undefined4 *)((long)puVar13 + (uVar12 << 4 | 4)) = 0x3f800000;
            *(undefined4 *)((long)puVar13 + (uVar12 << 5 | 8)) = 0x3f800000;
            *(undefined4 *)((long)puVar13 + ((uVar12 * 2 + ((ulong)param_2 + 3 >> 2)) * 0x10 | 0xc))
                 = 0x3f800000;
            puVar13 = (undefined4 *)((long)puVar13 + (uVar12 << 6 | 0x10));
          } while (lVar1 - (uVar11 & 0xfc) != 1);
          lVar10 = lVar10 + 3;
        }
        if ((uVar3 & 3) != 0) {
          uVar11 = (ulong)((uint)param_2 * 4 + 0xc) & 0x7f0 | 4;
          param_3 = (undefined4 *)((long)param_3 + lVar10 * uVar11);
          do {
            *param_3 = 0x3f800000;
            uVar8 = uVar8 - 1;
            param_3 = (undefined4 *)((long)param_3 + uVar11);
          } while (uVar8 != 0);
        }
      }
    }
  }
  else {
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    uVar8 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar11 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        uVar12 = (ulong)param_2 + 3 >> 2;
        lVar1 = 1;
        puVar13 = param_3;
        do {
          lVar10 = lVar1;
          lVar1 = lVar10 + 4;
          *puVar13 = 0x3f800000;
          *(undefined4 *)((long)puVar13 + (uVar12 << 4 | 4)) = 0x3f800000;
          *(undefined4 *)((long)puVar13 + (uVar12 << 5 | 8)) = 0x3f800000;
          *(undefined4 *)((long)puVar13 + ((uVar12 * 2 + ((ulong)param_2 + 3 >> 2)) * 0x10 | 0xc)) =
               0x3f800000;
          puVar13 = (undefined4 *)((long)puVar13 + (uVar12 << 6 | 0x10));
        } while (lVar1 - (uVar8 & 0xfc) != 1);
        lVar10 = lVar10 + 3;
      }
      if ((uVar3 & 3) != 0) {
        uVar8 = (ulong)((uint)param_2 * 4 + 0xc) & 0x7f0 | 4;
        param_3 = (undefined4 *)((long)param_3 + lVar10 * uVar8);
        do {
          *param_3 = 0x3f800000;
          uVar11 = uVar11 - 1;
          param_3 = (undefined4 *)((long)param_3 + uVar8);
        } while (uVar11 != 0);
      }
    }
  }
  return;
}


