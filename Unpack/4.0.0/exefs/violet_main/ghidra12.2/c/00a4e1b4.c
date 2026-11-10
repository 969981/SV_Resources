/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4e1b4; name: FUN_00a4e1b4
 */


ulong FUN_00a4e1b4(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long local_68;
  long local_60;
  long local_58;
  long *plStack_50;
  
  if (*(int *)(param_1 + 0x64b8) == 0) {
    if (param_2 == 2) {
      lVar2 = 0x6178;
    }
    else if (param_2 == 1) {
      lVar2 = 0x6108;
    }
    else {
      lVar2 = 0x6098;
    }
    FUN_00a52fe4(&local_68,param_1 + lVar2);
    uVar3 = (local_60 - local_68 >> 3) * -0x5555555555555555;
    if (local_68 != 0) {
      local_60 = local_68;
      uVar1 = (**(code **)(*plStack_50 + 0xf8))(plStack_50);
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_00c4e600();
        if (0 < *(int *)(lVar2 + 0x12c8)) {
          FUN_00c48fe8(plStack_50,local_68,local_58 - local_68,4);
          goto LAB_00a4e270;
        }
      }
      (**(code **)(*plStack_50 + 0x18))(plStack_50,local_68,local_58 - local_68,4);
    }
  }
  else {
    uVar3 = *(long *)(param_1 + 0x6488) - *(long *)(param_1 + 0x6480) >> 5;
  }
LAB_00a4e270:
  return uVar3 & 0xffffffff;
}


