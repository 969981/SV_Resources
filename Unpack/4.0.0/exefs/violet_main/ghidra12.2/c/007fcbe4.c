/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fcbe4; name: FUN_007fcbe4
 */


void FUN_007fcbe4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007987d8();
  puVar2 = PTR_DAT_047d15f0;
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  FUN_0284e338(param_1 + 8);
  *(undefined2 *)(param_1 + 0xf) = 1;
  puVar2 = PTR_DAT_047d15d0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = 0;
  param_1[0x10] = (long)(puVar2 + 0x10);
  param_1[0x14] = (long)(puVar2 + 0x68);
  param_1[0x11] = (long)(param_1 + 0x15);
  param_1[0x12] = 0x100;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xa9) = 0;
    lVar4 = lVar4 + 4;
    *(undefined1 *)((long)plVar3 + 0xab) = 0;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x15) = 0;
  } while (lVar4 != 0x100);
  param_1[0x3a] = (long)(puVar2 + 0x68);
  lVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x38] = 0x100;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x1d9) = 0;
    *(undefined1 *)((long)plVar3 + 0x1db) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x3b) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x5c] = (long)(puVar2 + 0x10);
  param_1[0x60] = (long)(puVar2 + 0x68);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5d] = (long)(param_1 + 0x61);
  param_1[0x5e] = 0x100;
  *(undefined1 *)(param_1 + 0x61) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x309) = 0;
    *(undefined1 *)((long)plVar3 + 0x30b) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x61) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x86] = (long)(puVar2 + 0x68);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x82] = (long)(puVar2 + 0x10);
  param_1[0x83] = (long)(param_1 + 0x87);
  param_1[0x84] = 0x100;
  *(undefined1 *)(param_1 + 0x87) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x439) = 0;
    *(undefined1 *)((long)plVar3 + 0x43b) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x87) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  puVar2 = PTR_DAT_047d15f8;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa8] = (long)(puVar2 + 0x10);
  param_1[0xac] = (long)(puVar2 + 0x68);
  param_1[0xa9] = (long)(param_1 + 0xad);
  param_1[0xaa] = 0x200;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 3;
    *(undefined2 *)((long)param_1 + lVar4 + 0x568) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x56a) = 0;
    lVar4 = lVar1;
  } while (lVar1 != 0x201);
  *(undefined8 *)((long)param_1 + 0x554) = 0;
  param_1[0xee] = 0;
  lVar4 = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  param_1[0xf0] = (long)(PTR_DAT_047d1600 + 0x10);
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x789) = 0;
    *(undefined1 *)((long)plVar3 + 0x78b) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0xf1) = 0;
  } while (lVar4 != 0xc00);
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  FUN_0078ca60(param_1 + 0x276);
  param_1[0x27c] = 0;
  return;
}


