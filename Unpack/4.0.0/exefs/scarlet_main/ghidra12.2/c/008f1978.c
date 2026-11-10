/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f1978; name: FUN_008f1978
 */


void FUN_008f1978(undefined8 param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  (**(code **)PTR_DAT_047d2f68)();
  uVar1 = *(ushort *)(param_2 + 6);
  uVar2 = uVar1 >> 4 & 3;
  if (uVar2 == 2) {
    iVar4 = 5;
    if ((uVar1 & 3) != 2) {
      iVar4 = 1;
    }
    iVar5 = 3;
  }
  else {
    if (uVar2 != 1) goto LAB_008f1b24;
    iVar4 = (uint)((uVar1 & 3) == 2) << 2;
    iVar5 = 2;
  }
  uVar2 = uVar1 >> 2 & 3;
  if ((uVar1 & 3) != 1) {
    iVar5 = iVar4;
  }
  if (uVar2 == 1) {
    uVar3 = 0;
  }
  else {
    if (uVar2 != 2) {
LAB_008f1b24:
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    uVar3 = 1;
  }
  (**(code **)PTR_DAT_047d2f70)(param_1,iVar5,uVar3);
  (**(code **)PTR_DAT_047d2f78)
            (param_1,*(undefined4 *)(&DAT_03d2e804 + (ulong)*param_2 * 4),
             *(undefined4 *)(&DAT_03d2e804 + (ulong)param_2[1] * 4),
             *(undefined4 *)(&DAT_03d2e804 + (ulong)param_2[2] * 4));
  (**(code **)PTR_DAT_047d2f80)(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_1)
  ;
  (**(code **)PTR_DAT_047d2f88)(*(undefined4 *)(param_2 + 0x10),param_1);
  (**(code **)PTR_DAT_047d2f90)
            (param_1,*(ushort *)(param_2 + 6) >> 7 & 1,
             *(undefined4 *)(&DAT_03cbf5a0 + (ulong)param_2[3] * 4));
  (**(code **)PTR_DAT_047d2f98)(param_1,&UNK_03d2e83c + (ulong)param_2[4] * 0x10);
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 >> 6 & 1) != 0) {
    uVar6 = NEON_ucvtf((uint)param_2[5]);
    (**(code **)PTR_DAT_047d2fb0)(uVar6,param_1);
    uVar1 = *(ushort *)(param_2 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x008f1b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2fb8)
            (param_1,*(undefined4 *)(&DAT_03d2e830 + (ulong)(uVar1 >> 8 & 3) * 4));
  return;
}


