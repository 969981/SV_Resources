/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007de68c; name: FUN_007de68c
 */


void FUN_007de68c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [32];
  
  if (*(char *)(param_1 + 0xf9) != '\0') {
    lVar8 = *(long *)(param_1 + 0x68);
    lVar4 = param_1 + 0x60;
    if (lVar8 == lVar4) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar6 = (undefined8 *)(lVar8 + 0x10);
        uVar2 = FUN_007967e8(puVar6,param_2);
        if ((uVar2 & 1) != 0) goto joined_r0x007de714;
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != lVar4);
      puVar6 = (undefined8 *)0x0;
    }
joined_r0x007de714:
    if (param_3 < 0) {
      if (puVar6 != (undefined8 *)0x0) {
        FUN_0078fa2c(lVar4,puVar6 + -2);
        FUN_0078fa04(param_1 + 0x78,param_1 + 0x78,
                     (long)(puVar6 + -2) + (long)*(int *)(param_1 + 0x8c));
        return;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        if (*(int *)(param_1 + 0x88) == 0) {
          return;
        }
        lVar8 = FUN_0078fac8(param_1 + 0x78);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar8 - *(int *)(param_1 + 0x8c);
        }
        puVar6 = (undefined8 *)(lVar8 + 0x10);
        *puVar6 = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        FUN_00796584(puVar6);
        FUN_0078f9e0(lVar4,lVar4,lVar8);
      }
      *(undefined1 *)((long)puVar6 + 0x21) = 0;
      FUN_00796828(puVar6,param_2);
      *(bool *)(puVar6 + 4) = 0 < param_3;
      puVar1 = PTR_DAT_047d0860;
      uVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      FUN_00796868(auStack_60,param_2);
      lVar4 = FUN_007e3b50(uVar3,auStack_60);
      FUN_0284e3d4(auStack_60);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x78) == '\0')) {
        uVar5 = *(undefined8 *)PTR_DAT_047d11a0;
        lVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
        uVar7 = *(undefined8 *)(lVar4 + 0x98);
        uVar3 = FUN_007de240(param_2);
        FUN_007e0fd0(uVar5,uVar7,uVar3,0 < param_3);
        FUN_007ddf88(param_1);
      }
      *(undefined1 *)(param_1 + 0xf8) = 1;
      FUN_007935cc(param_1 + 0x100);
    }
  }
  return;
}


