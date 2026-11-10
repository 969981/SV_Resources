/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02283048; name: FUN_02283048
 */


void FUN_02283048(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 *local_70;
  char local_68;
  long local_48;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    if (*param_1 == 0) {
      local_48 = 0;
    }
    else {
      FUN_0227f940(&local_48);
      if (local_48 != 0) {
        FUN_0227f9d0(&local_70);
        lVar2 = 0;
        if (local_48 != 0) {
          lVar2 = local_48 + 0x20;
        }
        lVar1 = *(long *)(local_48 + 0x48) + param_1[2] * 0x10;
        local_90 = *param_3;
        uStack_88 = param_3[1];
        local_80 = param_3[2];
        plVar5 = (long *)param_3[3];
        plStack_78 = plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        local_b0 = *param_4;
        uStack_a8 = param_4[1];
        local_a0 = param_4[2];
        plVar4 = (long *)param_4[3];
        plStack_98 = plVar4;
        if (plVar4 == (long *)0x0) {
          uVar3 = FUN_02283254(param_1 + 3,lVar2,param_2,lVar1,&local_90,&local_b0);
        }
        else {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          uVar3 = FUN_02283254(param_1 + 3,lVar2,param_2,lVar1,&local_90,&local_b0);
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        *(undefined1 *)(local_48 + 0x168) = 1;
        if ((uVar3 & 1) != 0) {
          plVar5 = (long *)param_3[3];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          plVar4 = (long *)param_4[3];
          if (plVar4 == (long *)0x0) {
            FUN_02283374(param_1 + 5);
          }
          else {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            FUN_02283374(param_1 + 5);
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
        }
        if (local_68 != '\0') {
          *local_70 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 1));
        }
      }
    }
    FUN_02278358(&local_48);
  }
  return;
}


