/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792300; name: FUN_00792300
 */


void FUN_00792300(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*param_2 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    iVar1 = nn::socket::Close(*param_2);
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = -1;
    param_2[1] = param_2[1] + -1;
    param_2[3] = 0x11;
    param_2[4] = -1;
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 3;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 4;
      }
      FUN_00792200(param_1,uVar2,uVar3);
      return;
    }
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


