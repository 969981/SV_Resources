/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbe364; name: FUN_02fbe364
 */


void FUN_02fbe364(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong local_28;
  
  puVar4 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar10 * 2;
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
  puVar5 = (undefined1 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6,&local_28);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar7 = (undefined1 *)*param_1;
    uVar2 = uVar3 & 3;
    puVar8 = puVar5;
    if (2 < uVar3 - 1) {
      iVar9 = -(uVar3 & 0xfffffffc);
      do {
        *puVar8 = *puVar7;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
        puVar8[3] = puVar7[3];
        puVar8 = puVar8 + 4;
        puVar7 = puVar7 + 4;
        iVar9 = iVar9 + 4;
      } while (iVar9 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  uVar1 = uVar6 + 1;
  if (uVar1 <= local_28) {
    uVar6 = uVar1;
    if (uVar1 <= local_28 - 1) {
      uVar6 = local_28;
    }
    local_28 = local_28 - 1;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*param_1,uVar10);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = puVar5;
  return;
}


