/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a3254; name: FUN_001a3254
 */


void FUN_001a3254(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  long *plVar5;
  short *psVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar5 < plVar1) {
    psVar6 = *(short **)(param_1 + 0x28);
    sVar4 = (short)*(undefined8 *)(param_1 + 0x18);
    sVar3 = *psVar6;
    *psVar6 = (short)plVar5 - sVar4;
    psVar6[1] = sVar3;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar7 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      psVar6 = (short *)(*(long *)(param_1 + 8) +
                        (ulong)(((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f) |
                                (uint)((uVar7 >> 0x20) >>
                                      ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f))) &
                               *(uint *)(param_1 + 0x14)) * 2);
      psVar6[1] = *psVar6;
      *psVar6 = (short)(long *)(param_2 + iVar2) - sVar4;
    }
  }
  else if (plVar5 == plVar1) {
    return;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  uVar7 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
          (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar7;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 2;
  return;
}


