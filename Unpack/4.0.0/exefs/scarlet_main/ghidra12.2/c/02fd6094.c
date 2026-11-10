/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd6094; name: FUN_02fd6094
 */


void FUN_02fd6094(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_48;
  
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar14 * 2;
  if (uVar9 <= param_3) {
    uVar9 = param_3;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 4,&local_48);
  uVar7 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar7) {
    puVar10 = (undefined4 *)*param_1;
    uVar5 = uVar7 & 3;
    puVar11 = puVar8;
    if (2 < uVar7 - 1) {
      iVar12 = -(uVar7 & 0xfffffffc);
      do {
        uVar6 = *puVar10;
        puVar1 = puVar10 + 1;
        puVar2 = puVar10 + 2;
        puVar3 = puVar10 + 3;
        puVar10 = puVar10 + 4;
        *puVar11 = uVar6;
        puVar11[1] = *puVar1;
        puVar11[2] = *puVar2;
        puVar11[3] = *puVar3;
        puVar11 = puVar11 + 4;
        iVar12 = iVar12 + 4;
      } while (iVar12 != 0);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar11 = uVar6;
      puVar11 = puVar11 + 1;
    }
  }
  uVar4 = uVar9 * 4 + 4;
  uVar13 = uVar9;
  if (uVar4 <= local_48) {
    local_48 = local_48 - 4;
    uVar13 = uVar9 + 1 + (local_48 + uVar9 * -4 >> 2);
    if (local_48 < uVar4) {
      uVar13 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar14 << 2);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar8;
  return;
}


