/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f24cc; name: FUN_030f24cc
 */


void FUN_030f24cc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong local_68;
  
  plVar10 = (long *)PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
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
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x68,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    puVar9 = (undefined4 *)*param_1;
    puVar7 = puVar3;
    puVar12 = puVar9;
    iVar11 = iVar5;
    do {
      *puVar7 = *puVar12;
      FUN_030da6d0(puVar12 + 2,puVar2);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar12 + 2);
      puVar7[4] = puVar12[4];
      puVar7[5] = puVar12[5];
      *(undefined8 *)(puVar12 + 2) = 0;
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar12 + 6);
      puVar7[8] = puVar12[8];
      *(undefined **)(puVar12 + 6) = &DAT_03d7702c;
      puVar12[8] = 0;
      FUN_030daed4(puVar12 + 10,puVar2);
      *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar12 + 10);
      puVar7[0xc] = puVar12[0xc];
      puVar7[0xd] = puVar12[0xd];
      *(undefined8 *)(puVar12 + 10) = 0;
      *(undefined8 *)(puVar12 + 0xc) = 0;
      *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(puVar12 + 0xe);
      puVar7[0x10] = puVar12[0x10];
      *(undefined **)(puVar12 + 0xe) = &DAT_03d7702c;
      puVar12[0x10] = 0;
      FUN_030daf4c(puVar12 + 0x12,puVar2);
      *(undefined8 *)(puVar7 + 0x12) = *(undefined8 *)(puVar12 + 0x12);
      puVar7[0x14] = puVar12[0x14];
      puVar7[0x15] = puVar12[0x15];
      *(undefined8 *)(puVar12 + 0x12) = 0;
      *(undefined8 *)(puVar12 + 0x14) = 0;
      *(undefined8 *)(puVar7 + 0x16) = *(undefined8 *)(puVar12 + 0x16);
      iVar11 = iVar11 + -1;
      puVar7[0x18] = puVar12[0x18];
      *(undefined **)(puVar12 + 0x16) = &DAT_03d7702c;
      puVar12[0x18] = 0;
      plVar10 = (long *)PTR_PTR_047d1a50;
      puVar12 = puVar12 + 0x1a;
      puVar7 = puVar7 + 0x1a;
    } while (iVar11 != 0);
    puVar9 = puVar9 + 2;
    do {
      FUN_030d9a14(puVar9);
      iVar5 = iVar5 + -1;
      puVar9 = puVar9 + 0x1a;
    } while (iVar5 != 0);
  }
  uVar1 = uVar4 * 0x68 + 0x68;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x68;
    uVar8 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar8 = uVar8 + (local_68 + uVar4 * -0x68) / 0x68;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar10 + 0x20))(plVar10,*param_1,uVar6 * 0x68);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}


