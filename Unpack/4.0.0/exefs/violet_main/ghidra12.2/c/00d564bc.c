/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d564bc; name: FUN_00d564bc
 */


void FUN_00d564bc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong extraout_x1;
  uint *puVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  
  puVar9 = param_1 + 2;
  uVar1 = *param_1 ^ (int)*param_1 >> 0x1f;
  if (uVar1 == 0) {
    local_58 = param_2[3];
    uStack_50 = param_2[4];
    local_48 = param_2[5];
    uStack_40 = param_2[6];
    local_70 = *param_2;
    local_68 = param_2[1];
    local_60 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    uVar1 = *param_1;
    if (uVar1 == 1) {
      local_38 = &local_70;
      FUN_00d5a180(1,&local_38,puVar9);
    }
    else {
      FUN_00d56620(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,&local_38);
      *(undefined8 *)(param_1 + 0xc) = local_48;
      *(undefined8 *)(param_1 + 0xe) = uStack_40;
      *(undefined8 *)(param_1 + 8) = local_58;
      *(undefined8 *)(param_1 + 10) = uStack_50;
      *(undefined8 *)(param_1 + 2) = local_70;
      *(undefined8 *)(param_1 + 4) = local_68;
      *(undefined8 *)(param_1 + 6) = local_60;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      *param_1 = 1;
    }
    FUN_00d56620(1,1,&local_38,&local_70);
  }
  else {
    switch(uVar1) {
    case 1:
      FUN_00d5a218(puVar9);
      uVar2 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[6];
      *(undefined8 *)(param_1 + 0xc) = param_2[5];
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 10) = uVar4;
      *(undefined8 *)(param_1 + 2) = *param_2;
      *(undefined8 *)(param_1 + 4) = param_2[1];
      *(undefined8 *)(param_1 + 6) = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      break;
    default:
      FUN_024a6cf0();
      switch(extraout_x1 & 0xffffffff) {
      case 0:
        goto switchD_00d56650_caseD_0;
      case 1:
        lVar10 = *(long *)puVar9;
        if (lVar10 != 0) {
          lVar3 = *(long *)(puVar9 + 4);
          plVar6 = *(long **)(puVar9 + 6);
          *(long *)(puVar9 + 2) = lVar10;
          uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d566b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x18))(plVar6,lVar10,lVar3 - lVar10,8);
            return;
          }
          FUN_00c48fe8(plVar6,lVar10,lVar3 - lVar10,8);
          return;
        }
switchD_00d56650_caseD_0:
        return;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_024a7530();
      }
    }
  }
  return;
}


