/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a82b4; name: FUN_004a82b4
 */


void FUN_004a82b4(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar3 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  puVar4 = *(undefined **)(param_2 + 0x18);
  if (puVar4 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x18),puVar2);
    lVar5 = param_1[5];
    lVar1 = FUN_004dea40();
    if (lVar5 == lVar1) {
      return;
    }
  }
  else {
    FUN_001fcec0(puVar4,uVar3);
    lVar5 = param_1[5];
    lVar1 = FUN_004dea40();
    if (lVar5 == lVar1) {
      return;
    }
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_004df094(*(long *)(param_2 + 0x20),param_1[5]);
    return;
  }
  puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  uVar3 = FUN_004e6ed4(puVar2);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  FUN_004df094(uVar3,param_1[5]);
  return;
}


