/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c812c; name: FUN_015c812c
 */


int FUN_015c812c(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_2 + 0x48) < 4) {
    *(undefined8 *)(param_2 + 0x48) = 4;
  }
  lVar4 = *(long *)(param_2 + 0x30);
  uVar1 = -((*(int *)(param_2 + 0x20) - (int)lVar4) + *(int *)(param_2 + 0x28));
  uVar5 = (ulong)uVar1 & 3;
  if ((ulong)(lVar4 - *(long *)(param_2 + 0x38)) < uVar5) {
    FUN_0157184c(param_2,uVar5);
    puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) - uVar5);
    *(undefined1 **)(param_2 + 0x30) = puVar2;
  }
  else {
    puVar2 = (undefined1 *)(lVar4 - uVar5);
    *(undefined1 **)(param_2 + 0x30) = puVar2;
    if ((uVar1 & 3) == 0) goto LAB_015c8184;
  }
  *puVar2 = 0;
  if ((uVar5 != 1) && (*(undefined1 *)(*(long *)(param_2 + 0x30) + 1) = 0, uVar5 != 2)) {
    uVar3 = 2;
    do {
      *(undefined1 *)(*(long *)(param_2 + 0x30) + uVar3) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
LAB_015c8184:
  lVar4 = *(long *)(param_2 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_2 + 0x38)) < 4) {
    FUN_0157184c(param_2,4);
    lVar4 = *(long *)(param_2 + 0x30);
  }
  *(long *)(param_2 + 0x30) = lVar4 + -4;
  *(undefined4 *)(lVar4 + -4) = param_1;
  return (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x30)) + *(int *)(param_2 + 0x28);
}


