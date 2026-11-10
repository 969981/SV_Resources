/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ef0fc; name: FUN_006ef0fc
 */


void FUN_006ef0fc(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 auStack_48 [24];
  
  puVar7 = *(undefined8 **)(param_2 + param_3 * 8);
  plVar8 = (long *)*puVar7;
  do {
    pbVar1 = *(byte **)plVar8[4];
    pbVar6 = *(byte **)(pbVar1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar6 = pbVar1 + 1;
    }
    bVar4 = *pbVar6;
    if (bVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        pbVar6 = pbVar6 + 1;
        lVar2 = lVar2 * 5 + (ulong)bVar4;
        bVar4 = *pbVar6;
      } while (bVar4 != 0);
    }
    FUN_006eecc8(auStack_48,param_1,*(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar2)
    ;
    plVar3 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar3 = plVar8 + 2;
      plVar5 = (long *)*plVar3;
      if ((long *)*plVar5 != plVar8) {
        do {
          lVar2 = *plVar3;
          plVar3 = (long *)(lVar2 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar2);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    plVar8 = plVar5;
  } while (plVar5 != puVar7 + 1);
  lVar2 = *(long *)(param_1 + 0x28);
  FUN_0025a28c(puVar7,puVar7[1]);
  if (lVar2 == 0) {
    FUN_0049e700(puVar7);
  }
  return;
}


