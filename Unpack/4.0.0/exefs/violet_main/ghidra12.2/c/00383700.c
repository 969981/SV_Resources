/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00383700; name: FUN_00383700
 */


void FUN_00383700(long param_1,void *param_2,size_t param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1734);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1730) | (param_4 & 0xffff) << (ulong)(uVar1 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar3;
  if ((int)uVar1 < 0xe) {
    iVar4 = uVar1 + 3;
    *(int *)(param_1 + 0x1734) = iVar4;
    if (iVar4 < 9) goto LAB_00383788;
LAB_003837a4:
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar3;
    uVar2 = *(undefined1 *)(param_1 + 0x1731);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar3;
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
    uVar3 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x1734) + -0xd;
    *(short *)(param_1 + 0x1730) = (short)uVar3;
    *(int *)(param_1 + 0x1734) = iVar4;
    if (8 < iVar4) goto LAB_003837a4;
LAB_00383788:
    uVar2 = (undefined1)uVar3;
    if (iVar4 < 1) goto LAB_003837d8;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = uVar2;
LAB_003837d8:
  lVar5 = *(long *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)param_3;
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)(param_3 >> 8);
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)~(uint)param_3;
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)(~(uint)param_3 >> 8);
  memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}


