/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a2d4c; name: FUN_001a2d4c
 */


void FUN_001a2d4c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar4 < plVar1) {
    sVar3 = (short)*(undefined8 *)(param_1 + 0x18);
    **(short **)(param_1 + 0x28) = (short)plVar4 - sVar3;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar5 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      *(short *)(*(long *)(param_1 + 8) +
                (ulong)(((int)(uVar5 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) |
                        (uint)((uVar5 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f)
                              )) & *(uint *)(param_1 + 0x14)) * 2) =
           (short)(long *)(param_2 + iVar2) - sVar3;
    }
  }
  else if (plVar4 == plVar1) {
    return;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  uVar5 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar5 = (ulong)(uint)((int)(uVar5 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
          (uVar5 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar5;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar5 & *(uint *)(param_1 + 0x14)) * 2;
  return;
}


