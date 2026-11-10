/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025fda7c; name: FUN_025fda7c
 */


void FUN_025fda7c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  char local_58;
  long local_38;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    if (*param_1 == 0) {
      local_38 = 0;
    }
    else {
      FUN_0227f940(&local_38);
      if (local_38 != 0) {
        FUN_0227f9d0(&local_60);
        lVar5 = *(long *)(local_38 + 0x48);
        lVar1 = 0;
        if (local_38 != 0) {
          lVar1 = local_38 + 0x20;
        }
        lVar6 = param_1[2];
        local_80 = *param_3;
        uStack_78 = param_3[1];
        local_70 = param_3[2];
        local_68 = (long *)param_3[3];
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        local_a0 = *param_4;
        uStack_98 = param_4[1];
        local_90 = param_4[2];
        local_88 = (long *)param_4[3];
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        uVar4 = FUN_0227fa60(param_1 + 3,lVar1,param_2,lVar5 + lVar6 * 0x10,&local_80,&local_a0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        *(undefined1 *)(local_38 + 0x168) = 1;
        if ((uVar4 & 1) != 0) {
          local_c0 = *param_3;
          uStack_b8 = param_3[1];
          local_b0 = param_3[2];
          plVar2 = (long *)param_3[3];
          plStack_a8 = plVar2;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
          local_e0 = *param_4;
          uStack_d8 = param_4[1];
          local_d0 = param_4[2];
          plVar3 = (long *)param_4[3];
          plStack_c8 = plVar3;
          if (plVar3 == (long *)0x0) {
            FUN_025fdc8c(param_1 + 5,&local_c0,&local_e0);
          }
          else {
            (**(code **)(*plVar3 + 0x18))(plVar3);
            FUN_025fdc8c(param_1 + 5,&local_c0,&local_e0);
            (**(code **)(*plVar3 + 0x20))(plVar3);
          }
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
        }
        if (local_58 != '\0') {
          *local_60 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
        }
      }
    }
    FUN_02278358(&local_38);
  }
  return;
}


