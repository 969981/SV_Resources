/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008aaf7c; name: FUN_008aaf7c
 */


void FUN_008aaf7c(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lVar5 = *(long *)(param_1 + 0x58);
  puVar10 = (uint *)(param_1 + 0x17c);
  uVar7 = (uint)*(byte *)(lVar5 + 8);
  puVar1 = (uint *)(param_1 + 0x178);
  if (((*(byte *)(lVar5 + 8) >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) {
    switch(*(undefined1 *)(lVar5 + 0xf)) {
    case 1:
      uVar8 = 4;
      puVar6 = puVar10;
      goto LAB_008ab018;
    case 2:
      uVar8 = 2;
      break;
    case 3:
      uVar8 = 3;
      break;
    case 4:
      uVar8 = 5;
      break;
    default:
      uVar8 = 0;
    }
    puVar6 = puVar1;
LAB_008ab018:
    uVar7 = *puVar6;
    lVar9 = *(long *)(param_1 + 0xe0);
    FUN_008b5350(param_2,param_3,lVar9,uVar7);
    puVar4 = (undefined8 *)FUN_00893d90(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar4;
    lVar5 = *(long *)(lVar9 + 0x30);
    iVar3 = FUN_008947b8(lVar9);
    FUN_00c5afc0(param_3,*(undefined4 *)(lVar5 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
                 *(long *)(param_1 + 0x90) + 8,&local_78);
    uVar8 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),uVar8);
    FUN_00c5b260(param_3,uVar8);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xbc);
    lVar5 = *(long *)(param_2 + 0xb8);
    FUN_008f1150(param_3,*(undefined4 *)(*(long *)(lVar9 + 0x18) + (long)(int)uVar7 * 4),0,&local_70
                 ,0x230);
    FUN_008f0a30(param_3,3,1,lVar5 + 0x248,6,0);
    lVar5 = *(long *)(param_1 + 0x58);
    uVar7 = (uint)*(byte *)(lVar5 + 8);
  }
  if (((uVar7 >> 1 & 1) == 0) || (*(int *)(param_1 + 0xd0) < 0)) goto LAB_008ab258;
  switch(*(undefined1 *)(lVar5 + 0xe)) {
  case 1:
    uVar8 = 4;
    puVar6 = puVar10;
    goto LAB_008ab168;
  case 2:
    uVar8 = 2;
    break;
  case 3:
    uVar8 = 3;
    break;
  case 4:
    uVar8 = 5;
    break;
  default:
    uVar8 = 0;
  }
  puVar6 = puVar1;
LAB_008ab168:
  uVar7 = *puVar6;
  lVar9 = *(long *)(param_1 + 0xe0);
  FUN_008b5350(param_2,param_3,lVar9,uVar7);
  puVar4 = (undefined8 *)FUN_00893d90(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
  local_78 = *puVar4;
  lVar5 = *(long *)(lVar9 + 0x30);
  iVar3 = FUN_008947b8(lVar9);
  FUN_00c5afc0(param_3,*(undefined4 *)(lVar5 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
               *(long *)(param_1 + 0x88) + 8,&local_78);
  uVar8 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),uVar8);
  FUN_00c5b260(param_3,uVar8);
  plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar2[1];
  local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb8);
  lVar5 = *(long *)(param_2 + 0xb8);
  FUN_008f1150(param_3,*(undefined4 *)(*(long *)(lVar9 + 0x18) + (long)(int)uVar7 * 4),0,&local_70,
               0x230);
  FUN_008f0a30(param_3,3,1,lVar5 + 0x248,6,0);
  lVar5 = *(long *)(param_1 + 0x58);
  uVar7 = (uint)*(byte *)(lVar5 + 8);
LAB_008ab258:
  if (((uVar7 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) {
    switch(*(undefined1 *)(lVar5 + 0xd)) {
    case 1:
      uVar8 = 4;
      break;
    case 2:
      uVar8 = 2;
      puVar10 = puVar1;
      break;
    case 3:
      uVar8 = 3;
      puVar10 = puVar1;
      break;
    case 4:
      uVar8 = 5;
      puVar10 = puVar1;
      break;
    default:
      uVar8 = 0;
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    lVar9 = *(long *)(param_1 + 0xe0);
    FUN_008b5350(param_2,param_3,lVar9,uVar7);
    puVar4 = (undefined8 *)FUN_00893d90(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar4;
    lVar5 = *(long *)(lVar9 + 0x30);
    iVar3 = FUN_008947b8(lVar9);
    FUN_00c5afc0(param_3,*(undefined4 *)(lVar5 + (long)(int)(iVar3 * (uVar7 & 0xff)) * 4),4,
                 *(long *)(param_1 + 0x80) + 8,&local_78);
    uVar8 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),uVar8);
    FUN_00c5b260(param_3,uVar8);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb4);
    lVar5 = *(long *)(param_2 + 0xb8);
    FUN_008f1150(param_3,*(undefined4 *)(*(long *)(lVar9 + 0x18) + (long)(int)uVar7 * 4),0,&local_70
                 ,0x230);
    FUN_008f0a30(param_3,3,1,lVar5 + 0x248,6,0);
  }
  return;
}


