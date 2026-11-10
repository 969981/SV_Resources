/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4058; name: FUN_006c4058
 */


void FUN_006c4058(long *param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 int param_6)

{
  undefined *puVar1;
  
  FUN_006c5398();
  puVar1 = PTR_DAT_047cbaf8 + 0x10;
  param_1[0x12] = (long)param_4;
  param_1[0x13] = 0;
  *param_1 = (long)puVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar1 = PTR_FUN_047cfa68;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  nn::os::InitializeFiber
            ((FiberType *)(param_1 + 6),(_func_FiberType_ptr_void_ptr *)puVar1,param_1,param_4,
             param_5,param_6);
  return;
}


