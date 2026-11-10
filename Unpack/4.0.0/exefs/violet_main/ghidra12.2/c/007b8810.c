/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b8810; name: FUN_007b8810
 */


void FUN_007b8810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6,uint param_7,short *param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined4 local_a0 [4];
  undefined4 local_90 [6];
  short local_78;
  int local_70 [4];
  
  local_70[0] = 0;
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_90);
  uVar1 = (param_7 - param_6 & 0xffff) + 1;
  if (uVar1 >> 0x10 == 0) {
    uVar4 = 0;
    do {
      FUN_00792140(local_90,param_3,2,2,0x11);
      FUN_018ff39c(local_70,local_90);
      if (local_70[0] != 0) break;
      uVar2 = uVar1;
      if ((uVar4 + param_5 & 0xffff) <= (param_7 & 0xffff)) {
        uVar2 = 0;
      }
      sVar3 = (short)(uVar4 + param_5) - (short)uVar2;
      FUN_0284e338(local_90);
      local_78 = sVar3;
      FUN_007923b4(local_a0,param_3,local_90,0xffffffff,param_9 & 1);
      FUN_018ff39c(local_70,local_a0);
      if (local_70[0] == 0) {
        FUN_0284e3d4(local_90);
        *param_8 = sVar3;
        local_90[0] = 0;
        goto LAB_007b893c;
      }
      FUN_00792300(local_a0,param_3);
      FUN_018ff39c(local_70,local_a0);
      FUN_0284e3d4(local_90);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffff) < (uVar1 & 0xffff));
  }
  local_90[0] = 0x10408;
LAB_007b893c:
  local_a0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_a0);
  FUN_00cbd7c0(param_1,local_90);
  return;
}


