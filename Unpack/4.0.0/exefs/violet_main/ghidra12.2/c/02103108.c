/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02103108; name: FUN_02103108
 */


undefined8 FUN_02103108(long param_1,uint *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  
  if (*param_2 < 6) {
    uVar2 = *param_3;
    uVar3 = 1;
    switch(*param_2) {
    case 0:
      uVar5 = FUN_021033cc(*(undefined8 *)(param_1 + 0x30));
      uVar6 = 3;
      if ((uVar5 & 1) == 0) {
        uVar6 = 1;
      }
      goto LAB_02103388;
    case 1:
      uVar2 = param_3[2];
      uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x838))();
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x5a8))(*(long **)(param_1 + 0x1b0),uVar1,uVar2);
      goto LAB_02103380;
    case 2:
      pcVar7 = *(code **)(**(long **)(param_1 + 0x1b0) + 0x5b8);
      goto LAB_02103378;
    case 3:
      if (*(char *)(param_3 + 1) == '\x01') {
        plVar4 = (long *)FUN_01a7e900(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar2);
        if (plVar4 == (long *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 0x98))();
        }
        *(undefined4 *)(param_1 + 0x17c) = 0x3b9;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        plVar4 = *(long **)(param_1 + 0x1b0);
        *(undefined2 *)(param_1 + 0x180) = 0x1100;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined4 *)(param_1 + 0x184) = uVar2;
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_021032a0:
          uVar5 = FUN_014aeb48(param_1);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar5 & 1) != 0))
          goto LAB_02103338;
LAB_021032bc:
          uVar3 = 1;
        }
        else {
          uVar5 = FUN_014aeb48(param_1);
          if ((((uVar5 & 1) == 0) || (uVar5 = FUN_014aeb20(param_1,1), (uVar5 & 1) == 0)) &&
             (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
            if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_021032a0;
            goto LAB_021032bc;
          }
LAB_02103338:
          uVar3 = 0;
        }
        pcVar7 = *(code **)(*plVar4 + 0x1f8);
      }
      else {
        if (*(char *)(param_3 + 1) != '\0') {
          uVar6 = 5;
          goto LAB_02103388;
        }
        *(undefined8 *)(param_1 + 0x19c) = 0;
        *(undefined8 *)(param_1 + 0x194) = 0;
        *(undefined8 *)(param_1 + 0x184) = 0;
        *(undefined8 *)(param_1 + 0x18c) = 0;
        *(undefined4 *)(param_1 + 0x17c) = 0x22e;
        *(undefined2 *)(param_1 + 0x180) = 0x100;
        plVar4 = (long *)FUN_01a7e900(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar2);
        if (plVar4 == (long *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 0x98))();
        }
        plVar4 = *(long **)(param_1 + 0x1b0);
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_02103224:
          uVar5 = FUN_014aeb48(param_1);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar5 & 1) != 0))
          goto LAB_021032f4;
LAB_02103240:
          uVar3 = 1;
        }
        else {
          uVar5 = FUN_014aeb48(param_1);
          if ((((uVar5 & 1) == 0) || (uVar5 = FUN_014aeb20(param_1,1), (uVar5 & 1) == 0)) &&
             (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
            if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_02103224;
            goto LAB_02103240;
          }
LAB_021032f4:
          uVar3 = 0;
        }
        pcVar7 = *(code **)(*plVar4 + 0x1f8);
      }
      (*pcVar7)(plVar4,uVar2,param_1 + 0x17c,uVar3,1,0,0);
      *param_2 = *param_2 + 1;
    case 4:
      pcVar7 = *(code **)(**(long **)(param_1 + 0x1b0) + 0x228);
LAB_02103378:
      uVar5 = (*pcVar7)();
      if ((uVar5 & 1) != 0) {
LAB_02103380:
        uVar6 = *param_2 + 1;
LAB_02103388:
        *param_2 = uVar6;
      }
      break;
    case 5:
      goto switchD_0210314c_caseD_5;
    }
  }
  uVar3 = 0;
switchD_0210314c_caseD_5:
  return uVar3;
}


