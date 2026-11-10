/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079250c; name: FUN_0079250c
 */


void FUN_0079250c(undefined8 param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30 [4];
  undefined4 local_18;
  uint local_14;
  
  if (*param_2 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    local_14 = param_3 & 1;
    iVar1 = nn::socket::SetSockOpt(*param_2,0xffff,4,&local_14,4);
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 0xc;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 0xd;
      }
      FUN_00792200(param_1,uVar2,uVar3);
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


