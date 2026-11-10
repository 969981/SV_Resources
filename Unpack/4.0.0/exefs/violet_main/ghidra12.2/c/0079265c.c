/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079265c; name: FUN_0079265c
 */


void FUN_0079265c(undefined8 param_1,int *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  undefined4 local_18;
  uint local_14;
  
  if (*param_2 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    bVar1 = 0x40;
    if (param_3 != 0) {
      bVar1 = param_3;
    }
    local_14 = (uint)bVar1;
    iVar2 = nn::socket::SetSockOpt(*param_2,0,4,&local_14,4);
    if (iVar2 < 0) {
      uVar3 = nn::socket::GetLastError();
      uVar4 = 7;
      if ((char)param_2[2] == '\x1c') {
        uVar4 = 8;
      }
      FUN_00792200(param_1,uVar3,uVar4);
      return;
    }
    local_30[0] = 0;
  }
  local_18 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)&local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


