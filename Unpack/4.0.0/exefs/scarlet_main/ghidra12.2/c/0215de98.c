/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215de98; name: FUN_0215de98
 */


undefined8 FUN_0215de98(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  int local_28;
  int iStack_24;
  
  switch(*(undefined4 *)(param_1 + 0xb28)) {
  case 1:
    if (*(char *)(param_1 + 0xb2c) == '\0') {
      FUN_0215e1d8(param_1 + 0xb80,param_1 + 0xc74,param_1 + 0xc78);
      local_28 = *(int *)(param_1 + 0xc74);
      iStack_24 = *(int *)(param_1 + 0xc78);
      FUN_0215e150(param_1,&local_28);
      uVar6 = 2;
LAB_0215dff4:
      uVar8 = 0;
      *(undefined4 *)(param_1 + 0xb28) = uVar6;
      goto LAB_0215dfcc;
    }
    local_28 = *(int *)(param_1 + 0xb30) - *(int *)(param_1 + 0xb20);
    iStack_24 = *(int *)(param_1 + 0xb34) - *(int *)(param_1 + 0xb24);
    FUN_0215e150(param_1,&local_28);
    *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_1 + 0xb30);
    *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(param_1 + 0xb34);
    FUN_0215e1a0(param_1 + 0xb80);
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0xc74);
    iVar5 = *(int *)(param_1 + 0xc78);
    iVar3 = -iVar4;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar1 = -iVar5;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    if (iVar3 < 1 && iVar1 < 1) {
LAB_0215dfe8:
      FUN_0215e448(param_1);
      uVar6 = 4;
      goto LAB_0215dff4;
    }
    iVar4 = iVar4 * 0xf;
    iVar5 = iVar5 * 0xf;
    local_28 = iVar4 + 0xf;
    if (-1 < iVar4) {
      local_28 = iVar4;
    }
    iStack_24 = iVar5 + 0xf;
    if (-1 < iVar5) {
      iStack_24 = iVar5;
    }
    local_28 = local_28 >> 4;
    *(int *)(param_1 + 0xc74) = local_28;
    iStack_24 = iStack_24 >> 4;
    *(int *)(param_1 + 0xc78) = iStack_24;
    FUN_0215e150(param_1,&local_28);
    break;
  case 3:
    if (*(char *)(param_1 + 0xb2c) == '\0') goto LAB_0215dfe8;
    local_28 = *(int *)(param_1 + 0xb30);
    iStack_24 = *(int *)(param_1 + 0xb34);
    FUN_0215e494(*(undefined8 *)(param_1 + 0x910),&local_28);
    FUN_0155e4ac(*(undefined8 *)(param_1 + 0x880));
    break;
  case 4:
    if (*(int *)(*(long *)(param_1 + 0x880) + 0x1b8) == 0) {
      fVar9 = *(float *)(*(long *)(param_1 + 0x880) + 0x1d4);
      lVar7 = *(long *)(param_1 + 0x930);
      iVar3 = *(int *)(lVar7 + 0x14);
      piVar2 = (int *)(lVar7 + 0x20);
      if (*(int *)(lVar7 + 0x28) != 0) {
        piVar2 = (int *)(lVar7 + 0x24);
      }
      iVar4 = *piVar2;
      iVar5 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
      lVar7 = *(long *)(param_1 + 0x930);
      if (iVar3 + iVar4 * (int)fVar9 < iVar5) {
        uVar6 = *(undefined4 *)(lVar7 + 0x14);
      }
      else {
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar7 + 0xc);
        uVar6 = FUN_017a4180(*(undefined8 *)(param_1 + 0x930));
      }
      FUN_01327c88(param_1,uVar6,(int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
      *(undefined4 *)(param_1 + 0xb28) = 0;
      goto switchD_0215ded0_default;
    }
    break;
  default:
switchD_0215ded0_default:
    uVar8 = 1;
    goto LAB_0215dfcc;
  }
  uVar8 = 0;
LAB_0215dfcc:
  FUN_01733568(*(undefined8 *)(param_1 + 0x880));
  return uVar8;
}


