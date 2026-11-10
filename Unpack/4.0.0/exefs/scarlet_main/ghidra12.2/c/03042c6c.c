/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03042c6c; name: FUN_03042c6c
 */


void FUN_03042c6c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x118);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    lVar2 = *param_1;
    lVar3 = lVar1;
    lVar4 = lVar2;
    iVar6 = iVar5;
    do {
      FUN_03042d70(lVar3,lVar4);
      lVar3 = lVar3 + 0x118;
      lVar4 = lVar4 + 0x118;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    do {
      FUN_03042f68(lVar2);
      lVar2 = lVar2 + 0x118;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar1;
  return;
}


