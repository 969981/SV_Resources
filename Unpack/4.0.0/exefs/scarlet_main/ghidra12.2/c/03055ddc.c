/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03055ddc; name: FUN_03055ddc
 */


void FUN_03055ddc(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong local_58;
  
  puVar2 = PTR_DAT_047d1a08;
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_58 = uVar4 * 8;
  puVar3 = (ulong *)(**(code **)PTR_DAT_047d1a08)
                              (*(undefined1 *)(param_2 + 8),&local_58,*(undefined4 *)(param_2 + 0xc)
                              );
  uVar9 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar9) {
    puVar10 = (ulong *)*param_1;
    puVar5 = puVar3;
    puVar6 = puVar10;
    if (uVar9 != 1) {
      iVar7 = -(uVar9 & 0xfffffffe);
      do {
        *puVar5 = *puVar6;
        *puVar6 = 0;
        puVar5[1] = puVar6[1];
        puVar6[1] = 0;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 2;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    if ((uVar9 & 1) != 0) {
      *puVar5 = *puVar6;
      *puVar6 = 0;
    }
    do {
      if ((*puVar10 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,*puVar10 - 1,0);
      }
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar1 = uVar4 * 8 + 8;
  uVar8 = uVar4;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 8;
    uVar8 = uVar4 + 1 + (local_58 + uVar4 * -8 >> 3);
    if (local_58 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar2 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = (long)puVar3;
  return;
}


