/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0bb4; name: FUN_007c0bb4
 */


undefined8 * FUN_007c0bb4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)FUN_007c0fe0(param_1,param_2,*(undefined4 *)(param_1 + 0xd4));
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar4 = puVar3[3] - param_2;
  if (uVar4 < 0x21) {
    FUN_007bfd58((long)*(int *)(param_1 + 0xec) + (long)puVar3);
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    lVar1 = (long)*(int *)(param_1 + 0x104) + (long)puVar3;
  }
  else {
    puVar3[3] = uVar4 - 0x20;
    puVar3 = (undefined8 *)((long)puVar3 + *(ushort *)((long)puVar3 + 0x12) + uVar4);
    *(undefined4 *)(puVar3 + 2) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[3] = param_2;
    iVar2 = *(int *)(param_1 + 0x88);
    lVar1 = (long)puVar3 + (long)*(int *)(param_1 + 0x104);
  }
  if (iVar2 == 1) {
    FUN_007bfd40();
  }
  else {
    FUN_007bfd28(param_1 + 0xf0,lVar1);
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return puVar3;
}


