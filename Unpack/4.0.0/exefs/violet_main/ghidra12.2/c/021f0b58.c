/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0b58; name: FUN_021f0b58
 */


undefined4 FUN_021f0b58(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = FUN_021f3d50(*(undefined8 *)(param_1 + 0x70));
  uVar5 = FUN_00e99bb0(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_00e99ef8(*(undefined8 *)(param_1 + 0x70));
  if ((uVar5 & 1) + (uVar4 & 1) + (uVar6 & 1) == 1) {
    cVar1 = FUN_00e99784(param_1);
    sVar2 = FUN_0113b8a0(*(undefined8 *)(param_1 + 0x70));
    uVar7 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
    uVar8 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    sVar3 = FUN_0143b78c(uVar7,uVar8,0);
    if ((cVar1 != '\0') || (uVar9 = 0, sVar2 != sVar3)) {
      uVar9 = 1;
      sVar3 = FUN_0143b78c(uVar7,uVar8,1);
      if ((cVar1 != '\x01') || (sVar2 != sVar3)) {
        sVar3 = FUN_0143b78c(uVar7,uVar8,2);
        uVar9 = 2;
        if (sVar2 != sVar3 || cVar1 != '\x02') {
          uVar9 = 0xffffffff;
        }
        return uVar9;
      }
    }
  }
  else {
    uVar9 = 0xff;
  }
  return uVar9;
}


