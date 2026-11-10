/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a63ec; name: FUN_033a63ec
 */


void FUN_033a63ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
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
  lVar4 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x18,&local_48);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    puVar7 = (undefined1 *)(lVar4 + 0x14);
    puVar8 = (undefined4 *)(*param_1 + 0x10);
    do {
      uVar2 = *(undefined8 *)(puVar8 + -4);
      *(undefined8 *)(puVar7 + -0xc) = *(undefined8 *)(puVar8 + -2);
      *(undefined8 *)(puVar7 + -0x14) = uVar2;
      *puVar7 = 0;
      if (*(char *)(puVar8 + 1) != '\0') {
        *(undefined4 *)(puVar7 + -4) = *puVar8;
        *puVar7 = 1;
      }
      iVar5 = iVar5 + -1;
      puVar7 = puVar7 + 0x18;
      puVar8 = puVar8 + 6;
    } while (iVar5 != 0);
  }
  uVar1 = uVar6 * 0x18 + 0x18;
  uVar9 = uVar6;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar9 = uVar6 + 1;
    if (uVar1 <= local_48) {
      uVar9 = uVar9 + (local_48 + uVar6 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar4;
  return;
}


