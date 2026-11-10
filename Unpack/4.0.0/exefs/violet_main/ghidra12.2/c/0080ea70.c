/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ea70; name: FUN_0080ea70
 */


void FUN_0080ea70(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_DAT_047d0910;
  param_1[4] = (long)(param_1 + 8);
  param_1[5] = 0x400;
  param_1[2] = 0;
  param_1[3] = (long)(puVar2 + 0x10);
  param_1[7] = (long)(puVar2 + 0x68);
  lVar5 = 0;
  *param_1 = (long)(PTR_DAT_047d1850 + 0x10);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x41) = 0;
    lVar5 = lVar5 + 4;
    *(undefined1 *)((long)plVar4 + 0x43) = 0;
    plVar4 = (long *)((long)param_1 + lVar5);
    *(undefined1 *)(plVar4 + 8) = 0;
  } while (lVar5 != 0x400);
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  puVar3 = PTR_DAT_047d15f8;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8a] = (long)(param_1 + 0x8e);
  param_1[0x8d] = (long)(puVar3 + 0x68);
  param_1[0x89] = (long)(puVar3 + 0x10);
  param_1[0x8b] = 0x200;
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 3;
    *(undefined2 *)((long)param_1 + lVar5 + 0x470) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x472) = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0x201);
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  param_1[0xd3] = (long)(puVar2 + 0x68);
  lVar5 = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xcf] = (long)(puVar2 + 0x10);
  param_1[0xd0] = (long)(param_1 + 0xd4);
  param_1[0xd1] = 0x400;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x6a1) = 0;
    *(undefined1 *)((long)plVar4 + 0x6a3) = 0;
    lVar5 = lVar5 + 4;
    plVar4 = (long *)((long)param_1 + lVar5);
    *(undefined1 *)(plVar4 + 0xd4) = 0;
  } while (lVar5 != 0x400);
  *(undefined8 *)((long)param_1 + 0x68c) = 0;
  *(undefined2 *)(param_1 + 0x155) = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  *(undefined2 *)(param_1 + 0x15c) = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0((long)param_1 + 0xae4,local_28);
  return;
}


