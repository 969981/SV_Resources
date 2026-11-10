/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ea210; name: FUN_001ea210
 */


void FUN_001ea210(uint *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *__dest;
  ulong uVar3;
  uint uVar4;
  size_t __n;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar1 = uVar2 + (uint)param_3 & 0x1fffffff;
  *param_1 = uVar1;
  if (uVar1 < uVar2) {
    uVar4 = uVar4 + 1;
    param_1[1] = uVar4;
  }
  uVar3 = (ulong)uVar2 & 0x3f;
  param_1[1] = uVar4 + ((uint)param_3 >> 0x1d);
  if ((int)uVar3 != 0) {
    __n = 0x40 - uVar3;
    __dest = (uint *)((long)param_1 + uVar3 + 0x18);
    if (param_3 < __n) goto LAB_001ea2bc;
    memcpy(__dest,param_2,__n);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - __n;
    FUN_001ea5e0(param_1,param_1 + 6,0x40);
  }
  if (0x3f < param_3) {
    param_2 = (void *)FUN_001ea5e0(param_1,param_2,param_3 & 0xffffffffffffffc0);
    param_3 = param_3 & 0x3f;
  }
  __dest = param_1 + 6;
LAB_001ea2bc:
  memcpy(__dest,param_2,param_3);
  return;
}


