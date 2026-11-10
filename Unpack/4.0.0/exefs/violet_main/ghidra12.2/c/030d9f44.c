/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d9f44; name: FUN_030d9f44
 */


void FUN_030d9f44(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar7 * 2;
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
           (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x10))
                     (PTR_PTR_047d1a50 + 0x20,uVar6 * 0x58,&local_68);
  puVar4 = PTR_PTR_047d1a50;
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    puVar11 = (undefined4 *)*param_1;
    puVar8 = puVar5;
    puVar9 = puVar11;
    iVar13 = iVar12;
    do {
      uVar2 = *puVar9;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 1);
      *puVar8 = uVar2;
      FUN_030da2d4(puVar9 + 2,puVar4);
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar9 + 2);
      puVar8[4] = puVar9[4];
      puVar8[5] = puVar9[5];
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      FUN_01339774(puVar9 + 6,puVar4);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar9 + 6);
      puVar8[8] = puVar9[8];
      puVar8[9] = puVar9[9];
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      FUN_030da34c(puVar9 + 10,puVar4);
      *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar9 + 10);
      puVar8[0xc] = puVar9[0xc];
      puVar8[0xd] = puVar9[0xd];
      *(undefined8 *)(puVar9 + 10) = 0;
      *(undefined8 *)(puVar9 + 0xc) = 0;
      FUN_030da3bc(puVar9 + 0xe,puVar4);
      *(undefined8 *)(puVar8 + 0xe) = *(undefined8 *)(puVar9 + 0xe);
      puVar8[0x10] = puVar9[0x10];
      puVar8[0x11] = puVar9[0x11];
      *(undefined8 *)(puVar9 + 0xe) = 0;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      FUN_02e9b22c(puVar9 + 0x12,puVar4);
      *(undefined8 *)(puVar8 + 0x12) = *(undefined8 *)(puVar9 + 0x12);
      puVar8[0x14] = puVar9[0x14];
      puVar8[0x15] = puVar9[0x15];
      iVar13 = iVar13 + -1;
      *(undefined8 *)(puVar9 + 0x12) = 0;
      *(undefined8 *)(puVar9 + 0x14) = 0;
      puVar8 = puVar8 + 0x16;
      puVar9 = puVar9 + 0x16;
    } while (iVar13 != 0);
    do {
      FUN_030da1a4(puVar11);
      puVar11 = puVar11 + 0x16;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar1 = uVar6 * 0x58 + 0x58;
  uVar10 = uVar6;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x58;
    uVar10 = uVar6 + 1;
    if (uVar1 <= local_68) {
      uVar10 = uVar10 + (local_68 + uVar6 * -0x58) / 0x58;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,*param_1,uVar7 * 0x58);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


