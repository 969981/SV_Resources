/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4d4f4; name: FUN_00a4d4f4
 */


void FUN_00a4d4f4(long param_1,int param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  short sVar3;
  ulong uVar4;
  ushort *puVar5;
  ushort *local_68;
  ushort *local_60;
  long local_58;
  long *plStack_50;
  
  if (param_2 == 2) {
    lVar1 = 0x6178;
  }
  else if (param_2 == 1) {
    lVar1 = 0x6108;
  }
  else {
    lVar1 = 0x6098;
  }
  FUN_00a52fe4(&local_68,param_1 + lVar1);
  uVar2 = ((long)local_60 - (long)local_68 >> 3) * -0x5555555555555555;
  if ((int)uVar2 != 0) {
    *(short *)(param_1 + 0x6228) = 0;
    if (0 < (int)uVar2) {
      sVar3 = 0;
      uVar4 = uVar2 & 0xffffffff;
      puVar5 = local_68;
      do {
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*puVar5 == param_3) break;
        sVar3 = sVar3 + 1;
        uVar2 = uVar2 - 1;
        *(short *)(param_1 + 0x6228) = sVar3;
        puVar5 = puVar5 + 0xc;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (local_68 != (ushort *)0x0) {
    local_60 = local_68;
    uVar2 = (**(code **)(*plStack_50 + 0xf8))(plStack_50);
    if (((uVar2 & 1) != 0) && (lVar1 = FUN_00c4e600(), 0 < *(int *)(lVar1 + 0x12c8))) {
      FUN_00c48fe8(plStack_50,local_68,local_58 - (long)local_68,4);
      return;
    }
    (**(code **)(*plStack_50 + 0x18))(plStack_50,local_68,local_58 - (long)local_68,4);
  }
  return;
}


