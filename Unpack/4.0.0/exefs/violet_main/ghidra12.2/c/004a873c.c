/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a873c; name: FUN_004a873c
 */


void FUN_004a873c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar4 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  puVar5 = *(undefined **)(param_2 + 0x18);
  if (puVar5 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x18),puVar3);
  }
  else {
    FUN_001fcec0(puVar5,uVar4);
  }
  uVar1 = *(undefined4 *)(param_1 + 2);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  lVar6 = param_1[4];
  lVar2 = FUN_004dfc94();
  if (lVar6 == lVar2) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_004e03c0(*(long *)(param_2 + 0x20),param_1[4]);
    return;
  }
  puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  uVar4 = FUN_004e7150(puVar3);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  FUN_004e03c0(uVar4,param_1[4]);
  return;
}


