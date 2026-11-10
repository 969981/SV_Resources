/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334108c; name: FUN_0334108c
 */


void FUN_0334108c(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong local_48;
  
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar9 * 2;
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (ulong *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_48);
  uVar10 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar10) {
    puVar11 = (ulong *)*param_1;
    puVar5 = puVar3;
    puVar6 = puVar11;
    if (uVar10 != 1) {
      iVar7 = -(uVar10 & 0xfffffffe);
      do {
        *puVar5 = *puVar6;
        *puVar6 = 0;
        *(int *)(puVar5 + 1) = (int)puVar6[1];
        puVar5[2] = puVar6[2];
        puVar6[2] = 0;
        *(int *)(puVar5 + 3) = (int)puVar6[3];
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 4;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    puVar2 = PTR_DAT_047d1a08;
    if ((uVar10 & 1) != 0) {
      *puVar5 = *puVar6;
      *puVar6 = 0;
      *(int *)(puVar5 + 1) = (int)puVar6[1];
      puVar2 = PTR_DAT_047d1a08;
    }
    do {
      if ((*puVar11 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,*puVar11 - 1,0);
      }
      puVar11 = puVar11 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar8 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar8 = uVar4 + 1 + (local_48 + uVar4 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar9 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = (long)puVar3;
  return;
}


