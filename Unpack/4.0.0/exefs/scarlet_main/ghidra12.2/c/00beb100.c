/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00beb100; name: FUN_00beb100
 */


void FUN_00beb100(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,&DAT_03c0b0ff,"Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) != 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,&DAT_03c0b0ff,
                 "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    FUN_00c24c9c(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),param_4,param_5)
    ;
    return;
  }
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_3 + 0x3c) * 4)) {
  case 1:
  case 3:
  case 6:
  case 8:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      iVar4 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
              0x38e38e39;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
              (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40)) >> 4) * -0x55555555;
    }
    lVar5 = *(long *)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4) + 8) + 8;
    uVar2 = *(undefined4 *)(lVar5 + (long)param_4 * 4);
    *(undefined4 *)(lVar5 + (long)param_4 * 4) = *(undefined4 *)(lVar5 + (long)param_5 * 4);
    *(undefined4 *)(lVar5 + (long)param_5 * 4) = uVar2;
    break;
  case 2:
  case 4:
  case 5:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      iVar4 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
              0x38e38e39;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
              (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40)) >> 4) * -0x55555555;
    }
    lVar5 = *(long *)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4) + 8);
    goto LAB_00beb444;
  case 7:
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      iVar4 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
              0x38e38e39;
    }
    else {
      iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
              (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40)) >> 4) * -0x55555555;
    }
    lVar5 = *(long *)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4) + 8) + 8;
    uVar3 = *(undefined1 *)(lVar5 + param_4);
    *(undefined1 *)(lVar5 + param_4) = *(undefined1 *)(lVar5 + param_5);
    *(undefined1 *)(lVar5 + param_5) = uVar3;
    break;
  case 9:
  case 10:
    if (*(uint *)(param_3 + 0x3c) == 0xb) {
      lVar5 = *(long *)(param_3 + 0x58);
      if (*(char *)(*(long *)(*(long *)(param_3 + 0x68) + 0x20) + 0x53) == '\0') goto LAB_00beb32c;
      if (lVar5 == 0) {
        iVar4 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
                0x38e38e39;
      }
      else {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
                (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
      }
      plVar1 = (long *)(param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4));
      if ((int)plVar1[6] == 0) {
        FUN_00bb1344(plVar1 + 5);
        if ((int)plVar1[6] == 0) {
          (**(code **)(*plVar1 + 0x50))(plVar1);
          *(undefined4 *)(plVar1 + 6) = 2;
        }
        FUN_00bb14b8(plVar1 + 5);
      }
      *(undefined4 *)(plVar1 + 6) = 1;
      param_2 = plVar1[2];
    }
    else {
      lVar5 = *(long *)(param_3 + 0x58);
LAB_00beb32c:
      if (lVar5 == 0) {
        iVar4 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) *
                0x38e38e39;
      }
      else {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
                (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
      }
      param_2 = param_2 + *(int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    lVar5 = *(long *)(param_2 + 0x10);
LAB_00beb444:
    lVar5 = lVar5 + 8;
    uVar6 = *(undefined8 *)(lVar5 + (long)param_4 * 8);
    *(undefined8 *)(lVar5 + (long)param_4 * 8) = *(undefined8 *)(lVar5 + (long)param_5 * 8);
    *(undefined8 *)(lVar5 + (long)param_5 * 8) = uVar6;
  }
  return;
}


