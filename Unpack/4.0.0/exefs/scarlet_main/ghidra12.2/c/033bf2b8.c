/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bf2b8; name: FUN_033bf2b8
 */


undefined8 FUN_033bf2b8(long *param_1,undefined8 *param_2,long param_3,void *param_4,long *param_5)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return 2;
  }
  if (*param_1 == 0) {
    return 2;
  }
  puVar6 = (ulong *)(param_1 + 3);
  uVar3 = *puVar6;
  lVar5 = param_1[2] * param_3;
  uVar2 = param_1[4];
  if (uVar3 == uVar2) {
    uVar3 = 0;
    uVar2 = 0;
    *puVar6 = 0;
    param_1[4] = 0;
  }
  uVar4 = param_1[1];
  if (uVar4 < uVar2 + lVar5) {
    while( true ) {
      if (uVar3 < 0x4001) {
        param_1[1] = uVar4 + lVar5;
        pvVar1 = (void *)(**(code **)(*param_5 + 0x10))
                                   (param_5,uVar4 + lVar5,
                                    "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/GFReverb/SoundEnginePlugin/GFReverbFXQueue.h"
                                    ,0x5e);
        if (pvVar1 == (void *)0x0) {
          return 0x34;
        }
        memset(pvVar1,0,(ulong)*(uint *)(param_1 + 1));
        (**(code **)(*param_5 + 0x18))(param_5,*param_1);
        uVar2 = param_1[4];
        *param_1 = (long)pvVar1;
      }
      else {
        memmove((void *)*param_1,(void *)(*param_1 + uVar3),uVar2 - uVar3);
        uVar2 = param_1[4] - param_1[3];
        param_1[3] = 0;
        param_1[4] = uVar2;
      }
      uVar4 = param_1[1];
      if (uVar2 + lVar5 <= uVar4) break;
      uVar3 = *puVar6;
    }
    param_1[4] = uVar2 + lVar5;
    if (*param_1 == 0) {
      return 1;
    }
    pvVar1 = (void *)(*param_1 + uVar2);
  }
  else {
    pvVar1 = (void *)(*param_1 + uVar2);
    param_1[4] = uVar2 + lVar5;
  }
  if (param_4 != (void *)0x0) {
    memcpy(pvVar1,param_4,param_1[2] * param_3);
  }
  *param_2 = pvVar1;
  return 1;
}


