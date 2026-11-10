/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015dc00; name: FUN_0015dc00
 */


void * FUN_0015dc00(int param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  
  uVar1 = param_1 + 4U & 0xfffffffc;
  uVar2 = uVar1 * 2 + 0xf & 0xfffffff0;
  uVar3 = uVar2;
  if (0 < (int)param_2) {
    uVar3 = (3 << (ulong)(param_2 & 0x1f)) + uVar2 + 0x10;
  }
  if (param_3 == (void *)0x0) {
    uVar4 = uVar1 * 4;
    if ((int)(uVar1 * 4) <= (int)uVar3) {
      uVar4 = uVar3;
    }
    lVar6 = (long)(int)(uVar4 + (uVar1 + 0x2ef & 0xfffffff0));
    param_3 = (void *)(**(code **)PTR_PTR_047cb890)(lVar6,0x10);
    if (param_3 == (void *)0x0) {
      FUN_0015ed40(lVar6);
      return (void *)0x0;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (((ulong)param_3 & 0xf) == 0) {
    memset(param_3,0,0x2c8);
    *(long *)((long)param_3 + 0x2a0) = (long)param_3 + 0x2d0;
    lVar6 = (long)param_3 + 0x2d0 + (long)(int)(uVar1 + 0xf & 0xfffffff0);
    *(undefined4 *)((long)param_3 + 0x280) = uVar5;
    *(uint *)((long)param_3 + 0x28c) = param_2;
    *(int *)((long)param_3 + 0x284) = param_1;
    *(long *)((long)param_3 + 0x2a8) = lVar6;
    *(long *)((long)param_3 + 0x2b0) = lVar6;
    if (0 < (int)param_2) {
      *(long *)((long)param_3 + 0x2b8) = lVar6 + (int)uVar2;
      *(long *)((long)param_3 + 0x2c0) =
           lVar6 + (int)uVar2 + (long)(1 << (ulong)(param_2 & 0x1f)) + 0x10;
    }
  }
  else {
    param_3 = (void *)0x0;
  }
  return param_3;
}


