/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a935c; name: FUN_033a935c
 */


void FUN_033a935c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = 0;
  local_78 = -0x8000000000000000;
  uVar10 = *(uint *)(param_1 + 0x140);
  uVar9 = (ulong)uVar10;
  if (0 < (int)uVar10) {
    lVar15 = *(long *)(param_1 + 0x68);
    uVar6 = 0;
    iVar8 = *(int *)(param_1 + 0x70);
    lVar7 = *(long *)(param_1 + 0x138);
    do {
      if (*(int *)(lVar7 + uVar6 * 4) != -1) {
        if ((int)uVar6 < (int)uVar10) {
          iVar11 = 0;
          puVar1 = PTR_PTR_047d1a50 + 0x20;
          goto LAB_033a93e8;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar9 != uVar6);
  }
  goto LAB_033a9600;
LAB_033a93e8:
  iVar5 = (int)uVar6;
  iVar13 = *(int *)(lVar7 + (long)iVar5 * 4);
  uVar17 = (ulong)iVar5;
  if (iVar13 < iVar8) {
    lVar7 = *(long *)(lVar15 + (long)iVar13 * 8);
    iVar16 = iVar11;
    if (lVar7 != 0) {
      local_70 = 0x400000008;
      uStack_68 = 0x1000001;
      FUN_031d9d10(lVar7,&local_70);
      iVar16 = (int)local_78;
    }
    iVar11 = iVar16 + 1;
    if ((int)(local_78._4_4_ & 0x7fffffff) <= iVar16) {
      FUN_0133bb88(&local_80,puVar1,(long)iVar11);
      iVar16 = (int)local_78;
    }
    *(int *)(local_80 + (long)iVar16 * 4) = iVar13;
    local_78 = CONCAT44(local_78._4_4_,iVar11);
    uVar9 = (ulong)*(uint *)(param_1 + 0x140);
  }
  iVar16 = (int)uVar9 + -1;
  iVar13 = iVar16;
  if (iVar16 <= iVar5) {
    iVar13 = iVar5;
  }
  uVar6 = (ulong)(iVar13 + 1);
  uVar2 = uVar17;
  if ((long)uVar17 <= (long)iVar16) {
    uVar2 = (long)iVar16;
  }
  do {
    if (uVar2 == uVar17) goto LAB_033a9494;
    lVar7 = uVar17 * 4;
    uVar17 = uVar17 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x138) + lVar7 + 4) == -1);
  uVar6 = uVar17 & 0xffffffff;
LAB_033a9494:
  if ((int)uVar9 <= (int)uVar6) goto LAB_033a94a4;
  lVar7 = *(long *)(param_1 + 0x138);
  goto LAB_033a93e8;
LAB_033a94a4:
  if (0 < iVar11) {
    lVar7 = 0;
    do {
      iVar8 = (int)uVar9;
      uVar10 = (uint)((long)iVar8 - 1U);
      uVar6 = uVar9;
      if (1 < iVar8) {
        iVar11 = *(int *)(local_80 + lVar7 * 4);
        uVar3 = iVar11 * -0x61c8864f;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = (uVar3 >> 0x10 | uVar3 << 0x10) & uVar10;
        iVar13 = *(int *)(*(long *)(param_1 + 0x138) + (long)(int)uVar3 * 4);
        if (iVar13 != -1) {
          do {
            uVar6 = (ulong)uVar3;
            if (iVar13 == iVar11) goto LAB_033a951c;
            uVar3 = uVar3 + 1 & uVar10;
            iVar13 = *(int *)(*(long *)(param_1 + 0x138) + (long)(int)uVar3 * 4);
          } while (iVar13 != -1);
          uVar6 = uVar9;
        }
      }
LAB_033a951c:
      iVar11 = (int)uVar6;
      if (iVar11 < iVar8) {
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
        *(undefined4 *)(*(long *)(param_1 + 0x138) + (long)iVar11 * 4) = 0xffffffff;
        lVar15 = *(long *)(param_1 + 0x138);
        uVar9 = uVar6;
        do {
          uVar3 = (int)uVar9 + uVar10 & uVar10;
          uVar9 = (ulong)uVar3;
        } while (*(int *)(lVar15 + (long)(int)uVar3 * 4) != -1);
        uVar14 = iVar11 + 1U & uVar10;
        iVar11 = *(int *)(lVar15 + (long)(int)uVar14 * 4);
        if (iVar11 != -1) {
          uVar3 = uVar3 + 1 & uVar10;
          uVar9 = (ulong)(int)uVar14;
          do {
            uVar4 = (iVar11 * -0x61c8864f & 0xff00ff00U) >> 8 |
                    (iVar11 * -0x61c8864f & 0xff00ffU) << 8;
            uVar4 = (uVar4 >> 0x10 | uVar4 << 0x10) & uVar10;
            uVar12 = (uint)uVar6;
            if ((((uVar14 < uVar3) || (uVar4 <= uVar12)) &&
                ((uVar12 <= uVar14 || ((uVar4 <= uVar12 && (uVar14 < uVar4)))))) &&
               ((uVar4 <= uVar12 || (uVar3 <= uVar4)))) {
              *(int *)(lVar15 + (long)(int)uVar12 * 4) = iVar11;
              *(undefined4 *)(*(long *)(param_1 + 0x138) + uVar9 * 4) = 0xffffffff;
              lVar15 = *(long *)(param_1 + 0x138);
              uVar6 = (ulong)uVar14;
            }
            uVar9 = (long)(int)(uVar14 + 1) & (long)iVar8 - 1U;
            iVar11 = *(int *)(lVar15 + uVar9 * 4);
            uVar14 = (uint)uVar9;
          } while (iVar11 != -1);
        }
      }
      lVar7 = lVar7 + 1;
      if ((int)local_78 <= lVar7) break;
      uVar9 = (ulong)*(uint *)(param_1 + 0x140);
    } while( true );
  }
LAB_033a9600:
  lVar7 = local_78;
  uVar9 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar9 << 2);
  }
  return;
}


