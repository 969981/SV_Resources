/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ef9278; name: FUN_02ef9278
 */


void FUN_02ef9278(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (uint *)(param_1 + 0x844);
  *param_1 = (long)&PTR_LAB_0460e440;
  if (0 < (int)*(uint *)((long)param_1 + 0x4234)) {
    lVar4 = 0;
    lVar5 = (ulong)*(uint *)((long)param_1 + 0x4234) + 1;
    do {
      if (*(long *)(param_1[0x845] + lVar4) != -1) {
        *(undefined8 *)(param_1[0x845] + lVar4) = 0xffffffffffffffff;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x846);
  *(uint *)(param_1 + 0x846) = uVar2 & 0x80000000;
  puVar3 = PTR_PTR_047d1a50;
  if ((-1 < (int)uVar2) && (param_1[0x845] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x845],(long)*(int *)((long)param_1 + 0x4234) * 0x10 + 0x10)
    ;
  }
  param_1[0x845] = 0;
  param_1[0x846] = -0x100000000;
  if (0 < (int)*(uint *)((long)param_1 + 0x4224)) {
    lVar4 = 0;
    lVar5 = (ulong)*(uint *)((long)param_1 + 0x4224) + 1;
    do {
      if (*(long *)(param_1[0x843] + lVar4) != -1) {
        *(undefined8 *)(param_1[0x843] + lVar4) = 0xffffffffffffffff;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 != 0);
  }
  uVar2 = *puVar1;
  *puVar1 = uVar2 & 0x80000000;
  if ((-1 < (int)uVar2) && (param_1[0x843] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x843],(long)*(int *)((long)param_1 + 0x4224) * 0x10 + 0x10);
  }
  param_1[0x843] = 0;
  puVar3 = PTR_DAT_047d1a00;
  puVar1[0] = 0;
  puVar1[1] = 0xffffffff;
  *param_1 = (long)(puVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02ef93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


