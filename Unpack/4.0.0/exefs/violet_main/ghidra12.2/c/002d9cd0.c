/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d9cd0; name: FUN_002d9cd0
 */


void FUN_002d9cd0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  uint uVar5;
  int iVar6;
  
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_047cc8b8 + 0x10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x14] = 0;
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x1a8);
  if (lVar4 != 0) {
                    /* try { // try from 002d9d3c to 002d9d43 has its CatchHandler @ 002d9e24 */
    FUN_002d03ac(lVar4);
  }
  lVar3 = DAT_03cb5400;
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar6 = 1;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  param_1[8] = lVar4;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = lVar3;
  if ((int)uVar5 < 1) {
    uVar2 = 8;
    if (uVar5 != 0) {
      uVar2 = uVar5;
    }
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 << 1;
    } while ((int)uVar5 < 1);
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)uVar5 << 3);
    if ((void *)param_1[0xb] != (void *)0x0) {
      memmove(__dest,(void *)param_1[0xb],(long)(int)param_1[0xd] << 3);
    }
    uVar2 = uVar5 - (int)param_1[0xd];
    memset((void *)((long)__dest + (long)(int)param_1[0xd] * 8),0,
           -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
    lVar4 = param_1[0xb];
    param_1[0xb] = (long)__dest;
    if (lVar4 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    lVar4 = (long)(int)param_1[0xd];
    iVar6 = (int)param_1[0xd] + 1;
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  else {
    lVar4 = 0;
  }
  *(int *)(param_1 + 0xd) = iVar6;
                    /* try { // try from 002d9e0c to 002d9e0f has its CatchHandler @ 002d9e28 */
  FUN_002d039c(param_1[0xb] + lVar4 * 8);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  return;
}


