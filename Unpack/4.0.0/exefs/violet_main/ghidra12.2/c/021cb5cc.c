/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021cb5cc; name: FUN_021cb5cc
 */


void FUN_021cb5cc(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *local_68;
  char local_60;
  long local_58;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    if (*param_1 == 0) {
      local_58 = 0;
    }
    else {
      FUN_021c68e8(&local_58);
      if (local_58 != 0) {
        FUN_021c6978(&local_68);
        lVar1 = 0;
        if (local_58 != 0) {
          lVar1 = local_58 + 0x20;
        }
        lVar5 = param_1[2];
        lVar6 = *(long *)(local_58 + 0x48);
        uVar2 = *(undefined1 *)(lVar6 + lVar5 * 0x10);
        bVar3 = (*(code *)param_1[4])(lVar1,param_2,param_3 & 1,param_4,param_5);
        *(byte *)(lVar6 + lVar5 * 0x10) = bVar3 & 1;
        uVar4 = (*(code *)param_1[3])(bVar3 & 1,uVar2);
        *(undefined1 *)(local_58 + 0x168) = 1;
        if ((uVar4 & 1) != 0) {
          FUN_021cb824(param_1 + 5,param_3 & 1,param_4,param_5);
        }
        if (local_60 != '\0') {
          *local_68 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_68 + 1));
        }
      }
    }
    FUN_021c1944(&local_58);
  }
  return;
}


