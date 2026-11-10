/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00351770; name: FUN_00351770
 */


void FUN_00351770(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = FUN_00351820();
  bVar2 = *(byte *)(lVar4 + (param_2 & 0xffffffff) + 0x10);
  uVar5 = (uint)bVar2;
  if (bVar2 == 0xff) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = *(byte *)(lVar4 + 0x2f);
    uVar5 = (uint)bVar2;
    bVar3 = *(byte *)(lVar4 + 0x30);
    if ((uint)bVar2 < (uint)bVar3) {
      *(byte *)(lVar4 + 0x2f) = bVar2 + 1;
    }
    else {
      uVar5 = (uint)bVar3 + (uint)bVar3 * 2;
      uVar1 = 0xfffffffe;
      if (uVar5 < 0x1fe) {
        uVar1 = uVar5 >> 1;
      }
      *(char *)(lVar4 + 0x30) = (char)uVar1;
      if ((uVar1 & 0xff) <= (uint)bVar2) {
        return;
      }
      lVar4 = FUN_0038c7f0(lVar4,(uVar1 & 0xff) * 8 + 0x38);
      uVar5 = (uint)*(byte *)(lVar4 + 0x2f);
      *(char *)(lVar4 + 0x2f) = (char)(uVar5 + 1);
      if (uVar5 + 1 >> 8 != 0) {
        return;
      }
    }
  }
  *(char *)(lVar4 + (param_2 & 0xffffffff) + 0x10) = (char)uVar5;
  *(undefined8 *)(lVar4 + (ulong)uVar5 * 8 + 0x38) = param_3;
  return;
}


