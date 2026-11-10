/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034afae0; name: FUN_034afae0
 */


void FUN_034afae0(long param_1,long param_2,ulong *param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_047e6fd8;
  uVar4 = *(uint *)(param_1 + 0xda) & 0x20000;
  uVar8 = 0;
  lVar7 = 0;
  if (uVar4 != 0) {
    lVar7 = param_1;
  }
  if ((param_1 != 0) && (uVar4 == 0)) {
    uVar8 = 0;
    if ((param_4 & 1) == 0) {
      do {
        if ((*param_3 & (uVar8 ^ 0xffffffffffffffff)) == 0) break;
        lVar9 = *(long *)(param_1 + 0x40);
        if (lVar9 != 0) {
          uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
          if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x40);
          if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
            FUN_034b87e8(*(undefined8 *)puVar1,param_1 + 0x38,*puVar3);
          }
        }
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          uVar4 = *(uint *)(lVar9 + 0x18);
          if (uVar4 != 0) {
            puVar3 = *(undefined8 **)(lVar9 + 0x10);
            uVar2 = (ulong)uVar4;
LAB_034afcc0:
            if (puVar3[1] != param_2) goto code_r0x034afccc;
            puVar6 = *(undefined8 **)(lVar9 + 0x10) + (ulong)uVar4 * 2 + -2;
            if (puVar3 < puVar6) {
              do {
                puVar5 = puVar3 + 2;
                *puVar3 = *puVar5;
                puVar3[1] = puVar3[3];
                puVar3 = puVar5;
              } while (puVar5 < puVar6);
              uVar4 = *(uint *)(lVar9 + 0x18);
            }
            *(uint *)(lVar9 + 0x18) = uVar4 - 1;
          }
        }
LAB_034afd14:
        lVar9 = *(long *)(param_1 + 0x60);
        if (lVar9 != 0) {
          uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
          if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x60);
          if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
            FUN_034b87e8(*(undefined8 *)puVar1,param_1 + 0x58,*puVar3);
          }
        }
        uVar8 = uVar8 | *(long *)(param_1 + 0xb8) << 0x11;
        param_1 = *(long *)(param_1 + 0x98);
      } while (param_1 != 0);
    }
    else {
      do {
        if ((*param_3 & (uVar8 ^ 0xffffffffffffffff)) == 0) break;
        lVar9 = *(long *)(param_1 + 0x40);
        if (lVar9 != 0) {
          uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
          if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x40);
          if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
            FUN_034b87e8(*(undefined8 *)puVar1,param_1 + 0x38,*puVar3);
          }
        }
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          uVar4 = *(uint *)(lVar9 + 0x18);
          if (uVar4 != 0) {
            puVar3 = *(undefined8 **)(lVar9 + 0x10);
            uVar2 = (ulong)uVar4;
LAB_034afba0:
            if (puVar3[1] != param_2) goto code_r0x034afbac;
            puVar6 = *(undefined8 **)(lVar9 + 0x10) + (ulong)uVar4 * 2 + -2;
            if (puVar3 < puVar6) {
              do {
                puVar5 = puVar3 + 2;
                *puVar3 = *puVar5;
                puVar3[1] = puVar3[3];
                puVar3 = puVar5;
              } while (puVar5 < puVar6);
              uVar4 = *(uint *)(lVar9 + 0x18);
            }
            *(uint *)(lVar9 + 0x18) = uVar4 - 1;
          }
        }
LAB_034afbf4:
        lVar9 = *(long *)(param_1 + 0x60);
        if (lVar9 != 0) {
          uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
          if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x60);
          if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
            FUN_034b87e8(*(undefined8 *)puVar1,param_1 + 0x58,*puVar3);
          }
        }
        uVar8 = uVar8 | *(long *)(param_1 + 0xb8) << 0x11;
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0xa0);
        }
        param_1 = *(long *)(param_1 + 0x98);
      } while (param_1 != 0);
    }
  }
  do {
    if ((lVar7 == 0) || ((((uVar8 | 0x3800000100bf) ^ 0xffffc7fffffeff40) & *param_3) == 0)) {
      return;
    }
    lVar9 = *(long *)(lVar7 + 0x40);
    if (lVar9 != 0) {
      uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
      if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
      }
      puVar3 = *(undefined8 **)(lVar7 + 0x40);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_034b87e8(*(undefined8 *)puVar1,lVar7 + 0x38,*puVar3);
      }
    }
    lVar9 = *(long *)(lVar7 + 0x30);
    if (lVar9 != 0) {
      uVar4 = *(uint *)(lVar9 + 0x18);
      if (uVar4 != 0) {
        puVar3 = *(undefined8 **)(lVar9 + 0x10);
        uVar2 = (ulong)uVar4;
LAB_034afdfc:
        if (puVar3[1] != param_2) goto code_r0x034afe08;
        puVar6 = *(undefined8 **)(lVar9 + 0x10) + (ulong)uVar4 * 2 + -2;
        if (puVar3 < puVar6) {
          do {
            puVar5 = puVar3 + 2;
            *puVar3 = *puVar5;
            puVar3[1] = puVar3[3];
            puVar3 = puVar5;
          } while (puVar5 < puVar6);
          uVar4 = *(uint *)(lVar9 + 0x18);
        }
        *(uint *)(lVar9 + 0x18) = uVar4 - 1;
      }
    }
LAB_034afe50:
    lVar9 = *(long *)(lVar7 + 0x1a8);
    if (lVar9 != 0) {
      uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
      if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
      }
      puVar3 = *(undefined8 **)(lVar7 + 0x1a8);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_034b87e8(*(undefined8 *)puVar1,lVar7 + 0x1a0,*puVar3);
      }
    }
    lVar9 = *(long *)(lVar7 + 0x60);
    if (lVar9 != 0) {
      uVar2 = FUN_034be08c(lVar9 + 0x10,param_2);
      if (((uVar2 & 1) != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
      }
      puVar3 = *(undefined8 **)(lVar7 + 0x60);
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 0)) {
        FUN_034b87e8(*(undefined8 *)puVar1,lVar7 + 0x58,*puVar3);
      }
    }
    uVar8 = uVar8 | *(long *)(lVar7 + 0xb8) << 0x11;
    lVar7 = *(long *)(lVar7 + 0xa0);
  } while( true );
code_r0x034afccc:
  puVar3 = puVar3 + 2;
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) goto LAB_034afd14;
  goto LAB_034afcc0;
code_r0x034afbac:
  puVar3 = puVar3 + 2;
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) goto LAB_034afbf4;
  goto LAB_034afba0;
code_r0x034afe08:
  puVar3 = puVar3 + 2;
  uVar2 = uVar2 - 1;
  if (uVar2 == 0) goto LAB_034afe50;
  goto LAB_034afdfc;
}


