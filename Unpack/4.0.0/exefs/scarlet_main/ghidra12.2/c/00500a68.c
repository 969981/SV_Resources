/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00500a68; name: FUN_00500a68
 */


void FUN_00500a68(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
  puVar3 = (ulong *)*param_3;
  uVar4 = 0;
  switch((uint)puVar3[3]) {
  case 1:
    uVar4 = (ulong)(int)(uint)*puVar3;
    break;
  case 2:
  case 4:
    uVar4 = *puVar3;
    break;
  case 3:
    uVar4 = (ulong)(uint)*puVar3;
    break;
  case 7:
    uVar4 = (ulong)(byte)*puVar3;
    break;
  case 9:
    pbVar7 = (byte *)puVar3[2];
    if ((*puVar3 & 1) == 0) {
      pbVar7 = (byte *)((long)puVar3 + 1);
    }
    bVar6 = *pbVar7;
    if (bVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        pbVar7 = pbVar7 + 1;
        uVar4 = uVar4 * 5 + (ulong)bVar6;
        bVar6 = *pbVar7;
      } while (bVar6 != 0);
    }
  }
  uVar4 = *(long *)(param_2 + 8) - 1U & *(long *)(param_2 + 0x10) + uVar4;
  lVar5 = *(long *)(param_2 + 0x20);
  puVar8 = *(undefined8 **)(lVar5 + uVar4 * 8);
  if (puVar8 != (undefined8 *)0x0) {
    if (puVar8 != *(undefined8 **)(lVar5 + (uVar4 ^ 1) * 8)) {
      uVar2 = FUN_00500c20(*puVar8);
      while ((uVar2 & 1) == 0) {
        puVar8 = (undefined8 *)puVar8[2];
        if (puVar8 == (undefined8 *)0x0) goto LAB_00500be8;
        uVar2 = FUN_00500c20(*puVar8,*param_3);
      }
      *param_1 = (long)puVar8;
LAB_00500b68:
      param_1[1] = param_2;
      param_1[2] = uVar4;
      goto LAB_00500bf0;
    }
    uVar4 = uVar4 & 0xfffffffffffffffe;
    plVar9 = (long *)(*(long *)(lVar5 + uVar4 * 8) + 8);
    plVar10 = (long *)*plVar9;
    if (plVar10 != (long *)0x0) {
      uVar2 = FUN_00500d2c(*(undefined8 *)plVar10[4]);
      lVar5 = 8;
      plVar1 = plVar9;
      if ((uVar2 & 1) == 0) {
        lVar5 = 0;
        plVar1 = plVar10;
      }
      for (plVar10 = *(long **)((long)plVar10 + lVar5); plVar10 != (long *)0x0;
          plVar10 = *(long **)((long)plVar10 + lVar5)) {
        uVar2 = FUN_00500d2c(*(undefined8 *)plVar10[4],*param_3);
        lVar5 = 8;
        if ((uVar2 & 1) == 0) {
          lVar5 = 0;
          plVar1 = plVar10;
        }
      }
      if ((plVar1 != plVar9) &&
         (uVar2 = FUN_00500d2c(*param_3,*(undefined8 *)plVar1[4]), (uVar2 & 1) == 0)) {
        if (param_4 != (long *)0x0) {
          *param_4 = (long)plVar1;
        }
        *param_1 = plVar1[4];
        goto LAB_00500b68;
      }
    }
  }
LAB_00500be8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_00500bf0:
  param_1[3] = uVar4;
  return;
}


