/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d59b4; name: FUN_007d59b4
 */


void FUN_007d59b4(undefined8 param_1,long param_2,ulong *param_3,int *param_4,uint param_5)

{
  ulong uVar1;
  int *piVar2;
  int local_60 [5];
  int local_4c;
  int local_48 [4];
  undefined4 local_38 [2];
  
  piVar2 = local_60;
  if (((param_3 == (ulong *)0x0) || (param_4 == (int *)0x0)) || (param_5 < 0x15)) {
    local_48[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_60);
    piVar2 = local_48;
  }
  else {
    uVar1 = (*(ulong *)(param_2 + 0x88) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x88) & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *param_3 = uVar1 >> 0x20 | uVar1 << 0x20;
    uVar1 = (*(ulong *)(param_2 + 0x90) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x90) & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    param_3[1] = uVar1 >> 0x20 | uVar1 << 0x20;
    FUN_0078f1a8(local_48,param_2,param_3 + 2,&local_4c,param_5 - 0x10);
    if (local_48[0] == 0) {
      FUN_0078f1b8(param_2);
      *param_4 = ((int)(param_3 + 2) + local_4c) - (int)param_3;
      local_60[0] = 0;
    }
    else {
      local_60[0] = 0x10407;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


