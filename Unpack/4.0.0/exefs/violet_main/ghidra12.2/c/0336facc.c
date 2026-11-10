/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336facc; name: FUN_0336facc
 */


void FUN_0336facc(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong local_68;
  
  uVar3 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar3 * 2;
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
  puVar2 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 8,&local_68);
  uVar11 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar11) {
    puVar12 = (undefined8 *)*param_1;
    puVar5 = puVar2;
    puVar6 = puVar12;
    if (uVar11 != 1) {
      iVar7 = -(uVar11 & 0xfffffffe);
      do {
        *puVar5 = *puVar6;
        *puVar6 = 0;
        puVar5[1] = puVar6[1];
        puVar6[1] = 0;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 2;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    puVar1 = PTR_DAT_047d1a08;
    if ((uVar11 & 1) != 0) {
      *puVar5 = *puVar6;
      *puVar6 = 0;
      puVar1 = PTR_DAT_047d1a08;
    }
    do {
      puVar8 = (ulong *)*puVar12;
      if (puVar8 != (ulong *)0x0) {
        if ((*(uint *)((long)puVar8 + 0x1c) < 6 &&
             (1 << (ulong)(*(uint *)((long)puVar8 + 0x1c) & 0x1f) & 0x32U) != 0) &&
           (uVar9 = puVar8[2], uVar9 != 0)) {
          FUN_03364aa0(uVar9);
          (**(code **)(puVar1 + 8))(0,uVar9,0);
        }
        if ((puVar8[1] & 1) != 0) {
          (**(code **)(puVar1 + 8))(0,puVar8[1] - 1,0);
        }
        if ((*puVar8 & 1) != 0) {
          (**(code **)(puVar1 + 8))(0,*puVar8 - 1,0);
        }
        (**(code **)(puVar1 + 8))(0,puVar8,0);
      }
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar9 = uVar4 * 8 + 8;
  uVar10 = uVar4;
  if (uVar9 <= local_68) {
    local_68 = local_68 - 8;
    uVar10 = uVar4 + 1 + (local_68 + uVar4 * -8 >> 3);
    if (local_68 < uVar9) {
      uVar10 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar3 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = (long)puVar2;
  return;
}


