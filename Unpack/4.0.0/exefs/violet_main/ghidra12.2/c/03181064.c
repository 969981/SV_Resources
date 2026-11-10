/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03181064; name: FUN_03181064
 */


void FUN_03181064(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0xc);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar3;
    if (uVar1 != 1) {
      iVar7 = -(uVar1 & 0xfffffffe);
      do {
        uVar4 = *puVar5;
        iVar7 = iVar7 + 2;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar6 = uVar4;
        uVar4 = *(undefined8 *)((long)puVar5 + 0xc);
        *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
        puVar6 = puVar6 + 3;
        puVar5 = puVar5 + 3;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 1) != 0) {
      uVar4 = *puVar5;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar6 = uVar4;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


