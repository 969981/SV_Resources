/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fcb62c; name: FUN_02fcb62c
 */


void FUN_02fcb62c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar13 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x1c,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        uVar9 = *puVar6;
        uVar11 = puVar6[1];
        iVar8 = iVar8 + 2;
        uVar10 = puVar6[2];
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar6 + 3);
        puVar7[1] = uVar11;
        puVar7[2] = uVar10;
        *puVar7 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar6 + 0x1c);
        uVar11 = *(undefined8 *)((long)puVar6 + 0x24);
        uVar10 = *(undefined8 *)((long)puVar6 + 0x2c);
        *(undefined4 *)((long)puVar7 + 0x34) = *(undefined4 *)((long)puVar6 + 0x34);
        *(undefined8 *)((long)puVar7 + 0x2c) = uVar10;
        *(undefined8 *)((long)puVar7 + 0x24) = uVar11;
        *(undefined8 *)((long)puVar7 + 0x1c) = uVar9;
        puVar7 = puVar7 + 7;
        puVar6 = puVar6 + 7;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar9 = *puVar6;
      uVar11 = puVar6[1];
      uVar10 = puVar6[2];
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar6 + 3);
      *puVar7 = uVar9;
      puVar7[1] = uVar11;
      puVar7[2] = uVar10;
    }
  }
  uVar1 = uVar5 * 0x1c + 0x1c;
  uVar12 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x1c;
    uVar12 = uVar5 + 1;
    if (uVar1 <= local_48) {
      uVar12 = uVar12 + (local_48 + uVar5 * -0x1c) / 0x1c;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar13 * 0x1c);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar4;
  return;
}


