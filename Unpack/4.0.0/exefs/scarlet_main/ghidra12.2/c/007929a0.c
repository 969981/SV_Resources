/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007929a0; name: FUN_007929a0
 */


void FUN_007929a0(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [32];
  undefined4 local_48 [2];
  
  puVar7 = local_e0;
  cVar2 = (char)param_2[2];
  if (cVar2 == '\x02') {
    uVar4 = FUN_0078b1a8(param_5);
    if ((uVar4 & 1) == 0) {
      local_d0[0] = 0xc47f;
      local_e0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)local_e0);
      puVar7 = local_d0;
      goto LAB_00792a98;
    }
    cVar2 = (char)param_2[2];
  }
  iVar1 = param_2[4];
  FUN_00792d6c(local_d0);
  FUN_00792d78(local_d0,param_5,cVar2,iVar1);
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_e0[0] = 0x10407;
  }
  else {
    uVar5 = FUN_00792e28(local_d0);
    lVar6 = nn::socket::SendTo(iVar1,param_3,(long)param_4,0,uVar5,0x10);
    if (lVar6 < 0) {
      uVar3 = nn::socket::GetLastError();
      uVar8 = 0x1a;
      if ((char)param_2[2] == '\x1c') {
        uVar8 = 0x1b;
      }
      FUN_00792ae0(param_1,uVar3,uVar8);
      return;
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (int)lVar6;
    }
    local_e0[0] = 0;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_e0 | 4),(Result *)local_48);
LAB_00792a98:
  FUN_00cbd7c0(param_1,puVar7);
  return;
}


