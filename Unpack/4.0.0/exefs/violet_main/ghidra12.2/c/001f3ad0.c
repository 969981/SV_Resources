/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3ad0; name: FUN_001f3ad0
 */


undefined8 FUN_001f3ad0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x150);
  cVar1 = *(char *)(lVar4 + 0xc);
  if (cVar1 == '\0') {
    if (*(char *)(lVar4 + 0x71) == '\0') {
      *(undefined1 *)(lVar4 + 0x72) = 0;
      lVar4 = FUN_001edb18(param_1,*(undefined4 *)(lVar4 + 8));
      iVar2 = FUN_001f3b90(param_1,lVar4);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      else if ((lVar4 != 0) && (uVar3 = FUN_001f9810(lVar4), (int)uVar3 < -900)) {
        return uVar3;
      }
    }
  }
  else if ((cVar1 == '\x05' || cVar1 == '\x01') &&
          (iVar2 = FUN_001f4570(param_1 + 0x158), iVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x160) = **(undefined8 **)(param_1 + 0x160);
    return 0;
  }
  FUN_001ee1a4((undefined8 *)(param_1 + 0x150),param_1 + 0x890);
  return 0;
}


