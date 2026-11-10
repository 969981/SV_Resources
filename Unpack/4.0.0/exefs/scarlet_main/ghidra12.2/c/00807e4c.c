/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00807e4c; name: FUN_00807e4c
 */


void FUN_00807e4c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined4 *)((long)param_1 + 0x14) = 30000;
  param_1[5] = 0x100;
  puVar2 = PTR_DAT_047d15d0;
  param_1[7] = (long)(PTR_DAT_047d15d0 + 0x68);
  lVar3 = 0;
  puVar1 = PTR_DAT_047d1740 + 0x10;
  param_1[3] = (long)(puVar2 + 0x10);
  param_1[4] = (long)(param_1 + 8);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x41) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)plVar4 + 0x43) = 0;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 8) = 0;
  } while (lVar3 != 0x100);
  param_1[0x2d] = (long)(puVar2 + 0x68);
  lVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[0x29] = (long)(puVar2 + 0x10);
  param_1[0x2a] = (long)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = 0x100;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x171) = 0;
    *(undefined1 *)((long)plVar4 + 0x173) = 0;
    lVar3 = lVar3 + 4;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 0x2e) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  puVar1 = PTR_DAT_047d0940 + 0x68;
  param_1[0x4f] = (long)(PTR_DAT_047d0940 + 0x10);
  param_1[0x53] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x50] = (long)(param_1 + 0x54);
  param_1[0x51] = 0x50;
  FUN_02bdba04(param_1 + 0x4f);
  lVar3 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x41) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)plVar4 + 0x43) = 0;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 8) = 0;
  } while (lVar3 != 0x100);
  lVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x171) = 0;
    *(undefined1 *)((long)plVar4 + 0x173) = 0;
    lVar3 = lVar3 + 4;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 0x2e) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  FUN_02bdba04(param_1 + 0x4f);
  return;
}


