/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010538c0; name: FUN_010538c0
 */


void FUN_010538c0(TlsSlot *param_1,_func_void_ulong *param_2)

{
  uint local_18 [2];
  
  local_18[0] = nn::os::AllocateTlsSlot(param_1,param_2);
  if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("nn::Result::IsSuccess()","ThreadLocalStorage",
               "C:/projects/env/NintendoSDK/NintendoSDK/Include\\nn/os/os_ThreadLocalStorage.h",0x51
               ,(Result *)local_18,
               "Failed: %s\n  Module: %d\n  Description: %d\n  InnerValue: 0x%08x","result",
               (ulong)(local_18[0] & 0x1ff),local_18[0] >> 9 & 0x1fff,local_18[0] & 0x3fffff);
  }
  return;
}


