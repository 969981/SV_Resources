/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fdf08; name: FUN_030fdf08
 */


void FUN_030fdf08(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  ulong local_68;
  
  plVar9 = (long *)PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar6 * 2;
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
  puVar4 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0xd0,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    puVar11 = (undefined4 *)*param_1;
    puVar7 = puVar4;
    puVar8 = puVar11;
    iVar13 = iVar12;
    do {
      *puVar7 = *puVar8;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
      *(undefined8 *)(puVar8 + 4) = 0;
      memcpy(puVar7 + 8,puVar8 + 8,0x60);
      *(undefined8 *)(puVar7 + 0x22) = *(undefined8 *)(puVar8 + 0x22);
      *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(puVar8 + 0x20);
      *(undefined8 *)(puVar7 + 0x26) = *(undefined8 *)(puVar8 + 0x26);
      *(undefined8 *)(puVar7 + 0x24) = *(undefined8 *)(puVar8 + 0x24);
      puVar7[0x28] = puVar8[0x28];
      FUN_030fe14c(puVar8 + 0x2a,puVar3);
      *(undefined8 *)(puVar7 + 0x2a) = *(undefined8 *)(puVar8 + 0x2a);
      puVar7[0x2c] = puVar8[0x2c];
      puVar7[0x2d] = puVar8[0x2d];
      *(undefined8 *)(puVar8 + 0x2a) = 0;
      *(undefined8 *)(puVar8 + 0x2c) = 0;
      FUN_030fe264(puVar8 + 0x2e,puVar3);
      *(undefined8 *)(puVar7 + 0x2e) = *(undefined8 *)(puVar8 + 0x2e);
      puVar7[0x30] = puVar8[0x30];
      puVar7[0x31] = puVar8[0x31];
      uVar2 = *(undefined2 *)(puVar8 + 0x32);
      iVar13 = iVar13 + -1;
      *(undefined8 *)(puVar8 + 0x2e) = 0;
      *(undefined8 *)(puVar8 + 0x30) = 0;
      *(undefined1 *)((long)puVar7 + 0xca) = *(undefined1 *)((long)puVar8 + 0xca);
      *(undefined2 *)(puVar7 + 0x32) = uVar2;
      plVar9 = (long *)PTR_PTR_047d1a50;
      puVar8 = puVar8 + 0x34;
      puVar7 = puVar7 + 0x34;
    } while (iVar13 != 0);
    do {
      FUN_030fd1ac(puVar11);
      puVar11 = puVar11 + 0x34;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar1 = uVar5 * 0xd0 + 0xd0;
  uVar10 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0xd0;
    uVar10 = uVar5 + 1;
    if (uVar1 <= local_68) {
      uVar10 = uVar10 + (local_68 + uVar5 * -0xd0) / 0xd0;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar9 + 0x20))(plVar9,*param_1,uVar6 * 0xd0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


