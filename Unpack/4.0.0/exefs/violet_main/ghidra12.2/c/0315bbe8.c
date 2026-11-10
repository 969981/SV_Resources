/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315bbe8; name: FUN_0315bbe8
 */


void FUN_0315bbe8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  puVar1 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x38);
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    plVar3 = (long *)*param_1;
    plVar4 = (long *)(lVar2 + 0x18);
    plVar5 = plVar3 + 3;
    iVar6 = iVar8;
    do {
      plVar4[-2] = 0xffffffff;
      plVar4[-1] = 1;
      iVar6 = iVar6 + -1;
      plVar4[-3] = (long)&PTR_LAB_04667710;
      *plVar4 = *plVar5;
      *plVar5 = 0;
      plVar4[1] = plVar5[1];
      lVar7 = plVar5[2];
      plVar5[1] = 0;
      *(undefined8 *)((long)plVar4 + 0x16) = *(undefined8 *)((long)plVar5 + 0x16);
      plVar4[2] = lVar7;
      plVar4 = plVar4 + 7;
      plVar5 = plVar5 + 7;
    } while (iVar6 != 0);
    do {
      (**(code **)(*plVar3 + 8))(plVar3);
      iVar8 = iVar8 + -1;
      plVar3 = plVar3 + 7;
    } while (iVar8 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = lVar2;
  return;
}


