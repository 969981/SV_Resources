/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d197c; name: FUN_030d197c
 */


void FUN_030d197c(long *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong local_58;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar12 * 2;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  lVar4 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x38,&local_58);
  iVar13 = (int)param_1[1];
  if (0 < iVar13) {
    plVar5 = (long *)*param_1;
    plVar7 = (long *)(lVar4 + 0x18);
    plVar8 = plVar5 + 3;
    puVar1 = PTR_DAT_047e5118 + 0x10;
    iVar9 = iVar13;
    do {
      plVar7[-2] = 0xffffffff;
      plVar7[-1] = 1;
      iVar9 = iVar9 + -1;
      plVar7[-3] = (long)puVar1;
      *plVar7 = *plVar8;
      *plVar8 = 0;
      plVar7[1] = plVar8[1];
      lVar10 = plVar8[2];
      plVar8[1] = 0;
      *(undefined8 *)((long)plVar7 + 0x16) = *(undefined8 *)((long)plVar8 + 0x16);
      plVar7[2] = lVar10;
      plVar7 = plVar7 + 7;
      plVar8 = plVar8 + 7;
    } while (iVar9 != 0);
    do {
      (**(code **)(*plVar5 + 8))(plVar5);
      iVar13 = iVar13 + -1;
      plVar5 = plVar5 + 7;
    } while (iVar13 != 0);
  }
  uVar2 = uVar6 * 0x38 + 0x38;
  uVar11 = uVar6;
  if (uVar2 <= local_58) {
    local_58 = local_58 - 0x38;
    uVar11 = uVar6 + 1;
    if (uVar2 <= local_58) {
      uVar11 = (local_58 + uVar6 * -0x38) / 0x38 + uVar11;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar12 * 0x38);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = lVar4;
  return;
}


