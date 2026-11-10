/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0714; name: FUN_007c0714
 */


long FUN_007c0714(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_007bfda8(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x104),PTR_LAB_047d1000);
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x100);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xe0);
    if (uVar3 != 0) {
      uVar3 = uVar3 - (long)*(int *)(param_1 + 0xec);
    }
    iVar1 = *(int *)(param_1 + 0x100);
  }
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0xf8);
    if (uVar4 != 0) {
      uVar4 = uVar4 - (long)*(int *)(param_1 + 0x104);
    }
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if ((uVar3 != 0) && (uVar4 == 0 || uVar3 < uVar4)) {
    lVar5 = ((lVar5 - (ulong)*(ushort *)(uVar3 + 0x12)) - *(long *)(uVar3 + 0x18)) + -0x20;
    FUN_007bfd58((long)*(int *)(param_1 + 0xec) + uVar3);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x40))
                      (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar5);
    if (lVar2 == 0) {
      return *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x30) = lVar2;
    *(long *)(param_1 + 0x38) = lVar5;
    DataMemoryBarrier(3,1);
  }
  return lVar5;
}


