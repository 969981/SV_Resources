/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124ed80; name: FUN_0124ed80
 */


long FUN_0124ed80(long param_1,uint param_2,undefined2 param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  lVar4 = FUN_0129baac(uVar5,0xffffffff);
  if (lVar4 != 0) {
    uVar1 = param_6;
    if ((1 << (ulong)(param_2 & 0x1f) & 0x31U) == 0) {
      uVar1 = 0;
    }
    uVar2 = 0;
    if ((param_2 & 0xff) < 6) {
      uVar2 = uVar1;
    }
    *(undefined4 *)(lVar4 + 0x12) = 0xee00ee;
    memset((void *)(lVar4 + 0x18),0,0x58);
    *(uint *)(lVar4 + 0x2c) = ~param_4 * 0x1000000 + 0x9000000 | param_5;
    *(char *)(lVar4 + 0x28) = (char)param_2;
    *(undefined8 *)(lVar4 + 0x20) = param_7;
    *(undefined1 *)(lVar4 + 0x3e) = param_8;
    *(undefined2 *)(lVar4 + 0x30) = param_3;
    *(undefined4 *)(lVar4 + 0x34) = param_6;
    *(undefined4 *)(lVar4 + 0x38) = uVar2;
    *(short *)(lVar4 + 0x3c) = (short)uVar3;
    *(undefined1 *)(lVar4 + 0x44) = 1;
    FUN_0129b6cc(uVar5,lVar4);
  }
  return lVar4;
}


