/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350f610; name: FUN_0350f610
 */


void FUN_0350f610(long *param_1,undefined4 param_2)

{
  int *__src;
  int iVar1;
  long lVar2;
  int *__dest;
  uint uVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 10) >> 4 & 1) != 0) {
      puVar5 = *(undefined8 **)PTR_DAT_047e6988;
      iVar1 = *(int *)(lVar2 + 0x228);
      nn::os::LockMutex((MutexType *)(puVar5 + 4));
      __dest = (int *)*puVar5;
      uVar3 = *(uint *)(puVar5 + 1);
      piVar4 = __dest + (ulong)uVar3 * 0xc;
      if (uVar3 != 0) {
        lVar2 = (ulong)uVar3 * 0x30;
        do {
          if ((*__dest == iVar1) && (*(long **)(__dest + 2) == param_1)) goto LAB_0350f6a4;
          lVar2 = lVar2 + -0x30;
          __dest = __dest + 0xc;
        } while (lVar2 != 0);
        __dest = piVar4;
      }
LAB_0350f6a4:
      if (piVar4 != __dest) {
        if (__dest < piVar4 + -0xc) {
          do {
            __src = __dest + 0xc;
            memcpy(__dest,__src,0x30);
            __dest = __src;
          } while (__src < piVar4 + -0xc);
          uVar3 = *(uint *)(puVar5 + 1);
        }
        *(uint *)(puVar5 + 1) = uVar3 - 1;
      }
      nn::os::UnlockMutex((MutexType *)(puVar5 + 4));
      lVar2 = param_1[3];
    }
    *(undefined8 *)(lVar2 + 0x250) = 0;
    FUN_034e8708(0,lVar2,4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0350f71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}


