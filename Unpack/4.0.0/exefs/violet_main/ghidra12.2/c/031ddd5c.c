/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ddd5c; name: FUN_031ddd5c
 */


void FUN_031ddd5c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong local_68;
  
  puVar2 = PTR_PTR_047d1a50;
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
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x18,&local_68);
  iVar8 = *(int *)(param_1 + 1);
  if (0 < iVar8) {
    puVar7 = (undefined8 *)*param_1;
    puVar9 = puVar7;
    puVar12 = puVar3;
    iVar11 = iVar8;
    do {
      *puVar12 = *puVar9;
      FUN_031ddf2c(puVar9 + 1);
      puVar12[1] = puVar9[1];
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)puVar9 + 0x14);
      iVar11 = iVar11 + -1;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9 = puVar9 + 3;
      puVar12 = puVar12 + 3;
    } while (iVar11 != 0);
    puVar10 = (uint *)((long)puVar7 + 0x14);
    do {
      puVar10[-1] = 0;
      if ((-1 < (int)*puVar10) && (*(long *)(puVar10 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar10 + -3),(ulong)*puVar10 << 4);
      }
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      iVar8 = iVar8 + -1;
      *puVar10 = 0x80000000;
      puVar10 = puVar10 + 6;
    } while (iVar8 != 0);
  }
  uVar1 = uVar4 * 0x18 + 0x18;
  uVar5 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar5 = uVar5 + (local_68 + uVar4 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar6 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  *param_1 = puVar3;
  return;
}


