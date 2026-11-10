/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00272f58; name: FUN_00272f58
 */


long FUN_00272f58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x90);
  if (lVar3 != 0) {
    puStack_48 = (undefined8 *)param_3[1];
    local_50 = (undefined8 *)*param_3;
    uVar4 = *param_2;
    local_40 = param_3[2];
    param_3[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
                    /* try { // try from 00272fa8 to 00272fb7 has its CatchHandler @ 00273040 */
    FUN_00270fa8(lVar3,param_1,uVar4,&local_50);
    puVar2 = local_50;
    puVar1 = PTR_LAB_047cba48;
    puVar6 = puStack_48;
    if (local_50 != (undefined8 *)0x0) {
      while (puVar6 != puVar2) {
        puVar6 = puVar6 + -1;
        puVar5 = (undefined8 *)*puVar6;
        *puVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          FUN_0049e790(puVar1,puVar5);
        }
      }
      puStack_48 = puVar2;
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
  }
  return lVar3;
}


