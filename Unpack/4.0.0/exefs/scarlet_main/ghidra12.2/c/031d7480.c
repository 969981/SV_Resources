/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d7480; name: FUN_031d7480
 */


void FUN_031d7480(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar4 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                     (PTR_PTR_047d1a50 + 0x20,param_2 << 4);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar5;
    if (uVar3 != 1) {
      iVar8 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = puVar6[1];
        iVar8 = iVar8 + 2;
        *puVar7 = *puVar6;
        puVar7[1] = uVar2;
        puVar1 = puVar6 + 2;
        uVar2 = puVar6[3];
        puVar6 = puVar6 + 4;
        puVar7[2] = *puVar1;
        puVar7[3] = uVar2;
        puVar7 = puVar7 + 4;
      } while (iVar8 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar2;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar4[0x28],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar5;
  return;
}


