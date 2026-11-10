/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff94ac; name: FUN_02ff94ac
 */


void FUN_02ff94ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) +
                (ulong)*(ushort *)(param_2 + 0x68) * 0x50 + 0x18) == '\0') {
    (**(code **)(**(long **)(param_1 + 0x130) + 0x28))(*(long **)(param_1 + 0x130),param_2);
    lVar6 = *(long *)(param_1 + 0x130);
    uVar7 = NEON_fmin(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar6 + 0x10),4);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    if (*(char *)(param_1 + 0x18) == '\0') {
      bVar4 = *(char *)(lVar6 + 0x18) != '\0';
    }
    else {
      bVar4 = true;
    }
    *(bool *)(param_1 + 0x18) = bVar4;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar6 + 0xc);
  }
  else if (*(char *)(param_1 + 0x140) != '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
    lVar6 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= iVar5) {
      FUN_02ffbf60(param_1 + 0x20,lVar6 + 1);
      iVar5 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = (int)(lVar6 + 1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x40);
    uVar2 = *(undefined4 *)(param_2 + 0x60);
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    *puVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined1 *)((long)puVar1 + 0xc) = 1;
    *(undefined4 *)(puVar1 + 6) = uVar3;
  }
  return;
}


