/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0b2d0; name: FUN_02f0b2d0
 */


void FUN_02f0b2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  param_1[2] = 0x8000000000000000;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[7] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff00000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  FUN_031c45a4(0x3f59999a,param_1 + 0x12,(ulong)param_4 << 1 | 1);
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  if ((int)param_4 < 1) {
    param_1[0x15] = 0;
    param_1[0x16] = 0x8000000000000000;
  }
  else {
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)param_4 << 3);
    uVar1 = param_4 & 3;
    param_1[0x15] = puVar2;
    *(uint *)(param_1 + 0x16) = param_4;
    *(uint *)((long)param_1 + 0xb4) = param_4;
    if (2 < param_4 - 1) {
      iVar4 = -(param_4 & 0xfffffffc);
      puVar3 = puVar2;
      do {
        puVar2 = puVar3 + 4;
        *puVar3 = 0x7fffffff7fffffff;
        puVar3[1] = 0x7fffffff7fffffff;
        iVar4 = iVar4 + 4;
        puVar3[2] = 0x7fffffff7fffffff;
        puVar3[3] = 0x7fffffff7fffffff;
        puVar3 = puVar2;
      } while (iVar4 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0x7fffffff7fffffff;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_02f0b430(param_1,param_3,param_4);
  FUN_02f0c6a0(param_1 + 7,param_5,param_6,0x10);
  return;
}


