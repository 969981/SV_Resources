/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034adc80; name: FUN_034adc80
 */


void FUN_034adc80(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  size_t __n;
  int local_54;
  
  puVar4 = PTR_DAT_047e2fd0;
  local_54 = *(int *)((long)&DAT_048b014c + (ulong)param_2 * 4);
  pbVar7 = (byte *)param_1[0x16];
  if (pbVar7 == (byte *)0x0) {
    if (local_54 == param_3) {
      return;
    }
    __n = 0;
  }
  else {
    bVar3 = *pbVar7;
    __n = (size_t)bVar3;
    uVar11 = (uint)bVar3;
    uVar2 = uVar11;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar6 = (ulong)uVar2;
    pbVar9 = pbVar7 + ((ulong)(uVar11 + 4) & 0x1fc);
    uVar10 = uVar6;
    pbVar8 = pbVar7;
    do {
      pbVar8 = pbVar8 + 1;
      if ((uint)*pbVar8 == (param_2 & 0xff)) goto LAB_034add00;
      pbVar9 = pbVar9 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    pbVar9 = (byte *)0x0;
LAB_034add00:
    pbVar8 = (byte *)&local_54;
    if (pbVar9 != (byte *)0x0) {
      pbVar8 = pbVar9;
    }
    if (*(int *)pbVar8 == param_3) {
      return;
    }
    pbVar9 = pbVar7 + ((ulong)(uVar11 + 4) & 0x1fc);
    do {
      pbVar7 = pbVar7 + 1;
      if ((uint)*pbVar7 == (param_2 & 0xff)) goto LAB_034addf4;
      pbVar9 = pbVar9 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar2 = (int)__n + 5U & 0x1fc;
  lVar1 = __n + 1;
  puVar5 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar2 + (int)lVar1 * 4);
  if (puVar5 != (undefined1 *)0x0) {
    if (param_1[0x16] != 0) {
      memcpy(puVar5 + 1,(void *)(param_1[0x16] + 1),__n);
      memcpy(puVar5 + uVar2,(void *)(param_1[0x16] + (ulong)((int)__n + 4U & 0x1fc)),__n << 2);
      (**(code **)(puVar4 + 0x30))(0,param_1[0x16]);
    }
    pbVar9 = puVar5 + __n * 4 + (ulong)uVar2;
    puVar5[lVar1] = (char)param_2;
    *puVar5 = (char)lVar1;
    param_1[0x16] = (long)puVar5;
LAB_034addf4:
    *(int *)pbVar9 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x034ade24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1,0,0);
  return;
}


