/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00171af8; name: FUN_00171af8
 */


void FUN_00171af8(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_1 + 0x20);
  plVar1 = (long *)(param_2 + param_3);
  if (plVar4 < plVar1) {
    puVar5 = *(uint **)(param_1 + 0x28);
    iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)puVar5;
    uVar8 = *(undefined8 *)(puVar5 + 1);
    *puVar5 = *(uint *)(param_1 + 0x40) & 0xfc000000 | (int)plVar4 - iVar3 & 0x3ffffffU;
    *(undefined8 *)(puVar5 + 1) = uVar6;
    *(undefined8 *)(puVar5 + 2) = uVar8;
    for (iVar2 = (*(int *)(param_1 + 0x20) - (int)param_2) + 1; iVar2 < param_3; iVar2 = iVar2 * 2)
    {
      uVar7 = *(long *)(param_2 + iVar2) * *(long *)(param_1 + 0x38);
      uVar7 = (ulong)(uint)((int)(uVar7 >> 0x20) << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f)) |
              (uVar7 >> 0x20) >> ((ulong)(0x20 - *(uint *)(param_1 + 0x10)) & 0x3f);
      puVar5 = (uint *)(*(long *)(param_1 + 8) + (uVar7 & *(uint *)(param_1 + 0x14)) * 4);
      uVar6 = *(undefined8 *)puVar5;
      uVar8 = *(undefined8 *)(puVar5 + 1);
      *puVar5 = (uint)uVar7 & 0xfc000000 | (int)(long *)(param_2 + iVar2) - iVar3 & 0x3ffffffU;
      *(undefined8 *)(puVar5 + 1) = uVar6;
      *(undefined8 *)(puVar5 + 2) = uVar8;
    }
  }
  else if (plVar4 == plVar1) {
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


