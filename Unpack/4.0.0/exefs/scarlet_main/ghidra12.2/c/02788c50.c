/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02788c50; name: FUN_02788c50
 */


void FUN_02788c50(undefined8 *param_1,long *param_2)

{
  AsyncContext *this;
  undefined4 *puVar1;
  long lVar2;
  
  this = (AsyncContext *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  if (this == (AsyncContext *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01053840();
    lVar2 = nn::os::GetTlsValue(*puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    nn::account::AsyncContext::AsyncContext(this);
    *param_1 = this;
    param_1[1] = param_2;
    param_1[2] = 0x20;
    param_1[3] = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


