/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079e41c; name: FUN_0079e41c
 */


void FUN_0079e41c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_60 [32];
  
  puVar1 = PTR_DAT_047d0a08;
  uVar2 = (ulong)*(ushort *)(param_1 + 0x114e);
  if (*(ushort *)(param_1 + 0x114e) != 0) {
    lVar3 = *(long *)(param_1 + 0x88);
    uVar5 = 0;
    do {
      lVar4 = *(long *)(lVar3 + uVar5 * 8);
      if (*(char *)(lVar4 + 10) == '\x01') {
        FUN_007965ac(auStack_60,lVar4 + 0x10);
        lVar3 = *(long *)puVar1;
        if ((lVar3 != 0) && (*(char *)(param_1 + 0x1150) != '\0')) {
          FUN_007cdbbc(lVar3,auStack_60);
          FUN_007cd7e4(lVar3,auStack_60,0xffffffff);
        }
        lVar3 = *(long *)(param_1 + 0x88);
        *(undefined1 *)(*(long *)(lVar3 + uVar5 * 8) + 10) = 0;
        uVar2 = (ulong)*(ushort *)(param_1 + 0x114e);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}


