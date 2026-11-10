/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ab6a4; name: FUN_034ab6a4
 */


undefined8 FUN_034ab6a4(long *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ushort local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ushort local_48;
  
  if (param_1 == (long *)0x0) {
LAB_034ab7e0:
    uVar3 = 1;
  }
  else {
    if ((int)(param_2 * 0x10000) < 1) {
LAB_034ab754:
      local_80 = 0x100000000;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      if ((int)param_2 < 0x10000) goto LAB_034ab7e0;
      local_78 = 0x100;
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1,&local_a0,1,1);
      if (iVar1 == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          if ((int)param_2 >> 0x10 <= (int)(uVar4 & 0xffff)) goto LAB_034ab7e0;
          local_78 = local_78 & 0xff00;
          iVar1 = (**(code **)(*param_1 + 0x118))(param_1,&local_a0,1,1);
        } while (iVar1 != 0);
        uVar5 = uVar4 * 0x10000;
        iVar1 = (int)(short)uVar4;
      }
      if (0 < (int)(param_2 * 0x10000)) {
        uVar4 = 0;
        do {
          (**(code **)(*param_1 + 0x130))(param_1,1);
          uVar4 = uVar4 + 1;
        } while ((int)(uVar4 & 0xffff) < (int)(short)param_2);
      }
      local_50 = 0x100000000;
      local_60 = 0;
      uStack_58 = 0;
      local_48 = 0x100;
      local_70 = 0;
      uStack_68 = 0;
      if (0xffff < (int)(uVar5 | param_2 & 0xffff)) {
        uVar5 = 0;
        do {
          local_48 = local_48 & 0xff00;
          (**(code **)(*param_1 + 0x120))(param_1,&local_70);
          uVar5 = uVar5 + 1;
        } while ((int)(uVar5 & 0xffff) < iVar1);
      }
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x128))(param_1,1);
      if ((uVar2 & 1) != 0) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          if ((int)(short)param_2 <= (int)(uVar5 & 0xffff)) goto LAB_034ab754;
          uVar2 = (**(code **)(*param_1 + 0x128))(param_1,1);
        } while ((uVar2 & 1) != 0);
        if (0 < (int)(uVar5 * 0x10000)) {
          uVar4 = 0;
          do {
            (**(code **)(*param_1 + 0x130))(param_1,1);
            uVar4 = uVar4 + 1;
          } while ((int)(uVar4 & 0xffff) < (int)(short)uVar5);
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


