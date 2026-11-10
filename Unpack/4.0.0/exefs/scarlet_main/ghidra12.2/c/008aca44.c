/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008aca44; name: FUN_008aca44
 */


void FUN_008aca44(long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long local_88 [4];
  long lStack_68;
  
  lVar14 = param_1 + (param_4 & 0xffffffff) * 4;
  iVar8 = *(int *)(lVar14 + 0x9c);
  iVar5 = *(int *)(lVar14 + 0xcc);
  iVar2 = *(int *)(lVar14 + 0xa8);
  iVar9 = *(int *)(lVar14 + 0xc0);
  if (*(long *)(param_1 + 8) == 0) {
    lVar14 = *(long *)(param_1 + 0x68);
  }
  else {
    lVar14 = *(long *)(param_1 + 0x48);
  }
  local_88[0] = *(long *)(param_1 + 0x78) + 0x40;
  lVar10 = *(long *)(param_1 + 0xe0);
  local_88[1] = 0;
  lVar12 = param_1 + (long)iVar5 * 4;
  local_88[2] = 0;
  FUN_008f0dc8(param_3,local_88[0],local_88 + 1,0);
  FUN_00c6cfb4(param_3,1,local_88,0);
  FUN_00d8d198(param_3,*(long *)(param_1 + 0x78) + 0x88);
  uVar1 = *(uint *)(lVar12 + 0xe8);
  FUN_008b5350(param_2,param_3,lVar10,uVar1);
  puVar6 = (undefined8 *)FUN_00893db0(*(undefined8 *)(param_2 + 0xb8),0x24);
  local_90 = *puVar6;
  lVar13 = *(long *)(lVar10 + 0x30);
  iVar4 = FUN_008947b8(lVar10);
  FUN_00c5afc0(param_3,*(undefined4 *)(lVar13 + (long)(int)(iVar4 * (uVar1 & 0xff)) * 4),4,
               lVar14 + 8,&local_90);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_98 = plVar11[1];
  local_a0 = *plVar11 + (long)iVar9;
  iVar9 = *(int *)(lVar12 + 0x180);
  if (-1 < iVar9) {
    FUN_008f1150(param_3,iVar9,4,&local_a0,0xe0);
  }
  uVar7 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),1);
  FUN_00c5b260(param_3,uVar7);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar11[1];
  local_88[3] = *plVar11 + (long)iVar8;
  lVar14 = *(long *)(param_2 + 0xb8);
  FUN_008f1150(param_3,*(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar1 * 4),0,
               local_88 + 3,0x230);
  FUN_008f0a30(param_3,3,1,lVar14 + 0x248,6,0);
  FUN_00d8d070(param_3,0x80);
  FUN_008f110c(param_3,0x20);
  FUN_00892e3c(param_2,param_3);
  plVar11 = (long *)(param_1 + 0x58);
  bVar3 = (param_6 & 1) == 0;
  iVar8 = 0x10;
  if (bVar3) {
    iVar8 = 8;
  }
  iVar9 = 0xc;
  if (bVar3) {
    iVar9 = 4;
  }
  if (param_5 != 4) {
    iVar8 = iVar9;
  }
  if ((*(byte *)(*plVar11 + 8) & 0x40) != 0) {
    iVar8 = iVar8 + 0x10;
  }
  iVar8 = iVar8 + iVar5;
  uVar1 = *(uint *)((long)plVar11 + (long)iVar8 * 4 + 0x90);
  FUN_008b5350(param_2,param_3,lVar10,uVar1);
  lVar14 = *(long *)(lVar10 + 0x30);
  iVar5 = FUN_008947b8(lVar10);
  FUN_00c5afc0(param_3,*(undefined4 *)(lVar14 + (long)(int)(iVar5 * (uVar1 & 0xff)) * 4),4,
               *(long *)(param_1 + 0x78) + 8,&local_90);
  if ((*(byte *)(*plVar11 + 8) >> 3 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(lVar10 + 0x30);
    iVar5 = FUN_008947b8(lVar10);
    lVar14 = 0x68;
    if (lVar12 != 0) {
      lVar14 = 0x48;
    }
    FUN_00c5afc0(param_3,*(undefined4 *)(lVar13 + (long)(int)(iVar5 * (uVar1 & 0xff)) * 4 + 4),4,
                 *(long *)(param_1 + lVar14) + 8,&local_90);
  }
  iVar8 = *(int *)(param_1 + (long)iVar8 * 4 + 0x180);
  if (-1 < iVar8) {
    FUN_008f1150(param_3,iVar8,4,&local_a0,0xe0);
  }
  uVar7 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),param_5);
  FUN_00c5b260(param_3,uVar7);
  plVar11 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                    (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar11[1];
  local_88[3] = *plVar11 + (long)iVar2;
  lVar14 = *(long *)(param_2 + 0xb8);
  FUN_008f1150(param_3,*(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar1 * 4),0,
               local_88 + 3,0x230);
  FUN_008f0a30(param_3,3,1,lVar14 + 0x248,6,0);
  return;
}


