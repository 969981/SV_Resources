/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a2e00; name: FUN_031a2e00
 */


void FUN_031a2e00(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar11 * 2;
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
  puVar5 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 7,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar7 = (undefined4 *)*param_1;
    puVar8 = puVar5;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        uVar3 = *puVar7;
        iVar9 = iVar9 + 2;
        *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar7 + 3);
        *puVar8 = uVar3;
        uVar3 = *(undefined4 *)((long)puVar7 + 7);
        *(undefined4 *)((long)puVar8 + 10) = *(undefined4 *)((long)puVar7 + 10);
        *(undefined4 *)((long)puVar8 + 7) = uVar3;
        puVar8 = (undefined4 *)((long)puVar8 + 0xe);
        puVar7 = (undefined4 *)((long)puVar7 + 0xe);
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = *puVar7;
      *(undefined4 *)((long)puVar8 + 3) = *(undefined4 *)((long)puVar7 + 3);
      *puVar8 = uVar3;
    }
  }
  uVar1 = uVar6 * 7 + 7;
  uVar10 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 7;
    uVar10 = uVar6 + 1;
    if (uVar1 <= local_48) {
      uVar10 = uVar10 + (local_48 + uVar6 * -7) / 7;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*param_1,uVar11 * 7);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


