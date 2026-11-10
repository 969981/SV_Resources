/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045a3f0; name: FUN_0045a3f0
 */


long FUN_0045a3f0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                 size_t param_5,code *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_38;
  uint uStack_34;
  
  if (param_5 - 1 < 0x7fffffff) {
    uVar4 = param_5 + 7 & 0xfffffffffffffff8;
    if (param_2 == (undefined4 *)0x0) {
      local_38 = 0xa65959a6;
    }
    else {
      local_38 = *param_2;
    }
    uVar1 = ((uint)param_5 & 0xff00ff00) >> 8 | ((uint)param_5 & 0xff00ff) << 8;
    uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (uVar4 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT44(uStack_34,local_38);
      memset((void *)((long)(param_3 + 1) + param_5),0,uVar4 - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar3 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)((long)param_3 + param_5),0,uVar4 - param_5);
      iVar2 = FUN_00459c70(param_1,&local_38,param_3,param_3,uVar4,param_6);
      lVar3 = (long)iVar2;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


