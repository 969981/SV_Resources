/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02969340; name: FUN_02969340
 */


void FUN_02969340(undefined8 param_1,undefined4 param_2,long *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined1 local_27;
  
  local_27 = 0;
  local_2b = 4;
  local_30 = param_2;
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  local_2c = FUN_0293d690(param_1,uVar2);
  local_2b._0_3_ = (uint3)local_2b & 0xff;
  local_2b = (uint)(uint3)local_2b;
  uVar3 = FUN_0293f790(0);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_2b._0_2_ = CONCAT11(1,(undefined1)local_2b);
  }
  uVar3 = FUN_0293f790(1);
  bVar4 = bVar1;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar1 | 2;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar1,(undefined1)local_2b)) | 0x200;
  }
  uVar3 = FUN_0293f790(2);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 4;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar4,(undefined1)local_2b)) | 0x400;
  }
  uVar3 = FUN_0293f790(3);
  bVar4 = bVar5;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar5 | 8;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar5,(undefined1)local_2b)) | 0x800;
  }
  uVar3 = FUN_0293f790(4);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 0x10;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar4,(undefined1)local_2b)) | 0x1000;
  }
  uVar3 = FUN_0293f790(5);
  bVar4 = bVar5;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar5 | 0x20;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar5,(undefined1)local_2b)) | 0x2000;
  }
  uVar3 = FUN_0293f790(6);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 0x40;
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar4,(undefined1)local_2b)) | 0x4000;
  }
  uVar3 = FUN_0293f790(7);
  if ((uVar3 & 1) != 0) {
    local_2b = CONCAT22(local_2b._2_2_,CONCAT11(bVar5,(undefined1)local_2b)) | 0x8000;
  }
  uVar3 = FUN_0293f790(8);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_2b._0_3_ = CONCAT12(1,(undefined2)local_2b);
  }
  uVar3 = FUN_0293f790(9);
  bVar4 = bVar1;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar1 | 2;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar1,(undefined2)local_2b)) | 0x20000;
  }
  uVar3 = FUN_0293f790(10);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 4;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar4,(undefined2)local_2b)) | 0x40000;
  }
  uVar3 = FUN_0293f790(0xb);
  bVar4 = bVar5;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar5 | 8;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar5,(undefined2)local_2b)) | 0x80000;
  }
  uVar3 = FUN_0293f790(0xc);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 0x10;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar4,(undefined2)local_2b)) | 0x100000;
  }
  uVar3 = FUN_0293f790(0xd);
  bVar4 = bVar5;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar5 | 0x20;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar5,(undefined2)local_2b)) | 0x200000;
  }
  uVar3 = FUN_0293f790(0xe);
  bVar5 = bVar4;
  if ((uVar3 & 1) != 0) {
    bVar5 = bVar4 | 0x40;
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar4,(undefined2)local_2b)) | 0x400000;
  }
  uVar3 = FUN_0293f790(0xf);
  if ((uVar3 & 1) != 0) {
    local_2b = CONCAT13(local_2b._3_1_,CONCAT12(bVar5,(undefined2)local_2b)) | 0x800000;
  }
  uVar3 = FUN_0293f790(0x10);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_2b = CONCAT13(1,(uint3)local_2b);
  }
  uVar3 = FUN_0293f790(0x11);
  bVar4 = bVar1;
  if ((uVar3 & 1) != 0) {
    bVar4 = bVar1 | 2;
    local_2b = CONCAT13(bVar1,(uint3)local_2b) | 0x2000000;
  }
  uVar3 = FUN_0293f790(0x12);
  if ((uVar3 & 1) != 0) {
    local_2b = CONCAT13(bVar4,(uint3)local_2b) | 0x4000000;
  }
  FUN_0293f0a0(param_1,&local_30);
  return;
}


