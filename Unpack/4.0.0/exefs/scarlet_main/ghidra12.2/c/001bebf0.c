/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001bebf0; name: FUN_001bebf0
 */


void FUN_001bebf0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar4 < plVar1) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
    **(uint **)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x40) & 0xfc000000 | (int)plVar4 - iVar3 & 0x3ffffffU;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar5 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      uVar5 = (ulong)(uint)((int)(uVar5 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
              (uVar5 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
      *(uint *)(*(long *)(param_1 + 8) + (uVar5 & *(uint *)(param_1 + 0x14)) * 4) =
           (uint)uVar5 & 0xfc000000 | (int)(long *)(param_2 + iVar2) - iVar3 & 0x3ffffffU;
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
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar5 & *(uint *)(param_1 + 0x14)) * 4;
  return;
}


