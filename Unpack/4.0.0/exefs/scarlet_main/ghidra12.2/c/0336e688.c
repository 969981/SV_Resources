/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336e688; name: FUN_0336e688
 */


void FUN_0336e688(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar10 * 2;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                              (PTR_PTR_047d1a50,uVar5 * 0x10,&local_48);
  uVar11 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar11) {
    puVar12 = (ulong *)*param_1;
    puVar6 = puVar4;
    puVar7 = puVar12;
    if (uVar11 != 1) {
      iVar8 = -(uVar11 & 0xfffffffe);
      do {
        *puVar6 = *puVar7;
        *puVar7 = 0;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar7[2] = 0;
        puVar6[3] = puVar7[3];
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 4;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    puVar2 = PTR_DAT_047d1a08;
    if ((uVar11 & 1) != 0) {
      *puVar6 = *puVar7;
      *puVar7 = 0;
      puVar6[1] = puVar7[1];
      puVar2 = PTR_DAT_047d1a08;
    }
    do {
      if ((*puVar12 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,*puVar12 - 1,0);
      }
      puVar12 = puVar12 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar1 = uVar5 * 0x10 + 0x10;
  uVar9 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar9 = uVar5 + 1 + (local_48 + uVar5 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar9 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = (long)puVar4;
  return;
}


