/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300996c; name: FUN_0300996c
 */


void FUN_0300996c(long *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong local_48;
  
  puVar6 = PTR_DAT_047d1a08;
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  local_48 = uVar8 * 0x20;
  puVar7 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    puVar9 = (undefined8 *)*param_1;
    puVar11 = puVar7;
    if (uVar5 != 1) {
      iVar12 = -(uVar5 & 0xfffffffe);
      do {
        uVar10 = puVar9[3];
        iVar12 = iVar12 + 2;
        puVar11[1] = puVar9[1];
        puVar11[3] = uVar10;
        uVar10 = *puVar9;
        puVar11[2] = puVar9[2];
        *puVar11 = uVar10;
        uVar10 = puVar9[4];
        uVar3 = puVar9[5];
        puVar1 = puVar9 + 6;
        uVar4 = puVar9[7];
        puVar9 = puVar9 + 8;
        puVar11[6] = *puVar1;
        puVar11[7] = uVar4;
        puVar11[4] = uVar10;
        puVar11[5] = uVar3;
        puVar11 = puVar11 + 8;
      } while (iVar12 != 0);
    }
    if ((uVar5 & 1) != 0) {
      uVar10 = puVar9[3];
      puVar11[1] = puVar9[1];
      puVar11[3] = uVar10;
      uVar10 = *puVar9;
      puVar11[2] = puVar9[2];
      *puVar11 = uVar10;
    }
  }
  uVar2 = uVar8 * 0x20 + 0x20;
  uVar13 = uVar8;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar13 = uVar8 + 1 + (local_48 + uVar8 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar13 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)puVar7;
  return;
}


