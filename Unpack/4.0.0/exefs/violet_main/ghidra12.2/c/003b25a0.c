/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b25a0; name: FUN_003b25a0
 */


undefined8 FUN_003b25a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 2) == 0) {
    FUN_004806c0(0x14,0xa4,0xbc,"external/openssl/ssl/ssl_lib.c",0x275);
    return 0;
  }
  iVar2 = FUN_003b9cc0();
  if (iVar2 != 0) {
    FUN_003b8e30(*(undefined8 *)(param_1 + 0x174));
    *(undefined8 *)(param_1 + 0x174) = 0;
  }
  FUN_003b8e30(*(undefined8 *)(param_1 + 0x176));
  *(undefined8 *)(param_1 + 0x176) = 0;
  FUN_00452f80(*(undefined8 *)(param_1 + 0x178),"external/openssl/ssl/ssl_lib.c",0x27f);
  param_1[0x168] = 0;
  *(undefined8 *)(param_1 + 0x658) = 0;
  param_1[0x18e] = 0;
  param_1[0x32] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)(param_1 + 0x17a) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (param_1[0x224] != 0) {
    FUN_004806c0(0x14,0xa4,0x44,"external/openssl/ssl/ssl_lib.c",0x28a);
    return 0;
  }
  FUN_003c3920(param_1);
  uVar1 = **(undefined4 **)(param_1 + 2);
  *param_1 = uVar1;
  param_1[0x1ad] = uVar1;
  param_1[10] = 1;
  FUN_003f3160(*(undefined8 *)(param_1 + 0x22));
  *(undefined8 *)(param_1 + 0x22) = 0;
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x14c) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x14c) = 0;
  }
  FUN_003f4080(*(undefined8 *)(param_1 + 0x14a));
  *(undefined8 *)(param_1 + 0x14a) = 0;
  FUN_003f4080(*(undefined8 *)(param_1 + 0x148));
  *(undefined8 *)(param_1 + 0x148) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x146));
  *(undefined8 *)(param_1 + 0x146) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x152));
  *(undefined8 *)(param_1 + 0x152) = 0;
  param_1[0x1ac] = 0;
  param_1[0x225] = 0xffffffff;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x22e));
  *(undefined8 *)(param_1 + 0x22e) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0xffffffffffffffff;
  FUN_0048c830(*(undefined8 *)(param_1 + 0x3e));
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_0048a240(*(undefined8 *)(param_1 + 0x34),0);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x660),"external/openssl/ssl/ssl_lib.c",0x2a9);
  lVar4 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 0x662) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  if (lVar4 == **(long **)(param_1 + 0x198)) {
    uVar3 = (**(code **)(lVar4 + 0x18))(param_1);
    iVar2 = (int)uVar3;
  }
  else {
    (**(code **)(lVar4 + 0x20))(param_1);
    lVar4 = **(long **)(param_1 + 0x198);
    *(long *)(param_1 + 2) = lVar4;
    uVar3 = (**(code **)(lVar4 + 0x10))(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    FUN_003a4490(param_1 + 0x252);
    uVar3 = 1;
  }
  return uVar3;
}


