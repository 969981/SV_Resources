/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3fb4; name: FUN_002b3fb4
 */


void FUN_002b3fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_38 = param_2;
  lVar1 = FUN_002c3ab0(param_1 + 0x108,param_2,&DAT_03cc9966,&local_38,auStack_40);
  local_38 = param_3;
  lVar1 = FUN_002c3f38(lVar1 + 0x70,param_3,&DAT_03cc9966,&local_38,auStack_40);
  if (*(long *)(lVar1 + 0x38) == 0) {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,0xa0);
    if (lVar2 != 0) {
      FUN_002c4198(lVar2,param_2,param_3);
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x38);
    *(long *)(lVar1 + 0x38) = lVar2;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 002b4054 to 002b4057 has its CatchHandler @ 002b4078 */
      (**(code **)*puVar3)();
    }
    FUN_002b4f10(param_1,param_2);
  }
  return;
}


