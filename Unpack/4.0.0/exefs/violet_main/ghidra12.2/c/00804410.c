/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00804410; name: FUN_00804410
 */


void FUN_00804410(undefined8 param_1,long param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  ulong local_40 [2];
  ulong local_28;
  
  auVar7 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0);
  if ((int)param_3[4] - 2U < 9) {
    iVar2 = (auVar7._0_4_ + -2000) / 1000;
    uVar5 = 2;
    uVar4 = 3;
    switch((int)param_3[4]) {
    case 2:
      uVar3 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x3f8))();
      if ((uVar3 & 1) == 0) {
LAB_008044bc:
        uVar4 = 0;
        goto LAB_0080457c;
      }
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)((long)param_3 + 0x74) / iVar2;
      }
      if ((*(int *)((long)param_3 + 0x74) == iVar1 * iVar2) && ((int)param_3[0xf] < 3))
      goto LAB_008044bc;
LAB_00804530:
      local_40[0] = 0;
      FUN_007935cc(local_40);
      *param_3 = local_40[0];
      *(int *)((long)param_3 + 0x74) = *(int *)((long)param_3 + 0x74) + 1;
      local_40[0] = local_40[0] & 0xffffffff00000000;
      goto LAB_0080455c;
    default:
      goto switchD_00804488_caseD_3;
    case 5:
      uVar6 = FUN_00801bb0((int)param_3[0xe],auVar7._0_8_,auVar7._8_8_,3,2);
      *(undefined4 *)(param_3 + 0xe) = uVar6;
      FUN_008042ec(local_40,param_2,param_3,2,2);
      uVar3 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x3f8))();
      if ((uVar3 & 1) != 0) {
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)((long)param_3 + 0x74) / iVar2;
        }
        if ((*(int *)((long)param_3 + 0x74) != iVar1 * iVar2) || (2 < (int)param_3[0xf]))
        goto LAB_00804530;
      }
      uVar4 = 1;
LAB_0080457c:
      uVar5 = 1;
      break;
    case 8:
      break;
    case 10:
      uVar5 = 2;
      uVar4 = 4;
    }
    FUN_008042ec(local_40,param_2,param_3,uVar4,uVar5);
    if ((int)local_40[0] == 0) {
      local_28 = 0;
      FUN_007935cc(&local_28);
      *param_3 = local_28;
      *(int *)((long)param_3 + 0x74) = *(int *)((long)param_3 + 0x74) + 1;
      uVar3 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x3f8))();
      if ((uVar3 & 1) != 0) {
        *(int *)(param_3 + 0xf) = (int)param_3[0xf] + 1;
      }
    }
  }
  else {
switchD_00804488_caseD_3:
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
LAB_0080455c:
    local_28 = local_28 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_28);
  }
  FUN_00cbd7c0(param_1,local_40);
  return;
}


