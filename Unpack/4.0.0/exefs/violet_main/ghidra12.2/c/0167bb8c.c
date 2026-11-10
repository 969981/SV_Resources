/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167bb8c; name: FUN_0167bb8c
 */


void FUN_0167bb8c(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  
  *param_2 = 7;
  psVar6 = (short *)param_3[2];
  if ((char)psVar6[4] == '\x12') {
    *(undefined1 *)param_2 = 7;
    psVar6 = (short *)param_3[2];
    if (*psVar6 == 0xa5) {
      return;
    }
  }
  if (*(char *)((long)param_3 + 0x19) != '\0') {
    FUN_02e2532c(param_1,param_2,param_3);
    return;
  }
  uVar3 = FUN_0142fef4(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],(char)psVar6[4],
                       *(undefined1 *)(param_3 + 3));
  uVar3 = uVar3 & 0xffffffff;
  if (*(char *)(param_3 + 3) == '\0') {
    uVar3 = FUN_016f9f38(param_1,(undefined1 *)((long)param_2 + 1),*param_3,param_3[1],
                         *(undefined1 *)(param_3[2] + 8),uVar3);
    uVar3 = uVar3 & 0xffffffff;
  }
  if ((*(char *)(param_3[2] + 8) == '\t') &&
     (uVar4 = (**(code **)(*(long *)param_3[1] + 0x220))((long *)param_3[1],0x2a), (uVar4 & 1) != 0)
     ) {
    uVar7 = ((&DAT_03d629b0)[uVar3 & 0xff] & 0x1ffffff) << 1;
    if (0xfff < uVar7) {
      uVar7 = 0x1000;
    }
    if (uVar7 == 0 && (uVar3 & 0xff) != 0) {
      uVar7 = 1;
    }
    uVar1 = 0xffffffff;
    do {
      uVar5 = uVar1;
      if (uVar5 == 0x1f) {
        uVar3 = 0;
        goto LAB_0167bc54;
      }
      uVar1 = uVar5 + 1;
    } while ((uVar7 >> (ulong)(uVar1 & 0x1f) & 1) == 0);
    if (uVar1 < 0xc) {
      uVar3 = (ulong)(uVar5 + 2);
    }
    else {
      uVar3 = 0xd;
    }
  }
LAB_0167bc54:
  uVar2 = FUN_02e0c9d8(*(undefined8 *)(param_1 + 0x38),0x52,*param_3,param_3[1],
                       *(undefined1 *)(param_3[2] + 8),uVar3);
  if (*(char *)(param_3 + 3) == '\0') {
    uVar2 = FUN_02e0c9d8(*(undefined8 *)(param_1 + 0x38),0x53,*param_3,param_3[1],
                         *(undefined1 *)(param_3[2] + 8));
  }
  *(undefined1 *)param_2 = uVar2;
  return;
}


