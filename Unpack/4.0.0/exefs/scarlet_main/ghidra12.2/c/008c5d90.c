/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c5d90; name: FUN_008c5d90
 */


void FUN_008c5d90(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long local_70;
  long lStack_68;
  
  uVar5 = (ulong)(*(uint *)(param_3 + 0xd0) & ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU)
                 );
  lVar6 = *(long *)(param_1 + 0xd8);
  iVar3 = *(int *)(param_1 + 0xcc);
  local_70 = 0;
  lStack_68 = 0;
  FUN_008f0980(*(long *)(*(long *)(param_2 + 200) + 8) +
               (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = local_70 + lVar6;
  FUN_008f0b9c(param_4,0,&local_70,8,(long)iVar3 << 3);
  lVar6 = *(long *)(param_6 + 0x10);
  iVar3 = *(int *)(param_3 + uVar5 * 0x18 + 0x5c);
  if (-1 < iVar3) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + param_5;
    FUN_008f1150(param_4,iVar3,0,&local_70,0x40);
  }
  iVar3 = *(int *)(param_3 + uVar5 * 0x18 + 0x60);
  if (-1 < iVar3) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar1[1];
    local_70 = *plVar1 + lVar6;
    FUN_008f1150(param_4,iVar3,4,&local_70,0x10);
  }
  FUN_00c5b0c4(param_4,*(long *)(param_2 + 0xb8) + 0x360);
  uVar4 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),1);
  FUN_00c5b260(param_4,uVar4);
  lVar6 = *(long *)(param_1 + 0xe0);
  iVar3 = *(int *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  local_70 = 0;
  lStack_68 = 0;
  FUN_008f0980(*(long *)(*(long *)(param_2 + 200) + 8) +
               (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
  local_70 = lVar6 + (long)iVar3 * 4 + local_70;
  FUN_008f0a30(param_4,3,2,&local_70,uVar2,0);
  if (*(long *)(param_2 + 0x158) != 0) {
    FUN_00c5b0c4(param_4);
  }
  return;
}


