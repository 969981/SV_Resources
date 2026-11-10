/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c3644; name: FUN_034c3644
 */


undefined8 FUN_034c3644(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 <= uVar2) {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar4 = iVar1 + uVar4;
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 8),(ulong)uVar4 << 2)
    ;
    if (lVar3 == 0) {
      return 2;
    }
    *(long *)(param_1 + 8) = lVar3;
    *(uint *)(param_1 + 0x14) = uVar4;
  }
  if (uVar2 < uVar4) {
    uVar4 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar4 + 1;
    if (*(long *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 4) = param_2;
      return 1;
    }
  }
  return 2;
}


