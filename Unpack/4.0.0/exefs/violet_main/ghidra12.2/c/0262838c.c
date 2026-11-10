/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262838c; name: FUN_0262838c
 */


void FUN_0262838c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *local_60;
  char local_58;
  long local_28;
  
  if ((*param_3 != 0) && (*(short *)(*param_3 + 0x1a) != 0)) {
    if (*param_3 == 0) {
      local_28 = 0;
    }
    else {
      FUN_02264164(&local_28);
      if (local_28 != 0) {
        FUN_022641f4(&local_60);
        lVar1 = 0;
        if (local_28 != 0) {
          lVar1 = local_28 + 0x20;
        }
        lVar5 = param_3[2];
        lVar6 = *(long *)(local_28 + 0x48);
        uVar2 = *(undefined1 *)(lVar6 + lVar5 * 0x10);
        bVar3 = (*(code *)param_3[4])(param_1,param_2,lVar1,param_4);
        *(byte *)(lVar6 + lVar5 * 0x10) = bVar3 & 1;
        uVar4 = (*(code *)param_3[3])(bVar3 & 1,uVar2);
        *(undefined1 *)(local_28 + 0x168) = 1;
        if ((uVar4 & 1) != 0) {
          FUN_026284c4(param_1,param_2,param_3 + 5);
        }
        if (local_58 != '\0') {
          *local_60 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
        }
      }
    }
    FUN_0225b0c8(&local_28);
  }
  return;
}


