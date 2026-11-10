/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb9aec; name: FUN_02fb9aec
 */


void FUN_02fb9aec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong local_48;
  
  puVar2 = PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar4 * 0xa0,&local_48);
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar3;
    do {
      puVar9[1] = puVar8[1];
      *puVar9 = *puVar8;
      puVar9[3] = puVar8[3];
      puVar9[2] = puVar8[2];
      memcpy(puVar9 + 4,puVar8 + 4,0x80);
      iVar7 = iVar7 + -1;
      puVar9 = puVar9 + 0x14;
      puVar8 = puVar8 + 0x14;
    } while (iVar7 != 0);
  }
  uVar1 = uVar4 * 0xa0 + 0xa0;
  uVar5 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xa0;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_48) {
      uVar5 = uVar5 + (local_48 + uVar4 * -0xa0) / 0xa0;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*param_1,uVar6 * 0xa0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  *param_1 = puVar3;
  return;
}


