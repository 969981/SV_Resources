/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b70aa8; name: FUN_00b70aa8
 */


void FUN_00b70aa8(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00c0bbcc(1,*(int *)(param_1 + 0x30),param_2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(int *)(param_2 + 0x10) < 5) {
      FUN_00c0987c(param_2,0x10);
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0x10;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
    }
    FUN_00c0998c(param_2,lVar4);
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00b70b74;
    pbVar3 = pbVar3 + 1;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(pbVar3 + 8);
    if (uVar2 == 0) goto LAB_00b70b74;
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_00c0d914(pbVar3,uVar2,1,"SaturdayBleSendPrepProto.application_id");
  FUN_00c0c288(3,*(undefined8 *)(param_1 + 0x20),param_2);
LAB_00b70b74:
  pbVar3 = *(byte **)(param_1 + 0x28);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return;
    }
    pbVar3 = pbVar3 + 1;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(pbVar3 + 8);
    if (uVar2 == 0) {
      return;
    }
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_00c0d914(pbVar3,uVar2,1,"SaturdayBleSendPrepProto.nonce");
  FUN_00c0c288(4,*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}


