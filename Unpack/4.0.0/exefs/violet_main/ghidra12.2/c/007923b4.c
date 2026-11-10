/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007923b4; name: FUN_007923b4
 */


void FUN_007923b4(int *param_1,int *param_2,undefined8 param_3,int param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  SockAddr *pSVar4;
  ulong *puVar5;
  undefined4 uVar6;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 local_c0 [32];
  undefined4 local_38 [2];
  
  puVar5 = &local_d0;
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_c0[0] = 0x10407;
    local_d0 = local_d0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_c0 | 4),(Result *)&local_d0);
    puVar5 = (ulong *)local_c0;
  }
  else {
    FUN_0078a324(param_3);
    if (((param_5 & 1) != 0) && (FUN_0079250c(param_1,param_2,1), *param_1 != 0)) {
      return;
    }
    iVar2 = param_2[2];
    FUN_00792d6c(local_c0);
    FUN_00792d78(local_c0,param_3,(char)iVar2,param_4);
    local_c8 = 0;
    local_d0 = 4;
    FUN_00792e2c(local_c0,&local_d0);
    pSVar4 = (SockAddr *)FUN_00792e28(local_c0);
    iVar2 = nn::socket::Bind(iVar1,pSVar4,0x10);
    if (iVar2 < 0) {
      uVar3 = nn::socket::GetLastError();
      uVar6 = 5;
      if ((char)param_2[2] == '\x1c') {
        uVar6 = 6;
      }
      FUN_00792200(param_1,uVar3,uVar6);
      return;
    }
    if ((param_2[3] != 6) && (FUN_007925bc(param_1,param_2,iVar1), *param_1 != 0)) {
      return;
    }
    param_2[4] = param_4;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)local_38);
  }
  FUN_00cbd7c0(param_1,puVar5);
  return;
}


