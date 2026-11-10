/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293f5a0; name: FUN_0293f5a0
 */


void FUN_0293f5a0(long param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 local_28;
  undefined4 local_27;
  byte local_23;
  
  local_27 = 4;
  local_28 = FUN_0154e790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290));
  local_27._0_3_ = (uint3)local_27 & 0xff;
  local_27 = (uint)(uint3)local_27;
  local_23 = param_3 & 1;
  uVar2 = FUN_0293f790(0);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_27._0_2_ = CONCAT11(1,(undefined1)local_27);
  }
  uVar2 = FUN_0293f790(1);
  bVar3 = bVar1;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar1 | 2;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar1,(undefined1)local_27)) | 0x200;
  }
  uVar2 = FUN_0293f790(2);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 4;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar3,(undefined1)local_27)) | 0x400;
  }
  uVar2 = FUN_0293f790(3);
  bVar3 = bVar4;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar4 | 8;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar4,(undefined1)local_27)) | 0x800;
  }
  uVar2 = FUN_0293f790(4);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 0x10;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar3,(undefined1)local_27)) | 0x1000;
  }
  uVar2 = FUN_0293f790(5);
  bVar3 = bVar4;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar4 | 0x20;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar4,(undefined1)local_27)) | 0x2000;
  }
  uVar2 = FUN_0293f790(6);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 0x40;
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar3,(undefined1)local_27)) | 0x4000;
  }
  uVar2 = FUN_0293f790(7);
  if ((uVar2 & 1) != 0) {
    local_27 = CONCAT22(local_27._2_2_,CONCAT11(bVar4,(undefined1)local_27)) | 0x8000;
  }
  uVar2 = FUN_0293f790(8);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_27._0_3_ = CONCAT12(1,(undefined2)local_27);
  }
  uVar2 = FUN_0293f790(9);
  bVar3 = bVar1;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar1 | 2;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar1,(undefined2)local_27)) | 0x20000;
  }
  uVar2 = FUN_0293f790(10);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 4;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar3,(undefined2)local_27)) | 0x40000;
  }
  uVar2 = FUN_0293f790(0xb);
  bVar3 = bVar4;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar4 | 8;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar4,(undefined2)local_27)) | 0x80000;
  }
  uVar2 = FUN_0293f790(0xc);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 0x10;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar3,(undefined2)local_27)) | 0x100000;
  }
  uVar2 = FUN_0293f790(0xd);
  bVar3 = bVar4;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar4 | 0x20;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar4,(undefined2)local_27)) | 0x200000;
  }
  uVar2 = FUN_0293f790(0xe);
  bVar4 = bVar3;
  if ((uVar2 & 1) != 0) {
    bVar4 = bVar3 | 0x40;
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar3,(undefined2)local_27)) | 0x400000;
  }
  uVar2 = FUN_0293f790(0xf);
  if ((uVar2 & 1) != 0) {
    local_27 = CONCAT13(local_27._3_1_,CONCAT12(bVar4,(undefined2)local_27)) | 0x800000;
  }
  uVar2 = FUN_0293f790(0x10);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_27 = CONCAT13(1,(uint3)local_27);
  }
  uVar2 = FUN_0293f790(0x11);
  bVar3 = bVar1;
  if ((uVar2 & 1) != 0) {
    bVar3 = bVar1 | 2;
    local_27 = CONCAT13(bVar1,(uint3)local_27) | 0x2000000;
  }
  uVar2 = FUN_0293f790(0x12);
  if ((uVar2 & 1) != 0) {
    local_27 = CONCAT13(bVar3,(uint3)local_27) | 0x4000000;
  }
  FUN_0293f4c0(param_1,&local_28);
  return;
}


