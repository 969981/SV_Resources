/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a608c; name: FUN_001a608c
 */


void FUN_001a608c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  
  plVar4 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar4 < plVar1) {
    puVar6 = *(uint **)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x40);
    iVar7 = (int)*(undefined8 *)(param_1 + 0x18);
    memmove(puVar6 + 1,puVar6,0x3c);
    *puVar6 = uVar2 & 0xfc000000 | (int)plVar4 - iVar7 & 0x3ffffffU;
    puVar6 = *(uint **)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0x40);
    memmove(puVar6 + 1,puVar6,0x3c);
    *puVar6 = uVar2 & 0xfc000000 | iVar3 - iVar7 & 0x3ffffffU;
    for (iVar3 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar3 < param_3; iVar3 = iVar3 * 2)
    {
      uVar5 = *(long *)(param_2 + iVar3) * *(long *)(param_1 + 0x38);
      uVar5 = (ulong)(uint)((int)(uVar5 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
              (uVar5 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
      puVar6 = (uint *)(*(long *)(param_1 + 8) + (uVar5 & *(uint *)(param_1 + 0x14)) * 4);
      memmove(puVar6 + 1,puVar6,0x3c);
      *puVar6 = (uint)uVar5 & 0xfc000000 | (int)(long *)(param_2 + iVar3) - iVar7 & 0x3ffffffU;
    }
  }
  else if (plVar4 == plVar1) {
    return;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  uVar5 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulong)(uint)((int)(uVar5 >> 0x20) << (ulong)(uVar2 & 0x1f)) |
          (uVar5 >> 0x20) >> ((ulong)(0x20 - uVar2) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar5;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar5 & *(uint *)(param_1 + 0x14)) * 4;
  *(ulong *)(param_1 + 0x30) =
       *(long *)(param_1 + 8) +
       ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar2 & 0x3f) & 0x3ffffffffffffff0) * 4;
  return;
}


