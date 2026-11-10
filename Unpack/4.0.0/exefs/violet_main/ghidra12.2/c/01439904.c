/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01439904; name: FUN_01439904
 */


void FUN_01439904(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x4058);
  lVar4 = *(long *)(param_1 + 0x4060);
  do {
    if (lVar3 == lVar4) {
      FUN_01439990(param_1);
      return;
    }
    lVar5 = *(long *)(lVar3 + 0x70);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x80) != '\0')) {
      if ((*(long *)(lVar5 + 0x70) != 0) &&
         (lVar2 = *(long *)(*(long *)(lVar5 + 0x70) + 0x10), lVar2 != 0)) {
        lVar2 = lVar2 + -0x28;
        uVar1 = FUN_0143a04c(lVar2);
        if ((uVar1 & 1) == 0) goto LAB_0143993c;
        FUN_013e0f3c(lVar2);
      }
      *(undefined1 *)(lVar5 + 0x80) = 0;
    }
LAB_0143993c:
    lVar3 = lVar3 + 0xb0;
  } while( true );
}


