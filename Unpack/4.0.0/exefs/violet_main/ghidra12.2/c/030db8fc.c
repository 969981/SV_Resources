/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030db8fc; name: FUN_030db8fc
 */


void FUN_030db8fc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar12 = PTR_DAT_047d1a08;
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar4 * 0x10;
  puVar3 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  puVar2 = PTR_PTR_047d1a50;
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar13 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar7 = puVar13;
    iVar11 = iVar10;
    do {
      FUN_030da42c(puVar7,puVar2);
      *puVar5 = *puVar7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar7 + 0xc);
      iVar11 = iVar11 + -1;
      puVar5 = puVar5 + 2;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar6 = PTR_PTR_047d1a50;
      puVar12 = PTR_DAT_047d1a08;
      puVar7 = puVar7 + 2;
    } while (iVar11 != 0);
    puVar8 = (uint *)((long)puVar13 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar8 + -3),(ulong)*puVar8 << 5);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar10 = iVar10 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 4;
    } while (iVar10 != 0);
  }
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar9 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar9 = uVar4 + 1 + (local_68 + uVar4 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar9 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar12 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar3;
  return;
}


