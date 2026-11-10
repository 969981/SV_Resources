/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03349630; name: FUN_03349630
 */


void FUN_03349630(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong local_68;
  
  plVar7 = (long *)PTR_PTR_047d1a50;
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar9 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x18,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar11 = *(int *)(param_1 + 1);
  if (0 < iVar11) {
    puVar10 = (undefined8 *)*param_1;
    puVar6 = puVar10;
    puVar13 = puVar4;
    iVar12 = iVar11;
    do {
      *puVar13 = *puVar6;
      *puVar6 = 0;
      FUN_01339774(puVar6 + 1,puVar3);
      puVar13[1] = puVar6[1];
      *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar6 + 2);
      *(undefined4 *)((long)puVar13 + 0x14) = *(undefined4 *)((long)puVar6 + 0x14);
      iVar12 = iVar12 + -1;
      puVar6[1] = 0;
      puVar6[2] = 0;
      plVar7 = (long *)PTR_PTR_047d1a50;
      puVar2 = PTR_DAT_047d1a08;
      puVar6 = puVar6 + 3;
      puVar13 = puVar13 + 3;
    } while (iVar12 != 0);
    puVar10 = puVar10 + 2;
    do {
      *(undefined4 *)puVar10 = 0;
      if ((-1 < (int)*(uint *)((long)puVar10 + 4)) && (puVar10[-1] != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,puVar10[-1],(ulong)*(uint *)((long)puVar10 + 4) << 2);
      }
      puVar10[-1] = 0;
      *(undefined4 *)((long)puVar10 + 4) = 0x80000000;
      if ((puVar10[-2] & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,puVar10[-2] - 1,0);
      }
      iVar11 = iVar11 + -1;
      puVar10 = puVar10 + 3;
    } while (iVar11 != 0);
  }
  uVar1 = uVar5 * 0x18 + 0x18;
  uVar8 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar8 = uVar5 + 1 + (local_68 + uVar5 * -0x18) / 0x18;
    if (local_68 < uVar1) {
      uVar8 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar7 + 0x20))(plVar7,*param_1,uVar9 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar4;
  return;
}


