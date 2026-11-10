/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f640c; name: FUN_030f640c
 */


void FUN_030f640c(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 5);
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar6 = (undefined8 *)*param_1;
    puVar8 = puVar5;
    if (uVar4 != 1) {
      iVar9 = -(uVar4 & 0xfffffffe);
      do {
        uVar7 = puVar6[3];
        iVar9 = iVar9 + 2;
        puVar8[1] = puVar6[1];
        puVar8[3] = uVar7;
        uVar7 = *puVar6;
        puVar8[2] = puVar6[2];
        *puVar8 = uVar7;
        uVar7 = puVar6[4];
        uVar2 = puVar6[5];
        puVar1 = puVar6 + 6;
        uVar3 = puVar6[7];
        puVar6 = puVar6 + 8;
        puVar8[6] = *puVar1;
        puVar8[7] = uVar3;
        puVar8[4] = uVar7;
        puVar8[5] = uVar2;
        puVar8 = puVar8 + 8;
      } while (iVar9 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar7 = puVar6[3];
      puVar8[1] = puVar6[1];
      puVar8[3] = uVar7;
      uVar7 = *puVar6;
      puVar8[2] = puVar6[2];
      *puVar8 = uVar7;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = (long)puVar5;
  return;
}


