/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7e10; name: FUN_007f7e10
 */


void FUN_007f7e10(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 auStack_90 [16];
  undefined4 local_80 [8];
  int local_60 [8];
  int local_40 [4];
  
  lVar1 = param_2 + 8;
  lVar2 = FUN_007eaea0(lVar1,0);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x648) == '\0')) {
    FUN_007eaf04(lVar1);
    local_60[0] = 0x2c09;
    local_80[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
    piVar4 = local_60;
  }
  else {
    *(int *)(param_2 + 0x708) = *(int *)(param_2 + 0x708) + 1;
    *(ulong *)(param_2 + 0x710) = *(long *)(param_2 + 0x710) + (ulong)*(uint *)(lVar2 + 0x5f8);
    local_40[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
    FUN_0284e338(local_60);
    FUN_0284e338(local_80);
    uVar3 = FUN_007fab18(param_2,local_60,local_80);
    FUN_0284e3d4(local_80);
    FUN_0284e3d4(local_60);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(lVar2 + 0x648) = 0;
    }
    if (*(long *)(param_2 + 200) == 0) {
      (**(code **)(**(long **)(param_2 + 0x700) + 0x38))(local_60,*(long **)(param_2 + 0x700),lVar2)
      ;
    }
    else {
      FUN_007f86d8(local_60,*(long *)(param_2 + 200),lVar2);
    }
    FUN_018ff39c(local_40,local_60);
    FUN_00cbd7c0(auStack_90,local_40);
    uVar3 = FUN_00792cac(auStack_90);
    if (((uVar3 & 1) != 0) && (*(char *)(lVar2 + 0x624) != '\0')) {
      local_60[0] = 0;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
      FUN_018ff39c(local_40,local_60);
    }
    if (local_40[0] == 0) {
      FUN_007eaf50(lVar1);
    }
    else {
      local_60[0] = 0x4c0d;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
    }
    piVar4 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


