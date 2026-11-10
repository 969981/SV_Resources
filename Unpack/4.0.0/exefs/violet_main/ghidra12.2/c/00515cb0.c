/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00515cb0; name: FUN_00515cb0
 */


long FUN_00515cb0(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = FUN_005150f8(*param_1);
  if (*param_3 < '\0') {
    auVar4 = FUN_0052e5f0(param_3);
    if (auVar4._0_8_ == 0) {
      return 0;
    }
  }
  else {
    auVar4[8] = *param_3;
    auVar4._0_8_ = param_3 + 1;
    auVar4._9_7_ = 0;
  }
  lVar2 = auVar4._0_8_;
  lVar3 = (long)auVar4._8_4_;
  if ((*(long *)(param_4 + 8) - lVar2) + 0x10 < lVar3) {
    lVar2 = FUN_0052ddec(param_4,lVar2,auVar4._8_8_ & 0xffffffff,uVar1);
    return lVar2;
  }
  FUN_0026c6b8(uVar1,lVar2,lVar3);
  return lVar2 + lVar3;
}


