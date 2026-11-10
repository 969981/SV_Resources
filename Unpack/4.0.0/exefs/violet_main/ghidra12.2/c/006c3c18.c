/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c3c18; name: FUN_006c3c18
 */


long FUN_006c3c18(long param_1,byte *param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  sockaddr *psVar5;
  long lVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  psVar5 = (sockaddr *)FUN_006c3a48(param_3);
  uVar3 = FUN_006c3a4c(param_3);
  lVar6 = nn::socket::SendTo(iVar4,pbVar2,uVar1,param_4,psVar5,uVar3);
  if (-1 < lVar6) {
    return lVar6;
  }
  iVar4 = nn::socket::GetLastErrno();
  if (iVar4 != 0x16) {
    if (iVar4 == 0xb) {
      uVar7 = 2;
      goto joined_r0x006c3cb8;
    }
    if (iVar4 != 9) {
      uVar7 = 1;
      goto joined_r0x006c3cb8;
    }
  }
  uVar7 = 3;
joined_r0x006c3cb8:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar7;
  }
  return 0;
}


