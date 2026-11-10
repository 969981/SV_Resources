/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049be80; name: FUN_0049be80
 */


undefined8 FUN_0049be80(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar6 = 0;
  if (param_1 != 0) {
    iVar3 = FUN_0047e430(param_2);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        lVar5 = FUN_0047e450(param_2,iVar3);
        pbVar7 = *(byte **)(lVar5 + 8);
        pbVar1 = pbVar7;
        do {
          while( true ) {
            pbVar8 = pbVar1 + 1;
            bVar2 = *pbVar1;
            pbVar1 = pbVar8;
            if (bVar2 < 0x2e) break;
            if ((bVar2 == 0x2e) || (bVar2 == 0x3a)) goto LAB_0049befc;
          }
          if (bVar2 == 0) goto LAB_0049bf08;
        } while (bVar2 != 0x2c);
LAB_0049befc:
        if (*pbVar8 != 0) {
          pbVar7 = pbVar8;
        }
LAB_0049bf08:
        pbVar1 = pbVar7 + 1;
        if (*pbVar7 != 0x2b) {
          pbVar1 = pbVar7;
        }
        uVar6 = FUN_0048a710(param_1,pbVar1,param_3,*(undefined8 *)(lVar5 + 0x10),0xffffffff,
                             0xffffffff,-(uint)(*pbVar7 == 0x2b));
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_0047e430(param_2);
      } while (iVar3 < iVar4);
    }
    uVar6 = 1;
  }
  return uVar6;
}


