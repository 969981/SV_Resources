/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792140; name: FUN_00792140
 */


void FUN_00792140(undefined8 param_1,int *param_2,char param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == '\x02') {
    *(undefined1 *)(param_2 + 2) = 2;
    iVar1 = nn::socket::Socket(2,param_4,param_5);
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 1;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 2;
      }
      FUN_00792200(param_1,uVar2,uVar3);
      return;
    }
    param_2[3] = param_5;
    *param_2 = iVar1;
    param_2[1] = param_2[1] + 1;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


