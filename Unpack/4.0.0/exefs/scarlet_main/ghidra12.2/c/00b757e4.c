/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b757e4; name: FUN_00b757e4
 */


void FUN_00b757e4(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00b75844;
    pbVar3 = pbVar3 + 1;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(pbVar3 + 8);
    if (uVar2 == 0) goto LAB_00b75844;
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_00c0d914(pbVar3,uVar2,1,"SaturdayBleSendCompleteProto.nonce");
  FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x18),param_2);
LAB_00b75844:
  pbVar3 = *(byte **)(param_1 + 0x20);
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
  FUN_00c0d914(pbVar3,uVar2,1,"SaturdayBleSendCompleteProto.application_id");
  FUN_00c0c288(2,*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}


