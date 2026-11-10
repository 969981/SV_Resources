/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03367af0; name: FUN_03367af0
 */


void FUN_03367af0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_58;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar10 * 2;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 8,&local_58);
  uVar11 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar11) {
    puVar8 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar6 = puVar8;
    if (uVar11 != 1) {
      iVar7 = -(uVar11 & 0xfffffffe);
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
    if ((uVar11 & 1) != 0) {
      *puVar5 = *puVar6;
      *puVar6 = 0;
    }
    do {
      FUN_03367004(puVar8);
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar1 = uVar4 * 8 + 8;
  uVar9 = uVar4;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 8;
    uVar9 = uVar4 + 1 + (local_58 + uVar4 * -8 >> 3);
    if (local_58 < uVar1) {
      uVar9 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar10 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = (long)puVar3;
  return;
}


