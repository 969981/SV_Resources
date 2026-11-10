/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03375b64; name: FUN_03375b64
 */


void FUN_03375b64(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
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
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0x18,&local_68);
  iVar8 = *(int *)(param_1 + 1);
  if (0 < iVar8) {
    puVar7 = (undefined4 *)*param_1;
    puVar9 = puVar7;
    puVar12 = puVar3;
    iVar11 = iVar8;
    do {
      *puVar12 = *puVar9;
      FUN_03375d34(puVar9 + 2);
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar9 + 2);
      puVar12[4] = puVar9[4];
      puVar12[5] = puVar9[5];
      iVar11 = iVar11 + -1;
      *(undefined8 *)(puVar9 + 2) = 0;
      *(undefined8 *)(puVar9 + 4) = 0;
      puVar9 = puVar9 + 6;
      puVar12 = puVar12 + 6;
    } while (iVar11 != 0);
    puVar10 = puVar7 + 5;
    do {
      puVar10[-1] = 0;
      if ((-1 < (int)*puVar10) && (*(long *)(puVar10 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar10 + -3),(ulong)*puVar10 << 3);
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


