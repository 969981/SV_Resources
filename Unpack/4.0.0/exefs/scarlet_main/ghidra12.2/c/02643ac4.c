/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02643ac4; name: FUN_02643ac4
 */


void FUN_02643ac4(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *local_60;
  char local_58;
  long local_38;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    if (*param_1 == 0) {
      local_38 = 0;
    }
    else {
      FUN_02643c00(&local_38);
      if (local_38 != 0) {
        FUN_02643c90(&local_60);
        lVar1 = 0;
        if (local_38 != 0) {
          lVar1 = local_38 + 0x20;
        }
        lVar5 = param_1[2];
        lVar6 = *(long *)(local_38 + 0x48);
        uVar2 = *(undefined1 *)(lVar6 + lVar5 * 0x10);
        bVar3 = (*(code *)param_1[4])(lVar1,param_2,param_3 & 1,param_4);
        *(byte *)(lVar6 + lVar5 * 0x10) = bVar3 & 1;
        uVar4 = (*(code *)param_1[3])(bVar3 & 1,uVar2);
        *(undefined1 *)(local_38 + 0x168) = 1;
        if ((uVar4 & 1) != 0) {
          FUN_02643d20(param_1 + 5,param_3 & 1,param_4);
        }
        if (local_58 != '\0') {
          *local_60 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
        }
      }
    }
    FUN_02644194(&local_38);
  }
  return;
}


