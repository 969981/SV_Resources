/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03503d68; name: FUN_03503d68
 */


undefined8
FUN_03503d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,long param_6,uint param_7,undefined4 param_8,uint param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  
  lVar4 = FUN_0349fff0(param_4 + 0x60);
  if (lVar4 == 0) {
    return 2;
  }
  if (((param_9 & 0xf00) != 0x100) || (uVar5 = param_9 - (param_9 >> 0xf & 1), (uVar5 & 0xfe) == 0))
  goto LAB_03503ec8;
  puVar6 = *(uint **)(lVar4 + 0xb8);
  uVar3 = *(uint *)(lVar4 + 0xc0);
  uVar7 = (ulong)uVar3;
  uVar2 = param_9 & 0xffff7f00 | uVar5 & 0xff;
  puVar9 = puVar6;
  if ((uVar3 != 0) && (*puVar6 != uVar2)) {
    lVar8 = uVar7 * 0x10;
    puVar10 = puVar6;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_03503e44;
      puVar9 = puVar10 + 4;
      puVar1 = puVar10 + 4;
      puVar10 = puVar9;
    } while (*puVar1 != uVar2);
  }
  if (puVar9 == puVar6 + (ulong)uVar3 * 4) {
LAB_03503e44:
    lVar8 = FUN_0349c8dc(lVar4);
    if (((param_9 >> 0xe & 1) != 0) && (lVar8 != 0)) {
      puVar6 = *(uint **)(lVar4 + 0xb8);
      uVar7 = (ulong)*(uint *)(lVar4 + 0xc0);
      goto LAB_03503e5c;
    }
  }
  else {
    if ((param_9 >> 0xe & 1) == 0) goto LAB_03503ec8;
LAB_03503e5c:
    uVar5 = param_9 & 0xffff3f00 | uVar5 - (param_9 >> 0xe & 1) & 0xff;
    puVar9 = puVar6;
    if (((int)uVar7 != 0) && (*puVar6 != uVar5)) {
      lVar8 = uVar7 * 0x10;
      puVar10 = puVar6;
      do {
        lVar8 = lVar8 + -0x10;
        if (lVar8 == 0) goto LAB_03503ebc;
        puVar9 = puVar10 + 4;
        puVar1 = puVar10 + 4;
        puVar10 = puVar9;
      } while (*puVar1 != uVar5);
    }
    if (puVar9 != puVar6 + uVar7 * 4) goto LAB_03503ec8;
LAB_03503ebc:
    lVar8 = FUN_0349c8dc(lVar4);
  }
  if (lVar8 == 0) {
    return 1;
  }
LAB_03503ec8:
  uVar5 = param_7;
  if ((param_7 & 0xf00) == 0x100) {
    uVar2 = param_7 >> 0xc & 0x637;
    uVar5 = uVar2 - (uVar2 >> 1 & 0xf1f1f1f1);
    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
    uVar5 = uVar2 << 0xc | (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
  }
  if ((uVar5 & 0xff) != 0) {
    FUN_034ceeb8(param_1,param_2,param_3,param_5,param_6,uVar5,param_8,param_9,lVar4);
  }
  if (((param_7 & param_9) >> 0xf & 1) != 0) {
    *(undefined4 *)
     (param_6 + (ulong)(((param_9 & 0xff) + 3 & 0x1fc) * ((param_7 & 0xff) - 1)) * 4 +
     (long)(int)((param_9 & 0xff) - 1) * 4) = 0x3f800000;
  }
  return 1;
}


