/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00501318; name: FUN_00501318
 */


void FUN_00501318(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  ulong *puVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_48 [24];
  
  puVar7 = *(undefined8 **)(param_2 + param_3 * 8);
  plVar9 = (long *)*puVar7;
  do {
    uVar1 = 0;
    puVar4 = *(ulong **)plVar9[4];
    switch((uint)puVar4[3]) {
    case 1:
      uVar1 = (ulong)(int)(uint)*puVar4;
      break;
    case 2:
    case 4:
      uVar1 = *puVar4;
      break;
    case 3:
      uVar1 = (ulong)(uint)*puVar4;
      break;
    case 7:
      uVar1 = (ulong)(byte)*puVar4;
      break;
    case 9:
      pbVar6 = (byte *)puVar4[2];
      if ((*puVar4 & 1) == 0) {
        pbVar6 = (byte *)((long)puVar4 + 1);
      }
      bVar3 = *pbVar6;
      if (bVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          pbVar6 = pbVar6 + 1;
          uVar1 = uVar1 * 5 + (ulong)bVar3;
          bVar3 = *pbVar6;
        } while (bVar3 != 0);
      }
    }
    FUN_0050107c(auStack_48,param_1,*(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + uVar1)
    ;
    plVar2 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar2 = plVar9 + 2;
      plVar5 = (long *)*plVar2;
      if ((long *)*plVar5 != plVar9) {
        do {
          lVar8 = *plVar2;
          plVar2 = (long *)(lVar8 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar8);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    plVar9 = plVar5;
  } while (plVar5 != puVar7 + 1);
  lVar8 = *(long *)(param_1 + 0x28);
  FUN_00500864(puVar7,puVar7[1]);
  if (lVar8 == 0) {
    FUN_0049e700(puVar7);
  }
  return;
}


