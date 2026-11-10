/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d6bb0; name: FUN_003d6bb0
 */


void FUN_003d6bb0(uint *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  lVar4 = *(long *)(param_2 + 0x550);
  uVar6 = *(uint *)(lVar4 + 0x1c) & 0x30000;
  if (uVar6 == 0x30000) {
    lVar4 = 2;
    puVar5 = &DAT_03cdd17e;
  }
  else if (uVar6 == 0x20000) {
    lVar4 = 1;
    puVar5 = &DAT_03cdd180;
  }
  else if (uVar6 == 0x10000) {
    lVar4 = 1;
    puVar5 = &DAT_03cdd17e;
  }
  else {
    if ((*(int *)(param_2 + 0x38) == 1) &&
       (puVar5 = *(undefined2 **)(lVar4 + 0x1a8), puVar5 != (undefined2 *)0x0)) {
      lVar4 = *(long *)(lVar4 + 0x1b0);
    }
    else {
      puVar5 = *(undefined2 **)(lVar4 + 0x198);
      if (puVar5 == (undefined2 *)0x0) {
        lVar4 = 0x1a;
        puVar5 = &DAT_03cdd182;
        goto LAB_003d6c90;
      }
      lVar4 = *(long *)(lVar4 + 0x1a0);
    }
    if (lVar4 == 0) {
      uVar6 = 0xb;
      goto LAB_003d6c60;
    }
  }
LAB_003d6c90:
  uVar6 = 0xb;
  do {
    lVar2 = FUN_003d62c0(*puVar5);
    if ((((lVar2 != 0) && (lVar3 = FUN_003af6a0((long)*(int *)(lVar2 + 0x18)), lVar3 != 0)) &&
        ((*(uint *)(lVar3 + 4) & uVar6) != 0)) &&
       (iVar1 = FUN_003d7b40(param_2,param_3,lVar2), iVar1 != 0)) {
      uVar6 = uVar6 & (*(uint *)(lVar3 + 4) ^ 0xffffffff);
    }
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
LAB_003d6c60:
  *param_1 = *param_1 | uVar6;
  return;
}


