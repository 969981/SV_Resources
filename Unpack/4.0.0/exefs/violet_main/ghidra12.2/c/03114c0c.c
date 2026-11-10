/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03114c0c; name: FUN_03114c0c
 */


void FUN_03114c0c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  ulong local_68;
  
  puVar7 = PTR_PTR_047d1a50;
  puVar9 = PTR_DAT_047d1a08;
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar5 * 0x58;
  puVar4 = (undefined4 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  puVar3 = PTR_PTR_047d1a50;
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    puVar11 = (undefined4 *)*param_1;
    puVar6 = puVar4;
    puVar8 = puVar11;
    iVar13 = iVar12;
    do {
      uVar2 = *puVar8;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar8 + 1);
      *puVar6 = uVar2;
      FUN_030da2d4(puVar8 + 2,puVar3);
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar8 + 2);
      puVar6[4] = puVar8[4];
      puVar6[5] = puVar8[5];
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      FUN_01339774(puVar8 + 6,puVar3);
      *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar8 + 6);
      puVar6[8] = puVar8[8];
      puVar6[9] = puVar8[9];
      *(undefined8 *)(puVar8 + 6) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      FUN_030da34c(puVar8 + 10,puVar3);
      *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar8 + 10);
      puVar6[0xc] = puVar8[0xc];
      puVar6[0xd] = puVar8[0xd];
      *(undefined8 *)(puVar8 + 10) = 0;
      *(undefined8 *)(puVar8 + 0xc) = 0;
      FUN_030da3bc(puVar8 + 0xe,puVar3);
      *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(puVar8 + 0xe);
      puVar6[0x10] = puVar8[0x10];
      puVar6[0x11] = puVar8[0x11];
      *(undefined8 *)(puVar8 + 0xe) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      FUN_02e9b22c(puVar8 + 0x12,puVar3);
      *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar8 + 0x12);
      puVar6[0x14] = puVar8[0x14];
      puVar6[0x15] = puVar8[0x15];
      iVar13 = iVar13 + -1;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      puVar7 = PTR_PTR_047d1a50;
      puVar9 = PTR_DAT_047d1a08;
      puVar6 = puVar6 + 0x16;
      puVar8 = puVar8 + 0x16;
    } while (iVar13 != 0);
    do {
      FUN_030da1a4(puVar11);
      puVar11 = puVar11 + 0x16;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar1 = uVar5 * 0x58 + 0x58;
  uVar10 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x58;
    uVar10 = uVar5 + 1;
    if (uVar1 <= local_68) {
      uVar10 = uVar10 + (local_68 + uVar5 * -0x58) / 0x58;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar9 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


