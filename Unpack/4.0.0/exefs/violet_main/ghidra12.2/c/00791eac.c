/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00791eac; name: FUN_00791eac
 */


void FUN_00791eac(undefined8 param_1,long param_2,long param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38;
  uint local_34;
  
  piVar3 = local_60;
  if ((param_3 == 0) || (param_4 == (int *)0x0)) {
LAB_00791ef4:
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    iVar1 = FUN_00792118();
    iVar2 = FUN_00791cec();
    if (param_5 < (uint)(iVar2 + iVar1)) goto LAB_00791ef4;
    local_34 = 0;
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_00791fe4(local_60,param_2,param_3,&local_34,param_5);
    FUN_018ff39c(local_50,local_60);
    if (local_50[0] == 0) {
      uVar4 = (ulong)local_34;
      FUN_0078fd58(local_60,param_2 + 0x10,param_3 + uVar4,&local_34,param_5 - local_34);
      FUN_018ff39c(local_50,local_60);
      if (local_50[0] == 0) {
        *param_4 = ((int)(param_3 + uVar4) + local_34) - (int)param_3;
        local_60[0] = 0;
        local_38 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_38);
        goto LAB_00791f18;
      }
    }
  }
  piVar3 = local_50;
LAB_00791f18:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


