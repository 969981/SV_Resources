/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ede50; name: FUN_004ede50
 */


void FUN_004ede50(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  puVar6 = (ulong *)(param_1 + 8);
  uVar3 = *puVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  if ((((uint)uVar5 | (uint)uVar3) & 1) == 0) {
    return;
  }
  if ((uVar5 & 1) == 0) {
    puVar1 = (undefined8 *)FUN_00264e54((ulong *)(param_2 + 8));
    uVar3 = *puVar6;
  }
  else {
    puVar1 = (undefined8 *)((uVar5 & 0xfffffffffffffffe) + 8);
  }
  if ((uVar3 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_00264e54(puVar6);
  }
  else {
    puVar2 = (undefined8 *)((uVar3 & 0xfffffffffffffffe) + 8);
  }
  uVar4 = *puVar2;
  *puVar2 = *puVar1;
  *puVar1 = uVar4;
  uVar4 = puVar2[1];
  puVar2[1] = puVar1[1];
  puVar1[1] = uVar4;
  uVar4 = puVar2[2];
  puVar2[2] = puVar1[2];
  puVar1[2] = uVar4;
  return;
}


