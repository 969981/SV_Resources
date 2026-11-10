/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8d30; name: FUN_028b8d30
 */


int FUN_028b8d30(long param_1,undefined2 param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_1 + 0x48) < 2) {
    *(undefined8 *)(param_1 + 0x48) = 2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  uVar1 = (*(int *)(param_1 + 0x20) - (int)lVar2) + *(int *)(param_1 + 0x28);
  uVar5 = (ulong)uVar1 & 1;
  if ((ulong)(lVar2 - lVar4) < uVar5) {
    FUN_0157184c(param_1,uVar5);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
  }
  else {
    puVar3 = (undefined1 *)(lVar2 - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    if ((uVar1 & 1) == 0) goto LAB_028b8d84;
  }
  *puVar3 = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
LAB_028b8d84:
  if ((ulong)((long)puVar3 - lVar4) < 2) {
    FUN_0157184c(param_1,2);
    puVar3 = *(undefined1 **)(param_1 + 0x30);
  }
  *(undefined1 **)(param_1 + 0x30) = puVar3 + -2;
  *(undefined2 *)(puVar3 + -2) = param_2;
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}


