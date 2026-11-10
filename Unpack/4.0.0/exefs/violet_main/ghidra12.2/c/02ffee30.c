/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ffee30; name: FUN_02ffee30
 */


void FUN_02ffee30(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *__src;
  int iVar6;
  long *__src_00;
  undefined1 auStack_90 [48];
  
  do {
    lVar2 = *(long *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30);
    iVar4 = param_3;
    iVar3 = param_2;
    do {
      iVar1 = *(int *)(lVar2 + 0x20);
      __src = (long *)(param_1 + -0x30 + (long)iVar3 * 0x30);
      do {
        iVar6 = iVar3;
        __src = __src + 6;
        iVar3 = iVar6 + 1;
      } while (iVar1 < *(int *)(*__src + 0x20));
      __src_00 = (long *)(param_1 + 0x30 + (long)iVar4 * 0x30);
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        __src_00 = __src_00 + -6;
        iVar4 = iVar5 + -1;
      } while (*(int *)(*__src_00 + 0x20) < iVar1);
      iVar3 = iVar6;
      if (iVar6 <= iVar4) {
        if (iVar6 != iVar4) {
          memcpy(auStack_90,__src_00,0x30);
          memcpy(__src_00,__src,0x30);
          memcpy(__src,auStack_90,0x30);
        }
        iVar4 = iVar5 + -2;
        iVar3 = iVar6 + 1;
      }
    } while (iVar3 <= iVar4);
    if (param_2 < iVar4) {
      FUN_02ffee30(param_1,param_2,iVar4);
    }
    param_2 = iVar3;
  } while (iVar3 < param_3);
  return;
}


