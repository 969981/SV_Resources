/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033c03c; name: FUN_0033c03c
 */


void FUN_0033c03c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *local_28;
  
  FUN_0038db40(param_1 + 0x20);
                    /* try { // try from 0033c068 to 0033c0a7 has its CatchHandler @ 0033c0c4 */
  lVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  if (lVar1 != 0) {
    FUN_00358280(*(undefined8 *)(param_1 + 0x18));
  }
  if (param_2 == 0) {
    local_28 = param_3;
    FUN_0033d1bc(param_1 + 0x98,&local_28);
  }
  else {
    FUN_0033a860(param_1 + 0xb0,param_2,param_3);
  }
                    /* try { // try from 0033c0a8 to 0033c0af has its CatchHandler @ 0033c0c0 */
  FUN_0038db60(param_1 + 0x20);
  return;
}


