/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fa4fc; name: FUN_034fa4fc
 */


undefined8 FUN_034fa4fc(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int local_30 [2];
  undefined4 local_28;
  
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar1 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x6c) = uVar3 + *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = uVar1;
  iVar5 = *(int *)(param_1 + 0x68) - uVar3;
  bVar4 = 8;
  if ((param_3 & 1) == 0) {
    bVar4 = 0;
  }
  bVar4 = *(byte *)(param_1 + 0x82) & 0xf7 | bVar4;
  *(ulong *)(param_1 + 0x60) = param_2 + (ulong)uVar3;
  *(int *)(param_1 + 0x68) = iVar5;
  *(byte *)(param_1 + 0x82) = bVar4;
  if (*(short *)(param_1 + 0x80) == 1) {
    uVar3 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
    if (uVar3 <= uVar1) {
      *(uint *)(param_1 + 0x68) = (iVar5 - uVar1) + uVar3;
      *(byte *)(param_1 + 0x82) = bVar4 | 1;
      return 1;
    }
  }
  else if (*(uint *)(param_1 + 0x7c) <= uVar1) {
    *(uint *)(param_1 + 0x68) = (iVar5 - uVar1) + *(uint *)(param_1 + 0x7c);
    iVar5 = *(int *)(param_1 + 0x78);
    iVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x80))
                      (*(long **)(param_1 + 0x58),iVar5,0,local_30);
    if (iVar6 != 1) {
      return 2;
    }
    *(int *)(param_1 + 0x70) = local_30[0];
    *(int *)(param_1 + 0x74) = iVar5 - local_30[0];
    sVar2 = 0;
    if (*(short *)(param_1 + 0x80) != 0) {
      sVar2 = *(short *)(param_1 + 0x80) + -1;
    }
    *(short *)(param_1 + 0x80) = sVar2;
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 0x40;
    if (sVar2 == 1) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),local_30);
      local_28 = 0;
      (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),local_30);
      return 1;
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return 1;
}


