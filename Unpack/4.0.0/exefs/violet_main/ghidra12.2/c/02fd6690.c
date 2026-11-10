/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fd6690; name: FUN_02fd6690
 */


void FUN_02fd6690(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 uVar10;
  long *local_88;
  long local_80;
  undefined8 *local_78;
  uint *local_70;
  uint local_68;
  uint local_64;
  long local_50;
  long lStack_48;
  undefined8 local_28;
  
  lVar8 = *(long *)(param_2 + 2);
  lStack_48 = lVar8 + 0x530;
  lVar6 = *(long *)(lVar8 + 0x500);
  local_50 = 0;
  if (*(char *)(lVar6 + 0xaa0) != '\0') {
    local_50 = lVar6 + 0xab0;
  }
  bVar4 = *(int *)(param_1 + 0x38) != 1;
  if (bVar4) {
    lVar6 = lVar6 + 0x980;
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x4b0) + 0x20);
    local_78 = *(undefined8 **)(param_2 + 0x138);
    lVar8 = lVar7 + 0x10;
    lVar7 = *(long *)(lVar7 + 0x100) + (long)*param_2 * 0x500;
    local_70 = *(uint **)(*(long *)(lVar7 + 0x110) + (long)*(int *)(lVar7 + 0x118) * 8 + -8);
    local_80 = lVar7 + 0x100;
    local_68 = *local_70 >> 0x10;
    local_64 = *local_70 & 0xffff;
    *(uint *)(lVar7 + 0x108) = *(int *)(lVar7 + 0x108) - (*local_70 & 0xffff);
    local_88 = &local_80;
    (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x30))
              (*(long **)(*(long *)(param_2 + 2) + 0x658),1,&local_28);
    (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x40))
              (*(long **)(*(long *)(param_2 + 2) + 0x658),&local_28,&local_88,1);
    param_1 = param_1 + 0x4c;
  }
  else {
    lVar6 = lVar6 + 0x960;
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    uVar10 = *(undefined4 *)(*(long *)(lVar8 + 0x4b0) + 0x1c);
    local_78 = *(undefined8 **)(param_2 + 0x138);
    lVar8 = lVar7 + 0x60;
    lVar7 = *(long *)(lVar7 + 0x100) + (long)*param_2 * 0x500;
    local_70 = *(uint **)(*(long *)(lVar7 + 0x210) + (long)*(int *)(lVar7 + 0x218) * 8 + -8);
    local_80 = lVar7 + 0x200;
    local_68 = *local_70 >> 0x10;
    local_64 = *local_70 & 0xffff;
    *(uint *)(lVar7 + 0x208) = *(int *)(lVar7 + 0x208) - (*local_70 & 0xffff);
    local_88 = &local_80;
    (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x30))
              (*(long **)(*(long *)(param_2 + 2) + 0x658),1,&local_28);
    (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x40))
              (*(long **)(*(long *)(param_2 + 2) + 0x658),&local_28,&local_88,1);
    param_1 = param_1 + 0x48;
  }
  FUN_02fd6220(param_2,&local_50,lVar6,!bVar4,lVar8,&local_80,local_28,uVar10,param_1);
  puVar3 = local_78;
  if (local_64 == 0) {
    piVar9 = (int *)(local_80 + 0x18);
    iVar1 = *piVar9;
    if (iVar1 < 2) goto LAB_02fd690c;
    iVar2 = *(int *)(local_78 + 0xb);
    lVar8 = *(long *)(*(long *)(local_80 + 0x10) + (long)(iVar1 + -2) * 8);
    lVar6 = local_78[1];
    *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(local_80 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(local_78 + 0xb) = iVar2 + 1;
    if (*(int *)((long)local_78 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*local_78 + 0x28))((long *)*local_78,lVar6 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar3 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar5 = 0xffffffff;
  }
  else {
LAB_02fd690c:
    piVar9 = (int *)(local_80 + 8);
    local_70[2] = 0;
    local_70[3] = 0;
    *local_70 = *local_70 & 0xffff0000 | local_64 & 0xffff;
    *local_70 = *local_70 & 0xffff | local_68 << 0x10;
    uVar5 = local_64;
  }
  *piVar9 = *piVar9 + uVar5;
  local_80 = 0;
  local_70 = (uint *)0x0;
  (**(code **)(**(long **)(*(long *)(param_2 + 2) + 0x658) + 0x38))
            (*(long **)(*(long *)(param_2 + 2) + 0x658),&local_28,1);
  puVar3 = local_78;
  if (local_80 == 0) {
    return;
  }
  if (local_64 == 0) {
    piVar9 = (int *)(local_80 + 0x18);
    iVar1 = *piVar9;
    if (1 < iVar1) {
      iVar2 = *(int *)(local_78 + 0xb);
      lVar8 = *(long *)(*(long *)(local_80 + 0x10) + (long)(iVar1 + -2) * 8);
      lVar6 = local_78[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(local_80 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(local_78 + 0xb) = iVar2 + 1;
      if (*(int *)((long)local_78 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*local_78 + 0x28))((long *)*local_78,lVar6 + (long)(iVar2 + -5) * 8,6)
        ;
        *(int *)(puVar3 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      local_64 = 0xffffffff;
      goto LAB_02fd6a0c;
    }
  }
  piVar9 = (int *)(local_80 + 8);
  local_70[2] = 0;
  local_70[3] = 0;
  *local_70 = *local_70 & 0xffff0000 | local_64 & 0xffff;
  *local_70 = *local_70 & 0xffff | local_68 << 0x10;
LAB_02fd6a0c:
  *piVar9 = *piVar9 + local_64;
  return;
}


