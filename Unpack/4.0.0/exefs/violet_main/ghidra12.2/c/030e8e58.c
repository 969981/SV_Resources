/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e8e58; name: FUN_030e8e58
 */


void FUN_030e8e58(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar10 * 2;
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
  puVar4 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x10,&local_48);
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    puVar7 = (undefined4 *)*param_1;
    puVar8 = puVar4;
    do {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar7 + 2);
      *(undefined2 *)((long)puVar8 + 10) = *(undefined2 *)((long)puVar7 + 10);
      puVar1 = puVar7 + 3;
      iVar5 = iVar5 + -1;
      puVar7 = puVar7 + 4;
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)puVar1;
      puVar8 = puVar8 + 4;
    } while (iVar5 != 0);
  }
  uVar2 = uVar6 * 0x10 + 0x10;
  uVar9 = uVar6;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar9 = uVar6 + 1 + (local_48 + uVar6 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar9 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


