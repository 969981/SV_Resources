/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294213c; name: FUN_0294213c
 */


void FUN_0294213c(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [32];
  long *local_48;
  
  *param_2 = '\0';
  uVar1 = FUN_02982ec4(param_1,*param_3,*(undefined1 *)(param_3 + 1));
  iVar3 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar5 = FUN_0124e480(param_1);
  uVar6 = FUN_01582534(param_1);
  FUN_01247754(auStack_68,uVar5,uVar6);
  uVar7 = FUN_01460dbc(auStack_68,&local_48);
  while ((uVar7 & 1) != 0) {
    iVar4 = (**(code **)(*local_48 + 0x98))();
    if ((iVar4 != iVar3) &&
       (uVar2 = FUN_02982ec4(param_1,local_48,*(undefined1 *)(param_3 + 1)), uVar1 < uVar2)) {
      *param_2 = *param_2 + '\x01';
    }
    uVar7 = FUN_01460dbc(auStack_68,&local_48);
  }
  return;
}


