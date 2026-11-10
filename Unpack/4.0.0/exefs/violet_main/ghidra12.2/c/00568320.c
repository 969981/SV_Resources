/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00568320; name: FUN_00568320
 */


void FUN_00568320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long *plStack_28;
  
  FUN_0056bee8(&local_40,param_2,param_3,param_4);
                    /* try { // try from 00568344 to 0056834f has its CatchHandler @ 005683b0 */
  FUN_00568020(param_1 + 0x10,&local_40);
  lVar1 = local_40;
  if (local_40 != 0) {
    lVar2 = local_38;
    if (local_38 != local_40) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0056b3f0(lVar2);
      } while (lVar1 != lVar2);
    }
    local_38 = lVar1;
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_40,local_30 - local_40,8);
  }
  return;
}


