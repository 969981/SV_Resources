/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001727a0; name: FUN_001727a0
 */


void FUN_001727a0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  plVar5 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar5 < plVar1) {
    puVar6 = *(uint **)(param_1 + 0x28);
    iVar4 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)puVar6;
    uVar9 = *(undefined8 *)(puVar6 + 1);
    *puVar6 = *(uint *)(param_1 + 0x40) & 0xfc000000 | (int)plVar5 - iVar4 & 0x3ffffffU;
    *(undefined8 *)(puVar6 + 1) = uVar7;
    *(undefined8 *)(puVar6 + 2) = uVar9;
    puVar6 = *(uint **)(param_1 + 0x30);
    uVar7 = *(undefined8 *)puVar6;
    uVar9 = *(undefined8 *)(puVar6 + 1);
    *puVar6 = *(uint *)(param_1 + 0x40) & 0xfc000000 | *(int *)(param_1 + 0x20) - iVar4 & 0x3ffffffU
    ;
    *(undefined8 *)(puVar6 + 1) = uVar7;
    *(undefined8 *)(puVar6 + 2) = uVar9;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar8 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      uVar8 = (ulong)(uint)((int)(uVar8 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
              (uVar8 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
      puVar6 = (uint *)(*(long *)(param_1 + 8) + (uVar8 & *(uint *)(param_1 + 0x14)) * 4);
      uVar7 = *(undefined8 *)puVar6;
      uVar9 = *(undefined8 *)(puVar6 + 1);
      *puVar6 = (uint)uVar8 & 0xfc000000 | (int)(long *)(param_2 + iVar2) - iVar4 & 0x3ffffffU;
      *(undefined8 *)(puVar6 + 1) = uVar7;
      *(undefined8 *)(puVar6 + 2) = uVar9;
    }
  }
  else if (plVar5 == plVar1) {
    return;
  }
  *(long **)(param_1 + 0x20) = plVar1;
  uVar8 = *plVar1 * *(long *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulong)(uint)((int)(uVar8 >> 0x20) << (ulong)(uVar3 & 0x1f)) |
          (uVar8 >> 0x20) >> ((ulong)(0x20 - uVar3) & 0x3f);
  *(int *)(param_1 + 0x40) = (int)uVar8;
  *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 8) + (uVar8 & *(uint *)(param_1 + 0x14)) * 4;
  *(ulong *)(param_1 + 0x30) =
       *(long *)(param_1 + 8) +
       ((ulong)(*plVar1 * -0x30e44323485a9b9d) >> ((ulong)-uVar3 & 0x3f) & 0x3ffffffffffffffc) * 4;
  return;
}


