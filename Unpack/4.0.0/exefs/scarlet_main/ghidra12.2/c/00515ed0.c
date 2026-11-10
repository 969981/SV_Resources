/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00515ed0; name: FUN_00515ed0
 */


bool FUN_00515ed0(ulong *param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined4 local_34;
  undefined8 local_28;
  
  uVar10 = param_2 >> 3 & 0x1fffffff;
  if ((int)uVar10 == 0) {
LAB_00516134:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    switch((uint)param_2 & 7) {
    case 0:
      pbVar1 = (byte *)*param_1;
      if ((pbVar1 < (byte *)param_1[1]) && (-1 < (char)*pbVar1)) {
        uVar6 = (ulong)*pbVar1;
        *param_1 = (ulong)(pbVar1 + 1);
      }
      else {
        auVar11 = FUN_0052bc08(param_1);
        uVar6 = auVar11._0_8_;
        if ((auVar11._8_8_ & 1) == 0) goto LAB_00516134;
      }
      if (param_3 != 0) {
        FUN_00514e00(param_3,uVar10,uVar6);
        return true;
      }
      break;
    case 1:
      puVar8 = (undefined8 *)*param_1;
      if ((int)param_1[1] - (int)puVar8 < 8) {
        uVar6 = FUN_0052bba0(param_1,&local_28);
        if ((uVar6 & 1) == 0) goto LAB_00516134;
      }
      else {
        local_28 = *puVar8;
        *param_1 = (ulong)(puVar8 + 1);
      }
      if (param_3 != 0) {
        FUN_00514ff8(param_3,uVar10,local_28);
      }
      break;
    case 2:
      pbVar1 = (byte *)*param_1;
      if (pbVar1 < (byte *)param_1[1]) {
        uVar6 = (ulong)*pbVar1;
        if ((char)*pbVar1 < '\0') goto LAB_005160d0;
        *param_1 = (ulong)(pbVar1 + 1);
      }
      else {
        uVar6 = 0;
LAB_005160d0:
        uVar6 = FUN_0052be68(param_1,uVar6);
        if ((long)uVar6 < 0) goto LAB_00516134;
      }
      if (param_3 == 0) {
        if ((int)uVar6 < 0) goto LAB_00516134;
        if ((int)uVar6 <= (int)param_1[1] - (int)*param_1) {
          *param_1 = *param_1 + (uVar6 & 0xffffffff);
          break;
        }
        uVar10 = FUN_0052b4b8(param_1,uVar6 & 0xffffffff);
      }
      else {
        uVar5 = FUN_005150f8(param_3,uVar10);
        uVar10 = FUN_0052b84c(param_1,uVar5,uVar6 & 0xffffffff);
      }
      if ((uVar10 & 1) == 0) goto LAB_00516134;
      break;
    case 3:
      iVar2 = *(int *)((long)param_1 + 0x34);
      *(int *)((long)param_1 + 0x34) = iVar2 + -1;
      if (0 < iVar2) {
        if (param_3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00515210(param_3,uVar10);
        }
        do {
          pbVar1 = (byte *)*param_1;
          if (pbVar1 < (byte *)param_1[1]) {
            uVar4 = (uint)*pbVar1;
            if ((char)*pbVar1 < '\0') goto LAB_0051605c;
            *param_1 = (ulong)(pbVar1 + 1);
            *(uint *)(param_1 + 4) = uVar4;
            if (uVar4 == 0) {
              uVar7 = 0;
              goto LAB_00516090;
            }
          }
          else {
            uVar4 = 0;
LAB_0051605c:
            uVar4 = FUN_0052c138(param_1,uVar4);
            *(uint *)(param_1 + 4) = uVar4;
            uVar7 = 0;
            if (uVar4 == 0) goto LAB_00516090;
          }
          uVar7 = uVar4;
          if ((uVar7 & 7) == 4) {
LAB_00516090:
            if (*(int *)((long)param_1 + 0x34) < (int)param_1[7]) {
              *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
            }
            return uVar7 == ((uint)param_2 & 0xfffffff8 | 4);
          }
          uVar10 = FUN_00515ed0(param_1,uVar7,uVar5);
        } while ((uVar10 & 1) != 0);
      }
      goto LAB_00516134;
    default:
      goto switchD_00515f18_caseD_4;
    case 5:
      puVar9 = (undefined4 *)*param_1;
      if ((int)param_1[1] - (int)puVar9 < 4) {
        uVar6 = FUN_0052bb38(param_1,&local_34);
        if ((uVar6 & 1) == 0) goto LAB_00516134;
      }
      else {
        local_34 = *puVar9;
        *param_1 = (ulong)(puVar9 + 1);
      }
      if (param_3 != 0) {
        FUN_00514ef8(param_3,uVar10,local_34);
      }
    }
    bVar3 = true;
  }
switchD_00515f18_caseD_4:
  return bVar3;
}


