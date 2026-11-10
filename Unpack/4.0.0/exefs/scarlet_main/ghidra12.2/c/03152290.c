/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03152290; name: FUN_03152290
 */


void FUN_03152290(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar1 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 4);
  puVar2 = PTR_PTR_047d1a50;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar7 = (undefined8 *)*param_1;
    puVar4 = puVar7;
    puVar9 = puVar3;
    iVar8 = iVar6;
    do {
      FUN_030da42c(puVar4,puVar2);
      *puVar9 = *puVar4;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
      iVar8 = iVar8 + -1;
      puVar9 = puVar9 + 2;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    } while (iVar8 != 0);
    puVar5 = (uint *)((long)puVar7 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(long *)(puVar5 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar5 + -3),(ulong)*puVar5 << 5);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      iVar6 = iVar6 + -1;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + 4;
    } while (iVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar3;
  return;
}


