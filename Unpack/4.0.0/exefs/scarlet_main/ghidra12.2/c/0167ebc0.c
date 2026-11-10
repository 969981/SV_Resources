/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167ebc0; name: FUN_0167ebc0
 */


/* WARNING: Removing unreachable block (ram,0x0167ecb4) */
/* WARNING: Removing unreachable block (ram,0x0167ecd4) */
/* WARNING: Removing unreachable block (ram,0x0167ecd8) */
/* WARNING: Removing unreachable block (ram,0x0167ecf8) */
/* WARNING: Removing unreachable block (ram,0x0167ecfc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff58 : 0x0167ece4 */
/* WARNING: Removing unreachable block (ram,0x0167ed68) */
/* WARNING: Removing unreachable block (ram,0x0167ed6c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0167ebc0(long *param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  int aiStack_280 [128];
  int *piVar11;
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [12];
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar10 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar6 = (ulong)param_2 & 0xffff;
    if (uVar10 < 2) {
      uVar7 = (int)uVar4 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            if ((uint)*(ushort *)(plVar8 + 2) == (param_2 & 0xffff)) goto LAB_0167ec70;
          }
          else if ((plVar8[1] & uVar4 - 1) != uVar7) goto LAB_0167ee88;
          plVar8 = (long *)*plVar8;
          uVar2 = 0;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar8[1];
          if (uVar10 == uVar6) {
            if ((uint)*(ushort *)(plVar8 + 2) == (param_2 & 0xffff)) goto LAB_0167ec70;
          }
          else {
            if (uVar4 <= uVar10) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar10 / uVar4;
              }
              uVar10 = uVar10 - uVar1 * uVar4;
            }
            if (uVar10 != uVar7) goto LAB_0167ee88;
          }
          plVar8 = (long *)*plVar8;
          uVar2 = 0;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_0167ec74;
    }
  }
LAB_0167ee88:
  uVar2 = 0;
  goto LAB_0167ec74;
LAB_0167ec70:
  uVar2 = *(undefined1 *)((long)plVar8 + 0x12);
LAB_0167ec74:
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_58 = 0;
  local_60 = (ulong)param_3;
  if (((param_3 != 0xffff0000) && (local_60 = CONCAT44(param_4,param_3), param_4 != -0x10000)) &&
     (local_58 = (ulong)param_5, param_5 != 0xffff0000)) {
    iVar3 = -0x10;
    local_58 = CONCAT44(param_6,param_5);
    if (param_6 != -0x10000) {
      uVar4 = 4;
      piVar11 = (int *)register0x00000008;
      do {
        if (iVar3 < 0) {
          iVar9 = iVar3 + 8;
          if (-8 < iVar3) goto LAB_0167ed98;
          piVar5 = (int *)((long)aiStack_280 + (long)iVar3 + 0x200);
          iVar3 = iVar9;
        }
        else {
          iVar9 = iVar3;
LAB_0167ed98:
          piVar5 = piVar11;
          iVar3 = iVar9;
          piVar11 = piVar11 + 2;
        }
        iVar9 = *piVar5;
        local_50[uVar4 - 4] = iVar9;
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (iVar9 != -0x10000);
    }
  }
  FUN_0129bf58(param_1,param_2,uVar2,&local_60);
  return;
}


