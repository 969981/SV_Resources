/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033e35c; name: FUN_0033e35c
 */


long FUN_0033e35c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_28;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x170);
  if (lVar2 != 0) {
    local_28 = (undefined8 *)*param_2;
    uVar3 = *param_1;
    *param_2 = 0;
                    /* try { // try from 0033e3a0 to 0033e3ab has its CatchHandler @ 0033e3dc */
    FUN_0033ad00(lVar2,uVar3,&local_28,*param_3);
    puVar1 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0033e3c0 to 0033e3c3 has its CatchHandler @ 0033e3d8 */
      (**(code **)*puVar1)();
    }
  }
  return lVar2;
}


