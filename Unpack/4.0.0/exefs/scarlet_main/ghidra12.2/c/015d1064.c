/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d1064; name: FUN_015d1064
 */


ulong FUN_015d1064(long *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  uint local_24;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar5[1]);
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
    uVar9 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,local_2c,1,0);
    uVar4 = (uint)local_2c[0] << 8;
    uVar9 = uVar3 & 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
  }
  if (uVar9 == 0) {
LAB_015d12e4:
    uVar7 = 0;
  }
  else {
    uVar9 = uVar4 >> 8;
    uVar7 = (ulong)uVar9;
    if (9 < ((uVar4 >> 8) - 8 & 0xff)) {
      if (uVar9 - 1 < 2) {
        uVar8 = 0;
        uVar10 = 0;
        uVar7 = 3;
        goto LAB_015d12f0;
      }
      if (uVar9 == 5) {
        plVar5 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,4,plVar5[1] + 1);
        if ((uVar7 & 1) == 0) {
          uVar10 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_24,4,1);
          uVar10 = (ulong)local_24 << 0x20;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
          }
          uVar9 = uVar9 & 1;
        }
        if (uVar9 != 0) {
          plVar5 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
          plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
          uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar5[1] + 5);
          if ((uVar7 & 1) == 0) {
            uVar8 = 0;
            uVar9 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,local_30,1,5);
            uVar9 = uVar4 & 1;
            uVar8 = (ulong)local_30[0] << 8;
            if ((uVar4 & 1) == 0) {
              uVar8 = 0;
            }
          }
          if (uVar9 != 0) {
            iVar1 = (int)(uVar8 >> 8);
            bVar2 = 9 < (iVar1 - 8U & 0xff);
            uVar9 = 5;
            if (iVar1 != 3 && bVar2) {
              uVar9 = 0;
            }
            uVar7 = (ulong)uVar9;
            if (iVar1 != 3 && bVar2) {
              uVar8 = 0;
              uVar10 = 0;
            }
            goto LAB_015d12f0;
          }
        }
      }
      else if (uVar9 == 4) {
        plVar5 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,4,plVar5[1] + 1);
        if ((uVar7 & 1) == 0) {
          uVar7 = 0;
          uVar9 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_28,4,1);
          uVar9 = uVar4 & 1;
          uVar7 = (ulong)local_28 << 0x20;
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
        }
        uVar8 = 0;
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar7;
        }
        uVar7 = (ulong)(uVar9 != 0) << 2;
        goto LAB_015d12f0;
      }
      goto LAB_015d12e4;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
LAB_015d12f0:
  return uVar8 | uVar7 | uVar10;
}


