/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048a490; name: FUN_0048a490
 */


long FUN_0048a490(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    iVar1 = FUN_0047e430(*param_1);
    lVar4 = 0;
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar5 = *param_1;
      lVar4 = FUN_0047e170(uVar5,param_2);
      iVar1 = FUN_0047e430(uVar5);
      *(undefined4 *)(param_1 + 1) = 1;
      if (iVar1 != param_2) {
        if (param_2 == 0) {
          iVar3 = 0;
          iVar6 = *(int *)(lVar4 + 0x10) + -1;
        }
        else {
          lVar2 = FUN_0047e450(uVar5,param_2 + -1);
          iVar6 = *(int *)(lVar2 + 0x10);
          iVar3 = param_2;
        }
        lVar2 = FUN_0047e450(uVar5,iVar3);
        if ((iVar6 + 1 < *(int *)(lVar2 + 0x10)) && (param_2 < iVar1)) {
          do {
            lVar2 = FUN_0047e450(uVar5,param_2);
            param_2 = param_2 + 1;
            *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          } while (iVar1 != param_2);
        }
      }
    }
  }
  return lVar4;
}


