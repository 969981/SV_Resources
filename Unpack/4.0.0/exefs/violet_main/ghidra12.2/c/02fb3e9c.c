/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb3e9c; name: FUN_02fb3e9c
 */


undefined8 * FUN_02fb3e9c(long param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = *(int *)(param_1 + 0x184);
  iVar2 = *(int *)(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x38);
  *(int *)(param_1 + 0x184) = iVar5 + 1;
  if (iVar5 < iVar2) {
    *param_2 = 0;
    puVar3 = (undefined8 *)(*plVar1 + (long)iVar5 * 0x70);
  }
  else {
    *param_2 = 1;
    *(undefined1 *)(param_1 + 0x120) = 1;
    iVar5 = *(int *)(param_1 + 0x40);
    lVar6 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar5) {
      FUN_02fb8a6c(plVar1,PTR_PTR_047d1a50,lVar6 + 1);
      iVar5 = *(int *)(param_1 + 0x40);
    }
    lVar4 = *(long *)(param_1 + 0x38);
    puVar3 = (undefined8 *)(lVar4 + (long)iVar5 * 0x70);
    *(int *)(param_1 + 0x40) = (int)(lVar6 + 1);
    *puVar3 = 0xffffff00ffffff;
    *(undefined4 *)(puVar3 + 1) = 0x7fffffff;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff;
    if (iVar2 < 1) {
      *(undefined4 *)(lVar4 + (long)iVar5 * 0x70 + 0x14) = 0;
    }
    else {
      lVar6 = *plVar1 + (long)(iVar2 + -1) * 0x70;
      lVar4 = lVar4 + (long)iVar5 * 0x70;
      *(ushort *)(lVar4 + 0x14) = *(short *)(lVar6 + 0x14) + (ushort)*(byte *)(lVar6 + 0x19);
      lVar6 = *plVar1 + (long)(iVar2 + -1) * 0x70;
      *(ushort *)(lVar4 + 0x16) = *(short *)(lVar6 + 0x16) + (ushort)*(byte *)(lVar6 + 0x18);
    }
  }
  return puVar3;
}


