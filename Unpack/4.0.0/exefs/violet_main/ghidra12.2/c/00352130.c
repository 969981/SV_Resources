/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00352130; name: FUN_00352130
 */


ulong FUN_00352130(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 local_18;
  undefined3 uStack_14;
  
  if (param_1 == 0) {
    return param_2;
  }
  if (param_2 == 0) {
    return param_1;
  }
  if (param_2 == param_1) {
    if (param_1 < 5) {
      return param_1;
    }
    uVar6 = param_1;
    goto LAB_00352218;
  }
  uVar6 = FUN_00351820(param_1);
  if (uVar6 == 0) goto LAB_0035226c;
  bVar3 = *(byte *)(uVar6 + 0x2f);
  if ((uint)*(byte *)(uVar6 + 0x30) < bVar3 + 2) {
    uVar5 = (uint)*(byte *)(uVar6 + 0x30) * 3;
    uVar2 = 0xfffffffe;
    if (uVar5 < 0x1fe) {
      uVar2 = uVar5 >> 1;
    }
    *(char *)(uVar6 + 0x30) = (char)uVar2;
    if (bVar3 + 2 <= (uVar2 & 0xff)) {
      uVar6 = FUN_0038c7f0(uVar6,(uVar2 & 0xff) * 8 + 0x38);
      bVar3 = *(byte *)(uVar6 + 0x2f);
      goto LAB_003521b0;
    }
  }
  else {
LAB_003521b0:
    *(byte *)(uVar6 + 0x2f) = bVar3 + 2;
    if (bVar3 != 0xff) {
      bVar4 = *(byte *)(uVar6 + 0x2e);
      if (*(char *)(uVar6 + 0x2d) == -1) {
        if (bVar4 != 0xff) goto LAB_0035226c;
        *(byte *)(uVar6 + 0x2e) = bVar3;
        *(byte *)(uVar6 + 0x2d) = bVar3;
      }
      else {
        if (bVar4 == 0xff) {
LAB_0035226c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(byte *)(uVar6 + (ulong)bVar4 * 8 + 0x40) = bVar3;
        *(byte *)(uVar6 + 0x2e) = bVar3;
      }
      lVar1 = uVar6 + (ulong)bVar3 * 8;
      *(ulong *)(lVar1 + 0x38) = param_2;
      *(undefined1 *)(lVar1 + 0x40) = 0xff;
      *(uint *)(lVar1 + 0x44) = CONCAT31(uStack_14,local_18._3_1_);
      *(undefined4 *)(lVar1 + 0x41) = local_18;
      return uVar6;
    }
  }
  if (param_2 < 5) {
    return uVar6;
  }
  param_1 = param_2;
LAB_00352218:
  FUN_00350fd0(param_1);
  return uVar6;
}


