/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01172210; name: FUN_01172210
 */


void FUN_01172210(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  FUN_011722d4(auStack_48,6);
  lVar2 = *(long *)(param_1 + 0x108);
  for (lVar1 = *(long *)(param_1 + 0x100); lVar1 != lVar2; lVar1 = lVar1 + 0x48) {
    if (*(int *)(lVar1 + 0x20) == 3) {
      uVar3 = FUN_019c7a40(auStack_48);
      if ((uVar3 & 1) == 0) {
        *(undefined2 *)(lVar1 + 0x40) = 0;
        if ((*(long *)(lVar1 + 8) != 0) && (*(short *)(*(long *)(lVar1 + 8) + 0x1a) != 0)) {
          FUN_01eae1ac(param_1,lVar1);
        }
      }
      else if (*(char *)(lVar1 + 0x41) == '\0') {
        FUN_01eadf84(param_1,lVar1);
        *(undefined1 *)(lVar1 + 0x41) = 1;
      }
    }
  }
  FUN_00d8e444(auStack_48);
  return;
}


