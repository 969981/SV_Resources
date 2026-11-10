/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0f08c; name: FUN_00b0f08c
 */


void FUN_00b0f08c(long param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  *(long *)(param_1 + 0x98) = 0;
  lVar5 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      uVar4 = FUN_0199660c(*(long *)(lVar5 + 0x10) + -0x28);
      lVar5 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x98) = uVar4;
      if (lVar5 == 0) {
        return;
      }
    }
    if ((*(long *)(lVar5 + 0x10) != 0) &&
       (sVar1 = FUN_01419488(*(long *)(lVar5 + 0x10) + -0x28), sVar1 != 0)) {
      uVar9 = 0;
      do {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 == 0)) {
LAB_00b0f128:
          lVar5 = 0;
        }
        else {
          lVar6 = *(long *)(lVar5 + 0x148);
          *(undefined8 *)(lVar5 + 0x1a8) = 0;
          if (lVar6 == *(long *)(lVar5 + 0x150)) goto LAB_00b0f128;
          do {
            FUN_013fcb68(lVar5 + 0x180,lVar6 + 8);
            lVar6 = lVar6 + 0x10;
          } while (lVar6 != *(long *)(lVar5 + 0x150));
          if (*(ulong *)(lVar5 + 0x1a8) <= (ulong)(uVar9 & 0xffff)) goto LAB_00b0f128;
          lVar5 = *(long *)(*(long *)(lVar5 + 0x1a0) + (ulong)(uVar9 & 0xffff) * 8);
        }
        if (*(long *)(param_1 + 0x98) == lVar5) {
LAB_00b0f138:
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_01419488(lVar5 + -0x28);
          }
        }
        else {
          if (*(long *)(param_1 + 0x48) != 0) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
            if ((lVar6 != 0) && (uVar2 = FUN_01419488(lVar6 + -0x28), 1 < uVar2)) {
              lVar6 = 0x14;
              do {
                if (*(long *)(param_1 + lVar6 * 8) == 0) {
                  *(long *)(param_1 + lVar6 * 8) = lVar5;
                  break;
                }
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar8 == 0)) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = FUN_01419488(lVar8 + -0x28);
                }
                uVar7 = lVar6 - 0x12;
                lVar6 = lVar6 + 1;
              } while (uVar7 < uVar2);
            }
            goto LAB_00b0f138;
          }
          uVar3 = 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uVar3 & 0xffff));
    }
  }
  return;
}


