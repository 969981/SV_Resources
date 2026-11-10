/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa55c; name: FUN_001fa55c
 */


void * FUN_001fa55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_34;
  
  __s = (void *)FUN_001ec2f8(0x1f0);
  if (__s == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(__s,0,0x1f0);
    lVar2 = FUN_001ec348(0x1000,param_1);
    *(long *)((long)__s + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      FUN_001ec308(__s);
      __s = (void *)0x0;
      uVar1 = 0xffffffff;
    }
    else {
      nnosGetCurrentThread();
      uVar1 = nnosGetThreadPriority();
      uVar1 = nnosCreateThread(__s,PTR_FUN_047cba20,__s,lVar2,param_1,uVar1);
      uVar3 = nnResultIsFailure(uVar1);
      if ((uVar3 & 1) == 0) {
        local_34 = 0xffffffff;
        local_58 = 0;
        uVar4 = nnosGetCurrentThread();
        nnosGetThreadCoreMask(&local_34,&local_58,uVar4);
        nnosSetThreadCoreMask(__s,local_34,local_58);
        if (param_4 != 0) {
          nnosSetThreadNamePointer(__s,param_4);
        }
        *(undefined8 *)((long)__s + 0x1c0) = param_2;
        *(undefined8 *)((long)__s + 0x1c8) = param_3;
      }
    }
  }
  uVar3 = nnResultIsFailure(uVar1);
  if (((uVar3 & 1) != 0) && (__s != (void *)0x0)) {
    FUN_001fa6dc(__s);
    __s = (void *)0x0;
  }
  return __s;
}


