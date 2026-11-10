/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02268fe8; name: FUN_02268fe8
 */


void FUN_02268fe8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

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
        lVar5 = param_3[2];
        lVar6 = *(long *)(local_28 + 0x48);
        uVar2 = *(undefined1 *)(lVar6 + lVar5 * 0x10);
        lVar1 = 0;
        if (local_28 != 0) {
          lVar1 = local_28 + 0x20;
        }
        bVar3 = (**(code **)(param_3[4] + 8))(param_1,param_2,lVar1,param_4);
        *(byte *)(lVar6 + lVar5 * 0x10) = bVar3 & 1;
        uVar4 = (*(code *)param_3[3])(bVar3 & 1,uVar2);
        *(undefined1 *)(local_28 + 0x168) = 1;
        if ((uVar4 & 1) != 0) {
          FUN_0226917c(param_3 + 5);
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


