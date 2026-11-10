/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01733f88; name: FUN_01733f88
 */


void FUN_01733f88(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  int local_8;
  int local_4;
  
  *(undefined1 *)(param_1 + 0xb3c) = 1;
  if (*(code **)(param_1 + 0x5d0) != (code *)0x0) {
    lVar7 = *(long *)(param_1 + 0x930);
    piVar1 = (int *)(lVar7 + 0x20);
    if (*(int *)(lVar7 + 0x28) != 0) {
      piVar1 = (int *)(lVar7 + 0x24);
    }
    local_8 = *(int *)(lVar7 + 0x14) + *piVar1 * *(int *)(lVar7 + 0x10);
    uVar5 = (**(code **)(param_1 + 0x5d0))(param_1 + 0x5f0,&local_8,param_1 + 0x8e4);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  uVar4 = FUN_0173426c(*(undefined8 *)(param_1 + 0x930),param_1 + 0x8e4);
  switch(uVar4) {
  case 0:
    param_1 = param_1 + 0xaa0;
    goto LAB_0173405c;
  case 1:
    FUN_0173470c(param_1);
    local_8 = FUN_017341a8(*(undefined8 *)(param_1 + 0x930));
    lVar7 = *(long *)(param_1 + 0x930);
    iVar6 = *(int *)(lVar7 + 0x14);
    if (*(int *)(lVar7 + 0x28) == 0) {
      local_4 = 0;
      if (*(int *)(lVar7 + 0x20) != 0) {
        local_4 = iVar6 / *(int *)(lVar7 + 0x20);
      }
    }
    else {
      iVar2 = *(int *)(lVar7 + 0x24);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar6 / iVar2;
      }
      local_4 = iVar6 - iVar3 * iVar2;
    }
    if (*(int *)(param_1 + 0x750) == 0) {
      if (*(int *)(lVar7 + 0x28) == 0) {
        iVar2 = *(int *)(lVar7 + 0x20);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar6 / iVar2;
        }
        local_8 = iVar6 - iVar3 * iVar2;
      }
      else {
        local_8 = 0;
        if (*(int *)(lVar7 + 0x24) != 0) {
          local_8 = iVar6 / *(int *)(lVar7 + 0x24);
        }
      }
      local_4 = FUN_017341a8();
      lVar7 = *(long *)(param_1 + 0x930);
    }
    uVar4 = FUN_017341fc(lVar7,&local_8);
    break;
  case 2:
  case 5:
    *(undefined4 *)(*(long *)(param_1 + 0x930) + 0x10) =
         *(undefined4 *)(*(long *)(param_1 + 0x930) + 0xc);
    uVar4 = FUN_017a4180(*(undefined8 *)(param_1 + 0x930));
    break;
  case 3:
    FUN_0173470c(param_1);
    local_8 = FUN_0215c6d8(*(undefined8 *)(param_1 + 0x930));
    lVar7 = *(long *)(param_1 + 0x930);
    iVar6 = *(int *)(lVar7 + 0x14);
    if (*(int *)(lVar7 + 0x28) == 0) {
      local_4 = 0;
      if (*(int *)(lVar7 + 0x20) != 0) {
        local_4 = iVar6 / *(int *)(lVar7 + 0x20);
      }
    }
    else {
      iVar2 = *(int *)(lVar7 + 0x24);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar6 / iVar2;
      }
      local_4 = iVar6 - iVar3 * iVar2;
    }
    if (*(int *)(param_1 + 0x750) == 0) {
      if (*(int *)(lVar7 + 0x28) == 0) {
        iVar2 = *(int *)(lVar7 + 0x20);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar6 / iVar2;
        }
        local_8 = iVar6 - iVar3 * iVar2;
      }
      else {
        local_8 = 0;
        if (*(int *)(lVar7 + 0x24) != 0) {
          local_8 = iVar6 / *(int *)(lVar7 + 0x24);
        }
      }
      local_4 = FUN_0215c6d8();
      lVar7 = *(long *)(param_1 + 0x930);
    }
    uVar4 = FUN_017341fc(lVar7,&local_8);
    fVar8 = *(float *)(*(long *)(param_1 + 0x880) + 0x1a0);
    goto LAB_01734044;
  case 4:
    uVar4 = FUN_017a4180(*(undefined8 *)(param_1 + 0x930));
    FUN_01327c88(param_1,uVar4,*(undefined4 *)(*(long *)(param_1 + 0x930) + 0x10));
    goto LAB_01734050;
  case 6:
    uVar4 = 0;
    iVar6 = 0;
    goto LAB_0173404c;
  default:
    goto switchD_01733fd4_default;
  }
  fVar8 = *(float *)(*(long *)(param_1 + 0x880) + 0x1a4);
LAB_01734044:
  iVar6 = (int)fVar8;
LAB_0173404c:
  FUN_01734228(param_1,uVar4,iVar6);
LAB_01734050:
  FUN_01282188(param_1 + 0xa60);
  param_1 = param_1 + 0xa80;
LAB_0173405c:
  FUN_01282188(param_1);
switchD_01733fd4_default:
  return;
}


