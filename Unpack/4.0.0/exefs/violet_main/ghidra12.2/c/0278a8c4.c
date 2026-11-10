/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278a8c4; name: FUN_0278a8c4
 */


void FUN_0278a8c4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  FUN_0278ab84();
  puVar1 = PTR_DAT_047d15c8;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar2 = PTR_DAT_047d15d0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = (long)(puVar2 + 0x68);
  lVar4 = 0;
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[3] = (long)(param_1 + 7);
  param_1[4] = 0x100;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x39) = 0;
    lVar4 = lVar4 + 4;
    *(undefined1 *)((long)plVar3 + 0x3b) = 0;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 7) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  lVar4 = 0;
  param_1[0x2d] = (long)(puVar2 + 0x68);
  param_1[0x28] = 0x20;
  param_1[0x29] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = (long)(param_1 + 0x2e);
  param_1[0x2b] = 0x100;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x171) = 0;
    *(undefined1 *)((long)plVar3 + 0x173) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x2e) = 0;
  } while (lVar4 != 0x100);
  lVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x39) = 0;
    lVar4 = lVar4 + 4;
    *(undefined1 *)((long)plVar3 + 0x3b) = 0;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 7) = 0;
  } while (lVar4 != 0x100);
  lVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x171) = 0;
    *(undefined1 *)((long)plVar3 + 0x173) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x2e) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  return;
}


