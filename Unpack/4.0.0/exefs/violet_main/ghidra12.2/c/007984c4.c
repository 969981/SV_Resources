/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007984c4; name: FUN_007984c4
 */


void FUN_007984c4(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_28 [2];
  
  if (param_3 == (void *)0x0) {
    uVar3 = 0x10407;
  }
  else if (param_4 < 0x10) {
    uVar3 = 0x10404;
  }
  else {
    if (((ushort *)param_2[4] != (ushort *)0x0) && ((int)param_2[5] != 0)) {
      uVar2 = (uint)*(ushort *)param_2[4];
      uVar2 = ((uVar2 & 0xff00) << 8 | uVar2 << 0x18) >> 0x10;
      uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
      if ((uVar2 - 1 < uVar1) && (uVar2 <= *(uint *)(param_2 + 5))) {
        memcpy(param_3,(void *)(param_2[4] + 5),0x10);
        local_40 = (ulong)local_40._4_4_ << 0x20;
      }
      else {
        local_38 = 0;
        local_40 = 0x40;
        (**(code **)(*param_2 + 0x50))(param_2,&local_40);
        local_40 = CONCAT44(local_40._4_4_,0x10408);
      }
      goto LAB_0079859c;
    }
    uVar3 = 0x10408;
  }
  local_40 = CONCAT44(local_40._4_4_,uVar3);
LAB_0079859c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,&local_40);
  return;
}


