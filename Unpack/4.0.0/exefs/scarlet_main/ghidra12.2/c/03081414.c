/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03081414; name: FUN_03081414
 */


void FUN_03081414(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 2);
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    puVar8 = (undefined4 *)*param_1;
    uVar4 = uVar6 & 3;
    puVar9 = puVar7;
    if (2 < uVar6 - 1) {
      iVar10 = -(uVar6 & 0xfffffffc);
      do {
        uVar5 = *puVar8;
        puVar1 = puVar8 + 1;
        puVar2 = puVar8 + 2;
        puVar3 = puVar8 + 3;
        puVar8 = puVar8 + 4;
        *puVar9 = uVar5;
        puVar9[1] = *puVar1;
        puVar9[2] = *puVar2;
        puVar9[3] = *puVar3;
        puVar9 = puVar9 + 4;
        iVar10 = iVar10 + 4;
      } while (iVar10 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar9 = uVar5;
      puVar9 = puVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar7;
  return;
}


