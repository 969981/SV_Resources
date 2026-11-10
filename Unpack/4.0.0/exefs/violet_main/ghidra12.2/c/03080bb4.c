/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03080bb4; name: FUN_03080bb4
 */


void FUN_03080bb4(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  puVar8 = PTR_DAT_047d1a08;
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
  local_68 = uVar5 * 0x38;
  puVar4 = (undefined4 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[0x28],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0x2c));
  iVar9 = *(int *)(param_1 + 1);
  if (0 < iVar9) {
    puVar7 = (undefined4 *)*param_1;
    puVar10 = puVar7;
    puVar13 = puVar4;
    iVar12 = iVar9;
    do {
      *puVar13 = *puVar10;
      FUN_02eaedd0(puVar10 + 2,puVar3 + 0x20);
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar10 + 2);
      puVar13[4] = puVar10[4];
      puVar13[5] = puVar10[5];
      *(undefined8 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      FUN_02ed67fc(puVar10 + 6,puVar3);
      *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar10 + 6);
      puVar13[8] = puVar10[8];
      puVar13[9] = puVar10[9];
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 8) = 0;
      puVar13[10] = puVar10[10];
      puVar1 = puVar10 + 0xc;
      iVar12 = iVar12 + -1;
      puVar10 = puVar10 + 0xe;
      *(undefined1 *)(puVar13 + 0xc) = *(undefined1 *)puVar1;
      puVar8 = PTR_DAT_047d1a08;
      puVar13 = puVar13 + 0xe;
    } while (iVar12 != 0);
    puVar11 = puVar7 + 5;
    do {
      puVar11[3] = 0;
      if ((-1 < (int)puVar11[4]) && (*(long *)(puVar11 + 1) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar11 + 1),(ulong)puVar11[4] << 2);
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[4] = 0x80000000;
      puVar11[-1] = 0;
      if ((-1 < (int)*puVar11) && (*(long *)(puVar11 + -3) != 0)) {
        (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))
                  (puVar3 + 0x20,*(long *)(puVar11 + -3),(ulong)*puVar11 << 1);
      }
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      iVar9 = iVar9 + -1;
      *puVar11 = 0x80000000;
      puVar11 = puVar11 + 0xe;
    } while (iVar9 != 0);
  }
  uVar2 = uVar5 * 0x38 + 0x38;
  uVar6 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x38;
    uVar6 = uVar5 + 1;
    if (uVar2 <= local_68) {
      uVar6 = (local_68 + uVar5 * -0x38) / 0x38 + uVar6;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(puVar3[0x28],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = puVar4;
  return;
}


