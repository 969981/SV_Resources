/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7069c; name: FUN_01e7069c
 */


undefined8 FUN_01e7069c(long *param_1,short param_2,char param_3)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar3 = FUN_00cf4cfc(*(undefined8 *)(lVar5 + 0x70));
  uVar4 = 0;
  if (((uVar3 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
    sVar2 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
    cVar1 = FUN_00cf41a8(*(undefined8 *)(*param_1 + 0x70));
    if ((sVar2 != param_2) || ((uVar4 = 1, param_3 != -1 && (cVar1 != param_3)))) {
      uVar4 = 0;
    }
  }
  return uVar4;
}


