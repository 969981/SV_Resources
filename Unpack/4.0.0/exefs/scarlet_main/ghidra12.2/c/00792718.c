/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792718; name: FUN_00792718
 */


void FUN_00792718(undefined8 param_1,int *param_2,uint param_3)

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
    iVar1 = nn::socket::SetSockOpt(*param_2,0xffff,0x200,&local_14,4);
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 0xe;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 0xf;
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


