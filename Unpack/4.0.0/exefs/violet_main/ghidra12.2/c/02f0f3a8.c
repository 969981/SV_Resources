/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0f3a8; name: FUN_02f0f3a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f0f3a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_34;
  
  *(undefined2 *)(param_1 + 4) = 2;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047e4058 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xe4) = 0xffff;
  *(undefined1 *)((long)param_1 + 0xd2) = 1;
  *(undefined2 *)(param_1 + 0x1e) = 0x11;
  *(undefined2 *)(param_1 + 0x18) = 0x17;
  *(undefined1 *)((long)param_1 + 0xf2) = 1;
  *(undefined1 *)((long)param_1 + 0xf4) = 1;
  *(undefined2 *)(param_1 + 0x20) = 0xe;
  *(undefined1 *)((long)param_1 + 0x102) = 1;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x5f7ffff0;
  *(undefined2 *)(param_1 + 0x24) = 0xc;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x7f7fffee7f7fffee;
  *(undefined2 *)(param_1 + 0x1a) = 0x12;
  param_1[0x1b] = 0;
  param_1[0x22] = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x124) = 0xbf800000bf800000;
  *(undefined2 *)(param_1 + 0x26) = 5;
  local_34 = 0x3f800000;
  FUN_00cb06cc((long)param_1 + 0x132,&local_34);
  *(undefined1 *)((long)param_1 + 0x133) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0x3f8000003f800000;
  lVar8 = _UNK_03cabe68;
  lVar7 = _DAT_03cabe60;
  lVar6 = _UNK_03cabe58;
  lVar5 = _DAT_03cabe50;
  lVar4 = DAT_03cab628;
  lVar3 = DAT_03cab620;
  lVar2 = _UNK_03caa5b8;
  lVar1 = _DAT_03caa5b0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0;
  param_1[9] = lVar4;
  param_1[8] = lVar3;
  param_1[0xb] = lVar8;
  param_1[10] = lVar7;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  param_1[0xd] = lVar2;
  param_1[0xc] = lVar1;
  param_1[0xf] = lVar6;
  param_1[0xe] = lVar5;
  param_1[0x11] = lVar4;
  param_1[0x10] = lVar3;
  param_1[0x13] = lVar8;
  param_1[0x12] = lVar7;
  param_1[0x15] = lVar2;
  param_1[0x14] = lVar1;
  param_1[0x17] = lVar6;
  param_1[0x16] = lVar5;
  *(undefined2 *)((long)param_1 + 0x103) = 0x100;
  *(undefined2 *)((long)param_1 + 0xf3) = 0x100;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x540050;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((long)param_1 + 0xe4) = 0x20;
  *(undefined2 *)((long)param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0x40490fdbc0490fdb;
  param_1[0x22] = 0x3f8000003f800000;
  return;
}


