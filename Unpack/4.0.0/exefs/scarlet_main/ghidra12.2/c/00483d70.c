/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00483d70; name: FUN_00483d70
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00483d70(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  uVar8 = (uint)param_4;
  if (param_2 == 0) {
    param_2 = FUN_0047e450(param_3,0);
    if (param_2 != 0) {
      iVar2 = 1;
      lVar5 = FUN_0048c550(*(undefined8 *)(param_2 + 0x50));
      goto joined_r0x00483e30;
    }
    if (param_3 == 0) {
      return 0x39;
    }
    lVar5 = FUN_00485d10(0);
    if (lVar5 == 2) goto LAB_00483e88;
  }
  else {
    iVar2 = 0;
    lVar5 = FUN_0048c550(*(undefined8 *)(param_2 + 0x50));
joined_r0x00483e30:
    if (param_3 == 0) {
      if ((lVar5 == 0) || (iVar2 = FUN_0043e840(lVar5), iVar2 != 0x198)) {
        return 0x39;
      }
      FUN_0043e6b0(lVar5);
      lVar5 = FUN_0040c210();
      if (lVar5 == 0) {
        return 0x39;
      }
      iVar2 = FUN_0040d580();
      if (iVar2 == 0x19f) {
        uVar8 = uVar8 >> 0x10;
      }
      else {
        if (iVar2 != 0x2cb) {
          return 0x3a;
        }
        uVar8 = uVar8 >> 0x11;
      }
      if ((uVar8 & 1) == 0) {
        return 0x3c;
      }
      return 0;
    }
    lVar6 = FUN_00485d10(param_2);
    if (lVar6 == 2) {
      if ((lVar5 == 0) || (iVar1 = FUN_0043e840(lVar5), iVar1 != 0x198)) {
LAB_00483e88:
        iVar1 = 0x39;
      }
      else {
        FUN_0043e6b0(lVar5);
        lVar6 = FUN_0040c210();
        if (lVar6 == 0) goto LAB_00483e88;
        iVar1 = FUN_0040d580();
        if (iVar1 == 0x19f) {
          uVar9 = param_4;
          if ((uVar8 >> 0x10 & 1) == 0) {
LAB_00483ef0:
            iVar2 = 0;
            iVar1 = 0x3c;
            iVar3 = 0x3c;
            goto LAB_00483ea4;
          }
LAB_00483f08:
          iVar1 = FUN_0047e430(param_3);
          iVar3 = FUN_0048c930(param_2);
          if (iVar2 < iVar1) {
            iVar1 = 0x39;
            do {
              lVar6 = FUN_0047e450(param_3,iVar2);
              lVar5 = FUN_00485d10();
              if (lVar5 != 2) goto LAB_00483e9c;
              if (((lVar6 == 0) || (lVar5 = FUN_0048c550(*(undefined8 *)(lVar6 + 0x50)), lVar5 == 0)
                  ) || (iVar4 = FUN_0043e840(), iVar4 != 0x198)) goto LAB_00483e90;
              FUN_0043e6b0(lVar5);
              lVar7 = FUN_0040c210();
              if (lVar7 == 0) goto LAB_00483e90;
              iVar4 = FUN_0040d580();
              if (iVar4 == 0x19f) {
                if ((iVar3 != 0x31a) && (iVar3 != -1)) {
LAB_00483fe8:
                  iVar1 = 0x3b;
                  iVar3 = 0x3b;
                  goto LAB_00483ea4;
                }
                if (((uint)uVar9 >> 0x10 & 1) == 0) goto LAB_00484080;
              }
              else {
                if (iVar4 != 0x2cb) {
                  iVar1 = 0x3a;
                  iVar3 = 0x3a;
                  goto LAB_00483ea4;
                }
                if ((iVar3 != 0x31b) && (iVar3 != -1)) goto LAB_00483fe8;
                if (((uint)uVar9 >> 0x11 & 1) == 0) goto LAB_00484080;
                uVar9 = uVar9 & 0xfffffffffffeffff;
              }
              iVar2 = iVar2 + 1;
              iVar4 = FUN_0047e430(param_3);
              iVar3 = FUN_0048c930(lVar6);
            } while (iVar2 < iVar4);
          }
          iVar1 = FUN_0043e840(lVar5);
          if (iVar1 == 0x198) {
            FUN_0043e6b0(lVar5);
            lVar5 = FUN_0040c210();
            if (lVar5 != 0) {
              iVar1 = FUN_0040d580();
              if (iVar1 == 0x19f) {
                if ((iVar3 == 0x31a) || (iVar3 == -1)) {
                  uVar8 = (uint)uVar9 >> 0x10;
joined_r0x0048407c:
                  if ((uVar8 & 1) != 0) {
                    return 0;
                  }
LAB_00484080:
                  iVar1 = 0x3c;
                  iVar3 = iVar1;
                  if (uVar9 != param_4) {
                    iVar3 = 0x3d;
                  }
                  goto LAB_00483ea4;
                }
              }
              else {
                if (iVar1 != 0x2cb) {
                  iVar1 = 0x3a;
                  iVar3 = 0x3a;
                  goto LAB_00483ea4;
                }
                if ((iVar3 == 0x31b) || (iVar3 == -1)) {
                  uVar8 = (uint)uVar9 >> 0x11;
                  goto joined_r0x0048407c;
                }
              }
              iVar1 = 0x3b;
              iVar3 = 0x3b;
              goto LAB_00483ea4;
            }
          }
          iVar1 = 0x39;
          iVar3 = 0x39;
          goto LAB_00483ea4;
        }
        if (iVar1 == 0x2cb) {
          if ((uVar8 >> 0x11 & 1) == 0) goto LAB_00483ef0;
          uVar9 = param_4 & 0xfffffffffffeffff;
          goto LAB_00483f08;
        }
        iVar1 = 0x3a;
      }
      iVar2 = 0;
LAB_00483e90:
      iVar3 = iVar1;
      goto LAB_00483ea4;
    }
  }
  iVar2 = 0;
LAB_00483e9c:
  iVar1 = 0x38;
  iVar3 = 0x38;
LAB_00483ea4:
  if (param_1 == (int *)0x0) {
    return iVar3;
  }
  *param_1 = iVar2 - (uint)(iVar1 - 0x3bU < 2 && iVar2 != 0);
  return iVar3;
}


