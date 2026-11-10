/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123c80; name: FUN_00123c80
 */


void FUN_00123c80(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00122c30();
  if (iVar1 != 0) {
    FUN_00c85bd0(param_1,"__name");
    iVar1 = FUN_00122b20(param_1,0xfffffffe);
    if (iVar1 == 0) {
      FUN_00c5db00(param_1,0xfffffffd);
    }
    else {
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
      FUN_00c5db00(param_1,0xfffffffe);
      if (iVar1 == 4) {
        pcVar3 = (char *)FUN_00c646d0(param_1,0xffffffff,0);
        goto LAB_00123d48;
      }
    }
  }
  iVar1 = FUN_00d34290(param_1,param_2);
  if (iVar1 == 2) {
    pcVar3 = "light userdata";
  }
  else {
    uVar2 = FUN_00d34290(param_1,param_2);
    pcVar3 = (char *)FUN_01b2ccf0(param_1,uVar2);
  }
LAB_00123d48:
  uVar4 = FUN_01b2cd10(param_1,"%s expected, got %s",param_3,pcVar3);
  FUN_00123970(param_1,param_2,uVar4);
  return;
}


