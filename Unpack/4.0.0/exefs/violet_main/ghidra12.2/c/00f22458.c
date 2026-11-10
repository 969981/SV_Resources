/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f22458; name: FUN_00f22458
 */


void FUN_00f22458(undefined8 param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
                 byte param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *local_bc0 [2];
  undefined *local_bb0;
  short local_ba8;
  undefined1 local_ba6;
  ulong local_ba4;
  undefined1 auStack_b9c [1436];
  undefined4 local_600 [360];
  int local_60 [4];
  undefined4 local_48;
  undefined4 local_44;
  
  ppuVar2 = local_bc0;
  FUN_00f222d4(local_60);
  if (local_60[0] == 0) {
    if (((param_4 == 0) || (param_5 == 0)) || (param_6 == 0xff)) {
      local_bb0 = (undefined *)CONCAT44(local_bb0._4_4_,0x10407);
      local_600[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_bb0 | 4),(Result *)local_600);
      ppuVar2 = &local_bb0;
    }
    else {
      local_ba8 = 0;
      local_ba6 = 0;
      local_bb0 = PTR_DAT_047d1558 + 0x10;
      local_ba4 = 0;
      memset(auStack_b9c,0,0x595);
      local_ba8 = (ushort)param_6 << 8;
      local_ba4 = (ulong)param_5;
      FUN_007f60e8(local_bc0,&local_bb0,local_600,&local_44,0x5a0);
      FUN_007e6344(local_bc0,param_2,param_3,local_600,local_44);
      FUN_018ff39c(local_60,local_bc0);
      *(undefined4 *)(param_2 + 0xa0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x78) = 0;
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined2 *)(param_2 + 0xb8) = 0;
      *(undefined2 *)(param_2 + 0xa4) = 0xffff;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      puVar1 = PTR_DAT_047d0860;
      *(undefined1 *)(param_2 + 0xba) = 0;
      if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
        uVar3 = 0;
        do {
          *(undefined1 *)(*(long *)(param_2 + 0x98) + uVar3) = 0xff;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(*(long *)puVar1 + 0x50));
      }
      *(long *)(param_2 + 0x88) = param_4;
      *(uint *)(param_2 + 0x90) = param_5;
      *(undefined1 *)(param_2 + 0x78) = 4;
      *(byte *)(param_2 + 0xa5) = param_6;
      *(undefined8 *)(param_2 + 0xb0) = param_3;
      local_bc0[0]._0_4_ = 0;
      local_48 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_bc0 | 4),(Result *)&local_48);
    }
  }
  else {
    ppuVar2 = (undefined **)local_60;
  }
  FUN_00cbd7c0(param_1,ppuVar2);
  return;
}


