/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eed3ac; name: FUN_00eed3ac
 */


void FUN_00eed3ac(long param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_40;
  short local_38;
  undefined2 local_36;
  
  lVar4 = *(long *)(param_1 + 0x70);
  bVar1 = *(char *)(lVar4 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar4 = *(long *)(param_1 + 0x70);
  }
  sVar2 = FUN_00cf44f4(lVar4);
  uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if (sVar2 != 0) {
    local_40 = PTR_DAT_047d8ee0 + 0x10;
    local_38 = sVar2;
    local_36 = uVar3;
    uVar5 = FUN_00eed47c(&local_40);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
      *(ushort *)(lVar4 + 4) = *(ushort *)(lVar4 + 4) | 4;
    }
  }
  if (bVar1 && *(char *)(*(long *)(param_1 + 0x70) + 0x19) != '\0') {
    FUN_00e679f0();
    return;
  }
  return;
}


