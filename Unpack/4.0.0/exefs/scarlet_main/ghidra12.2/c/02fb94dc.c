/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb94dc; name: FUN_02fb94dc
 */


void FUN_02fb94dc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_48;
  
  puVar6 = PTR_PTR_047d1a50;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar14 * 2;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  puVar7 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar8 * 0x20,&local_48);
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    puVar9 = (undefined8 *)*param_1;
    puVar11 = puVar7;
    if (uVar5 != 1) {
      iVar12 = -(uVar5 & 0xfffffffe);
      do {
        uVar10 = puVar9[3];
        iVar12 = iVar12 + 2;
        puVar11[1] = puVar9[1];
        puVar11[3] = uVar10;
        uVar10 = *puVar9;
        puVar11[2] = puVar9[2];
        *puVar11 = uVar10;
        uVar10 = puVar9[4];
        uVar3 = puVar9[5];
        puVar1 = puVar9 + 6;
        uVar4 = puVar9[7];
        puVar9 = puVar9 + 8;
        puVar11[6] = *puVar1;
        puVar11[7] = uVar4;
        puVar11[4] = uVar10;
        puVar11[5] = uVar3;
        puVar11 = puVar11 + 8;
      } while (iVar12 != 0);
    }
    if ((uVar5 & 1) != 0) {
      uVar10 = puVar9[3];
      puVar11[1] = puVar9[1];
      puVar11[3] = uVar10;
      uVar10 = *puVar9;
      puVar11[2] = puVar9[2];
      *puVar11 = uVar10;
    }
  }
  uVar2 = uVar8 * 0x20 + 0x20;
  uVar13 = uVar8;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar13 = uVar8 + 1 + (local_48 + uVar8 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar13 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,*param_1,uVar14 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)puVar7;
  return;
}


