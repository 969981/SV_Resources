/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025a410; name: FUN_0025a410
 */


undefined1  [16] FUN_0025a410(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0025a4e4(param_1,&local_28,param_2);
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == (undefined8 *)0x0) {
    lVar4 = param_1[2];
    if (lVar4 == 0) {
      puVar3 = (undefined8 *)FUN_0049e6c0(0x28);
    }
    else {
      if (*(long *)(lVar4 + 0x70) != 0) {
        FUN_00520d08(lVar4,0,0x28);
      }
      puVar3 = (undefined8 *)FUN_00520c00(lVar4,0x28);
    }
    puVar3[4] = *param_3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = local_28;
    *puVar1 = puVar3;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar1);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}


