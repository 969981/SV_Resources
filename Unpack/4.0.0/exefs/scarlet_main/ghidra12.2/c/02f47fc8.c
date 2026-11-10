/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f47fc8; name: FUN_02f47fc8
 */


void FUN_02f47fc8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
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
  local_48 = uVar6 * 0x1c;
  puVar5 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = puVar5;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        uVar10 = *puVar7;
        uVar12 = puVar7[1];
        iVar9 = iVar9 + 2;
        uVar11 = puVar7[2];
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar7 + 3);
        puVar8[1] = uVar12;
        puVar8[2] = uVar11;
        *puVar8 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar7 + 0x1c);
        uVar12 = *(undefined8 *)((long)puVar7 + 0x24);
        uVar11 = *(undefined8 *)((long)puVar7 + 0x2c);
        *(undefined4 *)((long)puVar8 + 0x34) = *(undefined4 *)((long)puVar7 + 0x34);
        *(undefined8 *)((long)puVar8 + 0x2c) = uVar11;
        *(undefined8 *)((long)puVar8 + 0x24) = uVar12;
        *(undefined8 *)((long)puVar8 + 0x1c) = uVar10;
        puVar8 = puVar8 + 7;
        puVar7 = puVar7 + 7;
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar10 = *puVar7;
      uVar12 = puVar7[1];
      uVar11 = puVar7[2];
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar7 + 3);
      *puVar8 = uVar10;
      puVar8[1] = uVar12;
      puVar8[2] = uVar11;
    }
  }
  uVar1 = uVar6 * 0x1c + 0x1c;
  uVar13 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x1c;
    uVar13 = uVar6 + 1;
    if (uVar1 <= local_48) {
      uVar13 = uVar13 + (local_48 + uVar6 * -0x1c) / 0x1c;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar5;
  return;
}


