/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030db6e8; name: FUN_030db6e8
 */


void FUN_030db6e8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  int iVar14;
  ulong local_68;
  
  puVar13 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  uVar6 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar6 * 0x20;
  puVar4 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  puVar3 = PTR_PTR_047d1a50;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar11 = (undefined8 *)*param_1;
    puVar8 = puVar11;
    puVar12 = puVar4;
    iVar14 = iVar7;
    do {
      FUN_030da6d0(puVar8,puVar3);
      *puVar12 = *puVar8;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar8 + 0xc);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar12[2] = puVar8[2];
      iVar14 = iVar14 + -1;
      *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar8 + 3);
      puVar8[2] = &DAT_03d7702c;
      *(undefined4 *)(puVar8 + 3) = 0;
      puVar13 = PTR_PTR_047d1a50;
      puVar8 = puVar8 + 4;
      puVar12 = puVar12 + 4;
    } while (iVar14 != 0);
    puVar9 = (uint *)((long)puVar11 + 0xc);
    do {
      lVar5 = *(long *)(puVar9 + 1);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
        (**(code **)(puVar2 + 8))(puVar3[8],lVar5,0);
        *(undefined **)(puVar9 + 1) = &DAT_03d7702c;
        puVar9[3] = 0;
      }
      puVar9[-1] = 0;
      if ((-1 < (int)*puVar9) && (*(long *)(puVar9 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar9 + -3),(ulong)*puVar9 << 2);
      }
      puVar9[-3] = 0;
      puVar9[-2] = 0;
      iVar7 = iVar7 + -1;
      *puVar9 = 0x80000000;
      puVar9 = puVar9 + 8;
    } while (iVar7 != 0);
  }
  uVar1 = uVar6 * 0x20 + 0x20;
  uVar10 = uVar6;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x20;
    uVar10 = uVar6 + 1 + (local_68 + uVar6 * -0x20 >> 5);
    if (local_68 < uVar1) {
      uVar10 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar2 + 8))(puVar13[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


