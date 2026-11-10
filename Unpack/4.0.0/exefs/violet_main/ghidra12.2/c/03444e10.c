/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03444e10; name: FUN_03444e10
 */


undefined8 FUN_03444e10(long param_1)

{
  float *__src;
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar2 + 0x28);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x38) != 0)) {
    __src = *(float **)(lVar1 + 0x20);
    memcpy((void *)(param_1 + 0x60),__src,0x24);
    fVar3 = __src[4];
    fVar4 = __src[5];
    fVar6 = *__src;
    fVar5 = __src[1];
    fVar7 = __src[2];
    fVar8 = __src[3];
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
    *(float *)(param_1 + 0x3c) = fVar7 * fVar3 - fVar5 * fVar4;
    *(float *)(param_1 + 0x40) = fVar6 * fVar4 - fVar8 * fVar7;
    *(float *)(param_1 + 0x44) = fVar8 * fVar5 - fVar6 * fVar3;
    FUN_03411c9c(&DAT_048af990,*(undefined8 *)(lVar2 + 0x78),auStack_34);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar1 + 0x50);
    FUN_03411c9c(&DAT_048af990,*(undefined8 *)(*(long *)(param_1 + 8) + 0x78),auStack_38);
  }
  return 1;
}


