/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045f090; name: FUN_0045f090
 */


undefined4
FUN_0045f090(undefined8 param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_440 [1024];
  
  puVar1 = (undefined1 *)0x0;
  if (DAT_047f1a08 != '\0') {
    puVar1 = &DAT_047f1a08;
  }
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  lVar4 = FUN_0047e6d0();
  if (lVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0x3fe < param_3) {
      param_3 = 0x3ff;
    }
    iVar2 = FUN_0047e8e0(lVar4,puVar1,0,param_1,param_2,param_3);
    if ((iVar2 < 0) ||
       ((param_5 != 0 &&
        (iVar2 = FUN_0047eac0(lVar4,puVar1,0,auStack_440,param_2,param_3,param_1), iVar2 < 0)))) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_0047ecb0(lVar4);
      FUN_00453300(auStack_440,0x400);
    }
    FUN_0047e7e0(lVar4);
  }
  return uVar3;
}


