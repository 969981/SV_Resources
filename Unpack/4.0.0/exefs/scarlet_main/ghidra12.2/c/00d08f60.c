/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d08f60; name: FUN_00d08f60
 */


void FUN_00d08f60(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long local_58;
  long local_50;
  long lStack_48;
  
  lVar6 = *param_4;
  lStack_68 = *param_3;
  if ((lVar6 - lStack_68 & 0xfffffffffffffffcU) == 4) {
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_00d0912c(uVar3,param_2,*param_3 + (ulong)*(uint *)*param_3);
    lVar6 = (**(code **)(*param_1 + 0x68))(param_1);
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x10) = uVar3;
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  else {
    lVar1 = lStack_68 + 4;
    lVar10 = lVar1;
    if (lVar1 != lVar6) {
      lVar7 = lStack_68;
      do {
        uVar8 = (ulong)*(uint *)(lVar7 + 4);
        lVar2 = lVar7 + (uVar8 - (long)*(int *)(lVar7 + uVar8 + 4));
        if (((0xc < *(ushort *)(lVar2 + 4)) &&
            (uVar9 = (ulong)*(ushort *)(lVar2 + 0x10), uVar9 != 0)) &&
           (*(int *)(lVar7 + uVar8 + uVar9 + 4) == 1)) goto LAB_00d0906c;
        lVar10 = lVar7 + 8;
        lVar7 = lVar7 + 4;
      } while (lVar6 + -4 != lVar7);
      lVar10 = lVar6;
    }
LAB_00d0906c:
    if (lVar6 == lVar10) {
      local_70 = lVar1;
      uVar3 = FUN_00d08f60(param_1,param_2,&lStack_68,&local_70);
      local_80 = *param_4;
      lStack_78 = lVar1;
      uVar4 = FUN_00d08f60(param_1,param_2,&lStack_78,&local_80);
      lVar6 = (**(code **)(*param_1 + 0x68))(param_1);
      uVar5 = 1;
    }
    else {
      local_50 = lVar10;
      lStack_48 = lStack_68;
      uVar3 = FUN_00d08f60(param_1,param_2,&lStack_48,&local_50);
      local_60 = *param_4;
      local_58 = lVar10;
      uVar4 = FUN_00d08f60(param_1,param_2,&local_58,&local_60);
      lVar6 = (**(code **)(*param_1 + 0x68))(param_1);
      uVar5 = 2;
    }
    *(undefined4 *)(lVar6 + 8) = uVar5;
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = uVar3;
  }
  return;
}


