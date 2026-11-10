/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca7f0; name: FUN_007ca7f0
 */


void FUN_007ca7f0(MessageQueueType *param_1,uint param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if ((int)param_2 < 1) {
    return;
  }
  uVar5 = (ulong)param_2;
  puVar1 = (ulong *)FUN_007bf9f0(uVar5 << 3,param_3);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      puVar4 = puVar1 + 2;
      do {
        uVar3 = uVar3 + 4;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 4;
      } while ((uVar5 & 0xfffffffc) != uVar3);
    }
    if ((param_2 & 3) != 0) {
      puVar4 = puVar1 + uVar3;
      do {
        uVar2 = uVar2 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  *(ulong **)(param_1 + 0x48) = puVar1;
  nn::os::InitializeMessageQueue(param_1,puVar1,(long)(int)param_2);
  return;
}


