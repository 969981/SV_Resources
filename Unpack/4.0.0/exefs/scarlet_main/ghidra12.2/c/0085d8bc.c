/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085d8bc; name: FUN_0085d8bc
 */


void FUN_0085d8bc(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  if (0x7ffffffe < param_3) {
    local_38 = 0;
    local_48 = 0;
    puStack_40 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity",&local_48);
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 4);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar4;
    if (uVar3 != 1) {
      iVar7 = (uVar3 & 1) - uVar3;
      do {
        uVar2 = puVar5[1];
        iVar7 = iVar7 + 2;
        *puVar6 = *puVar5;
        puVar6[1] = uVar2;
        puVar1 = puVar5 + 2;
        uVar2 = puVar5[3];
        puVar5 = puVar5 + 4;
        puVar6[2] = *puVar1;
        puVar6[3] = uVar2;
        puVar6 = puVar6 + 4;
      } while (iVar7 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar4;
  return;
}


