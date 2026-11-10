/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00274234; name: FUN_00274234
 */


ulong FUN_00274234(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  do {
    while( true ) {
      auVar4 = FUN_00371830(*(undefined8 *)(param_1 + 0x10),param_4,param_5,0);
      plVar3 = auVar4._8_8_;
      iVar1 = auVar4._0_4_;
      if (iVar1 != 2) break;
      *(bool *)param_3 = auVar4._0_8_ >> 0x20 != 0;
      *param_2 = plVar3;
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    if (iVar1 == 0) {
      return auVar4._0_8_;
    }
  } while (iVar1 != 1);
  return 2;
}


