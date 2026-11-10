/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00170f44; name: FUN_00170f44
 */


void FUN_00170f44(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar5 < plVar1) {
    puVar6 = *(uint **)(param_1 + 0x28);
    iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar3 = *puVar6;
    *puVar6 = *(uint *)(param_1 + 0x40) & 0xfc000000 | (int)plVar5 - iVar4 & 0x3ffffffU;
    puVar6[1] = uVar3;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar7 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
              (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
      puVar6 = (uint *)(*(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 4);
      uVar3 = *puVar6;
      *puVar6 = (uint)uVar7 & 0xfc000000 | (int)(long *)(param_2 + iVar2) - iVar4 & 0x3ffffffU;
      puVar6[1] = uVar3;
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
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 4;
  return;
}


