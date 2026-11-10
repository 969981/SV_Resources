/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033788d8; name: FUN_033788d8
 */


void FUN_033788d8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong local_48;
  
  puVar4 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
  uVar7 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  local_48 = uVar7 * 0x20;
  lVar5 = (**(code **)PTR_DAT_047d1a08)
                    (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = (undefined1 *)(lVar5 + 0x18);
    do {
      uVar2 = puVar8[1];
      *(undefined8 *)(puVar9 + -0x18) = *puVar8;
      *(undefined8 *)(puVar9 + -0x10) = uVar2;
      *(undefined4 *)(puVar9 + -8) = *(undefined4 *)(puVar8 + 2);
      *puVar9 = 0;
      if (*(char *)(puVar8 + 3) != '\0') {
        *(undefined4 *)(puVar9 + -4) = *(undefined4 *)((long)puVar8 + 0x14);
        *puVar9 = 1;
      }
      iVar6 = iVar6 + -1;
      puVar9 = puVar9 + 0x20;
      puVar8 = puVar8 + 4;
    } while (iVar6 != 0);
  }
  uVar1 = uVar7 * 0x20 + 0x20;
  uVar10 = uVar7;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar10 = uVar7 + 1 + (local_48 + uVar7 * -0x20 >> 5);
    if (local_48 < uVar1) {
      uVar10 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar5;
  return;
}


