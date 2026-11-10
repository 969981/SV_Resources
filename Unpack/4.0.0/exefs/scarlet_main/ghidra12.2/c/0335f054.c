/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0335f054; name: FUN_0335f054
 */


void FUN_0335f054(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar11 * 2;
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
  plVar4 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar5 * 8,&local_68);
  uVar12 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar12) {
    plVar13 = (long *)*param_1;
    plVar6 = plVar4;
    plVar7 = plVar13;
    if (uVar12 != 1) {
      iVar8 = -(uVar12 & 0xfffffffe);
      do {
        *plVar6 = *plVar7;
        *plVar7 = 0;
        plVar6[1] = plVar7[1];
        plVar7[1] = 0;
        plVar6 = plVar6 + 2;
        plVar7 = plVar7 + 2;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    puVar2 = PTR_DAT_047d1a08;
    if ((uVar12 & 1) != 0) {
      *plVar6 = *plVar7;
      *plVar7 = 0;
      puVar2 = PTR_DAT_047d1a08;
    }
    do {
      lVar9 = *plVar13;
      if (lVar9 != 0) {
        FUN_0336a904(lVar9);
        (**(code **)(puVar2 + 8))(0,lVar9,0);
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar1 = uVar5 * 8 + 8;
  uVar10 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 8;
    uVar10 = uVar5 + 1 + (local_68 + uVar5 * -8 >> 3);
    if (local_68 < uVar1) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar11 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = (long)plVar4;
  return;
}


