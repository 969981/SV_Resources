/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed6620; name: FUN_02ed6620
 */


void FUN_02ed6620(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong local_68;
  
  puVar12 = PTR_DAT_047d1a08;
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar5 * 0x18;
  puVar4 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_68,*(undefined4 *)(param_2 + 0xc));
  puVar3 = PTR_PTR_047d1a50;
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar13 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    puVar7 = puVar13;
    iVar11 = iVar10;
    do {
      FUN_02ed67fc(puVar7,puVar3);
      *puVar6 = *puVar7;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((long)puVar6 + 0xc) = *(undefined4 *)((long)puVar7 + 0xc);
      puVar1 = puVar7 + 2;
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar11 = iVar11 + -1;
      puVar7 = puVar7 + 3;
      puVar6[2] = *puVar1;
      puVar12 = PTR_DAT_047d1a08;
      puVar6 = puVar6 + 3;
    } while (iVar11 != 0);
    puVar8 = (uint *)((long)puVar13 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar8 + -3),(ulong)*puVar8 << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar10 = iVar10 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 6;
    } while (iVar10 != 0);
  }
  uVar2 = uVar5 * 0x18 + 0x18;
  uVar9 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar9 = uVar5 + 1;
    if (uVar2 <= local_68) {
      uVar9 = uVar9 + (local_68 + uVar5 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar12 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


