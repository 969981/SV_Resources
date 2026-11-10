/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b7c58; name: FUN_033b7c58
 */


void FUN_033b7c58(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong local_48;
  
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x10,&local_48);
  uVar12 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar12) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    puVar8 = puVar6;
    if (uVar12 != 1) {
      iVar9 = -(uVar12 & 0xfffffffe);
      do {
        *puVar7 = *puVar8;
        *puVar8 = 0;
        puVar7[1] = puVar8[1];
        puVar8[1] = 0;
        puVar7[2] = puVar8[2];
        puVar8[2] = 0;
        puVar7[3] = puVar8[3];
        puVar8[3] = 0;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
    }
    if ((uVar12 & 1) != 0) {
      *puVar7 = *puVar8;
      *puVar8 = 0;
      puVar7[1] = puVar8[1];
      puVar8[1] = 0;
    }
    puVar2 = PTR_DAT_047d1a08;
    puVar13 = puVar6 + 1;
    do {
      if ((*puVar13 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,*puVar13 - 1,0);
      }
      if ((puVar13[-1] & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,puVar13[-1] - 1,0);
      }
      uVar12 = uVar12 - 1;
      puVar13 = puVar13 + 2;
    } while (uVar12 != 0);
  }
  uVar1 = uVar5 * 0x10 + 0x10;
  uVar10 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar10 = uVar5 + 1 + (local_48 + uVar5 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar11 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = (long)puVar4;
  return;
}


