/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02994ec8; name: FUN_02994ec8
 */


void FUN_02994ec8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  
  iVar1 = FUN_014bb63c();
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      plVar6 = (long *)FUN_014bb644(param_2,iVar9);
      plVar7 = (long *)FUN_014c1b7c(param_1,iVar9);
      if (((plVar6 != (long *)0x0) && (plVar7 != (long *)0x0)) &&
         (uVar8 = (**(code **)(*plVar7 + 0x98))(plVar7), (uVar8 & 1) == 0)) {
        uVar2 = (**(code **)(*plVar6 + 0x78))(plVar6);
        uVar3 = (**(code **)(*plVar7 + 0x78))(plVar7);
        if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
          iVar4 = (**(code **)(*plVar6 + 0xb0))(plVar6);
          iVar5 = (**(code **)(*plVar7 + 0xb0))(plVar7);
          if (iVar4 == iVar5) {
            (**(code **)(*plVar7 + 0x90))(plVar7,uVar3 - uVar2);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  return;
}


