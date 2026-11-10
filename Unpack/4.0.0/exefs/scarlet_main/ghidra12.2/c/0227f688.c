/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0227f688; name: FUN_0227f688
 */


void FUN_0227f688(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
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
        lVar3 = *(long *)(local_38 + 0x48);
        lVar1 = 0;
        if (local_38 != 0) {
          lVar1 = local_38 + 0x20;
        }
        lVar4 = param_1[2];
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
        uVar2 = FUN_0227fa60(param_1 + 3,lVar1,param_2,lVar3 + lVar4 * 0x10,&local_80,&local_a0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        *(undefined1 *)(local_38 + 0x168) = 1;
        if ((uVar2 & 1) != 0) {
          FUN_0227fb60(param_1 + 5,param_3,param_4);
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


