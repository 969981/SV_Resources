/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00102c80; name: FUN_00102c80
 */


void FUN_00102c80(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 0x130) = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  *(undefined4 *)(param_1 + 0x68c) = 0;
  if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1)) {
    FUN_001025d0(param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00100470(param_1);
    if (uVar1 == 0) {
      iVar2 = FUN_0011f640();
      iVar3 = *(int *)(param_1 + 0x684);
      if (*(int *)(param_1 + 0x684) == 0) {
        *(int *)(param_1 + 0x684) = iVar2;
        iVar3 = iVar2;
      }
      if (300000 < (uint)(iVar2 - iVar3)) {
        *(int *)(param_1 + 0x684) = iVar2;
        *(undefined4 *)(param_1 + 0x688) = 1;
      }
    }
    puVar5 = *(ulong **)(param_1 + 0x1c8);
    *(uint *)(param_1 + 0x20c) = uVar1 + 1;
    uVar4 = puVar5[uVar1] & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0xe8) = uVar4;
    *(uint *)(param_1 + 0x128) = (uint)puVar5[uVar1] & 1;
    uVar6 = (puVar5[uVar1 + 1] & 0xfffffffc) - uVar4;
    *(int *)(param_1 + 0x124) = (int)uVar6;
    if (*(long *)(param_1 + 0x1f8) == 0) {
      *(ulong *)(param_1 + 0xc0) =
           (*(long *)(param_1 + 0x6a0) + 0x100U & 0xffffffffffffff80) + (uVar4 | 0xffffffffffffff80)
      ;
      if ((uVar4 < *(ulong *)(param_1 + 0x110)) ||
         (*(long *)(param_1 + 0x2d0) + *(ulong *)(param_1 + 0x110) < (uVar6 & 0xfffffffc) + uVar4))
      {
        *(undefined4 *)(param_1 + 0x48) = 1;
        if (DAT_047ec42c != 0) {
          FUN_00120bc0(&DAT_047ec430,1);
        }
        iVar3 = *(int *)(param_1 + 300);
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 1;
        FUN_00100470(param_1);
        iVar3 = *(int *)(param_1 + 300);
      }
    }
    else {
      *(ulong *)(param_1 + 0xc0) =
           *(long *)(param_1 + 0x1f8) + (uVar4 - (*puVar5 & 0xfffffffffffffffc));
      iVar3 = *(int *)(param_1 + 300);
    }
    if ((iVar3 != 0) && (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1)) {
      FUN_001025d0(param_1);
    }
  }
  *(uint *)(param_1 + 0xc) = uVar1 + 1;
  return;
}


