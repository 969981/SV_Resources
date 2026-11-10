/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026c5ec; name: FUN_0026c5ec
 */


void FUN_0026c5ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long *local_60 [4];
  long local_40 [2];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x70))();
  lVar4 = param_1 + 0x10;
  FUN_001fcec0(lVar4,uVar1);
  lVar5 = *(long *)(param_1 + 8);
  local_40[1] = 0;
  local_40[0] = lVar4;
  FUN_00259dc4(local_60,*(undefined8 *)(lVar5 + 0x10),local_40);
  lVar2 = local_60[0][1];
  if (lVar2 == 0) {
    lVar2 = FUN_00259ca4(lVar5,lVar4);
    *local_60[0] = lVar2;
    local_60[0][1] = lVar2;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  lVar2 = lVar2 + 0x18;
  *(long *)(param_1 + 0x28) = lVar2;
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 2;
  puVar3 = (ulong *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar4 + 8) & 1) == 0) {
    lVar5 = *(long *)(lVar4 + 0x18);
  }
  else {
    puVar3 = (ulong *)*puVar3;
    lVar5 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_0026ae18(puVar3);
    *(long *)(lVar4 + 0x18) = lVar5;
    lVar2 = *(long *)(param_1 + 0x28);
  }
  FUN_0026c4c4(lVar5,lVar2);
  return;
}


