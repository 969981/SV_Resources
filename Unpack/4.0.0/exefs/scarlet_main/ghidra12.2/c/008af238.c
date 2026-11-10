/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008af238; name: FUN_008af238
 */


void FUN_008af238(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  uVar2 = *(byte *)(param_4 + 10) - 1;
  if (uVar2 < 3) {
    uVar5 = *(undefined4 *)(&DAT_03d0fa7c + (long)(char)uVar2 * 4);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),uVar5);
  FUN_00c5b260(param_3,uVar3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0xc);
  lVar4 = FUN_0113ca0c(param_1);
  lVar6 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_0113ca0c(param_1);
  FUN_008f1150(param_3,*(undefined4 *)
                        (*(long *)(lVar6 + 0x18) + (ulong)*(ushort *)(lVar4 + 0x4a) * 4),0,&local_50
               ,0x230);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0x10);
  FUN_008f1150(param_3,*(undefined4 *)(param_5 + 4),4,&local_50,0x120);
  FUN_00892cd0(param_3,param_2);
  uVar3 = FUN_0113ca0c(param_1);
  FUN_008a5cd4(uVar3,param_3);
  uVar3 = FUN_0113ca0c(param_1);
  FUN_008a5950(uVar3,param_3,param_2);
  return;
}


