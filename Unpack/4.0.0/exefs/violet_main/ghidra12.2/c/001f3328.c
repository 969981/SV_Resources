/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3328; name: FUN_001f3328
 */


int FUN_001f3328(long param_1,uint param_2,undefined4 param_3,void *param_4,size_t param_5,
                undefined1 param_6)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  
  if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
    lVar1 = param_1 + 0x890;
    if (param_5 == 0) {
      __dest = (void *)0x0;
LAB_001f33b8:
      lVar3 = FUN_001f45a0(lVar1,0x98);
      if (lVar3 != 0) {
        FUN_001f9154();
        if ((int)*(uint *)(param_1 + 0x944) <= (int)param_2) {
          param_2 = *(uint *)(param_1 + 0x944);
        }
        FUN_001f4800(lVar3,param_2,param_3,__dest,param_5);
        *(undefined1 *)(lVar3 + 0x60) = param_6;
        iVar2 = FUN_001ee7d8(param_1,lVar3);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_001f4828(lVar3,lVar1);
        FUN_001f45b0(lVar1,lVar3);
        return iVar2;
      }
      FUN_001f45b0(lVar1,__dest);
    }
    else {
      if (0x4000 < param_5 + 8) goto LAB_001f3388;
      __dest = (void *)FUN_001f45a0(lVar1,param_5);
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,param_5);
        goto LAB_001f33b8;
      }
    }
    iVar2 = -0x385;
  }
  else {
LAB_001f3388:
    iVar2 = -0x1f5;
  }
  return iVar2;
}


