/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336f908; name: FUN_0336f908
 */


void FUN_0336f908(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar11 * 2;
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
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 8,&local_68);
  uVar12 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar12) {
    puVar13 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    puVar7 = puVar13;
    if (uVar12 != 1) {
      iVar8 = -(uVar12 & 0xfffffffe);
      do {
        *puVar6 = *puVar7;
        *puVar7 = 0;
        puVar6[1] = puVar7[1];
        puVar7[1] = 0;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    puVar2 = PTR_DAT_047d1a08;
    if ((uVar12 & 1) != 0) {
      *puVar6 = *puVar7;
      *puVar7 = 0;
      puVar2 = PTR_DAT_047d1a08;
    }
    do {
      puVar9 = (ulong *)*puVar13;
      if (puVar9 != (ulong *)0x0) {
        if ((*puVar9 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar9 - 1,0);
        }
        (**(code **)(puVar2 + 8))(0,puVar9,0);
      }
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar1 = uVar5 * 8 + 8;
  uVar10 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 8;
    uVar10 = uVar5 + 1 + (local_68 + uVar5 * -8 >> 3);
    if (local_68 < uVar1) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar11 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = (long)puVar4;
  return;
}


