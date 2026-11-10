/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a6b58; name: FUN_034a6b58
 */


void FUN_034a6b58(long param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  size_t __n;
  
  FUN_034adc80();
  puVar3 = PTR_DAT_047e2fd0;
  if (param_5 == 0 && param_4 == 0) {
    pbVar5 = *(byte **)(param_1 + 0xe0);
    if (pbVar5 != (byte *)0x0) {
      bVar2 = *pbVar5;
      uVar7 = 0;
      uVar10 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar10 = 1;
      }
      do {
        if (pbVar5[uVar7 + 1] == param_2) goto LAB_034a6b9c;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0xe0);
    if (pbVar5 == (byte *)0x0) {
      __n = 0;
    }
    else {
      bVar2 = *pbVar5;
LAB_034a6b9c:
      __n = (size_t)bVar2;
      uVar9 = (uint)bVar2;
      uVar10 = uVar9 + 4;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar7 = (ulong)uVar9;
      pbVar6 = pbVar5 + ((ulong)uVar10 & 0x1fc);
      do {
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 == param_2) goto LAB_034a6c94;
        pbVar6 = pbVar6 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    plVar8 = (long *)(param_1 + 0xe0);
    uVar10 = (int)__n + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar4 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,uVar10 + (int)lVar1 * 8);
    if (puVar4 != (undefined1 *)0x0) {
      if (*plVar8 != 0) {
        memcpy(puVar4 + 1,(void *)(*plVar8 + 1),__n);
        memcpy(puVar4 + uVar10,(void *)(*plVar8 + (ulong)((int)__n + 4U & 0x1fc)),__n << 3);
        (**(code **)(puVar3 + 0x30))(2,*plVar8);
      }
      pbVar6 = puVar4 + __n * 8 + (ulong)uVar10;
      puVar4[lVar1] = param_2;
      *puVar4 = (char)lVar1;
      *plVar8 = (long)puVar4;
LAB_034a6c94:
      *(int *)pbVar6 = param_4;
      *(int *)(pbVar6 + 4) = param_5;
    }
  }
  return;
}


