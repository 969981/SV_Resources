/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001023e0; name: FUN_001023e0
 */


undefined8 FUN_001023e0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (((*(long *)(param_1 + 0x6b0) != 0) && (*(long *)(param_1 + 0x1c0) == 0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    FUN_0010caa0(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,
                 *(uint *)(param_1 + 0x24) >> 0x14 & 1,*(uint *)(param_1 + 0x24) >> 2 & 1,
                 *(undefined4 *)(param_1 + 0x128));
  }
  piVar4 = *(int **)(param_1 + 0xb0);
  if (piVar4 != (int *)0x0) {
    iVar1 = 0;
    if (piVar4[5] + 1 < *piVar4) {
      iVar1 = piVar4[5] + 1;
    }
    piVar4[5] = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x624);
  iVar5 = iVar1 + -1;
  *(int *)(param_1 + 0x624) = iVar5;
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x620) + -1;
    *(int *)(param_1 + 0x624) = iVar5;
  }
  if (*(int *)(param_1 + 0x680) != 0) {
    uVar2 = param_2 - *(int *)(param_1 + 0x680);
    if (*(uint *)(param_1 + 0x650) < uVar2) {
      *(uint *)(param_1 + 0x658) = *(uint *)(param_1 + 0x650);
      *(uint *)(param_1 + 0x650) = uVar2;
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x654);
      *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_1 + 0x67c);
    }
    else if (*(uint *)(param_1 + 0x658) < param_2) {
      *(uint *)(param_1 + 0x658) = uVar2;
      *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x67c);
    }
  }
  *(uint *)(param_1 + 0x680) = param_2;
  *(uint *)(*(long *)(param_1 + 0x5e8) + (long)iVar5 * 4) = param_2;
  *(undefined4 *)(*(long *)(param_1 + 0x5f8) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x660);
  *(undefined4 *)(*(long *)(param_1 + 0x5f0) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x664);
  *(undefined4 *)(*(long *)(param_1 + 0x600) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x668);
  *(undefined4 *)(*(long *)(param_1 + 0x608) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2e8);
  *(undefined4 *)(*(long *)(param_1 + 0x610) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(*(long *)(param_1 + 0x618) + (long)*(int *)(param_1 + 0x624) * 4) =
       *(undefined4 *)(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x634) == 0) {
    iVar5 = 0;
    if ((ulong)*(uint *)(param_1 + 0x670) != 0) {
      iVar5 = (int)(((ulong)*(uint *)(param_1 + 0x674) * 1000) / (ulong)*(uint *)(param_1 + 0x670));
    }
    *(uint *)(*(long *)(param_1 + 0x5e8) + (long)iVar1 * 4) = param_2 - iVar5;
    *(uint *)(param_1 + 0x634) = param_2;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  else if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_001025d0(param_1);
  }
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
  if (*(int *)(param_1 + 0x644) == 0) {
    uVar3 = FUN_0011f640();
    *(undefined4 *)(param_1 + 0x644) = uVar3;
    *(undefined4 *)(param_1 + 0x69c) = 0;
    *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
  }
  *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x6cc);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  return 0;
}


