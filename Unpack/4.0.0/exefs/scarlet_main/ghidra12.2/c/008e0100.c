/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e0100; name: FUN_008e0100
 */


undefined8
FUN_008e0100(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_5 + 0x28) != 0) {
    iVar1 = *(int *)(param_4 + 0x128);
    if (*(int *)(param_4 + 0x124) != -1) {
      FUN_008f1150(param_2,*(int *)(param_4 + 0x124),0,*(long *)(param_5 + 0x28),0x140);
    }
    if (iVar1 != -1) {
      FUN_008f1150(param_2,iVar1,4,*(undefined8 *)(param_5 + 0x28),0x140);
    }
  }
  lVar2 = *(long *)(param_3 + 0x6d8);
  uStack_48 = *(undefined8 *)(lVar2 + 0x198);
  local_50 = (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x30) * 8 + 0x6c0) -
             *(long *)(lVar2 + 0x1a8)) + *(long *)(lVar2 + 400);
  iVar1 = *(int *)(param_4 + 0x138);
  if (*(int *)(param_4 + 0x134) != -1) {
    FUN_008f1150(param_2,*(int *)(param_4 + 0x134),0,&local_50,0xc0);
  }
  if (iVar1 != -1) {
    FUN_008f1150(param_2,iVar1,4,&local_50,0xc0);
  }
  lVar2 = *(long *)(*(long *)(param_3 + 0x238) + 0x20);
  uStack_48 = *(undefined8 *)(lVar2 + 0x198);
  local_50 = *(long *)(lVar2 + 400) + *(long *)(*(long *)(param_3 + 0x238) + 0x28);
  iVar1 = *(int *)(param_4 + 0x130);
  if (*(int *)(param_4 + 300) != -1) {
    FUN_008f1150(param_2,*(int *)(param_4 + 300),0,&local_50,0x750);
  }
  if (iVar1 != -1) {
    FUN_008f1150(param_2,iVar1,4,&local_50,0x750);
  }
  return 1;
}


