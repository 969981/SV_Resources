/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980c54; name: FUN_02980c54
 */


bool FUN_02980c54(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_50 [32];
  long *local_18;
  
  uVar3 = FUN_0124e480();
  uVar4 = FUN_01582534(param_1);
  FUN_01247754(auStack_50,uVar3,uVar4);
  while (uVar5 = FUN_01460dbc(auStack_50,&local_18), (uVar5 & 1) != 0) {
    uVar5 = FUN_02980d54(param_1,local_18);
    if ((uVar5 & 1) == 0) {
      sVar1 = (**(code **)(*local_18 + 0xf0))();
      uVar5 = FUN_010747a0();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*local_18 + 0x220))(local_18,0x10);
        if ((sVar1 != 0x100) && ((uVar5 & 1) == 0)) {
          FUN_01247a58(param_2,local_18);
        }
      }
    }
  }
  iVar2 = FUN_0167ea90(param_2);
  return iVar2 != 0;
}


