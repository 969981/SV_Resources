/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b8614; name: FUN_007b8614
 */


void FUN_007b8614(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,ulong param_7)

{
  undefined8 uVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  int local_60 [4];
  int local_50 [4];
  uint local_38;
  undefined2 local_34;
  
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_0284e39c(param_2 + 0x1218,param_3);
  uVar1 = FUN_0284e39c(param_2 + 0x1238,param_4);
  uVar3 = 0xc000;
  *(undefined2 *)(param_2 + 0x12c4) = 0xc000;
  sVar4 = -0x7748;
  *(undefined2 *)(param_2 + 0x12c8) = 40000;
  *(undefined2 *)(param_2 + 0x12cc) = 35000;
  if ((param_7 & 1) != 0) {
    uVar3 = *(short *)(*(long *)PTR_DAT_047d0860 + 0x50) + 0xbfff;
    sVar4 = *(short *)(*(long *)PTR_DAT_047d0860 + 0x50) + -0x7749;
  }
  *(ushort *)(param_2 + 0x12c6) = uVar3;
  *(short *)(param_2 + 0x12ce) = sVar4;
  *(undefined2 *)(param_2 + 0x12ca) = 40000;
  sVar4 = 0;
  if ((ushort)(DAT_047f9e84 + 1) + 0xc000 <= (uint)uVar3) {
    sVar4 = DAT_047f9e84 + 1;
  }
  DAT_047f9e84 = sVar4;
  local_34 = 0;
  FUN_007b8810(local_60,uVar1,param_2 + 0x11cc);
  uVar1 = FUN_018ff39c(local_50,local_60);
  if (local_50[0] == 0) {
    *(undefined2 *)(param_2 + 0x1230) = local_34;
    if ((param_6 & 1) != 0) {
      local_38 = local_38 & 0xffff0000;
      FUN_007b8810(local_60,uVar1,param_2 + 0x11e0);
      uVar1 = FUN_018ff39c(local_50,local_60);
      if (local_50[0] == 0) {
        *(undefined2 *)(param_2 + 0x1250) = (undefined2)local_38;
        uVar1 = FUN_007968fc(param_2 + 0x68,param_2 + 0x1238);
        *(undefined1 *)(param_2 + 0x1190) = 1;
      }
    }
    FUN_007b8810(local_60,uVar1,param_2 + 0x11f4);
    FUN_018ff39c(local_50,local_60);
    if (local_50[0] == 0) {
      *(undefined2 *)(param_2 + 0x1210) = 0;
      local_60[0] = 0;
      local_38 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_38);
      piVar2 = local_60;
      goto LAB_007b87cc;
    }
  }
  piVar2 = local_50;
LAB_007b87cc:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


