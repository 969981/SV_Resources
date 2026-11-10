/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087d2c0; name: FUN_0087d2c0
 */


undefined4 FUN_0087d2c0(uint param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar2 = 0x80260202;
  uVar4 = 0;
  uVar3 = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if (param_1 != 0) {
    uVar5 = 0;
    uVar6 = param_1;
    do {
      if (((uVar6 & 1) != 0) && (uVar5 != 3)) {
        iVar1 = 1 << (ulong)(uVar5 & 0x1f);
        if (iVar1 < 0x200) {
          uVar7 = 0;
          switch(iVar1) {
          case 1:
            break;
          case 2:
            uVar7 = 1;
            break;
          default:
            goto switchD_0087d360_caseD_3;
          case 4:
            uVar7 = 2;
            break;
          case 0x10:
            uVar7 = 6;
            break;
          case 0x20:
            uVar7 = 7;
          }
        }
        else if (iVar1 < 0x4000) {
          if (iVar1 == 0x200) {
            uVar7 = 4;
          }
          else if (iVar1 == 0x400) {
            uVar7 = 5;
          }
          else {
            if (iVar1 != 0x1000) {
              return 0x80260202;
            }
            uVar7 = 8;
          }
        }
        else if (iVar1 == 0x4000) {
          uVar7 = 9;
        }
        else if (iVar1 == 0x8000) {
          uVar7 = 10;
        }
        else {
          if (iVar1 != 0x20000) {
            return 0x80260202;
          }
          uVar7 = 0xb;
        }
        *(undefined4 *)((long)param_3 + uVar4 * 4) = uVar7;
        uVar4 = (ulong)((int)uVar4 + 1);
      }
      uVar6 = uVar6 >> 1;
      uVar3 = (uint)uVar4;
    } while ((uVar6 != 0) && (uVar5 = uVar5 + 1, uVar3 < 0xc));
    if ((param_1 >> 3 & 1) != 0) {
      *(undefined4 *)((long)param_3 + uVar4 * 4) = 3;
      uVar3 = uVar3 + 1;
    }
  }
  uVar2 = 0;
  if (uVar3 != param_2) {
    uVar2 = 0x80260202;
  }
switchD_0087d360_caseD_3:
  return uVar2;
}


