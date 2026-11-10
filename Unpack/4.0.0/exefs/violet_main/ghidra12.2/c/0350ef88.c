/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350ef88; name: FUN_0350ef88
 */


undefined8
FUN_0350ef88(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5,
            long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0x2b;
  *(undefined8 *)(param_1 + 0xf4) = 0x2b;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0xdc) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x10c) = 0x1ffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x3f8000003f800000;
  lVar4 = *(long *)(param_5 + 8);
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + -0x18;
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  lVar2 = FUN_0347ff40(param_1 + 0x38,*param_3,lVar1,lVar1 + 0x10,0,1);
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*param_3 + 0x30);
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))
                      (*(long **)(param_1 + 0xa8),PTR_PTR_047e71e0,param_1 + 0x10,
                       *(undefined8 *)(param_1 + 0x40),param_6);
    if ((int)uVar3 == 1) {
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_6 + 4);
      uVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))();
    }
  }
  return uVar3;
}


