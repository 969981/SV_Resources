/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3904; name: FUN_007f3904
 */


void FUN_007f3904(long param_1,uint param_2,undefined2 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  uint local_c0;
  uint uStack_bc;
  int local_ac [12];
  int local_7c [9];
  __less a_Stack_58 [8];
  
  local_ac[6] = 0;
  local_ac[7] = 0;
  local_ac[4] = 0;
  local_ac[5] = 0;
  local_ac[2] = 0;
  local_ac[3] = 0;
  local_ac[0] = 0;
  local_ac[1] = 0;
  local_ac[8] = 0;
  local_ac[9] = 0;
  local_ac[10] = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uVar7 = (uint)*(ushort *)(param_1 + 0x5a);
  if (*(ushort *)(param_1 + 0x5a) != 0) {
    uVar7 = 0;
    uVar15 = 0;
    do {
      uVar14 = *(uint *)(*(long *)(param_1 + 0x60) + uVar15 * 0x40);
      if (2 < (int)uVar14) {
        lVar2 = *(long *)(param_1 + 0x60) + uVar15 * 0x40;
        if (*(int *)(lVar2 + 0x38) == 9) {
          iVar10 = *(int *)(lVar2 + 0x3c);
        }
        else {
          lVar6 = *(long *)(lVar2 + 8);
          uVar7 = uVar14;
          if (8 < uVar14) {
            uVar7 = 9;
          }
          uVar8 = (ulong)*(uint *)(lVar2 + 4);
          uVar9 = (ulong)*(uint *)(lVar2 + 0x10);
          if (uVar7 == 1) {
            uVar11 = 0;
          }
          else {
            uVar12 = 0;
            uVar4 = uVar14;
            do {
              uVar3 = (uVar4 - 1) + uVar8;
              uVar11 = 0;
              if (uVar9 != 0) {
                uVar11 = uVar3 / uVar9;
              }
              uVar1 = uVar8 + (uVar4 - 2);
              local_ac[uVar12 + 0xc] = *(int *)(lVar6 + (uVar3 - uVar11 * uVar9) * 4);
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar1 / uVar9;
              }
              uVar11 = uVar12 + 2;
              local_ac[uVar12 + 0xd] = *(int *)(lVar6 + (uVar1 - uVar3 * uVar9) * 4);
              uVar12 = uVar11;
              uVar4 = uVar4 - 2;
            } while (((ulong)uVar7 & 0xe) != uVar11);
          }
          if ((uVar7 & 1) != 0) {
            uVar8 = (uVar14 + ~(uint)uVar11) + uVar8;
            uVar12 = 0;
            if (uVar9 != 0) {
              uVar12 = uVar8 / uVar9;
            }
            local_ac[uVar11 + 0xc] = *(int *)(lVar6 + (uVar8 - uVar12 * uVar9) * 4);
          }
          std::__sort<std::__less<int,int>&,int*>
                    (local_ac + 0xc,local_ac + (ulong)uVar7 + 0xc,a_Stack_58);
          uVar8 = (ulong)(uVar7 >> 1);
          if ((uVar7 & 1) == 0) {
            iVar10 = local_ac[uVar8 + 0xc] + local_ac[uVar8 + 0xb];
            if (iVar10 < 0) {
              iVar10 = iVar10 + 1;
            }
            iVar10 = iVar10 >> 1;
          }
          else {
            iVar10 = local_ac[uVar8 + 0xc];
          }
          *(int *)(lVar2 + 0x3c) = iVar10;
          *(int *)(lVar2 + 0x38) = 9;
          uVar7 = local_c0;
        }
        local_ac[9] = 0;
        local_ac[10] = 0;
        local_ac[(uVar7 + uStack_bc) % 9] = iVar10;
        if (local_c0 == 9) {
          uStack_bc = (uStack_bc + 1) % 9;
          uVar7 = local_c0;
        }
        else {
          uVar7 = local_c0 + 1;
          local_c0 = uVar7;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ushort *)(param_1 + 0x5a));
    if (uVar7 != 0) {
      if (local_ac[9] == 9) {
      }
      else {
        uVar14 = uVar7;
        if (8 < uVar7) {
          uVar14 = 9;
        }
        piVar13 = local_ac + 0xc;
        uVar15 = (ulong)uVar14;
        do {
          uVar7 = uVar7 - 1;
          uVar15 = uVar15 - 1;
          *piVar13 = local_ac[((ulong)uStack_bc + (ulong)uVar7) % 9];
          piVar13 = piVar13 + 1;
        } while (uVar15 != 0);
        std::__sort<std::__less<int,int>&,int*>
                  (local_ac + 0xc,local_ac + (ulong)uVar14 + 0xc,a_Stack_58);
        uVar15 = (ulong)(uVar14 >> 1);
        if ((uVar14 & 1) == 0) {
          local_ac[10] = local_ac[uVar15 + 0xc] + local_ac[uVar15 + 0xb];
          if (local_ac[10] < 0) {
            local_ac[10] = local_ac[10] + 1;
          }
          local_ac[10] = local_ac[10] >> 1;
        }
        else {
          local_ac[10] = local_ac[uVar15 + 0xc];
        }
        uVar7 = local_c0;
      }
      goto LAB_007f3b7c;
    }
  }
  local_ac[10] = 0;
LAB_007f3b7c:
  puVar5 = PTR_DAT_047d0868;
  *(int *)(PTR_DAT_047d0868 + 0x38c) = local_ac[10];
  *(short *)(puVar5 + 0x390) = (short)uVar7;
  if ((param_2 & 0xffff) < (uint)*(ushort *)(puVar5 + 0x380)) {
    *(short *)(puVar5 + 0x380) = (short)param_2;
    *(undefined2 *)(puVar5 + 0x382) = param_3;
  }
  if ((*(uint *)(puVar5 + 900) == 0xffffffff) || (*(uint *)(puVar5 + 900) < param_2)) {
    *(uint *)(puVar5 + 900) = param_2;
    *(undefined2 *)(puVar5 + 0x388) = param_3;
  }
  return;
}


