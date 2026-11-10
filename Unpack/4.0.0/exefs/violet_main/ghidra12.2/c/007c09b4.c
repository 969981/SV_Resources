/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c09b4; name: FUN_007c09b4
 */


long FUN_007c09b4(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_007c0d74(param_1,param_2,*(undefined4 *)(param_1 + 0xd4));
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x18);
    *(long *)(lVar2 + 0x18) = param_2;
    uVar3 = lVar4 - param_2;
    uVar1 = *(ushort *)(lVar2 + 0x12);
    FUN_007bfd58(*(int *)(param_1 + 0xec) + lVar2);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    if (*(int *)(param_1 + 0x88) == 1) {
      FUN_007bfd40();
    }
    else {
      FUN_007bfd28(param_1 + 0xf0,*(int *)(param_1 + 0x104) + lVar2);
    }
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        *(long *)(lVar2 + 0x18) = lVar4;
      }
    }
    else {
      lVar4 = param_2 + lVar2 + (ulong)uVar1;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined4 *)(lVar4 + 0x30) = 0;
      *(ulong *)(lVar4 + 0x38) = uVar3 - 0x20;
      FUN_007c026c(param_1);
    }
  }
  return lVar2;
}


