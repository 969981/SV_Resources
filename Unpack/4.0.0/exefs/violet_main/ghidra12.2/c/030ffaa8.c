/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ffaa8; name: FUN_030ffaa8
 */


void FUN_030ffaa8(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong local_68;
  
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar11 * 2;
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x10,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar12 = (undefined8 *)*param_1;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    puVar6 = puVar4;
    puVar9 = puVar12;
    iVar13 = iVar7;
    do {
      FUN_02e9b22c(puVar9,puVar1);
      *puVar6 = *puVar9;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)((long)puVar9 + 0xc);
      iVar13 = iVar13 + -1;
      puVar6 = puVar6 + 2;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = puVar9 + 2;
    } while (iVar13 != 0);
    puVar8 = (uint *)((long)puVar12 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))
                  (puVar3 + 0x20,*(long *)(puVar8 + -3),(ulong)*puVar8 << 4);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar7 = iVar7 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 4;
    } while (iVar7 != 0);
  }
  uVar2 = uVar5 * 0x10 + 0x10;
  uVar10 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar10 = uVar5 + 1 + (local_68 + uVar5 * -0x10 >> 4);
    if (local_68 < uVar2) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar11 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


