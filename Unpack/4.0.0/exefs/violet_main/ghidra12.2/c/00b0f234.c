/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0f234; name: FUN_00b0f234
 */


void FUN_00b0f234(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  uVar4 = *param_2;
  uVar5 = 0xffffff85;
  if (uVar4 != (int)(short)uVar4) {
    uVar5 = 0xffffff86;
  }
  uVar1 = 0x84;
  if (uVar4 != (int)(char)uVar4) {
    uVar1 = uVar5;
  }
  if (uVar4 + 0x40 < 0xc0) {
    uVar1 = uVar4;
  }
  lVar2 = FUN_0111b030(uVar1);
  lVar3 = *(long *)(lVar6 + 0x18);
  if (*(ulong *)(lVar6 + 0x10) < (ulong)(lVar3 + lVar2)) {
    return;
  }
  uVar5 = *param_2;
  if (uVar5 + 0x40 < 0xc0) {
    *(char *)(*(long *)(lVar6 + 8) + lVar3) = (char)uVar5;
    lVar3 = *(long *)(lVar6 + 0x18) + 1;
    *(long *)(lVar6 + 0x18) = lVar3;
    uVar4 = *param_2;
    uVar5 = uVar5 & 0xff;
    if (uVar5 == 0x84) {
LAB_00b0f300:
      *(char *)(*(long *)(lVar6 + 8) + lVar3) = (char)uVar4;
      lVar3 = *(long *)(lVar6 + 0x18) + 1;
      goto LAB_00b0f374;
    }
    if (uVar5 != 0x85) {
      if (uVar5 != 0x86) {
        return;
      }
LAB_00b0f364:
      *(uint *)(*(long *)(lVar6 + 8) + lVar3) = uVar4;
      lVar3 = *(long *)(lVar6 + 0x18) + 4;
      goto LAB_00b0f374;
    }
  }
  else {
    if (uVar5 == (int)(char)uVar5) {
      *(undefined1 *)(*(long *)(lVar6 + 8) + lVar3) = 0x84;
      lVar3 = *(long *)(lVar6 + 0x18) + 1;
      *(long *)(lVar6 + 0x18) = lVar3;
      uVar4 = *param_2;
      goto LAB_00b0f300;
    }
    if (uVar5 != (int)(short)uVar5) {
      *(undefined1 *)(*(long *)(lVar6 + 8) + lVar3) = 0x86;
      lVar3 = *(long *)(lVar6 + 0x18) + 1;
      *(long *)(lVar6 + 0x18) = lVar3;
      uVar4 = *param_2;
      goto LAB_00b0f364;
    }
    *(undefined1 *)(*(long *)(lVar6 + 8) + lVar3) = 0x85;
    lVar3 = *(long *)(lVar6 + 0x18) + 1;
    *(long *)(lVar6 + 0x18) = lVar3;
    uVar4 = *param_2;
  }
  *(short *)(*(long *)(lVar6 + 8) + lVar3) = (short)uVar4;
  lVar3 = *(long *)(lVar6 + 0x18) + 2;
LAB_00b0f374:
  *(long *)(lVar6 + 0x18) = lVar3;
  return;
}


