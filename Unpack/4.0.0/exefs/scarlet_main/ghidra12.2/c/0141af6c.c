/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141af6c; name: FUN_0141af6c
 */


undefined8 FUN_0141af6c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong local_60;
  uint *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar4 = (ushort *)((long)param_4 - (long)*param_4);
  if ((4 < *puVar4) && (uVar7 = (ulong)puVar4[2], uVar7 != 0)) {
    uVar9 = (ulong)*(uint *)((long)param_4 + uVar7);
    bVar2 = *(byte *)((long)((long)param_4 + uVar7) + uVar9 + 4);
    puVar5 = &DAT_cbf29ce484222645;
    if (bVar2 != 0) {
      pbVar8 = (byte *)((long)param_4 + uVar9 + uVar7 + 5);
      do {
        puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
    }
    for (plVar6 = *(long **)(param_1 + 0x58); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if ((undefined1 *)plVar6[2] == puVar5) {
        puVar11 = (uint *)((long)param_4 + (ulong)puVar4[3]);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_58 = (uint *)0x0;
        if (puVar4[3] != 0) {
          local_58 = puVar11;
        }
        local_60 = (ulong)*puVar11;
        local_58 = local_58 + 1;
        uStack_50 = param_3;
        local_48 = param_2;
        uVar3 = (*(code *)plVar6[6])(plVar6 + 10,&local_48,&uStack_50,&local_58,&local_60);
        if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
          return uVar3;
        }
        uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
        if (uVar7 == 0) {
          return uVar3;
        }
        puVar11 = (uint *)((long)param_4 + uVar7);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        uVar1 = *puVar11;
        if ((ulong)uVar1 == 0) {
          return uVar3;
        }
        FUN_0141af6c(param_1,param_2,uVar3,(long)(puVar11 + 1) + (ulong)puVar11[1]);
        if (uVar1 == 1) {
          return uVar3;
        }
        lVar10 = (ulong)uVar1 * 4 + -4;
        puVar11 = puVar11 + 2;
        do {
          FUN_0141af6c(param_1,param_2,uVar3,(long)puVar11 + (ulong)*puVar11);
          lVar10 = lVar10 + -4;
          puVar11 = puVar11 + 1;
        } while (lVar10 != 0);
        return uVar3;
      }
    }
  }
  return param_3;
}


