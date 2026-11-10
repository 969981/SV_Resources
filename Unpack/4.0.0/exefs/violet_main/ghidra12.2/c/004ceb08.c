/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ceb08; name: FUN_004ceb08
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_004ceb08(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    *param_2 = 8;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar6 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar6;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar7 = uVar6 >> 7;
          puVar5[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar5 + 1;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar8 != 0);
        *puVar5 = (char)uVar7;
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
    }
    uVar2 = *(uint *)(param_1 + 0x24);
    *param_2 = 0x10;
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      uVar6 = (ulong)(long)(int)uVar2 >> 7;
      if (((ulong)(long)(int)uVar2 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar6;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar7 = uVar6 >> 7;
          puVar5[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar5 + 1;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar7;
        } while (uVar8 != 0);
        *puVar5 = (char)uVar7;
      }
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar4 + 0x40);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_004d2f50(lVar4,param_2,param_3);
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_005161f8((uVar6 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


