/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c181bc; name: FUN_00c181bc
 */


int FUN_00c181bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int local_c0;
  long *local_b8;
  int *piStack_b0;
  ulong local_a8;
  long local_a0;
  long *local_98;
  undefined4 local_90 [2];
  char *local_88;
  undefined4 local_80;
  char local_78 [24];
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    iVar6 = 0x18;
  }
  else {
    iVar6 = *(int *)(lVar13 + 0xc) << 3;
    piVar10 = *(int **)(lVar13 + 0x10);
    if (piVar10 != (int *)0x0) {
      if (0 < *piVar10) {
        lVar14 = 0;
        do {
          iVar5 = (**(code **)(**(long **)(piVar10 + lVar14 * 2 + 2) + 0xa0))();
          piVar10 = *(int **)(lVar13 + 0x10);
          lVar14 = lVar14 + 1;
          iVar6 = iVar5 + iVar6;
        } while (lVar14 < *piVar10);
      }
      iVar6 = iVar6 + 8;
    }
    iVar6 = iVar6 + 0x18;
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    piStack_b0 = *(int **)(param_1 + 0x48);
    iVar5 = *piStack_b0;
    if (iVar5 == 0) {
      return iVar6;
    }
    local_a8 = *(ulong *)(piStack_b0 + 6);
    uVar11 = *(ulong *)(piStack_b0 + 2);
    if (local_a8 < uVar11) {
      do {
        local_b8 = *(long **)(*(long *)(piStack_b0 + 8) + local_a8 * 8);
        if (local_b8 != (long *)0x0) {
          if (local_b8 == *(long **)(*(long *)(piStack_b0 + 8) + (local_a8 ^ 1) * 8)) {
            local_a0 = *local_b8;
            local_b8 = *(long **)(local_a0 + 0x20);
          }
          else {
            local_a0 = 0;
          }
          goto LAB_00c182e8;
        }
        local_a8 = local_a8 + 1;
      } while (uVar11 != local_a8);
      local_a0 = 0;
      local_b8 = (long *)0x0;
      local_a8 = uVar11;
    }
    else {
      local_a0 = 0;
      local_b8 = (long *)0x0;
    }
LAB_00c182e8:
    bVar4 = false;
    local_98 = (long *)0x0;
    iVar15 = 2;
    local_c0 = 2;
  }
  else {
    iVar5 = *(int *)(*(long *)(param_1 + 0x48) + 0x28);
    if (iVar5 == 0) {
      return iVar6;
    }
    local_98 = *(long **)(*(long *)(param_1 + 0x48) + 0x18);
    bVar4 = true;
    local_c0 = 1;
    local_b8 = (long *)0x0;
    iVar15 = 1;
    local_a0 = 0;
  }
  plVar3 = local_98 + 4;
  plVar1 = local_b8 + 2;
  plVar2 = plVar3;
  if (!bVar4) {
    plVar2 = plVar1;
  }
  lVar13 = *plVar2;
  iVar9 = *(int *)(lVar13 + 8);
  if (iVar9 == 0) {
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    local_90[0] = 3;
    local_80 = 0x72;
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
    ;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    FUN_00bb0e90(local_90);
    FUN_00bb0d74(local_90);
    iVar9 = *(int *)(lVar13 + 8);
  }
  iVar12 = iVar5 * 0x18;
  if (iVar9 != 9) {
    iVar12 = 0;
  }
  iVar12 = iVar6 + iVar5 * 0x20 + iVar12;
  if (!bVar4) {
    plVar3 = plVar1;
  }
  lVar13 = *plVar3;
  iVar6 = *(int *)(lVar13 + 0x18);
  if ((iVar6 == 0) || (*(long *)(lVar13 + 0x10) == 0)) {
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    local_90[0] = 3;
    local_80 = 0x1a9;
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
    ;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    std::string::append(local_78);
    std::string::append(local_78);
    FUN_00bb0e90(local_90);
    FUN_00bb0d74(local_90);
    iVar6 = *(int *)(lVar13 + 0x18);
  }
  switch(iVar6) {
  case 1:
  case 3:
  case 6:
  case 8:
    iVar12 = iVar12 + iVar5 * 4;
    break;
  case 2:
  case 4:
  case 5:
    iVar12 = iVar12 + iVar5 * 8;
    break;
  case 7:
    iVar12 = iVar12 + iVar5;
    break;
  case 9:
    iVar12 = iVar12 + iVar5 * 0x18;
    break;
  case 10:
    do {
      plVar1 = local_b8;
      plVar3 = local_b8 + 2;
      while( true ) {
        plVar2 = local_98;
        iVar6 = 1;
        if (*(char *)(param_1 + 0x44) == '\0') {
          iVar6 = 2;
        }
        if (iVar15 == iVar6) {
          plVar7 = plVar1;
          if (*(char *)(param_1 + 0x44) != '\0') {
            plVar7 = local_98;
          }
          if (plVar7 == (long *)0x0) {
            return iVar12;
          }
        }
        plVar7 = local_98 + 4;
        if (iVar15 != 1) {
          plVar7 = plVar3;
        }
        plVar7 = (long *)FUN_00c17048(*plVar7 + 0x10);
        plVar8 = (long *)(**(code **)(*plVar7 + 0xb0))();
        iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,plVar7);
        iVar12 = iVar6 + iVar12;
        if (iVar15 != 1) break;
        local_98 = (long *)*plVar2;
      }
      FUN_00c1b9a0(&local_b8);
      iVar15 = local_c0;
    } while( true );
  }
  return iVar12;
}


