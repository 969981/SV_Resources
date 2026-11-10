/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e4420; name: FUN_012e4420
 */


void FUN_012e4420(ThreadType *param_1,char *param_2,uint param_3,int param_4,
                 _func_void_void_ptr *param_5)

{
  ulong uVar1;
  
  if ((int)param_3 < 0) {
    nn::os::CreateThread
              (param_1,param_5,param_1,*(void **)(param_1 + 0x1c0),*(ulong *)(param_1 + 0x1e8),
               param_4);
    param_3 = 0xffffffff;
    uVar1 = 7;
  }
  else {
    nn::os::CreateThread
              (param_1,param_5,param_1,*(void **)(param_1 + 0x1c0),*(ulong *)(param_1 + 0x1e8),
               param_4,param_3);
    uVar1 = 1L << ((ulong)param_3 & 0x3f);
  }
  nn::os::SetThreadCoreMask(param_1,param_3,uVar1);
  nn::os::SetThreadName(param_1,param_2);
  nn::os::StartThread(param_1);
  return;
}


