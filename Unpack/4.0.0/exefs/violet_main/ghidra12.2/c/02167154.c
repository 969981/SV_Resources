/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02167154; name: FUN_02167154
 */


ulong FUN_02167154(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170));
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x18);
    if (lVar4 == 0) {
      uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
    }
    else {
      if ((*(byte *)(lVar2 + 0x58) & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(byte *)(lVar4 + 0x58) & 1;
      }
      uVar3 = (ulong)uVar1;
      lVar2 = *(long *)(lVar4 + 0x18);
      if (lVar2 != 0) {
        if (uVar1 != 0) {
          uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
        }
        lVar2 = *(long *)(lVar2 + 0x18);
        if (lVar2 != 0) {
          if ((int)uVar3 != 0) {
            uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
          }
          lVar2 = *(long *)(lVar2 + 0x18);
          if (lVar2 != 0) {
            if ((int)uVar3 != 0) {
              uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
            }
            lVar2 = *(long *)(lVar2 + 0x18);
            if (lVar2 != 0) {
              if ((int)uVar3 != 0) {
                uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
              }
              lVar2 = *(long *)(lVar2 + 0x18);
              if (lVar2 != 0) {
                if ((int)uVar3 == 0) goto LAB_021671e8;
                do {
                  uVar3 = (ulong)(*(byte *)(lVar2 + 0x58) & 1);
LAB_021671e8:
                  while( true ) {
                    lVar2 = *(long *)(lVar2 + 0x18);
                    if (lVar2 == 0) {
                      return uVar3;
                    }
                    if ((int)uVar3 != 0) break;
                    uVar3 = 0;
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}


