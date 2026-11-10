/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0315ec24; name: FUN_0315ec24
 */


void FUN_0315ec24(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 3);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar4 = (undefined8 *)*param_1;
    uVar1 = uVar2 & 3;
    puVar5 = puVar3;
    if (2 < uVar2 - 1) {
      iVar6 = -(uVar2 & 0xfffffffc);
      do {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        puVar5[3] = puVar4[3];
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = (long)puVar3;
  return;
}


