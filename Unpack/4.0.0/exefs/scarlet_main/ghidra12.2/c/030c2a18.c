/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c2a18; name: FUN_030c2a18
 */


void FUN_030c2a18(uint *param_1,undefined8 *param_2,char param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__dest;
  void *__src;
  int iVar5;
  undefined8 uVar6;
  
  if (param_3 == '\x01') {
    uVar2 = *param_1 - 1;
    if ((int)*param_1 < 1) {
      uVar2 = param_1[4];
      if ((int)(param_1[5] & 0x7fffffff) <= (int)uVar2) {
        FUN_030c6c24(param_1 + 2,(long)(int)uVar2 + 1);
      }
      __dest = *(void **)(param_1 + 2);
      if (0 < (int)uVar2) {
        pvVar1 = (void *)((long)__dest + (ulong)(uVar2 - 1) * 0x30);
        __src = (void *)((long)pvVar1 + 0x30);
        if (uVar2 - 1 != 0) {
          iVar5 = -(uVar2 & 0xfffffffe);
          do {
            pvVar1 = __src;
            memcpy(pvVar1,(void *)((long)pvVar1 + -0x30),0x30);
            __src = (void *)((long)pvVar1 + -0x60);
            memcpy((void *)((long)pvVar1 + -0x30),__src,0x30);
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
          pvVar1 = (void *)((long)pvVar1 + -0x90);
        }
        if ((uVar2 & 1) != 0) {
          memcpy(__src,pvVar1,0x30);
        }
      }
      memcpy(__dest,param_2,0x30);
      param_1[4] = (uint)((long)(int)uVar2 + 1);
      param_1[1] = param_1[1] + 1;
    }
    else {
      *param_1 = uVar2;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x30);
      *puVar3 = *param_2;
      uVar6 = param_2[2];
      puVar3[3] = param_2[3];
      puVar3[2] = uVar6;
      uVar6 = param_2[4];
      puVar3[5] = param_2[5];
      puVar3[4] = uVar6;
    }
  }
  else {
    uVar2 = param_1[4];
    lVar4 = (long)(int)uVar2;
    if ((int)(param_1[5] & 0x7fffffff) <= (int)uVar2) {
      FUN_030c6dc0(param_1 + 2,lVar4 + 1);
      uVar2 = param_1[4];
    }
    memcpy((void *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x30),param_2,0x30);
    param_1[4] = (uint)(lVar4 + 1);
  }
  return;
}


