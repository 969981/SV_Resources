/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01586fac; name: FUN_01586fac
 */


undefined4 FUN_01586fac(long *param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(*param_1 + 0x70);
  bVar1 = *(char *)(lVar6 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar6 = *(long *)(*param_1 + 0x70);
  }
  sVar3 = FUN_00cf44f4(lVar6);
  lVar6 = *param_1;
  uVar4 = FUN_00cf4cfc(*(undefined8 *)(lVar6 + 0x70));
  uVar2 = *(ushort *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x10) + 4);
  uVar7 = FUN_014fa420(*(undefined8 *)(*param_1 + 0x70));
  uVar5 = FUN_00cec030(*(undefined8 *)(*param_1 + 0x70));
  if ((bVar1) && (*(char *)(*(long *)(*param_1 + 0x70) + 0x19) != '\0')) {
    FUN_00e679f0();
  }
  if ((uVar4 & 1) == 0 && (uVar2 & 4) == 0) {
    if ((uVar7 & 1) == 0) {
      if (sVar3 == 0x1d) {
        return 2;
      }
      if (sVar3 == 0x20) {
        return 2;
      }
    }
  }
  else {
    uVar5 = 2;
  }
  return uVar5;
}


