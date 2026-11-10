/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0a84; name: FUN_007c0a84
 */


undefined8 * FUN_007c0a84(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)FUN_007c0e84();
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (long)puVar1 + (ulong)*(ushort *)((long)puVar1 + 0x12) + 0x20;
    uVar3 = (lVar2 + (ulong)(param_3 - 1) & ((ulong)(param_3 - 1) ^ 0xffffffffffffffff)) - lVar2;
    lVar2 = puVar1[3];
    if (uVar3 < 0x10000) {
      *(short *)((long)puVar1 + 0x12) = (short)uVar3;
      if ((uVar3 & 0xffff) != 0) {
        *(long *)((long)puVar1 + uVar3 + 0x18) = (long)puVar1 + 1;
      }
      puVar1[3] = param_2;
      FUN_007bfd58((long)*(int *)(param_1 + 0xec) + (long)puVar1);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    }
    else {
      *(undefined2 *)((long)puVar1 + 0x12) = 0;
      puVar1[3] = uVar3 - 0x20;
      puVar1 = (undefined8 *)(uVar3 + (long)puVar1);
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[3] = param_2;
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    uVar3 = (lVar2 - param_2) - uVar3;
    if (*(int *)(param_1 + 0x88) == 1) {
      FUN_007bfd40();
    }
    else {
      FUN_007bfd28(param_1 + 0xf0,(long)puVar1 + (long)*(int *)(param_1 + 0x104));
    }
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        puVar1[3] = uVar3 + param_2;
      }
    }
    else {
      param_2 = (ulong)*(ushort *)((long)puVar1 + 0x12) + param_2;
      *(undefined8 *)((long)puVar1 + param_2 + 0x20) = 0;
      *(undefined8 *)((long)puVar1 + param_2 + 0x28) = 0;
      *(undefined4 *)((long)puVar1 + param_2 + 0x30) = 0;
      *(ulong *)((long)puVar1 + param_2 + 0x38) = uVar3 - 0x20;
      FUN_007c026c(param_1);
    }
  }
  return puVar1;
}


