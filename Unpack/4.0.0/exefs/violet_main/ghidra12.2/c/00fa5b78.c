/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa5b78; name: FUN_00fa5b78
 */


uint * FUN_00fa5b78(long param_1,char *param_2)

{
  uint uVar1;
  char *__s2;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = *(ushort *)(lVar4 + 8);
      puVar5 = (uint *)(lVar4 + 0xc);
    }
    else {
      uVar2 = *(ushort *)(lVar4 + 8);
      if (uVar2 == 1) {
        return (uint *)0x0;
      }
      puVar5 = (uint *)(lVar4 + 0x18);
    }
    for (uVar1 = (uint)uVar2 - (uint)(*(int *)(param_1 + 0x60) != 0) & 0xffff; uVar1 != 0;
        uVar1 = uVar1 - 1) {
      __s2 = (char *)0x0;
      if (*puVar5 != 0) {
        __s2 = (char *)((long)puVar5 + (ulong)*puVar5);
      }
      iVar3 = strcmp(param_2,__s2);
      if (iVar3 == 0) {
        return puVar5;
      }
      puVar5 = puVar5 + 3;
    }
  }
  return (uint *)0x0;
}


