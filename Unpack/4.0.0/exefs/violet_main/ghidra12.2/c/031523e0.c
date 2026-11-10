/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031523e0; name: FUN_031523e0
 */


void FUN_031523e0(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 3);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    puVar4 = (undefined4 *)*param_1;
    puVar5 = puVar3;
    if (uVar1 != 1) {
      iVar6 = -(uVar1 & 0xfffffffe);
      do {
        *puVar5 = *puVar4;
        *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar4 + 1);
        puVar5[2] = puVar4[2];
        *(undefined2 *)(puVar5 + 3) = *(undefined2 *)(puVar4 + 3);
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0);
    }
    if ((uVar1 & 1) != 0) {
      *puVar5 = *puVar4;
      *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar4 + 1);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


