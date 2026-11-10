/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00459fd0; name: FUN_00459fd0
 */


long FUN_00459fd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  lVar3 = FUN_0045a040(param_1,auStack_28);
  if (lVar3 != 0) {
    puVar1 = &DAT_03cfa5a8;
    if (param_2 != (undefined8 *)0x0) {
      puVar1 = param_2;
    }
    iVar2 = FUN_003f6d80(auStack_28,puVar1,8);
    if (iVar2 != 0) {
      FUN_00453300(param_3,lVar3);
      lVar3 = 0;
    }
  }
  return lVar3;
}


