/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e84cc; name: FUN_030e84cc
 */


void FUN_030e84cc(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
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
  local_48 = uVar7 * 0x10;
  puVar5 = (undefined4 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar8 = (undefined4 *)*param_1;
    puVar9 = puVar5;
    do {
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar8 + 2);
      *(undefined2 *)((long)puVar9 + 10) = *(undefined2 *)((long)puVar8 + 10);
      puVar1 = puVar8 + 3;
      iVar6 = iVar6 + -1;
      puVar8 = puVar8 + 4;
      *(undefined1 *)(puVar9 + 3) = *(undefined1 *)puVar1;
      puVar9 = puVar9 + 4;
    } while (iVar6 != 0);
  }
  uVar2 = uVar7 * 0x10 + 0x10;
  uVar10 = uVar7;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar10 = uVar7 + 1 + (local_48 + uVar7 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar10 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


