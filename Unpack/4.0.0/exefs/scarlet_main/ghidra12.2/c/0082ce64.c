/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082ce64; name: FUN_0082ce64
 */


void FUN_0082ce64(long *param_1)

{
  long *plVar1;
  void *__src;
  undefined *puVar2;
  undefined *puVar3;
  void *__dest;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_48;
  
  param_1[2] = 1;
  puVar2 = PTR_DAT_047d19b0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_047d1a58;
  lVar9 = *(long *)(puVar2 + 0x248);
  lVar8 = *(long *)(puVar2 + 0x240);
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[7] = lVar9;
  param_1[6] = lVar8;
  param_1[9] = CONCAT44(-(float)((ulong)lVar9 >> 0x20),-(float)lVar9);
  param_1[8] = CONCAT44(-(float)((ulong)lVar8 >> 0x20),-(float)lVar8);
  plVar5 = param_1 + 0x18;
  *plVar5 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar3 = PTR_DAT_047d1a08;
  param_1[0x19] = 0;
  local_48 = 0x100;
  __dest = (void *)(**(code **)puVar3)(0,&local_48,0);
  __src = (void *)0x0;
  if (*plVar5 != 0) {
    __src = (void *)(*plVar5 + (long)plVar5);
  }
  memcpy(__dest,__src,(long)(int)param_1[0x19] << 7);
  if (*(int *)((long)param_1 + 0xcc) < 0) {
    lVar4 = 0;
    if (*plVar5 != 0) {
      lVar4 = *plVar5 + (long)plVar5;
    }
    (**(code **)(puVar3 + 8))(0,lVar4,0);
  }
  lVar7 = *(long *)(puVar2 + 0x298);
  lVar6 = *(long *)(puVar2 + 0x290);
  lVar4 = 0;
  if (__dest != (void *)0x0) {
    lVar4 = (long)__dest - (long)plVar5;
  }
  param_1[0x18] = lVar4;
  param_1[0x19] = -0x7ffffffdfffffffe;
  plVar1 = (long *)(lVar4 + (long)plVar5);
  plVar1[0xc] = 0;
  plVar1[0xd] = 0;
  plVar1[1] = lVar9;
  *plVar1 = lVar8;
  plVar1[3] = lVar7;
  plVar1[2] = lVar6;
  *(undefined2 *)(plVar1 + 0xe) = 0;
  plVar1[5] = lVar9;
  plVar1[4] = lVar8;
  plVar1[7] = lVar7;
  plVar1[6] = lVar6;
  plVar1[9] = lVar9;
  plVar1[8] = lVar8;
  plVar1[0xb] = lVar7;
  plVar1[10] = lVar6;
  lVar4 = param_1[0x18];
  *(undefined2 *)((long)plVar5 + lVar4 + 0xf0) = 0;
  *(undefined8 *)((long)plVar5 + lVar4 + 0xe0) = 0;
  *(undefined8 *)((long)plVar5 + lVar4 + 0xe8) = 0;
  *(long *)((long)plVar5 + lVar4 + 0x88) = lVar9;
  *(long *)((long)plVar5 + lVar4 + 0x80) = lVar8;
  *(long *)((long)plVar5 + lVar4 + 0x98) = lVar7;
  *(long *)((long)plVar5 + lVar4 + 0x90) = lVar6;
  *(long *)((long)plVar5 + lVar4 + 0xa8) = lVar9;
  *(long *)((long)plVar5 + lVar4 + 0xa0) = lVar8;
  *(long *)((long)plVar5 + lVar4 + 0xb8) = lVar7;
  *(long *)((long)plVar5 + lVar4 + 0xb0) = lVar6;
  *(long *)((long)plVar5 + lVar4 + 200) = lVar9;
  *(long *)((long)plVar5 + lVar4 + 0xc0) = lVar8;
  *(long *)((long)plVar5 + lVar4 + 0xd8) = lVar7;
  *(long *)((long)plVar5 + lVar4 + 0xd0) = lVar6;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


