/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336fcfc; name: FUN_0336fcfc
 */


void FUN_0336fcfc(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong local_68;
  
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar8 * 2;
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
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x28,&local_68);
  iVar14 = (int)param_1[1];
  if (0 < iVar14) {
    puVar6 = (undefined8 *)*param_1;
    puVar9 = puVar4;
    puVar10 = puVar6;
    iVar7 = iVar14;
    do {
      *puVar9 = *puVar10;
      *puVar10 = 0;
      puVar9[1] = puVar10[1];
      uVar1 = puVar10[2];
      uVar2 = puVar10[3];
      puVar10[1] = 0;
      *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar10 + 4);
      iVar7 = iVar7 + -1;
      puVar10 = puVar10 + 5;
      puVar9[2] = uVar1;
      puVar9[3] = uVar2;
      puVar3 = PTR_DAT_047d1a08;
      puVar9 = puVar9 + 5;
    } while (iVar7 != 0);
    puVar6 = puVar6 + 1;
    do {
      puVar11 = (ulong *)*puVar6;
      if (puVar11 != (ulong *)0x0) {
        if ((*(uint *)((long)puVar11 + 0x1c) < 6 &&
             (1 << (ulong)(*(uint *)((long)puVar11 + 0x1c) & 0x1f) & 0x32U) != 0) &&
           (uVar12 = puVar11[2], uVar12 != 0)) {
          FUN_03364aa0(uVar12);
          (**(code **)(puVar3 + 8))(0,uVar12,0);
        }
        if ((puVar11[1] & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,puVar11[1] - 1,0);
        }
        if ((*puVar11 & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,*puVar11 - 1,0);
        }
        (**(code **)(puVar3 + 8))(0,puVar11,0);
      }
      if ((puVar6[-1] & 1) != 0) {
        (**(code **)(puVar3 + 8))(0,puVar6[-1] - 1,0);
      }
      iVar14 = iVar14 + -1;
      puVar6 = puVar6 + 5;
    } while (iVar14 != 0);
  }
  uVar12 = uVar5 * 0x28 + 0x28;
  uVar13 = uVar5;
  if (uVar12 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar13 = uVar5 + 1;
    if (uVar12 <= local_68) {
      uVar13 = uVar13 + (local_68 + uVar5 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar8 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)puVar4;
  return;
}


