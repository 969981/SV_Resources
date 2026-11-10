/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307f25c; name: FUN_0307f25c
 */


void FUN_0307f25c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong local_68;
  
  plVar11 = (long *)PTR_PTR_047d1a50;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar8 * 2;
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
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x100,&local_68)
  ;
  puVar4 = PTR_PTR_047d1a50;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar13 = (undefined8 *)*param_1;
    puVar9 = puVar5;
    puVar10 = puVar13;
    iVar14 = iVar7;
    do {
      *puVar9 = *puVar10;
      *puVar10 = 0;
      puVar9[1] = puVar10[1];
      puVar10[1] = 0;
      puVar9[2] = puVar10[2];
      puVar10[2] = 0;
      memcpy(puVar9 + 3,puVar10 + 3,0x78);
      *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar10 + 0x12);
      uVar3 = puVar10[0x15];
      puVar9[0x14] = puVar10[0x14];
      puVar9[0x15] = uVar3;
      FUN_0307e2f4(puVar10 + 0x16,puVar4);
      puVar9[0x16] = puVar10[0x16];
      *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)(puVar10 + 0x17);
      *(undefined4 *)((long)puVar9 + 0xbc) = *(undefined4 *)((long)puVar10 + 0xbc);
      puVar10[0x16] = 0;
      puVar10[0x17] = 0;
      puVar9[0x18] = puVar10[0x18];
      *(undefined4 *)(puVar9 + 0x19) = *(undefined4 *)(puVar10 + 0x19);
      puVar10[0x18] = &DAT_03d7702c;
      *(undefined4 *)(puVar10 + 0x19) = 0;
      FUN_0307e364(puVar10 + 0x1a,puVar4);
      puVar9[0x1a] = puVar10[0x1a];
      *(undefined4 *)(puVar9 + 0x1b) = *(undefined4 *)(puVar10 + 0x1b);
      *(undefined4 *)((long)puVar9 + 0xdc) = *(undefined4 *)((long)puVar10 + 0xdc);
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      puVar9[0x1c] = puVar10[0x1c];
      *(undefined4 *)(puVar9 + 0x1d) = *(undefined4 *)(puVar10 + 0x1d);
      puVar1 = puVar10 + 0x1e;
      puVar10[0x1c] = &DAT_03d7702c;
      *(undefined4 *)(puVar10 + 0x1d) = 0;
      iVar14 = iVar14 + -1;
      puVar10 = puVar10 + 0x20;
      *(undefined1 *)(puVar9 + 0x1e) = *(undefined1 *)puVar1;
      plVar11 = (long *)PTR_PTR_047d1a50;
      puVar9 = puVar9 + 0x20;
    } while (iVar14 != 0);
    do {
      FUN_0307e0e0(puVar13);
      puVar13 = puVar13 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar2 = uVar6 * 0x100 + 0x100;
  uVar12 = uVar6;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x100;
    uVar12 = uVar6 + 1 + (local_68 + uVar6 * -0x100 >> 8);
    if (local_68 < uVar2) {
      uVar12 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,*param_1,uVar8 << 8);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar5;
  return;
}


