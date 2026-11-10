/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea2920; name: FUN_00ea2920
 */


void FUN_00ea2920(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x20);
    FUN_00ddef7c(puVar6,param_2,lVar5);
    *(undefined8 **)(lVar5 + 0x30) = puVar6;
    lVar3 = (**(code **)PTR_DAT_047d2c28)(*puVar6);
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_047d1f00;
  }
  else {
    *(undefined8 **)(lVar5 + 0x30) = param_3;
    lVar7 = *(long *)(lVar5 + 8);
    lVar3 = (**(code **)PTR_DAT_047d2c28)(*param_3);
    lVar3 = (param_4 - param_1) + lVar7 + lVar3;
    uVar1 = *(uint *)(param_1 + 0x1c);
    plVar2 = (long *)PTR_DAT_047d1f00;
  }
  PTR_DAT_047d1f00 = (undefined *)plVar2;
  if (0 < (int)uVar1) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + *plVar2 + lVar7);
      if (lVar8 != 0) {
        plVar4 = (long *)FUN_008f1b9c(lVar8,0);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_008f1b9c(lVar8,1);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_008f1b9c(lVar8,2);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_008f1b9c(lVar8,3);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_008f1b9c(lVar8,4);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
        plVar4 = (long *)FUN_008f1b9c(lVar8,5);
        if (plVar4 != (long *)0x0) {
          *plVar4 = (lVar3 - *(long *)(lVar5 + 8)) + plVar4[2];
        }
      }
      lVar7 = lVar7 + 0x40;
    } while ((ulong)uVar1 * 0x40 != lVar7);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


