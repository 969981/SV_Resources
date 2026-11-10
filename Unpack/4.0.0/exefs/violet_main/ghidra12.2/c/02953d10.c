/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02953d10; name: FUN_02953d10
 */


undefined8 FUN_02953d10(undefined8 param_1,long *param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar3 = (**(code **)(*param_2 + 0x2f8))(param_2);
  uVar4 = (**(code **)(*param_3 + 0x708))(param_3);
  if ((uVar4 & 0xff) != 0) {
    uVar9 = 0;
    do {
      uVar5 = (**(code **)(*param_3 + 0x730))(param_3,uVar9);
      cVar1 = FUN_021fad50();
      if (cVar1 == '\t') {
        return 1;
      }
      uVar7 = FUN_015d973c(uVar5);
      if ((uVar7 & 1) != 0) {
        if ((uVar5 & 0xffff) == 0xed) {
          uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
          uVar6 = FUN_02943450(param_1,uVar6);
        }
        else {
          uVar6 = FUN_015d9898(uVar5);
        }
        uVar8 = FUN_029444f0(param_1);
        bVar2 = FUN_015d9aac(uVar8,uVar6,uVar3);
        if (7 < bVar2) {
          return 1;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xff) < (uVar4 & 0xff));
  }
  return 0;
}


