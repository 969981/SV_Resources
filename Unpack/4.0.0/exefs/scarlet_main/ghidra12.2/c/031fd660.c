/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fd660; name: FUN_031fd660
 */


void FUN_031fd660(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  ulong local_58;
  
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar3 = uVar8 * 2;
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if (0x7ffffffe < uVar3) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar3 = 0x7ffffffe;
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_58);
  uVar9 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar9) {
    plVar10 = (long *)*param_1;
    plVar4 = plVar2;
    plVar5 = plVar10;
    if (uVar9 != 1) {
      iVar6 = -(uVar9 & 0xfffffffe);
      do {
        *plVar4 = *plVar5;
        *plVar5 = 0;
        plVar4[1] = plVar5[1];
        plVar5[1] = 0;
        plVar4 = plVar4 + 2;
        plVar5 = plVar5 + 2;
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0);
    }
    if ((uVar9 & 1) != 0) {
      *plVar4 = *plVar5;
      *plVar5 = 0;
    }
    do {
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x10))();
      }
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar1 = uVar3 * 8 + 8;
  uVar7 = uVar3;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 8;
    uVar7 = uVar3 + 1 + (local_58 + uVar3 * -8 >> 3);
    if (local_58 < uVar1) {
      uVar7 = uVar3 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar8 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = (long)plVar2;
  return;
}


