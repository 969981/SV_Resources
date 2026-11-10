/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a30a4; name: FUN_034a30a4
 */


void FUN_034a30a4(undefined8 *param_1,int *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = (uint *)((long)param_1 + 699);
  uVar2 = *puVar1;
  if (((uVar2 >> 0xe & 1) == 0) &&
     (((long *)param_1[0x47] == (long *)0x0 ||
      (lVar5 = *(long *)param_1[0x47], lVar5 != 0x4000000 && lVar5 != 0x2000000)))) {
    *puVar1 = uVar2 | 0x2000;
    if (*param_2 != 0) {
      FUN_034a3728(param_1,1,0x2000000,*(undefined8 *)param_2,param_2[2]);
      return;
    }
    if ((*(byte *)((long)param_1 + 0x2ba) & 0x78) == 0) {
      puVar4 = (undefined8 *)*param_1;
      uVar3 = 1;
      goto LAB_034a30dc;
    }
    if (param_1[0x46] != 0) {
      FUN_034e6c0c(0,*(undefined8 *)PTR_DAT_047e7038,param_1[0x46],0x2000000,0,4,0);
      return;
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((uVar2 >> 0x10 & 1) == 0) {
      *puVar1 = uVar2 & 0xfff0ffff | 0x12000;
    }
  }
  puVar4 = (undefined8 *)*param_1;
  uVar3 = 0;
LAB_034a30dc:
                    /* WARNING: Could not recover jumptable at 0x034a30e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1,0,uVar3);
  return;
}


