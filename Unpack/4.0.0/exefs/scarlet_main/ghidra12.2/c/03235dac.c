/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03235dac; name: FUN_03235dac
 */


void FUN_03235dac(undefined8 *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 local_68;
  
  if (0 < (int)param_3) {
    nn::os::LockMutex((MutexType *)(param_1 + 2));
    puVar1 = PTR_DAT_047d1a08;
    uVar4 = (ulong)param_3;
    do {
      puVar3 = (undefined4 *)param_1[1];
      if (puVar3 == (undefined4 *)0x0) {
        local_68 = 0xfc8;
        puVar3 = (undefined4 *)(**(code **)puVar1)(0,&local_68,0);
        pcVar2 = *(code **)(puVar1 + 0x10);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(puVar3,"Block");
        }
        FUN_0323d260(puVar3);
        *(undefined8 *)(puVar3 + 0x3f0) = *param_1;
        *param_1 = puVar3;
        *(undefined8 *)(puVar3 + 0x3ee) = param_1[1];
        param_1[1] = puVar3;
      }
      param_1[1] = *(undefined8 *)(puVar3 + 0x16);
      *(undefined8 *)(puVar3 + 1) = 0x4000000000010001;
      *(undefined8 *)(puVar3 + 6) = 0;
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 0x16) = 0;
      uVar4 = uVar4 - 1;
      puVar3[10] = 0;
      puVar3[0x12] = 0;
      puVar3[4] = 0;
      *param_2 = puVar3;
      param_2 = (undefined8 *)((long)param_2 + (long)param_4);
    } while (uVar4 != 0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  }
  return;
}


