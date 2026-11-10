/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007925bc; name: FUN_007925bc
 */


void FUN_007925bc(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 < 0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 8) == '\x02') {
      local_28[0] = 1;
      iVar1 = nn::socket::SetSockOpt(param_3,0xffff,0x20,local_28,4);
      if (iVar1 < 0) {
        uVar2 = nn::socket::GetLastError();
        FUN_00792200(param_1,uVar2,9);
        return;
      }
    }
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


