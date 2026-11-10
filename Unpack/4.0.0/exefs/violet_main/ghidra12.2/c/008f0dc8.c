/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0dc8; name: FUN_008f0dc8
 */


void FUN_008f0dc8(long param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  int local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_6c = 0;
  local_74 = 0;
  if (lVar2 == 0) {
    local_70 = (**(code **)PTR_DAT_047d2220)(uVar1);
    bVar3 = false;
  }
  else {
    (**(code **)PTR_DAT_047d2878)(lVar2,&local_6c,auStack_78);
    (**(code **)PTR_DAT_047d2880)(lVar2,&local_70);
    cVar4 = (**(code **)PTR_DAT_047d2888)(lVar2,auStack_7c,&local_74);
    bVar3 = cVar4 == '\x01';
  }
  iVar5 = (**(code **)PTR_DAT_047d2890)(uVar1);
  iVar6 = (**(code **)PTR_DAT_047d2898)(uVar1);
  local_58 = CONCAT44(local_58._4_4_,iVar6);
  iVar7 = (**(code **)PTR_DAT_047d28a0)(uVar1);
  iVar5 = iVar5 >> (local_6c & 0x1f);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  local_60 = CONCAT44(iVar5,(undefined4)local_60);
  if ((local_70 == 0) || (local_70 == 3)) {
LAB_008f0f24:
    local_58._4_4_ = iVar7;
    if (param_4 == (undefined4 *)0x0) {
      if (!bVar3) goto LAB_008f0f8c;
      if (local_70 == 3) {
        local_58._0_4_ = local_74;
        goto LAB_008f0f8c;
      }
      if ((local_70 & 0xfffffffd) != 4) goto LAB_008f0f8c;
      goto LAB_008f0f84;
    }
    if (local_70 == 3) {
      local_68 = CONCAT44(*param_4,(undefined4)local_68);
      local_58._0_4_ = param_4[1];
      goto LAB_008f0f8c;
    }
    if ((local_70 & 0xfffffffd) != 4) goto LAB_008f0f8c;
    local_60 = CONCAT44(iVar5,*param_4);
    local_58._4_4_ = param_4[1];
  }
  else {
    local_58._0_4_ = iVar6 >> (local_6c & 0x1f);
    if ((int)local_58 < 2) {
      local_58._0_4_ = 1;
    }
    if (local_70 != 2) goto LAB_008f0f24;
    local_58._4_4_ = iVar7 >> (local_6c & 0x1f);
    if (local_58._4_4_ < 2) {
      local_58._4_4_ = 1;
    }
    if (!bVar3) goto LAB_008f0f8c;
LAB_008f0f84:
    local_58._4_4_ = local_74;
  }
LAB_008f0f8c:
  (**(code **)PTR_DAT_047d28a8)(*(undefined8 *)(param_1 + 0xb0),uVar1,lVar2,&local_68,param_3,0xf);
  return;
}


