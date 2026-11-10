/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03378b40; name: FUN_03378b40
 */


void FUN_03378b40(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
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
  lVar4 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x20,&local_48);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined1 *)(lVar4 + 0x18);
    do {
      uVar2 = puVar7[1];
      *(undefined8 *)(puVar8 + -0x18) = *puVar7;
      *(undefined8 *)(puVar8 + -0x10) = uVar2;
      *(undefined4 *)(puVar8 + -8) = *(undefined4 *)(puVar7 + 2);
      *puVar8 = 0;
      if (*(char *)(puVar7 + 3) != '\0') {
        *(undefined4 *)(puVar8 + -4) = *(undefined4 *)((long)puVar7 + 0x14);
        *puVar8 = 1;
      }
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + 0x20;
      puVar7 = puVar7 + 4;
    } while (iVar5 != 0);
  }
  uVar1 = uVar6 * 0x20 + 0x20;
  uVar9 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar9 = uVar6 + 1 + (local_48 + uVar6 * -0x20 >> 5);
    if (local_48 < uVar1) {
      uVar9 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 << 5);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar4;
  return;
}


