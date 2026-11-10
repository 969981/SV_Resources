/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a2520; name: FUN_018a2520
 */


long FUN_018a2520(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  
  FUN_0135d328(auStack_50,*(undefined8 *)(param_1 + 8),0);
  uVar2 = FUN_018a2710(*(undefined8 *)(param_1 + 0x50),(undefined8 *)(param_1 + 0x70));
  FUN_01692868(*(undefined8 *)(param_1 + 0x50),uVar2,0,0);
  lVar4 = *(long *)(param_1 + 0x50);
  uVar6 = (ulong)(uint)((*(int *)(lVar4 + 0x20) - *(int *)(lVar4 + 0x30)) + *(int *)(lVar4 + 0x28));
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar6,8);
  local_58 = 8;
  local_70 = 0;
  local_68 = param_2;
  local_60 = uVar6;
  FUN_018a2664((undefined8 *)(param_1 + 0x30),uVar2);
  *(long **)(param_1 + 0x38) = local_68;
  *(ulong *)(param_1 + 0x40) = local_60;
  *(undefined8 *)(param_1 + 0x48) = local_58;
  FUN_018a2664(&local_70,0);
  lVar4 = *(long *)(param_1 + 0x50);
  memcpy(*(void **)(param_1 + 0x30),*(void **)(lVar4 + 0x30),
         (ulong)(uint)((*(int *)(lVar4 + 0x20) - (int)*(void **)(lVar4 + 0x30)) +
                      *(int *)(lVar4 + 0x28)));
  pvVar3 = *(void **)(param_1 + 0x70);
  *(void **)(param_1 + 0x78) = pvVar3;
  if (*(void **)(param_1 + 0x80) != pvVar3) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar4 != 0) {
    FUN_019433d0(param_1 + 0x58);
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar1 = *puVar5;
  FUN_0135d2ec(auStack_50);
  return (long)puVar5 + (ulong)uVar1;
}


